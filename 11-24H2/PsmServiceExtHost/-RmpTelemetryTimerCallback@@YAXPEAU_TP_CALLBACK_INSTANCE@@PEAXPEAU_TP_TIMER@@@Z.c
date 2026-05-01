/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180065850
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180065A04 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampSystemDeleteValue@@YAJPEAUHKEY__@@PEBG@Z @ 0x180068514 (-HampSystemDeleteValue@@YAJPEAUHKEY__@@PEBG@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_SERVICE_GLOBALS *a2,
        struct _TP_TIMER *a3)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  LSTATUS v8; // eax
  bool v9; // sf
  int v10; // [rsp+30h] [rbp-69h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-61h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v13[144]; // [rsp+50h] [rbp-49h] BYREF

  memset_0(v13, 0, 0x88uLL);
  v10 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  hKey = 0LL;
  phkResult = 0LL;
  RmpAcquireGlobalLock();
  RmpTelemetryLogGlobalState(a2);
  *((_DWORD *)a2 + 142) = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  if ( v10 == 3 )
  {
    v4 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &hKey);
    v5 = v4 < 0;
    if ( v4 > 0 )
      v5 = 1;
    if ( !v5 )
    {
      v6 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\CurrentVersion\\ResourceManager",
             0,
             0x20006u,
             &phkResult);
      v7 = v6 < 0;
      if ( v6 > 0 )
        v7 = 1;
      if ( !v7 )
      {
        v8 = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v9 = v8 < 0;
        if ( v8 > 0 )
          v9 = 1;
        if ( !v9 )
          HampSystemDeleteValue(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
