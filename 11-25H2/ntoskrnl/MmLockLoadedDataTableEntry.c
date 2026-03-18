/*
 * XREFs of MmLockLoadedDataTableEntry @ 0x14036D7C4
 * Callers:
 *     KeSetTracepoint @ 0x140731680 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407D85C0 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407EB558 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A2F7F4 (MiLogPinDriverAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntry(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 1LL);
}
