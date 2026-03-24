/*
 * XREFs of MouseClassGetWaitWakeEnableState @ 0x1C0010360
 * Callers:
 *     MouseStart @ 0x1C00034B0 (MouseStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0006F00 (memset.c)
 *     MouseQueryDeviceKey @ 0x1C0010500 (MouseQueryDeviceKey.c)
 */

char __fastcall MouseClassGetWaitWakeEnableState(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  ULONGLONG v4; // rax
  int v5; // edi
  int DeviceKey; // eax
  void *v7; // rcx
  void *DeviceRegKey; // [rsp+30h] [rbp-198h] BYREF
  int v10; // [rsp+38h] [rbp-190h]
  _BYTE OutputBuffer[80]; // [rsp+40h] [rbp-188h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+90h] [rbp-138h] BYREF

  DeviceRegKey = 0LL;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v10 = 0;
  v3 = IoOpenDeviceRegistryKey(v2, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v3 >= 0 )
  {
    DeviceKey = MouseQueryDeviceKey(DeviceRegKey);
    v7 = DeviceRegKey;
    if ( DeviceKey >= 0 )
    {
      *(_BYTE *)(a1 + 345) = v10 != 0;
      LOBYTE(v3) = ZwClose(v7);
      return v3;
    }
    LOBYTE(v3) = ZwClose(DeviceRegKey);
    DeviceRegKey = 0LL;
  }
  if ( !*(_BYTE *)(a1 + 345) )
  {
    memset(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.wProductType = 1;
    v4 = VerSetConditionMask(0LL, 0x80u, 1u);
    v3 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v4);
    if ( v3 >= 0 )
    {
      memset(OutputBuffer, 0, 0x4CuLL);
      v5 = 4;
      v3 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
      if ( v3 >= 0 )
      {
        if ( !OutputBuffer[5] )
        {
          if ( OutputBuffer[4] )
          {
            v5 = 3;
          }
          else
          {
            LOBYTE(v3) = -OutputBuffer[3];
            v5 = OutputBuffer[3] != 0 ? 2 : 0;
          }
        }
        if ( *(_DWORD *)(a1 + 272) >= v5 )
          *(_BYTE *)(a1 + 345) = 1;
      }
    }
  }
  return v3;
}
