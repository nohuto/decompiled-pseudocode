/*
 * XREFs of TtmpCloseQueueHandle @ 0x140770D20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x14076D9D0 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
