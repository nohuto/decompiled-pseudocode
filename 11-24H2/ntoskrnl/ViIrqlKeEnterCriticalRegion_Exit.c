/*
 * XREFs of ViIrqlKeEnterCriticalRegion_Exit @ 0x140B9D680
 * Callers:
 *     <none>
 * Callees:
 *     ViIrqlLogCRStackTrace @ 0x140B9D6F8 (ViIrqlLogCRStackTrace.c)
 */

__int64 ViIrqlKeEnterCriticalRegion_Exit()
{
  return ViIrqlLogCRStackTrace();
}
