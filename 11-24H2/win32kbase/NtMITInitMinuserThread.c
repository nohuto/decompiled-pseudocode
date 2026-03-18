/*
 * XREFs of NtMITInitMinuserThread @ 0x1401B82F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  char v8; // al
  int **v9; // rdi
  struct tagTHREADINFO *v10; // rdi
  int v11; // edx
  int v12; // esi
  int v13; // edx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Handle);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v5 = 0;
  if ( v3 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v3 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( !CurrentProcessWin32Process )
        goto LABEL_16;
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( !v7 )
        goto LABEL_16;
      v8 = *(_BYTE *)(v7 + 1208);
      if ( v8 != 1 )
        goto LABEL_16;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (int **)UserSessionState[2471];
        if ( !v9 )
          break;
        UserSessionState[2471] = v9[2];
        v9[2] = 0LL;
        if ( !(*v9)[2] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
        HMUnlockObject(*v9);
      }
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
  }
LABEL_16:
  v10 = PtiCurrent(v4);
  if ( (*((_DWORD *)v10 + 340) & 0x1000000) != 0 )
  {
    v5 = 1;
  }
  else
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v12 >= 0 )
    {
      v12 = ProtectHandle(Handle, v11, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v12 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *((_QWORD *)v10 + 96) )
        {
          ProtectHandle(*((void **)v10 + 95), v13, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*((HANDLE *)v10 + 95), 1);
          ObfDereferenceObject(*((PVOID *)v10 + 96));
        }
        *((_QWORD *)v10 + 95) = Handle;
        *((_QWORD *)v10 + 96) = Object;
        _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x40u);
        *((_QWORD *)v10 + 170) |= 0x1000000uLL;
      }
    }
    LOBYTE(v5) = v12 >= 0;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
