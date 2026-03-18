/*
 * XREFs of MmContainingPageForReservedMapping @ 0x14066F214
 * Callers:
 *     PnprCopyReservedMapping @ 0x1405A7704 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x1405A7D88 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  return MiGetContainingPageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
