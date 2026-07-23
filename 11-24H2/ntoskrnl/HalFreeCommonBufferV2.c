/*
 * XREFs of HalFreeCommonBufferV2 @ 0x140398040
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 */

void __fastcall HalFreeCommonBufferV2(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  MmFreeContiguousMemory(a4);
}
