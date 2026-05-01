/*
 * XREFs of ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x180037B24
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180060B94 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1800902E4 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall HampUtilQueryQuiesceTimeouts(unsigned int *a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+40h] [rbp+18h] BYREF

  hKey = 0LL;
  v6 = 5000;
  v7 = 600000;
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         1u,
         &hKey) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"QuiesceDurationMs", &v6) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"EeDurationMs", &v7) < 0
    || (v4 = v6, v5 = v7, v6 > v7)
    || !v7 )
  {
    v4 = 5000;
    v5 = 600000;
  }
  *a1 = v4;
  if ( a2 )
    *a2 = v5;
  if ( hKey )
    RegCloseKey(hKey);
}
