/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x14000827C
 * Callers:
 *     FxDriverEntryWorker @ 0x1400082F4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x140008480 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140008614 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
