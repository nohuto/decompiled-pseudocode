/*
 * XREFs of ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18006F848
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180060B14 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180090744 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall HampUtilQueryDesktopWindowCloseTimeout(unsigned int *a1)
{
  unsigned int v2; // eax
  HKEY v3; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+38h] [rbp+10h] BYREF

  hKey = 0LL;
  v4 = 30000;
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         1u,
         &hKey) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"WmDurationMs", &v4) < 0
    || (v2 = v4) == 0 )
  {
    v2 = 30000;
  }
  v3 = hKey;
  *a1 = v2;
  if ( v3 )
    RegCloseKey(v3);
}
