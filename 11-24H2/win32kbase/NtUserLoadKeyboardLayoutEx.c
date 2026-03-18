/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1401BC420
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011AD30 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011BE88 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v14; // rax
  HKL KeyboardLayout; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v17; // ecx
  char *v18; // r8
  ULONG64 v19; // rdx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  _BYTE v25[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v26[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v27[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v11 = a6;
  memset(v26, 0, 0x318uLL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v12);
  v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v14;
  KeyboardLayout = 0LL;
  if ( v14 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_23;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v17 = *(_DWORD *)v11;
  v18 = *(char **)(v11 + 8);
  if ( ((unsigned __int8)v18 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (ULONG64)&v18[(unsigned __int16)v17 + 2];
  if ( v19 <= (unsigned __int64)v18 || v19 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v17 > (unsigned __int16)HIWORD(*(_DWORD *)v11) )
  {
    if ( (v17 & 1) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( (v17 & 1) != 0 )
  {
LABEL_20:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6414);
LABEL_21:
    ExRaiseAccessViolation();
  }
  if ( (int)RtlStringCchCopyNW((char *)v27, 9LL, v18, (unsigned __int64)(unsigned __int16)v17 >> 1) >= 0 )
  {
    if ( a4 )
    {
      memset(v25, 0, sizeof(v25));
      RtlCopyFromUser(v25, a4, 0x318uLL);
      v20 = v26;
      v21 = v25;
      v22 = 6LL;
      do
      {
        *v20 = *v21;
        v20[1] = v21[1];
        v20[2] = v21[2];
        v20[3] = v21[3];
        v20[4] = v21[4];
        v20[5] = v21[5];
        v20[6] = v21[6];
        v20 += 8;
        *(v20 - 1) = v21[7];
        v21 += 8;
        --v22;
      }
      while ( v22 );
      *v20 = *v21;
      *((_QWORD *)v20 + 2) = *((_QWORD *)v21 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v26,
                       v27,
                       a7,
                       a8);
  }
LABEL_23:
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardLayout;
}
