/*
 * XREFs of PopEtAllocate @ 0x1409044A0
 * Callers:
 *     PopEtAggregateGet @ 0x140905DBC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140906398 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PopEtAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
