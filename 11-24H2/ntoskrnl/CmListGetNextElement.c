/*
 * XREFs of CmListGetNextElement @ 0x140BBB940
 * Callers:
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407E0CE8 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407E10E8 (CmpRmUnDoPhase.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C8F0 (CmpQueryKeyDataFromCache.c)
 *     CmpSearchForTrans @ 0x14087F05C (CmpSearchForTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x14087F870 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     CmSnapshotRMTxArray @ 0x140963404 (CmSnapshotRMTxArray.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1409F85C4 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpIsCmRm @ 0x140A01338 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140A022E4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140A02990 (CmpTransMgrRollback.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A02BD0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A02D6C (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A14ED0 (CmpLightWeightUpdateModificationActions.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A4E660 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
