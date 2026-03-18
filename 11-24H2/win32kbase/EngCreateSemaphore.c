/*
 * XREFs of EngCreateSemaphore @ 0x14007A990
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x14007B2F8 (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
