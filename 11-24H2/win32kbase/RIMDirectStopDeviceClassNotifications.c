/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1401D6F90
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14020C890 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1400CA9E8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // edi
  _BYTE *v8; // rbx
  unsigned int i; // esi
  int v10; // eax
  char v11; // bl
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      116,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v8[81] )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3491);
    }
    for ( i = 0; i <= 2; ++i )
    {
      v10 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v8, i);
      v7 = v10;
    }
    RIMUnlockExclusive((__int64)(v8 + 104));
    ObfDereferenceObject(v8);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 19392),
      4,
      1,
      117,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
