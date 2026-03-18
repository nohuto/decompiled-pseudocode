/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0074D88
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00CA3A0 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB2F0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C0175950 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DeviceTypeToRimInputType @ 0x1C00750D0 (DeviceTypeToRimInputType.c)
 *     RIMApiSetIsRemoteConnection @ 0x1C0075764 (RIMApiSetIsRemoteConnection.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0075E94 (RIMChildInputTypeIsVirtualized.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C007632C (RIMRegisterForDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(unsigned int *Object)
{
  NTSTATUS v2; // edi
  unsigned int v3; // esi
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  int v6; // edx
  int v7; // r8d
  __int64 v9; // rdx

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(Object[21]) )
    return 0LL;
  if ( (unsigned int)RIMApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v3 = 0;
    v4 = Object + 32;
    v5 = Object + 78;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v3) & Object[21]) != 0 )
      {
        if ( *(v5 - 11) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v6) = 0;
          }
          if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v6,
              v7,
              (_DWORD)gRimLog,
              3,
              1,
              10,
              (__int64)&WPP_e6afa386b7683a2c6333e851e06c64d1_Traceguids);
          }
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 112LL);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(&Object[2 * v3 + 56], v9, *v4, *((_QWORD *)Object + 15));
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v3;
      ++v5;
      v4 += 4;
    }
    while ( v3 <= 2 );
  }
  return (unsigned int)v2;
}
