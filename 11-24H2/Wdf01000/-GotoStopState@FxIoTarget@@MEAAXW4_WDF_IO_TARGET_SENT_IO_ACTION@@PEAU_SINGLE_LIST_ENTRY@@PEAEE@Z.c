/*
 * XREFs of ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006A0C0
 * Callers:
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140069EF0 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x140028CC0 (WPP_IFR_SF_qL.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140063914 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 */

void __fastcall FxIoTarget::GotoStopState(
        FxIoTarget *this,
        _WDF_IO_TARGET_SENT_IO_ACTION Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  char v9; // r14
  unsigned __int8 m_WaitingForSentIo; // di
  unsigned __int8 v11; // bp
  _WDF_IO_TARGET_STATE _a2; // edx
  int v13; // esi
  _LIST_ENTRY *p_m_SentIoListHead; // r8
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v16; // r8
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  const void *_a1; // rcx
  const void *v19; // rcx
  unsigned __int8 added; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  added = 0;
  v9 = 0;
  m_WaitingForSentIo = 0;
  v11 = 0;
  irql = 0;
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, 0);
      v11 = irql;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  _a2 = this->m_State;
  if ( _a2 == WdfIoTargetStarted || _a2 == WdfIoTargetPurged )
  {
    this->m_State = WdfIoTargetStopped;
  }
  else if ( _a2 != WdfIoTargetStopped )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 4u, 0xEu, 0x11u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v13 = Action - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      goto LABEL_13;
  }
  else
  {
    v9 = 1;
  }
  p_m_SentIoListHead = &this->m_SentIoListHead;
  if ( p_m_SentIoListHead->Flink == p_m_SentIoListHead )
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v19 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x12u, WPP_FxIoTarget_cpp_Traceguids, v19);
    }
  }
  else
  {
    m_WaitingForSentIo = 1;
    if ( v9 )
      FxIoTarget::GetSentRequestsListLocked(this, SentRequestListHead, p_m_SentIoListHead, (bool *)&added);
  }
LABEL_13:
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  *Wait = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v11, v16);
}
