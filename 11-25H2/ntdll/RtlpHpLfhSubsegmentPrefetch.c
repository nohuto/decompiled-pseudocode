/*
 * XREFs of RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180166810 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetch(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v8; // r10d
  _MEMORY_RANGE_ENTRY v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  result = 4294901760LL;
  v5 = (a3 + a4 + 0xFFFF) & 0xFFFF0000;
  v8 = (a4 * (*(unsigned __int16 *)(a2 + 48) + 1) + 0xFFFF) & 0xFFFF0000;
  if ( v5 > v8 )
  {
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      v9.VirtualAddress = (PVOID)(a2 + v8);
      v9.NumberOfBytes = v5 - v8;
      v10 = 1;
      ZwSetInformationVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, VmPrefetchInformation, 1uLL, &v9, &v10, 4u);
    }
    result = *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72);
    *(_WORD *)(a2 + 48) = ((result
                          * (unsigned __int64)(v5
                                             - (WORD1(qword_1801CFEC8) ^ *(unsigned __int16 *)(a2 + 42) ^ ((unsigned int)(a2 >> 12) >> 16)))) >> 32)
                        - 1;
  }
  return result;
}
