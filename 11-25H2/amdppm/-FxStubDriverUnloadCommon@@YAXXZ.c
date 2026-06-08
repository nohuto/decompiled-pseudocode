/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1400044DC
 * Callers:
 *     FxDriverEntryWorker @ 0x140004554 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1400046E0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140004874 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
