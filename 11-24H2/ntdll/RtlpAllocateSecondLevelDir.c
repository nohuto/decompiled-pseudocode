/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1800E669C
 * Callers:
 *     RtlExpandHashTable @ 0x1800E62F0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E6534 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
