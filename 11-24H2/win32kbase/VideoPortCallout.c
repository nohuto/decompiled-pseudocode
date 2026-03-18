/*
 * XREFs of VideoPortCallout @ 0x1401237F0
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1401237B0 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x140128208 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     CSTRemove @ 0x1401AD6F0 (CSTRemove.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 CurrentProcessWin32Process; // rax
  int *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp-18h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+90h] [rbp+30h] BYREF

  v14 = a1;
  v17 = 0;
  Buffer = (PVOID)CreateKernelEvent(SynchronizationEvent);
  if ( Buffer )
  {
    if ( *(_BYTE *)(v14 + 31)
      && (!*(_DWORD *)(W32GetUserGdiSessionState(v2) + 32) || !*(_QWORD *)(W32GetUserSessionState(v2) + 71544)) )
    {
      Object[0] = *(PVOID *)(W32GetUserSessionState(v2) + 68640);
      Object[1] = *(PVOID *)(W32GetUserSessionState(Object[0]) + 68648);
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v2) + 32) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v3) + 71544) )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState(v5);
        v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               UserSessionState,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v7;
        if ( v7 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
        }
        v4 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v14, &v17);
        UserSessionSwitchLeaveCritWithNonPaged();
        if ( v4 < 0 )
        {
          if ( v17 )
          {
            v9 = (_QWORD *)W32GetUserSessionState(v8);
            v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v9,
                    1LL,
                    0LL,
                    _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v9[3] = v10;
            if ( v10 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 0x1000000) != 0
                && *(char *)(v10 + 1360) >= 0 )
              {
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
                if ( CurrentProcessWin32Process )
                {
                  if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
                  {
                    while ( 1 )
                    {
                      v13 = v9[2471];
                      if ( !v13 )
                        break;
                      v9[2471] = *(_QWORD *)(v13 + 16);
                      v12 = *(int **)v13;
                      *(_QWORD *)(v13 + 16) = 0LL;
                      if ( !v12[2] )
                      {
                        v17 = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
                      }
                      HMUnlockObject(*(int **)v13);
                    }
                    DestroyDeferredUnlockObjectAssignmentList(v9 + 2475);
                    DestroyDeferredUnlockObjectAssignmentList(v9 + 2473);
                  }
                }
              }
            }
            CSTRemove(4LL, &v14);
            UserSessionSwitchLeaveCritWithNonPaged();
          }
        }
        else
        {
          KeWaitForSingleObject(Buffer, WrUserRequest, 0, 0, 0LL);
          v4 = *(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        v4 = -1073741816;
      }
    }
    else
    {
      v4 = -2143420409;
    }
    GreDeleteFastMutex((char *)Buffer);
    *(_DWORD *)(a1 + 24) = v4;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = -1073741801;
  }
}
