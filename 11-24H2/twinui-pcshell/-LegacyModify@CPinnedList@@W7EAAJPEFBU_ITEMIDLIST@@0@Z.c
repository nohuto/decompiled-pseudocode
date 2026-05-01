/*
 * XREFs of ?LegacyModify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z @ 0x1806882F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::LegacyModify(__int64 a1, struct CSingleViewShellExperience *a2)
{
  return CToastCenterExperienceManager::OnVisibilityRevokedChanged((CToastCenterExperienceManager *)(a1 - 8), a2);
}
