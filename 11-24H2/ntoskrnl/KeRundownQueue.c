/*
 * XREFs of KeRundownQueue @ 0x14041B6E0
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x14041B7C8 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx(Queue);
}
