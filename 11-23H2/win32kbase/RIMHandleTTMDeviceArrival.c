/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C01B44BC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C0005C78 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0078960 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1C01B4910 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1C01B4AFC (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  int v4; // edx
  unsigned int v5; // edi
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  char v9; // dl
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  if ( !*(_BYTE *)SGDGetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 49);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v2 >= 0 )
    {
      v3 = *(unsigned __int8 *)(a1 + 48);
      *(_DWORD *)(a1 + 1312) = 0;
      v5 = RimDeviceTypeToRimInputType(a1, v3);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v4) = 0;
      }
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)(a1 + 216);
        v14 = v5;
        v12 = a1;
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqdS(WPP_GLOBAL_Control->AttachedDevice, v4, v6, (_DWORD)WPP_GLOBAL_Control);
      }
      v2 = TtmNotifyDeviceArrival(2LL, a1, &off_1C0243010, v5);
      if ( v2 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 105);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v7) = 0;
        }
        if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = v2;
          v13 = *(_QWORD *)(a1 + 216);
          LODWORD(v12) = *(unsigned __int8 *)(a1 + 48);
          HIDWORD(v11) = HIDWORD(a1);
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdSD(WPP_GLOBAL_Control->AttachedDevice, v7, v8, v12, a1 + 208);
        }
        if ( v2 != -1073741768 )
          *(_DWORD *)(a1 + 1312) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_520c372abf713e449e1c94695c528942_Traceguids,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return (unsigned int)v2;
}
