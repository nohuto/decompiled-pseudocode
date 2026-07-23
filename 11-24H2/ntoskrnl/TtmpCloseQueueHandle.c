/*
 * XREFs of TtmpCloseQueueHandle @ 0x140770F40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x14076DBF0 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
