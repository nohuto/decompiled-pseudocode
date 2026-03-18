/*
 * XREFs of ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140063780
 * Callers:
 *     ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14009DC60 (-GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_L.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x140028CC0 (WPP_IFR_SF_qL.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x14002E5BC (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140063914 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoTarget::GotoPurgeState(
        FxIoTarget *this,
        _WDF_IO_TARGET_PURGE_IO_ACTION Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  unsigned __int8 m_WaitingForSentIo; // di
  unsigned __int8 v11; // bp
  _WDF_IO_TARGET_STATE _a2; // edx
  const void *_a1; // rcx
  FxIoTarget *v14; // rcx
  const void *v15; // rcx
  unsigned __int8 *v16; // rax
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v18; // r8
  unsigned __int8 added; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  added = 0;
  m_WaitingForSentIo = 0;
  v11 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v11 = irql;
  }
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) <= 1 )
  {
    this->m_State = WdfIoTargetPurged;
  }
  else if ( _a2 != WdfIoTargetPurged )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 4u, 0xEu, 0x14u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  FxIoTarget::GetSentRequestsListLocked(v14, SentRequestListHead, &this->m_SentIoListHead, &added);
  if ( Action == WdfIoTargetPurgeIoAndWait )
  {
    if ( added )
    {
      m_WaitingForSentIo = 1;
    }
    else
    {
      m_WaitingForSentIo = this->m_WaitingForSentIo;
      if ( m_WaitingForSentIo )
      {
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v15 = 0LL;
        WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTarget_cpp_Traceguids, v15);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  v16 = Wait;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  *v16 = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v11, v18);
}
