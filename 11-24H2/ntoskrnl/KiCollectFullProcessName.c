/*
 * XREFs of KiCollectFullProcessName @ 0x1405B02D0
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 */

void __fastcall KiCollectFullProcessName(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 1532) & 0x1000) == 0 && MmIsAddressValidEx(*(_QWORD *)(a1 + 848)) )
    IoAddTriageDumpDataBlock(*(_QWORD *)(*(_QWORD *)(a1 + 848) + 8LL), (PVOID)**(unsigned __int16 **)(a1 + 848));
}
