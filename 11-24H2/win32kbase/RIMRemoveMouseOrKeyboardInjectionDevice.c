/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401D8B5C
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // esi
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // bl
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

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
      47,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19392),
        3,
        1,
        49,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    }
  }
  else
  {
    v8 = (char *)Object;
    if ( *((_DWORD *)Object + 30) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1455);
    }
    v9 = *((_QWORD *)v8 + 49);
    v10 = v9 + 104;
    RIMLockExclusive(v9 + 104);
    if ( v9 )
    {
      if ( (*(_QWORD *)(v9 + 832) || *(_DWORD *)(v9 + 1056))
        && *(_QWORD *)(v9 + 32) != PsGetCurrentProcess(v12, v11, v13, v14) )
      {
        *((_DWORD *)v8 + 60) |= 0x100000u;
        v16 = W32GetUserSessionState(v15);
        RIMLockExclusive(v16 + 56);
        *((_DWORD *)v8 + 64) |= 4u;
        v18 = W32GetUserSessionState(v17);
        RIMUnlockExclusive(v18 + 56);
        if ( (*((_DWORD *)v8 + 60) & 0x800000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1476);
        }
        *((_DWORD *)v8 + 60) |= 0x800000u;
        ZwSetEvent(*(HANDLE *)(v9 + 344), 0LL);
        v7 = 0;
      }
      else if ( *(_BYTE *)(v9 + 81) || *(_BYTE *)(v9 + 82) )
      {
        v7 = -1073741637;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v19 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(v21 + 19392),
            3,
            1,
            48,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
      }
      else
      {
        v7 = RIMFreeDev((struct RawInputManagerObject *)v9, (struct RIMDEV *)(v8 + 72));
      }
    }
    RIMUnlockExclusive(v10);
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
