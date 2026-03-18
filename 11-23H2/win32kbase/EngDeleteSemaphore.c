/*
 * XREFs of EngDeleteSemaphore @ 0x1C0077EA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0077EE0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
