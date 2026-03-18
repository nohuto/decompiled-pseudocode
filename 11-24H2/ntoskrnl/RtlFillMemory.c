/*
 * XREFs of RtlFillMemory @ 0x1405EE3E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset_0(a1, Fill, Length);
}
