/*
 * XREFs of PiSwFindChildren @ 0x1408B7F90
 * Callers:
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1409BFAA8 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1408B8918 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rax

  BusRelations = PiSwFindBusRelations();
  return (BusRelations + 16) & -(__int64)(BusRelations != 0);
}
