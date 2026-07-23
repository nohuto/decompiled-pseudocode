/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1408788B0
 * Callers:
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x140A67F04 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 */

__int64 HvpMapEntryGetBlockAddress()
{
  __int64 BinAddress; // rax
  _QWORD *v1; // rdx

  BinAddress = HvpMapEntryGetBinAddress();
  return *v1 + BinAddress;
}
