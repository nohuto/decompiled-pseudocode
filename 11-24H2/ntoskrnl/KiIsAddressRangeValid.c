/*
 * XREFs of KiIsAddressRangeValid @ 0x1404A5A08
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1405AE5D0 (KeAddTriageDumpDataBlock.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B14D0 (KiValidateTriageDumpDataArray.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405CA6CC (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12; i; --i )
  {
    if ( v2 < 0x10000 || !MmIsAddressValidEx(v2) )
      return 0;
    v2 += 4096LL;
  }
  return 1;
}
