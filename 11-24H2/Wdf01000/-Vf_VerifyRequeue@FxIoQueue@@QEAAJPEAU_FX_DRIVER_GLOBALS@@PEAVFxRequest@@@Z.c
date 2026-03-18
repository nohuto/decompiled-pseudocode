/*
 * XREFs of ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC8C4
 * Callers:
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14003DE30 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843B4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC304 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequeue(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest)
{
  _LIST_ENTRY *Flink; // rcx
  KIRQL v6; // bp
  int IsDriverOwned; // edi
  unsigned __int8 v8; // r8
  FxIoQueue *status; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  status = this;
  LOBYTE(status) = 0;
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && (Flink = pRequest[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&status, (unsigned __int8)pRequest);
    v6 = (unsigned __int8)status;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
  }
  IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
    {
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
      if ( IsDriverOwned < 0 )
        goto LABEL_11;
    }
    else
    {
      IsDriverOwned = 0;
    }
    pRequest->m_VerifierFlags &= 0xFFF6u;
  }
LABEL_11:
  FxNonPagedObject::Unlock(pRequest, v6, v8);
  return (unsigned int)IsDriverOwned;
}
