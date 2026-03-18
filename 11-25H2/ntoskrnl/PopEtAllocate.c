/*
 * XREFs of PopEtAllocate @ 0x140A31CD4
 * Callers:
 *     PopEtAggregateGet @ 0x14096221C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140962828 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PopEtAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
