/*
 * XREFs of MiEnumerateSlabAllocatorsEx @ 0x14046A884
 * Callers:
 *     MiLogPeriodicTelemetry @ 0x1402D2E24 (MiLogPeriodicTelemetry.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140686640 (MiChangeSlabIdentitiesDpc.c)
 *     MiDefragmentAllSlabAllocators @ 0x140686B6C (MiDefragmentAllSlabAllocators.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MiDeletePendingSlabIdentities @ 0x14068716C (MiDeletePendingSlabIdentities.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x14068775C (MiDetermineDefragmentSlabIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14068781C (MiEstablishDefragSlabEntries.c)
 *     MiFindDefragmentSlabEntries @ 0x140687B94 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x1406884D4 (MiLockUnlockSlabContextsForDefrag.c)
 *     MiUpdateSlabContextSlabSize @ 0x1406889D4 (MiUpdateSlabContextSlabSize.c)
 *     MiDeletePartitionSlabState @ 0x1407FB560 (MiDeletePartitionSlabState.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MmUpdateSlabRangeType @ 0x140C596EC (MmUpdateSlabRangeType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSlabAllocatorsEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r15d
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp

  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( a5 != 9 )
    v6 = a5;
  if ( (_DWORD)a4 == -1 )
  {
    v9 = v5 + 57216LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    v5 += 57216LL * (unsigned int)a4;
    v9 = v5 + 57216;
  }
LABEL_5:
  if ( v5 >= v9 )
    return 0LL;
  v10 = 2088LL;
  v11 = v5 + 232LL * v6 + 15696;
  if ( a5 != 9 )
    v10 = 232LL;
  v12 = v11 + v10;
  while ( 1 )
  {
    if ( v11 >= v12 )
    {
      v5 += 57216LL;
      goto LABEL_5;
    }
    if ( (unsigned int)guard_dispatch_icall_no_overrides(a1, v11, a3, a4) )
      return 1LL;
    v11 += 232LL;
  }
}
