/*
 * XREFs of PopEtBucketsFree @ 0x140750E74
 * Callers:
 *     PopEtAggregateGet @ 0x14096221C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140962828 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
