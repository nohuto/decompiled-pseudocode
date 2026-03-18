/*
 * XREFs of MiEnumerateSlabAllocatorsEx @ 0x14046BBB4
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14067ADB0 (MiChangeSlabIdentitiesDpc.c)
 *     MiDefragmentAllSlabAllocators @ 0x14067B2DC (MiDefragmentAllSlabAllocators.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiDeletePendingSlabIdentities @ 0x14067B8DC (MiDeletePendingSlabIdentities.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x14067BECC (MiDetermineDefragmentSlabIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14067BF8C (MiEstablishDefragSlabEntries.c)
 *     MiFindDefragmentSlabEntries @ 0x14067C304 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x14067CC44 (MiLockUnlockSlabContextsForDefrag.c)
 *     MiUpdateSlabContextSlabSize @ 0x14067D144 (MiUpdateSlabContextSlabSize.c)
 *     MiDeletePartitionSlabState @ 0x1407EB6D0 (MiDeletePartitionSlabState.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     MmUpdateSlabRangeType @ 0x140C483BC (MmUpdateSlabRangeType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSlabAllocatorsEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r15d
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp

  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( a5 != 9 )
    v6 = a5;
  if ( a4 == -1 )
  {
    v8 = v5 + 57216LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    v5 += 57216LL * a4;
    v8 = v5 + 57216;
  }
LABEL_5:
  if ( v5 >= v8 )
    return 0LL;
  v9 = 2088LL;
  v10 = v5 + 232LL * v6 + 15696;
  if ( a5 != 9 )
    v9 = 232LL;
  v11 = v10 + v9;
  while ( 1 )
  {
    if ( v10 >= v11 )
    {
      v5 += 57216LL;
      goto LABEL_5;
    }
    if ( (unsigned int)guard_dispatch_icall_no_overrides(a1, v10) )
      return 1LL;
    v10 += 232LL;
  }
}
