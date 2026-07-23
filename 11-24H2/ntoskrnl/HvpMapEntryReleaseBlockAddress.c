/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x140A67FC4
 * Callers:
 *     HvpCopyModifiedData @ 0x140A67F04 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
