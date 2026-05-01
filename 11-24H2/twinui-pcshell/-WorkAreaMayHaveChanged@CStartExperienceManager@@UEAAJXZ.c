/*
 * XREFs of ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B4450
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180242070 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 */

__int64 __fastcall CStartExperienceManager::WorkAreaMayHaveChanged(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = CStartExperienceManager::PositionMenu((char *)this - 40, (char *)this + 280, 1LL);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
