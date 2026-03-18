/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1400D69F0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1400D6D58 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7464 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     IsPTPInputEnabled @ 0x1400D7598 (IsPTPInputEnabled.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ApiSetProcessHidRawInput @ 0x14013ACB0 (ApiSetProcessHidRawInput.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A2390 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1401D9D38 (RIMAbConfigureDeviceArbitration.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  __int64 result; // rax
  bool v7; // si
  bool v8; // bp
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  bool v13; // si
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // si
  bool v19; // bp
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // si
  bool v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx

  v2 = *(_QWORD *)(a2 + 456);
  if ( !(unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v2) )
  {
    v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19392),
        4,
        1,
        10,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v12 = 0LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v2 + 24) == 7 && !(unsigned int)IsPTPInputEnabled() )
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(v9 + 19392),
        4,
        1,
        11,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v12 = 1LL;
    goto LABEL_21;
  }
  if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 1) <= 3 && !*(_BYTE *)(W32GetUserSessionState(v5) + 184) )
  {
    v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19392),
        4,
        1,
        12,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v12 = 2LL;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)(v2 + 156) )
  {
    v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19392),
        4,
        1,
        13,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v12 = 3LL;
LABEL_21:
    result = InputTraceLogging::RIM::DropInput(a2, v12);
    goto LABEL_10;
  }
  if ( !*((_DWORD *)a1 + 116) )
    RIMAbConfigureDeviceArbitration();
  result = rimDoProcessAnyPointerDeviceInput(a1, a2);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 168) & 0x20000) != 0 )
  {
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
      return ApiSetProcessHidRawInput(a2, *(_QWORD *)(*(_QWORD *)(a2 + 440) + 24LL), *(unsigned int *)(a2 + 248));
    else
      return rimQueueApiSetHidRawInputAsyncWorkItem(a1);
  }
  return result;
}
