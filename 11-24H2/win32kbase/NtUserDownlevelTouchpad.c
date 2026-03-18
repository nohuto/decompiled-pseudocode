/*
 * XREFs of NtUserDownlevelTouchpad @ 0x140121600
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D32E0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, void *a2)
{
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v6; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  ULONG v9; // ecx
  __int64 *v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v11, "DownlevelTouchpad", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  v7 = 0;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v13 = 0LL;
  if ( !a1
    || HIWORD(a1)
    || (unsigned __int16)a1 == 1
    || (v12 = 0LL, RtlCopyFromUser(&v12, a2, 8uLL), v13 = v12, (unsigned int)v12 > 2) )
  {
    v9 = 87;
    goto LABEL_11;
  }
  v8 = CPTPProcessor::xxxDownlevelInput((unsigned __int16)a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v13);
  if ( v8 < 0 )
  {
    v9 = RtlNtStatusToDosError(v8);
LABEL_11:
    UserSetLastError(v9);
    goto LABEL_12;
  }
  v7 = 1;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v11);
  return v7;
}
