/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1800E1B4C
 * Callers:
 *     RtlExpandHashTable @ 0x1800E17A0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E19E4 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
