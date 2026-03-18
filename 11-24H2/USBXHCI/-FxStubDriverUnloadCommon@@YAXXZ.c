/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140055AF0
 * Callers:
 *     FxDriverEntryWorker @ 0x140055B64 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x140055CF0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140055E84 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &unk_14006B6B0, WdfDriverGlobals);
}
