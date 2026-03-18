/*
 * XREFs of RtlMoveMemory @ 0x1404A97A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
