/*
 * XREFs of NtUserSendInput @ 0x1402453F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1401C8180 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1402A30AC (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v3; // r15
  char v4; // di
  char v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // esi
  __int64 v18; // rcx
  bool v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 CurrentProcessWow64Process; // rax
  struct tagINPUT *v24; // rax
  struct tagINPUT *v25; // r14
  __int64 v26; // rdx
  bool v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  _QWORD v35[11]; // [rsp+80h] [rbp-58h] BYREF
  __int64 *v38; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_dqd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v38, "SendInput", 0LL);
  EnterCrit(0LL, 0LL);
  if ( a3 != 40 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v4;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(v14 + 69416),
        2,
        20,
        22,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
        a3,
        40);
    }
LABEL_17:
    v17 = 0;
    UserSetLastError(87);
    goto LABEL_36;
  }
  if ( !(_DWORD)v3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(v20 + 69416),
        2,
        20,
        23,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    goto LABEL_17;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10, v12);
  ProbeForRead(a2, 40 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v24 = (struct tagINPUT *)Win32AllocPoolWithQuotaZInit(40 * v3, 1769173845LL);
  v25 = v24;
  if ( !v24 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v24, (const void *)a2, 40 * v3);
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v35,
    (__int64)v25,
    (__int64)Win32FreePool);
  v17 = xxxSendInput(v3, v25);
  Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v35, v26);
  Win32FreePool(v25);
  if ( v17 != (_DWORD)v3 )
  {
    v18 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError();
      v30 = W32GetUserSessionState(v29, v28);
      LOBYTE(v31) = v27;
      LOBYTE(v32) = v4;
      WPP_RECORDER_AND_TRACE_SF_ddD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(v30 + 69416));
    }
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v18);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v38,
    v33);
  return v17;
}
