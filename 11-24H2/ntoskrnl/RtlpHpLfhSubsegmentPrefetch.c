/*
 * XREFs of RtlpHpLfhSubsegmentPrefetch @ 0x140421D08
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetch(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // r11d

  result = 4294901760LL;
  v5 = (a3 + a4 + 0xFFFF) & 0xFFFF0000;
  if ( v5 > ((a4 * (*(unsigned __int16 *)(a2 + 48) + 1) + 0xFFFF) & 0xFFFF0000) )
  {
    result = *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72);
    *(_WORD *)(a2 + 48) = ((result
                          * (unsigned __int64)(v5
                                             - (WORD1(qword_140E28208) ^ *(unsigned __int16 *)(a2 + 42) ^ ((unsigned int)(a2 >> 12) >> 16)))) >> 32)
                        - 1;
  }
  return result;
}
