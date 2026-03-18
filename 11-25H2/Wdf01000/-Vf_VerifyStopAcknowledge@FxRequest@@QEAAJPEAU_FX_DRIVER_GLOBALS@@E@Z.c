/*
 * XREFs of ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400DC4B4
 * Callers:
 *     imp_WdfRequestStopAcknowledge @ 0x140082510 (imp_WdfRequestStopAcknowledge.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843C4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC304 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC588 (-Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  char m_ObjectFlags; // al
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // bp
  int IsDriverOwned; // edi
  int status; // [rsp+40h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  LOBYTE(status) = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&status, Requeue);
    v9 = status;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( FxDriverGlobals->FxVerifierOn )
  {
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
    if ( IsDriverOwned < 0 )
      goto $Done_71;
  }
  else
  {
    IsDriverOwned = 0;
  }
  if ( !this->m_Completed )
  {
    if ( Requeue )
    {
      IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(this, FxDriverGlobals);
      if ( IsDriverOwned >= 0 )
      {
        if ( FxDriverGlobals->FxVerifierOn )
          IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
        else
          IsDriverOwned = 0;
      }
    }
  }
$Done_71:
  FxNonPagedObject::Unlock(this, v9, v8);
  return (unsigned int)IsDriverOwned;
}
