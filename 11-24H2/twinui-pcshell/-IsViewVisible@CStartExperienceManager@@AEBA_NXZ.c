/*
 * XREFs of ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x180201FB4
 * Callers:
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180201EF0 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18021BC00 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180242070 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

bool __fastcall CStartExperienceManager::IsViewVisible(CStartExperienceManager *this)
{
  char v1; // dl

  v1 = 0;
  if ( this != (CStartExperienceManager *)-320LL )
    return *((_DWORD *)this + 90) == 2;
  return v1;
}
