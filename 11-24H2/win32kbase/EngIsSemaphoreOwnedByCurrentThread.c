/*
 * XREFs of EngIsSemaphoreOwnedByCurrentThread @ 0x14012CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwnedByCurrentThread(HSEMAPHORE hsem)
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)hsem);
}
