/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133ED4
 * Callers:
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140133280 (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140133688 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1402716B8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x14028246C (-_LoadCursorsAndIcons@@YAHXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14012D69C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140133350 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1401343B0 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1401DBD64 (-LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1401EB634 (RtlInitUnicodeStringOrId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(
        __int64 a1,
        __int64 a2,
        const struct _UNICODE_STRING *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rsi
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  struct _UNICODE_STRING *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PWSTR Buffer; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  _BOOL8 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD v36[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v6 = 552LL * (unsigned int)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = (struct _UNICODE_STRING *)(UserSessionState + v6 + 21944);
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v15 = W32GetUserSessionState(v10, Buffer);
      RtlInitUnicodeString(v11, (PCWSTR)(v15 + v6 + 21960));
      v11->MaximumLength = 520;
      RtlUnicodeStringCopy(v11, a3);
      v11->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(UserSessionState + v6 + 21944, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(UserSessionState + v6 + 21944), 0LL);
  }
  v17 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + v6 + 21936);
  v18 = v17 == 0;
  if ( v18 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1705LL);
  if ( v17 )
  {
    v26 = W32GetUserSessionState(v18, v16);
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v26 + v6 + 21936));
  }
  else
  {
    v19 = *(_QWORD *)(W32GetUserGdiSessionState(v18) + 40);
    if ( PsGetCurrentProcess(v20) != v19
      || (v23 = *(_QWORD *)(a1 + 64)) == 0
      || (v23 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v23 - 100 != v4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1716LL);
    }
    v24 = *(unsigned __int16 *)(W32GetUserSessionState(v22, v21) + v6 + 21928);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v24;
    v36[1] = a1;
    v36[0] = W32GetUserSessionState(v24, v25) + v6 + 21936;
    HMAssignmentLock(v36, 0LL);
  }
  LogSetNewSystemCursor(v4, a3, a4);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + v6 + 21936);
  v32 = PtiCurrent(v31, v30);
  Win32HM_LockIntoThread<0>((__int64)v32, v29, BugCheckParameter3);
  xxxEnsureDpiCursorsForSysCur(v4, v33);
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v34);
}
