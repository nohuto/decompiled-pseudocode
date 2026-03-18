/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01D08D0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  _DWORD *v4; // rsi
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rax
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = (void *)(int)a1;
  v6 = 0;
  Object = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process && (v12 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process) != 0 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = *(_DWORD *)(v12 + 936);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = 0;
      v6 = 1;
    }
    else
    {
      UserSetLastError(5);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
