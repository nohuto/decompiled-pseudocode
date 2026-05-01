/*
 * XREFs of ?GetRuntimeClassName@CActionCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18036DEB0
 * Callers:
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18036DEE0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18036DEF0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18036DF00 (-GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CActionCenterExperienceManager::GetRuntimeClassName(
        CActionCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ActionCenterExperienceManager", 0x3Fu, a2);
}
