/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x14099BCAC
 * Callers:
 *     PoEnergyContextCleanup @ 0x1408FFAB0 (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14099CF68 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x14099BD08 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x14099CED4 (PopEtGetNextEnergyTracker.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  while ( 1 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(v3);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    v3 = v5;
    if ( v6 < 0 )
    {
      ObfDereferenceObjectWithTag(v5, 0x74456F50u);
      return (unsigned int)v6;
    }
  }
  return 0;
}
