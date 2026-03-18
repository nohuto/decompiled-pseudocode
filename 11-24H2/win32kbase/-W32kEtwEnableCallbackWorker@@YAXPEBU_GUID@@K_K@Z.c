/*
 * XREFs of ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401B38C4 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 *     _lambda_e8f2675e78c62a600627e1f585dad9bf_::operator() @ 0x1401B3E5C (_lambda_e8f2675e78c62a600627e1f585dad9bf_--operator().c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14011EF48 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 */

void __fastcall W32kEtwEnableCallbackWorker(const struct _GUID *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v6; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _BYTE v16[256]; // [rsp+20h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  if ( a2 <= 1 )
  {
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = a3;
    if ( (a3 & 0x8000000000040000uLL) == 0
      || (unsigned __int8)(byte_14029ADC8 - 1) <= 2u
      || (qword_14029ADB0 & 0x8000000000040000uLL) == 0
      || (qword_14029ADB8 & 0x8000000000040000uLL) != qword_14029ADB8 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v6) + 36408) )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState(v6);
        v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               UserSessionState,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v8;
        v9 = v8;
        if ( v8 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x1000000) != 0
            && *(char *)(v8 + 1360) >= 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
              {
                while ( 1 )
                {
                  v12 = UserSessionState[2471];
                  if ( !v12 )
                    break;
                  UserSessionState[2471] = *(_QWORD *)(v12 + 16);
                  v11 = *(int **)v12;
                  *(_QWORD *)(v12 + 16) = 0LL;
                  if ( !v11[2] )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
                  HMUnlockObject(*(int **)v12);
                }
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v9) + 36408) = 0;
        UserSessionSwitchLeaveCritWithNonPaged();
      }
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback(v6);
    v14 = (_QWORD *)W32GetUserSessionState(v13);
    v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v14,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v14[3] = v15;
    if ( v15 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v15) )
    {
      DestroySharedUserCritDeferredUnlockList(v14 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v14 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v14 + 2473);
    }
    CitEtwEnableCallback(a1, a3);
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
}
