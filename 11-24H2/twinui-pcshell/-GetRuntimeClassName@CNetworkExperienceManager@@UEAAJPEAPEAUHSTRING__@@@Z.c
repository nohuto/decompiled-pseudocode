/*
 * XREFs of ?GetRuntimeClassName@CNetworkExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803C4BD0
 * Callers:
 *     ?GetRuntimeClassName@CNetworkExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803C4C00 (-GetRuntimeClassName@CNetworkExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@MeetNowExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803C9390 (-GetRuntimeClassName@MeetNowExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CNetworkExperienceManager::GetRuntimeClassName(CNetworkExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.NetworkFlyoutExperienceManager", 0x40u, a2);
}
