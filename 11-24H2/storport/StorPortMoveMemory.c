/*
 * XREFs of StorPortMoveMemory @ 0x140074160
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

void *__fastcall StorPortMoveMemory(void *a1, const void *a2, unsigned int a3)
{
  return memmove(a1, a2, a3);
}
