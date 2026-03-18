/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x14042A740
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407CB0D4 (CmpUnfreezeHive.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407D19C0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407D1AFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140865674 (CmpCleanUpKCBCacheTable.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
