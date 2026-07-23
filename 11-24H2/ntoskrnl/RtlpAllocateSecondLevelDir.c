/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14047C640
 * Callers:
 *     RtlExpandHashTable @ 0x140410C30 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x14047C520 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePool2(0x40uLL, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
