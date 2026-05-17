/*
 * XREFs of RtlpHpLfhSubsegmentPrefetch @ 0x18004B138
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180165280 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetch(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v8; // r10d
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  result = 4294901760LL;
  v5 = (a3 + a4 + 0xFFFF) & 0xFFFF0000;
  v8 = (a4 * (*(unsigned __int16 *)(a2 + 48) + 1) + 0xFFFF) & 0xFFFF0000;
  if ( v5 > v8 )
  {
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      v9[0] = a2 + v8;
      v9[1] = v5 - v8;
      v10 = 1;
      ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
        -1LL,
        0LL,
        1LL,
        v9,
        &v10,
        4);
    }
    result = *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72);
    *(_WORD *)(a2 + 48) = ((result
                          * (unsigned __int64)(v5
                                             - (WORD1(qword_1801CDEC8) ^ *(unsigned __int16 *)(a2 + 42) ^ ((unsigned int)(a2 >> 12) >> 16)))) >> 32)
                        - 1;
  }
  return result;
}
