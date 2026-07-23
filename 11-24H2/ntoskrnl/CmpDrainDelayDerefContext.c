/*
 * XREFs of CmpDrainDelayDerefContext @ 0x14040AEB0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407DADE8 (CmpUnfreezeHive.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E17F0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     CmpUnlockHashEntry @ 0x140840970 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086E850 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
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
