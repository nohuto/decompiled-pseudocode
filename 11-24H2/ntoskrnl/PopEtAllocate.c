/*
 * XREFs of PopEtAllocate @ 0x14099D3A0
 * Callers:
 *     PopEtAggregateGet @ 0x14099CA3C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140C34CA0 (PopEtInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEtAllocate(ULONG_PTR a1)
{
  return ExAllocatePool2(0x100uLL, a1, 0x54456F50u);
}
