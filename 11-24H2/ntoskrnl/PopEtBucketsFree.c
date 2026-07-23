/*
 * XREFs of PopEtBucketsFree @ 0x14075C844
 * Callers:
 *     PopEtAggregateGet @ 0x14099CA3C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
