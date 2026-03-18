/*
 * XREFs of KeRundownQueue @ 0x14041E250
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x14041E338 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx(Queue);
}
