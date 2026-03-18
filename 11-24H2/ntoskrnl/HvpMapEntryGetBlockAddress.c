/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x140874580
 * Callers:
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x140A6EA80 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 */

__int64 HvpMapEntryGetBlockAddress()
{
  __int64 BinAddress; // rax
  _QWORD *v1; // rdx

  BinAddress = HvpMapEntryGetBinAddress();
  return *v1 + BinAddress;
}
