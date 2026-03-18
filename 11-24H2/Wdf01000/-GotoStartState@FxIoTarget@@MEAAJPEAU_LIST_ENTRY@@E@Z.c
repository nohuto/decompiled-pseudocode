/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002E3D0
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002EA20 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x14002E5BC (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned int RefCount; // r9d
  _DEVICE_OBJECT *m_InStackDevice; // rcx
  KIRQL v8; // di
  unsigned int v9; // esi
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *v13; // rcx
  unsigned int v14; // edx
  FxVerifierDownlevelOption v15; // r9d
  _FX_DRIVER_GLOBALS *v16; // rcx
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_InStackDevice = this[-1].m_InStackDevice;
    if ( m_InStackDevice )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_InStackDevice,
        (void *)0x74727453,
        318,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        RefCount);
  }
  if ( Lock )
  {
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 || (m_TargetDevice = this[-1].m_TargetDevice) == 0LL )
    {
      v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v8;
      goto $CheckState_0;
    }
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, Lock);
  }
  while ( 1 )
  {
    v8 = irql;
$CheckState_0:
    if ( this->m_State == WdfIoTargetDeleted )
      break;
    if ( !this->m_WaitingForSentIo )
    {
      this->m_State = WdfIoTargetStarted;
      v9 = 0;
      this->m_WaitingForSentIo = 0;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
      FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
      goto LABEL_10;
    }
    m_Globals = this->m_Globals;
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, WPP_FxIoTarget_cpp_Traceguids, v13);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v14, 0xBu, v15) && v8 )
      FxVerifierDbgBreakPoint(v16);
    FxNonPagedObject::Unlock(this, v8, v17);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v18);
  }
  v9 = -1073741436;
LABEL_10:
  if ( Lock )
    FxNonPagedObject::Unlock(this, v8, Lock);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v9;
}
