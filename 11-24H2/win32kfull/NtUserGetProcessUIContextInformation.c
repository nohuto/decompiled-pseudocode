/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1402429D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, void *a2)
{
  PVOID v4; // rsi
  int v5; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  int ProcessSessionId; // ebx
  int v12; // ecx
  __int64 ProcessWin32Process; // rax
  BOOL v14; // ecx
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 Src; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v19; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v19 = 0LL;
  Src = 0LL;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    v19 = Object;
    if ( v9 < 0 )
    {
      UserSetLastError(87);
      v5 = 0;
      goto LABEL_21;
    }
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      v12 = 87;
      goto LABEL_18;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v4);
    v8 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v8 && (*(_DWORD *)(v8 + 12) & 0x21) != 0 )
  {
    Src = (*(_DWORD *)(v8 + 816) >> 4) & 3LL;
    v14 = (*(_BYTE *)(v8 + 816) & 0x40) != 0;
    HIDWORD(Src) = v14;
    if ( (*(_DWORD *)(v8 + 816) & 0x100LL) != 0 )
      HIDWORD(Src) = v14 | 2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 8uLL);
    goto LABEL_19;
  }
  v12 = 1471;
LABEL_18:
  UserSetLastError(v12);
  v5 = 0;
LABEL_19:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_21:
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
