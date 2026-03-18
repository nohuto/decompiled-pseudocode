/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x140142D00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle)
{
  __int64 v2; // rcx
  PVOID v3; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx
  NTSTATUS v8; // eax
  int ProcessSessionId; // ebx
  int v10; // ecx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  v3 = 0LL;
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v3 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError(87);
      v6 = 0;
      goto LABEL_8;
    }
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      v10 = 87;
      goto LABEL_16;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v3);
    v5 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( v5 )
  {
    v6 = *(unsigned __int16 *)(v5 + 272);
    goto LABEL_6;
  }
  v10 = 5023;
LABEL_16:
  UserSetLastError(v10);
  v6 = 0;
LABEL_6:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_8:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
