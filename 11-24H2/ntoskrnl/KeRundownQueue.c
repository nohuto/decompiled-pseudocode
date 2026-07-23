/*
 * XREFs of KeRundownQueue @ 0x14040F220
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx(Queue);
}
