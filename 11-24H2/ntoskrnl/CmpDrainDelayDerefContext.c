/*
 * XREFs of CmpDrainDelayDerefContext @ 0x14041AEB0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407DA898 (CmpUnfreezeHive.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E12A0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E13DC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14097BF7C (CmpCleanUpKCBCacheTable.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     CmpDelayCloseWorker @ 0x1409D6A50 (CmpDelayCloseWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     CmpUnlockHashEntry @ 0x1408446B0 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086A520 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r15
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      v2[1] = v2;
      *v2 = v2;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}
