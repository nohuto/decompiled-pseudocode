/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1409614E8
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14096148C (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x14096173C (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate(a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
