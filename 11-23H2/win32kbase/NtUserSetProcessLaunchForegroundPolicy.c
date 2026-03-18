/*
 * XREFs of NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     LockProcessByClientId @ 0x1C00AB508 (LockProcessByClientId.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1C00D1434 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C014DC14 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // esi
  bool v5; // di
  int v6; // edx
  PDEVICE_OBJECT v7; // rcx
  char v8; // di
  unsigned int v9; // esi
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v16; // rax
  int v17; // r8d
  HANDLE ProcessId; // rsi
  _QWORD *ProcessWin32Process; // rax
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // eax
  NTSTATUS v27; // esi
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  int v31; // edx
  ULONG v32; // eax
  int v33; // edx
  HANDLE v34; // r8
  int v36; // edx
  int v37; // edx
  int ObjectType; // [rsp+20h] [rbp-B9h]
  HANDLE v39; // [rsp+50h] [rbp-89h]
  HANDLE ProcessHandle; // [rsp+58h] [rbp-81h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp-79h] BYREF
  int v42; // [rsp+68h] [rbp-71h]
  _BYTE ProcessInformation[64]; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v44[32]; // [rsp+B0h] [rbp-29h] BYREF
  bool v46; // [rsp+148h] [rbp+6Fh]
  __int64 v47; // [rsp+150h] [rbp+77h]
  int v48; // [rsp+158h] [rbp+7Fh]

  v3 = a1;
  v4 = a2;
  LODWORD(v47) = 3;
  if ( (a2 & 3) == 3 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 102;
      LOBYTE(v6) = v5;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        102,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v4);
    }
LABEL_27:
    UserSetLastError(87LL);
    return 0LL;
  }
  v7 = WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      103,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
      v4,
      v3);
  v48 = v4 & 4;
  v9 = v4 & 0xFFFFFFFB;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = v8;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            a2,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            13,
            104,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
        }
        goto LABEL_27;
      }
    }
    else
    {
      LODWORD(v47) = 2;
    }
  }
  else
  {
    LODWORD(v47) = 1;
  }
  if ( (unsigned int)IsEtwUserCritEnabled(v7, a2, a3, v3) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v16 = SGDGetUserSessionState(v12, v11, v13, v14);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v16 + 8));
  EtwTraceAcquiredSharedUserCrit();
  v42 = LockProcessByClientId((int)a1, &Process);
  if ( !Process )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = 110;
      LOBYTE(v37) = v8;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v37,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        110,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        a1);
    }
    v30 = 87LL;
    goto LABEL_112;
  }
  ProcessId = PsGetProcessId(Process);
  v39 = ProcessId;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
  v21 = (__int64)ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
  {
    v46 = 0;
    ProcessHandle = 0LL;
    if ( ObOpenObjectByPointer(Process, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle) < 0 )
      goto LABEL_83;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL) >= 0
      && (ProcessInformation[56] & 8) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v23) = 0;
      }
      if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v23,
          v24,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          105,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          (char)ProcessId);
      }
      memset(v44, 0, 0x40uLL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageInformation, v44, 0x40u, 0LL) >= 0 )
        v46 = v44[8] == 2;
    }
    ZwClose(ProcessHandle);
    if ( v46 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v22,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          106,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          (char)ProcessId);
      if ( qword_1C0295420 )
      {
        v26 = qword_1C0295420(Process, v25, v22);
        v27 = v26;
        if ( v26 >= 0 )
        {
          if ( v26 == 1073741851 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 9207LL);
          v28 = PsGetProcessWin32Process(Process);
          v21 = v28;
          if ( v28 )
            v21 = -(__int64)(*(_QWORD *)v28 != 0LL) & v28;
          *(_DWORD *)(v21 + 824) |= 0x10000000u;
          LOBYTE(ProcessId) = (_BYTE)v39;
          goto LABEL_63;
        }
      }
      else
      {
        v27 = -1073741637;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = 107;
        LOBYTE(v31) = v8;
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v22,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          ObjectType,
          13,
          107,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          (char)v39,
          v27);
      }
      v32 = RtlNtStatusToDosError(v27);
    }
    else
    {
LABEL_83:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = 108;
        LOBYTE(v33) = v8;
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v22,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          13,
          108,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          (char)ProcessId);
      }
      v32 = 5;
    }
    v30 = v32;
    goto LABEL_112;
  }
LABEL_63:
  if ( (*(_DWORD *)(v21 + 12) & 0x8000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = 109;
      LOBYTE(v29) = v8;
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v29,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        109,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        (char)ProcessId);
    }
LABEL_71:
    v30 = 5LL;
LABEL_112:
    UserSetLastError(v30);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&Process);
    UserSessionSwitchLeaveCrit();
    return 0LL;
  }
  if ( !qword_1C0296540 || !(unsigned int)qword_1C0296540((unsigned int)v47) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = 111;
      LOBYTE(v36) = v8;
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        111,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    goto LABEL_71;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&Process);
  UserSessionSwitchLeaveCrit();
  v34 = v39;
  if ( !v39 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9257LL);
    v34 = 0LL;
  }
  if ( qword_1C0296530 )
  {
    HIDWORD(v47) = v48 != 0;
    qword_1C0296530(v34, v47);
  }
  return 1LL;
}
