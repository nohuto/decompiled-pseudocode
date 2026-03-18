/*
 * XREFs of CmListGetNextElement @ 0x140BA9A30
 * Callers:
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407D0EC0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407D12C0 (CmpRmUnDoPhase.c)
 *     CmSnapshotRMTxArray @ 0x140863EA8 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1408662AC (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140866C54 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140867280 (CmpTransMgrRollback.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C070 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CC80 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmpSearchForTrans @ 0x140885E18 (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1409D927C (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1409D9388 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1409D9524 (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateModificationActions @ 0x1409DB044 (CmpLightWeightUpdateModificationActions.c)
 *     CmGetVisibleSubkeyCount @ 0x140A2A7C4 (CmGetVisibleSubkeyCount.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A46928 (CmpLightWeightUpdateSharedSetValueData.c)
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
