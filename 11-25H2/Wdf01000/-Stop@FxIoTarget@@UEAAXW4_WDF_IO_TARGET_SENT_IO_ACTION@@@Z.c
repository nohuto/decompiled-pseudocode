/*
 * XREFs of ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140066080
 * Callers:
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140065EA0 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400663A0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::Stop(FxIoTarget *this, __int64 Action)
{
  FxIoTarget_vtbl *v2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget_vtbl *v5; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  unsigned __int8 wait; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+18h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+58h] [rbp+20h] BYREF

  v2 = this->__vftable;
  head.Next = 0LL;
  wait = 0;
  v2->GotoStopState(this, (_WDF_IO_TARGET_SENT_IO_ACTION)Action, &head, &wait, 1u);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  if ( wait )
  {
    v5 = this->__vftable;
    irql = 0;
    v5->WaitForSentIoToComplete(this);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, v6);
      v7 = irql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v7, v8);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
}
