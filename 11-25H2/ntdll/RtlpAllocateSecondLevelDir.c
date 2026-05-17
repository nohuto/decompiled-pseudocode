/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1800E575C
 * Callers:
 *     RtlExpandHashTable @ 0x1800E53B0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E55F4 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
