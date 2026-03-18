/*
 * XREFs of RtlFillMemory @ 0x1405E20A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset_0(a1, Fill, Length);
}
