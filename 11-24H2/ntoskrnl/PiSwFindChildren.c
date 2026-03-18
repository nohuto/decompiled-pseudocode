/*
 * XREFs of PiSwFindChildren @ 0x1408BA5E0
 * Callers:
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140A11698 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1408BAF68 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rax

  BusRelations = PiSwFindBusRelations();
  return (BusRelations + 16) & -(__int64)(BusRelations != 0);
}
