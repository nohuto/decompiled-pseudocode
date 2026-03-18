/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14020C890
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x140064110 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1401D6F90 (RIMDirectStopDeviceClassNotifications.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E3540 (RawInputManagerObjectCreateKernelHandle.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x14020D954 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  HANDLE *v1; // rdi
  unsigned int v3; // ebp
  HANDLE *v4; // rsi
  char *v5; // rcx
  _DWORD *v6; // rcx
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  v1 = (HANDLE *)((char *)this + 8);
  v3 = -1073741823;
  v4 = (HANDLE *)((char *)this + 8);
  Handle = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
    if ( CBaseInput::SensorInitialized(this) )
      goto LABEL_5;
    v4 = (HANDLE *)((char *)this + 8);
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1402);
LABEL_5:
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v5 = (char *)*v1;
    Handle = *v1;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)this + 2);
    if ( v6 )
      RawInputManagerObjectCreateKernelHandle(v6, 3u, 0, 0, &Handle);
    v5 = (char *)Handle;
  }
  if ( v5 )
  {
    v3 = RIMDirectStopDeviceClassNotifications(v5);
    if ( Handle != *v4 )
      ZwClose(Handle);
  }
  return v3;
}
