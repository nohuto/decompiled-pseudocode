/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1401ED2E0
 * Callers:
 *     RIMDirectStartDeviceClassNotifications @ 0x1400643F0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMAddInputOfType @ 0x1401D5D30 (RIMAddInputOfType.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401E96E8 (rimDoScheduledUserModeRimPnpRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMApiSetIsRemoteConnection @ 0x140063C6C (RIMApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1400CAAD0 (DeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14014BC20 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1401E90CC (RIMRegisterForDeviceClassNotifications.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(struct _DRIVER_OBJECT **Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rcx
  unsigned int v5; // esi
  void **v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  char v9; // r14
  bool v10; // r15
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // [rsp+20h] [rbp-48h]

  v2 = -1073741811;
  if ( RIMChildInputTypeIsVirtualized(*((unsigned int *)Object + 21)) )
    return 0LL;
  if ( (unsigned int)RIMApiSetIsRemoteConnection(v3) || !Object[15] )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    v6 = (void **)(Object + 16);
    v7 = Object + 39;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v5) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v7 - 11) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v9 = 0;
          }
          v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v12) = v10;
            LOBYTE(v13) = v9;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v12,
              *(_QWORD *)(UserSessionState + 19392),
              3,
              1,
              10,
              (__int64)&WPP_e06456f7ab9d3b6cc93baaf7d9113736_Traceguids);
          }
        }
        else
        {
          if ( !*v7 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 120);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[v5 + 28],
                   v8,
                   *v6,
                   Object[15],
                   v14,
                   &Object[2 * v5 + 31],
                   (PVOID *)&Object[v5 + 28]);
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v5;
      ++v7;
      v6 += 4;
    }
    while ( v5 <= 2 );
  }
  return (unsigned int)v2;
}
