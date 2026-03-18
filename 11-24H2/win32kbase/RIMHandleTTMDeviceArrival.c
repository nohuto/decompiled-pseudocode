/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1401F2BAC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x14019E8D4 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1401F30BC (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // ebp
  int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // r14d
  char v6; // di
  char v7; // bp
  const wchar_t *v8; // rbx
  __int64 UserSessionState; // rax
  char v10; // r14
  bool v11; // r15
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+30h] [rbp-88h]
  int v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+40h] [rbp-78h]
  _QWORD v28[4]; // [rsp+70h] [rbp-48h] BYREF

  v28[0] = RIMOnTTMDeviceClose;
  v28[2] = 0LL;
  v28[1] = RIMOnTTMDeviceAssignedToTerminal;
  v28[3] = RIMOnTTMDeviceSetInputMode;
  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 53);
  if ( *(_DWORD *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v2 >= 0 )
    {
      v3 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 1296) = 0;
      v5 = RimDeviceTypeToRimInputType(a1, v3);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v4 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v4 & 1) == 0)
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v6 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *(const wchar_t **)(a1 + 200);
        UserSessionState = W32GetUserSessionState(v4);
        WPP_RECORDER_AND_TRACE_SF_dqqdS(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v6,
          v7,
          *(_QWORD *)(UserSessionState + 19392),
          v23,
          v24,
          v25,
          v26,
          v27,
          a1,
          (char)v28,
          v5,
          v8);
      }
      v2 = TtmNotifyDeviceArrival(2LL, a1, v28, v5);
      if ( v2 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 109);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v10 = 0;
        }
        v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = *(_QWORD *)(a1 + 200);
          v13 = *(_DWORD *)(a1 + 48);
          v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v15) = v11;
          LOBYTE(v16) = v10;
          WPP_RECORDER_AND_TRACE_SF_qdSD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(v14 + 19392),
            a1 + 192,
            v24,
            v25,
            v26,
            a1,
            v13,
            v12,
            v2);
        }
        if ( v2 != -1073741768 )
          *(_DWORD *)(a1 + 1296) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19392),
      4,
      1,
      12,
      (__int64)&WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
