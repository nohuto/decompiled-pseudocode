/*
 * XREFs of _GetThreadDesktop @ 0x140194510
 * Callers:
 *     EditionGetThreadDesktopEntryPoint @ 0x1401944D0 (EditionGetThreadDesktopEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE result; // rax
  PRKPROCESS *v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  Object = 0LL;
  v4 = v2;
  Handle = 0LL;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 632);
    Handle = result;
    v6 = *(PRKPROCESS **)(v4 + 464);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v6 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( !result )
    return result;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( v6 == (PRKPROCESS *)CurrentProcessWin32Process )
    goto LABEL_7;
  HandleInformation = 0LL;
  KeAttachProcess(*v6);
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
  v10 = Object;
  v11 = v9;
  KeDetachProcess();
  if ( v11 >= 0
    && (CurrentProcess = PsGetCurrentProcess(v12),
        (unsigned __int8)ObFindHandleForObject(CurrentProcess, v10, 0LL, &HandleInformation, &Handle))
    || (v8 = 0LL, Handle = 0LL, v11 >= 0) )
  {
    ObfDereferenceObject(v10);
LABEL_7:
    v8 = Handle;
  }
  if ( !v8 )
  {
    UserSetLastError(5);
    return Handle;
  }
  if ( (unsigned int)SetHandleFlag(v8, 1LL, 1LL) )
    return Handle;
  return 0LL;
}
