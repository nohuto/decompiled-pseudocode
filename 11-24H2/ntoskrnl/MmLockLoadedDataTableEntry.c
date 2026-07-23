/*
 * XREFs of MmLockLoadedDataTableEntry @ 0x1402BBA08
 * Callers:
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407E8A50 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407FBB58 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A29204 (MiLogPinDriverAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntry(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 1LL);
}
