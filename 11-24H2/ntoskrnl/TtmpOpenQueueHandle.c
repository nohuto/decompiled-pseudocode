/*
 * XREFs of TtmpOpenQueueHandle @ 0x140771030
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x14076DCB4 (TtmiLogQueueHandleOpened.c)
 */

__int64 __fastcall TtmpOpenQueueHandle(__int64 a1, char a2, struct _KPROCESS *a3)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  TtmiLogQueueHandleOpened();
  return 0LL;
}
