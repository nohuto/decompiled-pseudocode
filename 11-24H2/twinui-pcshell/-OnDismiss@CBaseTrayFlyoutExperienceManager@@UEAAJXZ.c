/*
 * XREFs of ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x1803C9BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180681380 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((CBaseTrayFlyoutExperienceManager *)((char *)this + 64));
  return 0LL;
}
