/*
 * XREFs of RtlFillMemory @ 0x1405EB9C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset_0(a1, Fill, Length);
}
