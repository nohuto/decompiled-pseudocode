/*
 * XREFs of ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x18035039C
 * Callers:
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x180223380 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803598F0 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x18035B1F0 (-StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 *     ?StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x18035C4F0 (-StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

HWND __fastcall GamingOverlayExperienceManager::GetParentIfCoreWindow(GamingOverlayExperienceManager *this, HWND a2)
{
  const char *v3; // r9
  HWND Parent; // rbx
  const char *v5; // r9
  DWORD LastError; // eax
  WCHAR ClassName[128]; // [rsp+20h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  memset_0(ClassName, 0, sizeof(ClassName));
  if ( !GetClassNameW(a2, ClassName, 128) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x382,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v3);
  if ( !(unsigned int)_o__wcsicmp(L"Windows.UI.Core.CoreWindow", ClassName) )
  {
    Parent = GetParent(a2);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      if ( !Parent )
      {
        LastError = GetLastError();
        if ( LastError )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            917LL,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)LastError);
        return a2;
      }
    }
    else if ( !Parent )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x39A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        v5);
      return a2;
    }
    return Parent;
  }
  return a2;
}
