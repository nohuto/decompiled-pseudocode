/*
 * XREFs of imp_WdfObjectReleaseLock @ 0x14006C1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     FxGetCallbackLock @ 0x14006C298 (FxGetCallbackLock.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  FxCallbackLock *CallbackLock; // rax
  __int64 v4; // rdx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxObject *pObject; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pObject = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Object,
    0x1000u,
    (void **)&pObject,
    &pFxDriverGlobals);
  CallbackLock = FxGetCallbackLock(pObject);
  if ( !CallbackLock )
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxObjectAPI_cpp_Traceguids, Object);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    FxVerifierBugCheckWorker(pFxDriverGlobals, WDF_INVALID_LOCK_OPERATION, (unsigned __int64)Object, 0LL);
  }
  LOBYTE(v4) = CallbackLock->m_PreviousIrql;
  CallbackLock->Unlock(CallbackLock, v4);
}
