/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x14009E158
 * Callers:
 *     RaUnitCancelStopDeviceIrp @ 0x140184F64 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x14002FF2C (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x14005DFAC (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 504) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), (_QWORD *)a1);
  }
}
