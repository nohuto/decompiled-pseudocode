/*
 * XREFs of ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802183D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewPropertiesChanging(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CStartExperienceManager::PositionMenu((__int64)this - 96, (__int64)a2, 0);
}
