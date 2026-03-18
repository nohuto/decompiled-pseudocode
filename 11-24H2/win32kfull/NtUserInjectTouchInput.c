/*
 * XREFs of NtUserInjectTouchInput @ 0x140243180
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectTouchInput(__int64 a1, volatile void *a2)
{
  __int64 v2; // r12
  char v3; // di
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // esi
  struct tagPOINTER_TOUCH_INFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // si
  bool v28; // r12
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // r14
  char LastError; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v42[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v43[10]; // [rsp+78h] [rbp-50h] BYREF
  char v44; // [rsp+D0h] [rbp+8h]
  char v46; // [rsp+E0h] [rbp+18h] BYREF
  bool v47; // [rsp+E8h] [rbp+20h]

  v44 = a1;
  v2 = (unsigned int)a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 1;
    v4 = 1;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_dq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v42, "InjectTouchInput", 0LL);
  EnterCrit(1LL, 0LL);
  v46 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v46);
  InputExtensibilityCalloutGuard();
  if ( v46 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v3 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(v11 + 69416),
        2,
        20,
        32,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v14 = 0;
    UserSetLastError(5);
  }
  else
  {
    v15 = 0LL;
    if ( (unsigned int)(v2 - 1) > 0xFF )
    {
      v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v31,
          v30,
          *(_QWORD *)(v29 + 69416),
          2,
          20,
          33,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
          v44);
      }
      v14 = 0;
      UserSetLastError(87);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16, v18);
      ProbeForRead(a2, 144 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
      v20 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v2, 1953067861LL);
      v15 = v20;
      if ( !v20 )
        ExRaiseStatus(-1073741801);
      RtlCopyVolatileMemory(v20, (const void *)a2, 144 * v2);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        v43,
        (__int64)v15,
        (__int64)Win32FreePool);
      v14 = xxxInjectTouchInput((unsigned int)v2, v15);
      if ( !v14 )
      {
        v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(v22, v21);
          LOBYTE(v25) = v47;
          LOBYTE(v26) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v25,
            *(_QWORD *)(v24 + 69416),
            2,
            20,
            35,
            (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
        }
      }
      Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v43, v21);
    }
    if ( v15 )
      Win32FreePool(v15);
    EtwTraceTouchInjectionStop();
    if ( !v14 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v3 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LastError = UserGetLastError();
        v36 = W32GetUserSessionState(v35, v34);
        LOBYTE(v37) = v32;
        LOBYTE(v38) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v37,
          *(_QWORD *)(v36 + 69416),
          2,
          20,
          36,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
          LastError);
      }
    }
  }
  LeaveMitRitHazardCrit();
  UserSessionSwitchLeaveCrit(v39);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v42,
    v40);
  return v14;
}
