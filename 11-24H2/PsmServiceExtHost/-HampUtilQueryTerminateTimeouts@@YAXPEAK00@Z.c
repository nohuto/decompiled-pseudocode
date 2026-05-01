/*
 * XREFs of ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x18007F4D0
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EF4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180060B14 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180090744 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall HampUtilQueryTerminateTimeouts(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  HKEY v9; // rcx
  unsigned int v10; // [rsp+50h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+40h] BYREF

  hKey = 0LL;
  v10 = 150;
  v11 = 2000;
  v12 = 60000;
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         1u,
         &hKey) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"KillResponsiveDurationMs", &v10) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"KillDbgDurationMs", &v11) < 0
    || (int)HampSystemQueryDWordValue(hKey, L"KillExtremeDurationMs", &v12) < 0
    || (v6 = v10, v7 = v11, v10 >= v11)
    || (v8 = v12, v11 >= v12)
    || !v10 )
  {
    v6 = 150;
    v7 = 2000;
    v8 = 60000;
  }
  *a2 = v7;
  v9 = hKey;
  *a1 = v6;
  *a3 = v8;
  if ( v9 )
    RegCloseKey(v9);
}
