/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140056690
 * Callers:
 *     FxDriverEntryWorker @ 0x140056704 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x140056890 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140056A24 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &unk_14006B6B0, WdfDriverGlobals);
}
