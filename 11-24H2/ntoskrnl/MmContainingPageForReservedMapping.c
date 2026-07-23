/*
 * XREFs of MmContainingPageForReservedMapping @ 0x1406703E4
 * Callers:
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x1405A4D78 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  return MiGetContainingPageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
