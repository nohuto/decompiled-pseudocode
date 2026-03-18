/*
 * XREFs of EngDeleteSemaphore @ 0x14003E090
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
