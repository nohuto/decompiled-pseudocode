/*
 * XREFs of ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006BBA0 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     WPP_IFR_SF_qLL @ 0x14006BD84 (WPP_IFR_SF_qLL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxUsbPipe::GotoStopState(
        FxUsbPipe *this,
        __int32 Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _WDF_IO_TARGET_SENT_IO_ACTION flags; // r13d
  FxUsbPipeContinuousReader **p_m_Reader; // rdi
  FxUsbPipeContinuousReader **v10; // r15
  const void *v11; // rsi
  unsigned __int8 v12; // r8
  const void *level; // rax
  struct _KTHREAD *m_WorkItemThread; // rdx
  FxVerifierLock *PipeHandle; // rcx
  unsigned int v16; // edx
  FxVerifierDownlevelOption v17; // r9d
  _FX_DRIVER_GLOBALS *v18; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned int v20; // [rsp+38h] [rbp-30h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY *v22; // [rsp+80h] [rbp+18h]

  v22 = SentRequestListHead;
  m_Globals = this->m_Globals;
  flags = Action;
  irql = 0;
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (PipeHandle = (FxVerifierLock *)this[-1].m_PipeInformation.PipeHandle) != 0LL )
    {
      FxVerifierLock::Lock(PipeHandle, &irql, (unsigned __int8)SentRequestListHead);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  p_m_Reader = &this->m_Reader;
  if ( this->m_Reader )
  {
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)SentRequestListHead, 0x14u, traceGuid, level, flags, v20);
    flags = WdfIoTargetCancelSentIo;
    v10 = &this->m_Reader;
  }
  else
  {
    v10 = &this->m_Reader;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  }
  FxIoTarget::GotoStopState(this, flags, v22, Wait, 0);
  if ( *p_m_Reader )
  {
    (*p_m_Reader)->m_ReadersSubmitted = 0;
    if ( (*p_m_Reader)->m_WorkItemThread == KeGetCurrentThread() )
    {
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipe_cpp_Traceguids, v11);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v16, 9u, v17) )
      {
        FxVerifierDbgBreakPoint(v18);
        p_m_Reader = v10;
      }
    }
    m_WorkItemThread = (*p_m_Reader)->m_WorkItemThread;
    if ( m_WorkItemThread != KeGetCurrentThread()
      || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)m_WorkItemThread, 9u) )
    {
      *Wait = 1;
    }
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v12);
}
