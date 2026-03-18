/*
 * XREFs of PiSwFindChildren @ 0x140836178
 * Callers:
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x1409A13B8 (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140A7FC24 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1408355B4 (PiSwFindBusRelations.c)
 */

__int64 __fastcall PiSwFindChildren(__int64 a1)
{
  PVOID BusRelations; // rax

  BusRelations = PiSwFindBusRelations(a1);
  return ((unsigned __int64)BusRelations + 16) & -(__int64)(BusRelations != 0LL);
}
