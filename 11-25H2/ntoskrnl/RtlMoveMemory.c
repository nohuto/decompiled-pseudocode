/*
 * XREFs of RtlMoveMemory @ 0x1404A9040
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
