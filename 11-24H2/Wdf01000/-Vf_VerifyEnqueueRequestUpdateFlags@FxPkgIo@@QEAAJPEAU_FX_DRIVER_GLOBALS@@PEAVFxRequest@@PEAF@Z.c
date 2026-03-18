/*
 * XREFs of ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC37C
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843B4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC43C (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OrigVerifierFlags)
{
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // si
  bool v9; // zf
  int IsDriverOwned; // edi
  unsigned __int8 v11; // r8
  FxPkgIo *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, (unsigned __int8)Request);
    v8 = (unsigned __int8)irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  v9 = FxDriverGlobals->FxVerifierOn == 0;
  *OrigVerifierFlags = Request->m_VerifierFlags;
  if ( v9
    || (IsDriverOwned = FxRequest::Vf_VerifyRequestIsInCallerContext(Request, FxDriverGlobals), IsDriverOwned >= 0) )
  {
    IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
    if ( IsDriverOwned >= 0 )
      Request->m_VerifierFlags &= 0xFFDEu;
  }
  FxNonPagedObject::Unlock(Request, v8, v11);
  return (unsigned int)IsDriverOwned;
}
