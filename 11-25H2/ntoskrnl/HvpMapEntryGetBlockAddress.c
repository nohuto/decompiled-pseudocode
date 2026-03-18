/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x140878240
 * Callers:
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x140A6C854 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 */

__int64 HvpMapEntryGetBlockAddress()
{
  __int64 BinAddress; // rax
  _QWORD *v1; // rdx

  BinAddress = HvpMapEntryGetBinAddress();
  return *v1 + BinAddress;
}
