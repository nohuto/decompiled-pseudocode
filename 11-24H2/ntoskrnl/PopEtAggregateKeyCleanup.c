/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1409051DC
 * Callers:
 *     PopEtEnergyTrackerCleanup @ 0x14075DA34 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409050B0 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x140905308 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x140905DBC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x140906398 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140905224 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
