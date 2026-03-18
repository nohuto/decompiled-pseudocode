/*
 * XREFs of KiCollectFullProcessName @ 0x1405B3360
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x1405B33A8 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 */

void __fastcall KiCollectFullProcessName(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 1532) & 0x1000) == 0 && MmIsAddressValidEx(*(_QWORD *)(a1 + 848)) )
    IoAddTriageDumpDataBlock(*(_QWORD *)(*(_QWORD *)(a1 + 848) + 8LL), (PVOID)**(unsigned __int16 **)(a1 + 848));
}
