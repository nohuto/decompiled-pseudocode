/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x14099BE60
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x14075C9D4 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14099BD34 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x14099CA3C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x14099BEA8 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = PopEtAppIdDereference(v2);
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
