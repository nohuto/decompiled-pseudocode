/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140961640
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x140751004 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140961514 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x14096173C (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x14096221C (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140962828 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x1409626B4 (PopEtAppIdDereference.c)
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
