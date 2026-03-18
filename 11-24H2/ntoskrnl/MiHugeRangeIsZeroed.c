/*
 * XREFs of MiHugeRangeIsZeroed @ 0x140670B6C
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(__int64 a1, int a2)
{
  return (*(_QWORD *)(qword_140E2FFC0 + 8LL * (a2 & 0x3FFFFF)) & 0x10000LL) == 0;
}
