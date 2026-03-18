/*
 * XREFs of Vf_VerifyRequestComplete @ 0x1400DCAF4
 * Callers:
 *     imp_WdfRequestComplete @ 0x140058A10 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1400596D0 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x140066730 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843C4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC0A0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyRequestComplete(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v6; // bp
  int IsDriverOwned; // edi
  unsigned __int8 v8; // r8
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && (Flink = pRequest[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
  }
  IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestCanBeCompleted(pRequest, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(pRequest, v6, v8);
  return (unsigned int)IsDriverOwned;
}
