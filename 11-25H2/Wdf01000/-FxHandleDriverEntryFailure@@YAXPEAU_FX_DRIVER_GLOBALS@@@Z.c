/*
 * XREFs of ?FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008E080
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x14008E7E0 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     FxDestroy @ 0x140081CD8 (FxDestroy.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxHandleDriverEntryFailure(_FX_DRIVER_GLOBALS *pFxDriverGlobals)
{
  if ( pFxDriverGlobals->Driver )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "Destroy FxDriver after DriverEntry failure\n");
    }
    pFxDriverGlobals->Driver->DeleteObject(pFxDriverGlobals->Driver);
    FxDestroy(pFxDriverGlobals);
    pFxDriverGlobals->Driver = 0LL;
  }
}
