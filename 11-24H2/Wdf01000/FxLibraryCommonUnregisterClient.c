/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x14008E840
 * Callers:
 *     LibraryUnregisterClient @ 0x140085DD0 (LibraryUnregisterClient.c)
 * Callees:
 *     FxFreeDriverGlobals @ 0x14007E3C0 (FxFreeDriverGlobals.c)
 *     FxDestroy @ 0x140081CC8 (FxDestroy.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008432C (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008E0E0 (-FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     UnlockVerifierSection @ 0x1400969AC (UnlockVerifierSection.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  unsigned int v4; // edi
  _WDF_DRIVER_GLOBALS *v5; // rbx
  __int64 v7; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobals )
  {
    v4 = 0;
    v5 = WdfDriverGlobals - 8;
    if ( Info == (_WDF_BIND_INFO *)0x7FFFFFFFFFFFEFFFLL )
    {
      FxHandleDriverEntryFailure((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
      return 0LL;
    }
    v7 = *(_QWORD *)&v5[1].DriverName[8];
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      FxDestroy((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    if ( *(_WORD *)&v5[7].DriverName[4] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    FxFreeDriverGlobals(WdfDriverGlobals);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v4);
  }
  return v4;
}
