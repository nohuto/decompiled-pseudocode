/*
 * XREFs of ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z @ 0x1800DE9F0
 * Callers:
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800DC0E0 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1E80 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x1800085D0 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CStoryboard::_WillWindowEndCloaked(const struct CWindowData *a1)
{
  HWND v1; // rdx
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)*((_QWORD *)a1 + 5);
  v3 = *((_BYTE *)a1 + 676) & 1;
  CWindowPropertyTracker::GetWindowEndCloak(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
    v1,
    &v3);
  return v3;
}
