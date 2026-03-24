/*
 * XREFs of KeyboardClassGetWaitWakeEnableState @ 0x1C00102E0
 * Callers:
 *     KeyboardStart @ 0x1C0001F70 (KeyboardStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007290 (__security_check_cookie.c)
 *     memset @ 0x1C0007680 (memset.c)
 *     KeyboardQueryDeviceKey @ 0x1C0010480 (KeyboardQueryDeviceKey.c)
 */

char __fastcall KeyboardClassGetWaitWakeEnableState(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  int DeviceKey; // eax
  void *v5; // rcx
  ULONGLONG v6; // rax
  int v7; // edi
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
    DeviceKey = KeyboardQueryDeviceKey(DeviceRegKey);
    v5 = DeviceRegKey;
    if ( DeviceKey >= 0 )
    {
      *(_BYTE *)(a1 + 362) = v10 != 0;
      LOBYTE(v3) = ZwClose(v5);
      return v3;
    }
    LOBYTE(v3) = ZwClose(DeviceRegKey);
    DeviceRegKey = 0LL;
  }
  if ( !*(_BYTE *)(a1 + 362) )
  {
    memset(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.wProductType = 1;
    v6 = VerSetConditionMask(0LL, 0x80u, 1u);
    v3 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v6);
    if ( v3 >= 0 )
    {
      memset(OutputBuffer, 0, 0x4CuLL);
      v7 = 4;
      v3 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
      if ( v3 >= 0 )
      {
        if ( !OutputBuffer[5] )
        {
          if ( OutputBuffer[4] )
          {
            v7 = 3;
          }
          else
          {
            LOBYTE(v3) = -OutputBuffer[3];
            v7 = OutputBuffer[3] != 0 ? 2 : 0;
          }
        }
        if ( *(_DWORD *)(a1 + 288) >= v7 )
          *(_BYTE *)(a1 + 362) = 1;
      }
    }
  }
  return v3;
}
