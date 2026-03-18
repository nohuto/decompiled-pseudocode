/*
 * XREFs of ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14000B4F4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14000B584 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 */

__int64 PreAllocateForPrimaryMonitorChange(void)
{
  unsigned int v0; // ebx
  __int64 UserSessionState; // rdi
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rax

  v0 = 0;
  UserSessionState = W32GetUserSessionState();
  if ( !*(_QWORD *)(UserSessionState + 71464) )
    *(_QWORD *)(UserSessionState + 71464) = CreateMonitor();
  MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(UserSessionState + 71472);
  if ( !MonitorDpiInfo )
  {
    MonitorDpiInfo = CreateMonitorDpiInfo();
    *(_QWORD *)(UserSessionState + 71472) = MonitorDpiInfo;
  }
  if ( *(_QWORD *)(UserSessionState + 71464) && MonitorDpiInfo )
    return 1;
  return v0;
}
