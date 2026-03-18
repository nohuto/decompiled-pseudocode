/*
 * XREFs of EngIsSemaphoreOwned @ 0x14013A030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwned(HSEMAPHORE hsem)
{
  return *((_WORD *)hsem + 12) != 0;
}
