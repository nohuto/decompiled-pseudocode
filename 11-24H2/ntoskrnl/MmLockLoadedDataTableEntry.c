/*
 * XREFs of MmLockLoadedDataTableEntry @ 0x1402C6E88
 * Callers:
 *     KeSetTracepoint @ 0x14073D6A0 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407E8480 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407FB3E8 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A351F4 (MiLogPinDriverAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntry(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 1LL);
}
