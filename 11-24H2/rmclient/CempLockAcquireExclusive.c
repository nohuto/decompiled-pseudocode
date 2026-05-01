/*
 * XREFs of CempLockAcquireExclusive @ 0x180002D0C
 * Callers:
 *     HamCompleteActivityRestore @ 0x1800027C0 (HamCompleteActivityRestore.c)
 *     ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180002C10 (-CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 *     ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180002C70 (-CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180002FB8 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000565C (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 *     HamAssociateActivityContext @ 0x18001A630 (HamAssociateActivityContext.c)
 *     AcpAcquireClientRegistration @ 0x18001BA9C (AcpAcquireClientRegistration.c)
 *     AcpReleaseClientRegistration @ 0x18001BBE8 (AcpReleaseClientRegistration.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CempLockAcquireExclusive(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive();
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
