/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00BA8D0
 * Callers:
 *     LogDiagSDC @ 0x1C0012030 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C1054 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00CAA74 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     PowerOffMonitor @ 0x1C0133C20 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016276C (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0162AE0 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C01676B4 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     LogDiagCDS @ 0x1C01684B0 (LogDiagCDS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 DxgkWin32kInterface; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v6[0] = 6;
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v6[1] = 64;
  v9 = 0LL;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  (*(void (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 304))(v6);
  return v7;
}
