/*
 * XREFs of MmContainingPageForReservedMapping @ 0x1406636F4
 * Callers:
 *     PnprCopyReservedMapping @ 0x1405A3EF4 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x1405A4578 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  return MiGetContainingPageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
