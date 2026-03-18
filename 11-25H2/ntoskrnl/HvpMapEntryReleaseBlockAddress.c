/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x140A6C914
 * Callers:
 *     HvpCopyModifiedData @ 0x140A6C854 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140BA9840 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
