/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C0075FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  PVOID v5; // rsi
  __int64 v6; // rcx
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // ecx
  ULONG64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v22; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v5 = 0LL;
  v22 = 0LL;
  EnterSharedCrit(Handle, a2, a3);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v12 & CurrentProcessWin32Process;
    }
    v7 = 1;
  }
  else
  {
    Object = 0LL;
    v7 = 1;
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v5 = Object;
    v22 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError(87LL);
      v7 = 0;
      goto LABEL_15;
    }
    v10 = *(_DWORD *)SGDGetUserSessionState(v9);
    if ( (unsigned int)PsGetProcessSessionId(v5) != v10 )
    {
      v19 = 87LL;
      goto LABEL_22;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v5);
    v14 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v14 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v14 && (*(_DWORD *)(v14 + 12) & 0x21) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 824);
    HIDWORD(v20) = (v15 & 0x40) != 0;
    if ( (v15 & 0x100) != 0 )
      HIDWORD(v20) = ((v15 & 0x40) != 0) | 2;
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    LODWORD(v20) = (*(_DWORD *)(v14 + 824) >> 4) & 3;
    *v3 = v20;
    goto LABEL_13;
  }
  v19 = 1471LL;
LABEL_22:
  UserSetLastError(v19);
  v7 = 0;
LABEL_13:
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_15:
  UserSessionSwitchLeaveCrit(v16, v12, v14, v13);
  return v7;
}
