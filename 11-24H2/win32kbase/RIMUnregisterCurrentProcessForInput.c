/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x14010F140
 * Callers:
 *     RIMOnProcessDestroy @ 0x14010F0D0 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v3; // rdx
  __int64 v4; // r15
  CTouchProcessor *v5; // rcx
  char v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 *i; // r14
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r15
  char v20; // si
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  char v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  _QWORD *v31; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v32; // [rsp+58h] [rbp-8h]

  v1 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = (__int64 *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = (__int64 *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v4 = *v3;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      18,
      (__int64)&WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids);
  }
  v32 = &v31;
  v31 = &v31;
  v11 = W32GetUserSessionState(v5);
  RIMLockExclusive(v11 + 56);
  for ( i = *(__int64 **)(W32GetUserSessionState(v12) + 120);
        i != (__int64 *)(W32GetUserSessionState(v13) + 120);
        i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)i + 65) && i[2] == v4 )
    {
      v15 = i + 99;
      if ( (__int64 *)i[100] != i + 99 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1261LL);
      if ( (_QWORD *)*v15 != v15 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1262LL);
      v1 = ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1268LL);
      v16 = v32;
      if ( *v32 != &v31 )
        __fastfail(3u);
      i[100] = (__int64)v32;
      v13 = &v31;
      *v15 = &v31;
      *v16 = v15;
      v32 = (_QWORD **)(i + 99);
    }
  }
  v17 = W32GetUserSessionState(v13);
  RIMUnlockExclusive(v17 + 56);
  v18 = v31;
  while ( v18 != &v31 )
  {
    v19 = v18 - 101;
    v1 = RIMUnregisterForInput(*(v18 - 92));
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v20 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 19392),
          3,
          1,
          19,
          (__int64)&WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
          v1);
      }
      v1 = 0;
    }
    v18 = (_QWORD *)*v18;
    ObfDereferenceObject(v19);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v25 = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19392),
      4,
      1,
      20,
      (__int64)&WPP_338f35887e8d3b7dfd4b8f1796ce7fcb_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
