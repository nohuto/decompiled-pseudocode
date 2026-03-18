/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C0131620
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C0130C64 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C01319D0 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     UserGetLastError @ 0x1C0208F54 (UserGetLastError.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(__int64 a1, char *a2, __int64 a3, unsigned __int64 a4, char *Address)
{
  char v5; // r13
  char v6; // si
  struct tagTHREADINFO *v7; // rax
  ULONG64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v12; // rax
  char v13; // al
  __int64 *i; // rdi
  PDEVICE_OBJECT v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int j; // edi
  NTSTATUS v24; // eax
  int v25; // edi
  ULONG v26; // eax
  bool v27; // r15
  char LastError; // al
  int v29; // r8d
  int v30; // edx
  char *v32; // [rsp+C0h] [rbp+8h]
  unsigned int v34; // [rsp+D0h] [rbp+18h]

  v34 = a3;
  v32 = (char *)a1;
  v5 = (char)a2;
  v6 = 1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, (__int64)a2, a3, a4);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v8 & CurrentProcessWin32Process;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v13 = 0;
          }
          if ( v13 )
          {
            for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              i[2] = 0LL;
              if ( !*(_DWORD *)(*i + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*i);
            }
          }
        }
      }
    }
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ii(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      10,
      (__int64)&WPP_9dece627d9463f2f24203584ea44f4d2_Traceguids,
      (char)v32,
      v5);
  v16 = 8LL * v34;
  if ( v16 > 0xFFFFFFFF )
  {
    v25 = 0;
    UserSetLastError(8);
  }
  else
  {
    if ( (_DWORD)v16 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v8, v10);
      v10 = a4;
      if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (PDEVICE_OBJECT)(a4 + (unsigned int)v16);
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)v15 > MmUserProbeAddress || (unsigned __int64)v15 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v18 = PsGetCurrentProcessWow64Process(v15, v8, v10);
    ProbeForWrite(Address, (unsigned int)v16, v18 != 0 ? 1 : 4);
    for ( j = 0; j != v34; ++j )
    {
      v24 = KernelMapVisualRelativePoint(
              v32,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * j),
              (struct VisualPoint *)&Address[8 * j]);
      if ( v24 < 0 )
      {
        v25 = 0;
        v26 = RtlNtStatusToDosError(v24);
        UserSetLastError(v26);
        goto LABEL_34;
      }
    }
    v25 = 1;
  }
LABEL_34:
  if ( !v25 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v29,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        11,
        (__int64)&WPP_9dece627d9463f2f24203584ea44f4d2_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit((__int64)v20, v19, v21, v22);
  return v25;
}
