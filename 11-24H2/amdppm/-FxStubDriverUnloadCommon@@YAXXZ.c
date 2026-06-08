/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140005188
 * Callers:
 *     FxDriverEntryWorker @ 0x1400051F4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x140005380 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140005514 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
