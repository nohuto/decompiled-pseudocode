/*
 * XREFs of ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054B368
 * Callers:
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18054AEB0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586360 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805AF3E4 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z @ 0x1805AF5BC (-RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BDF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 *     _anonymous_namespace_::GetPromptText @ 0x1805EF3EC (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E54F4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x180534234 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
        __int64 a1,
        HMODULE a2,
        unsigned int a3,
        ...)
{
  int v4; // ebx
  const void *v6[6]; // [rsp+28h] [rbp-30h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(v6, 0, 24);
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (__int64)v6,
         a2,
         a3);
  if ( v4 >= 0 )
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_255728157cf8e92998065ff06efe801f_>(
           a1,
           v6[0],
           va);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v6);
  return (unsigned int)v4;
}
