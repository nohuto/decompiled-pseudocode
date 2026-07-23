/*
 * XREFs of CmUnlockHiveSecurity @ 0x140BBB9C8
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140884764 (CmpUnlockTwoSecurityCaches.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1499C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A7CED8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  v1 = (volatile signed __int64 *)(a1 + 1784);
  _m_prefetchw((const void *)(a1 + 1784));
  v2 = *(_QWORD *)(a1 + 1784);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
