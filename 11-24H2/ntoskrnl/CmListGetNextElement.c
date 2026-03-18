/*
 * XREFs of CmListGetNextElement @ 0x140BB9940
 * Callers:
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407E0798 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407E0B98 (CmpRmUnDoPhase.c)
 *     CmpIsKeyDeleted @ 0x14086E210 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpQueryKeyDataFromCache @ 0x1408785C0 (CmpQueryKeyDataFromCache.c)
 *     CmpSearchForTrans @ 0x14087B1AC (CmpSearchForTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x14087B9C0 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CFA0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D660 (CmpFindSubKeyByNumberEx.c)
 *     CmSnapshotRMTxArray @ 0x14097ABF4 (CmSnapshotRMTxArray.c)
 *     CmpIsKeyStackDeleted @ 0x140988420 (CmpIsKeyStackDeleted.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1409FF67C (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpIsCmRm @ 0x140A04E08 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140A05DB4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140A06460 (CmpTransMgrRollback.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A066A0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A0683C (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A1FDD0 (CmpLightWeightUpdateModificationActions.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A567CC (CmpCleanupLightWeightPrepare.c)
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
