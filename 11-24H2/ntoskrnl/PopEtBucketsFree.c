/*
 * XREFs of PopEtBucketsFree @ 0x14075D8A4
 * Callers:
 *     PopEtAggregateGet @ 0x140905DBC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140906398 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
