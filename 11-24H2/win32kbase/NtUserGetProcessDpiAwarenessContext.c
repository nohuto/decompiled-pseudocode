/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x140046390
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  PVOID v3; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  NTSTATUS v10; // eax
  int ProcessSessionId; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  v3 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
LABEL_3:
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v6 = PsGetCurrentProcessWin32Process();
    v8 = v6;
    if ( v6 )
    {
      v7 = -(__int64)(*(_QWORD *)v6 != 0LL);
      v8 = v7 & v6;
    }
    if ( v5 == v8 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    }
    else if ( v5 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v5 + 268);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_9;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v3 = Object;
  if ( v10 < 0 )
  {
    UserSetLastError(87);
    goto LABEL_11;
  }
  ProcessSessionId = PsGetProcessSessionIdEx(Object);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v3);
    goto LABEL_3;
  }
  UserSetLastError(87);
LABEL_9:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged();
  return CurrentThreadDpiAwarenessContext;
}
