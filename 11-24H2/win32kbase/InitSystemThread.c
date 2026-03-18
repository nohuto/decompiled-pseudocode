/*
 * XREFs of InitSystemThread @ 0x1401A7780
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     InitClientInfo @ 0x14015DD28 (InitClientInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  PsGetThreadProcess(KeGetCurrentThread());
  UserSessionState = (_QWORD *)W32GetUserSessionState(v2);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v6 = 0;
  UserSessionState[3] = v4;
  if ( v4 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v7 = PtiCurrent(v5);
  *((_QWORD *)v7 + 65) = Win32AllocPoolWithQuotaZInitImpl(v8, 0x130uLL, 0x69637355u);
  if ( *((_QWORD *)v7 + 65) )
  {
    _InterlockedAnd((volatile signed __int32 *)v7 + 132, 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)v7 + 132, 4u);
    if ( (unsigned int)InitClientInfo((__int64)v7, v9, v10, v11) )
    {
      if ( a1 )
      {
        v12 = (char *)*((_QWORD *)v7 + 67);
        if ( v12 )
          GreDeleteFastMutex(v12);
        v13 = Win32AllocPoolWithQuotaZInitImpl((__int64)v12, *(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *((_QWORD *)v7 + 67) = v13;
        if ( v13 )
        {
          *(_QWORD *)(v13 + 8) = v13 + 16;
          memmove(*(void **)(*((_QWORD *)v7 + 67) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v7 + 67) + 8LL) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*((_QWORD *)v7 + 67) + 2LL) = *(_WORD *)a1 + 2;
          **((_WORD **)v7 + 67) = *(_WORD *)a1;
        }
      }
      v14 = *((_QWORD *)v7 + 58);
      if ( v14 && (*(_DWORD *)(v14 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 203);
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
