/*
 * XREFs of FxDestroy @ 0x140081CD8
 * Callers:
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x14004A6C0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 *     ?FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008E080 (-FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x14008E7E0 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     FxUnregisterBugCheckCallback @ 0x14007DA14 (FxUnregisterBugCheckCallback.c)
 *     FxPurgeBugCheckDriverInfo @ 0x14007DA9C (FxPurgeBugCheckDriverInfo.c)
 *     UnlockVerifierSection @ 0x140096964 (UnlockVerifierSection.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x140097364 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140097D8C (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400981EC (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDestroy(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( _InterlockedExchangeAdd(&FxDriverGlobals->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&FxDriverGlobals->DestroyEvent.m_Event, 0, 0);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&FxDriverGlobals->DestroyEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  if ( FxDriverGlobals->FxVerifierLock )
  {
    FxVerifierLock::FreeThreadTable(FxDriverGlobals);
    FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 0;
  }
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xAu, 0x13u, WPP_wdfpool_cpp_Traceguids, &FxDriverGlobals->FxPoolFrameworks);
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    FxPoolDump(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
    FxMdlDump(FxDriverGlobals);
  }
  FxDriverGlobals->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0;
  FxDriverGlobals->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized = 0;
  FxUnregisterBugCheckCallback(FxDriverGlobals);
  FxPurgeBugCheckDriverInfo(FxDriverGlobals);
  if ( FxDriverGlobals->FxVerifierOn )
    UnlockVerifierSection(FxDriverGlobals);
}
