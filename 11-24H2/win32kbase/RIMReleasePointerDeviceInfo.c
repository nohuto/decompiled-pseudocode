/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1401E0D90
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimDestroyDeadzone @ 0x140125368 (rimDestroyDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAssignPreparsedData @ 0x1401DEC10 (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  char v7; // r15
  char v8; // bp
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char *v13; // rcx

  v2 = *(_QWORD *)(a2 + 456);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2890);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 440), a2, v2);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v6 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v6 & 1) == 0)
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v6);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        38,
        (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
        v7);
    }
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v13 = *(char **)(a1 + 1048);
    if ( v13 )
    {
      GreDeleteFastMutex(v13);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    rimDestroyDeadzone((__int64)v13);
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 456) = 0LL;
}
