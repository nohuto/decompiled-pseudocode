/*
 * XREFs of ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x180074C3C
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180057DA8 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180074CF4 (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall IsHDRDisplay(HMONITOR hMonitor)
{
  int PathInfoFromHMonitor; // eax
  unsigned int v3; // ebx
  DISPLAYCONFIG_PATH_INFO v5; // [rsp+20h] [rbp-88h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+70h] [rbp-38h] BYREF
  __int128 v7; // [rsp+84h] [rbp-24h]

  memset_0(&v5, 0, sizeof(v5));
  PathInfoFromHMonitor = TryGetPathInfoFromHMonitor(hMonitor, &v5);
  v3 = 0;
  if ( !PathInfoFromHMonitor )
    return 0LL;
  requestPacket.adapterId = v5.targetInfo.adapterId;
  requestPacket.id = v5.targetInfo.id;
  v7 = 0LL;
  requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SDR_WHITE_LEVEL|DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME;
  requestPacket.size = 36;
  if ( DisplayConfigGetDeviceInfo(&requestPacket) )
    return 0LL;
  LOBYTE(v3) = HIDWORD(v7) == 2;
  return v3;
}
