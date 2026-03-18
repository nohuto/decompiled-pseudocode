/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x140A6EB40
 * Callers:
 *     HvpCopyModifiedData @ 0x140A6EA80 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140BB9790 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
