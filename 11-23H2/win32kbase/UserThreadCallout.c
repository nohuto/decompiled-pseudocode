/*
 * XREFs of UserThreadCallout @ 0x1C0050B50
 * Callers:
 *     <none>
 * Callees:
 *     GreCleanDC @ 0x1C0038740 (GreCleanDC.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RtlGetExpWinVer @ 0x1C0050F34 (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2)
{
  _UNKNOWN **v2; // r8
  void *v4; // r9
  unsigned int ThreadInfo; // r14d
  char v6; // si
  PDEVICE_OBJECT v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v14; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct tagKERNELHANDLETABLEENTRY *v27; // rbx
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct tagKERNELHANDLETABLEENTRY *v32; // rbx

  v2 = &WPP_RECORDER_INITIALIZED;
  v4 = &WPP_169ed334ae81372bb981068a10849f93_Traceguids;
  ThreadInfo = 0;
  v6 = 1;
  if ( !(_DWORD)a2 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        26,
        (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
    if ( *(_DWORD *)(SGDGetUserSessionState(v7, a2, v2, v4) + 2940) )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1272), 0);
      goto LABEL_23;
    }
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        ThreadProcess = PsGetThreadProcess(Thread);
        v14 = ThreadProcess;
        if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
        {
          ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v14);
          *(_DWORD *)(v12 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
        }
        else
        {
          *(_DWORD *)(v12 + 632) = 0;
        }
      }
    }
    v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v9, v10, v11);
    gptiCurrent = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v32 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v31 = *(_QWORD *)v32;
            *((_QWORD *)v32 + 2) = 0LL;
            if ( !*(_DWORD *)(v31 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)v32);
          }
        }
      }
    }
    ThreadInfo = xxxCreateThreadInfo(Thread);
LABEL_22:
    UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
LABEL_23:
    v2 = &WPP_RECORDER_INITIALIZED;
    goto LABEL_24;
  }
  if ( (_DWORD)a2 == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        27,
        (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
    v24 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(
                                    0LL,
                                    a2,
                                    (__int64)v2,
                                    (__int64)v4);
    gptiCurrent = v24;
    if ( v24 )
    {
      *((_DWORD *)v24 + 387) = 1;
      v26 = PsGetCurrentProcessWin32Process(v25);
      if ( v26 )
      {
        if ( *(_QWORD *)v26
          && (*(_DWORD *)(v26 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v27 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v30 = *(_QWORD *)v27;
            *((_QWORD *)v27 + 2) = 0LL;
            if ( !*(_DWORD *)(v30 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)v27);
          }
        }
      }
    }
    v28 = 0LL;
    v29 = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( v29 )
      v28 = *v29;
    *(_DWORD *)(v28 + 488) |= 1u;
    if ( gbVideoInitialized || !gbNonServiceSession )
      GreCleanDC(*((HDC *)gpDispInfo + 7));
    if ( (*(_DWORD *)(v28 + 1272) & 2) != 0 )
      HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
    if ( (*(_DWORD *)(v28 + 1272) & 1) == 0 )
      xxxDestroyThreadInfo();
    goto LABEL_22;
  }
LABEL_24:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v6;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      28,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  }
  return ThreadInfo;
}
