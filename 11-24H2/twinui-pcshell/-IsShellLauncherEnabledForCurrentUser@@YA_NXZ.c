/*
 * XREFs of ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800937A4
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x1800936F4 (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017CF60 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180240B24 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1804F24EC (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 * Callees:
 *     ??R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z @ 0x180093804 (--R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z.c)
 */

char __fastcall IsShellLauncherEnabledForCurrentUser(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)_lambda_c1655bd484619e6421d1036a1924c2d8_::operator()(a1, &v3) >= 0 )
    return v3 != 0;
  return v1;
}
