/*
 * XREFs of NtUserSetThreadDesktop @ 0x140106880
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // edi
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  BOOL v7; // ebx
  __int64 v9; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 1;
  v4 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v4 < 0 )
  {
    if ( a1 || (v9 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40), PsGetCurrentProcess() != v9) )
    {
      v7 = 0;
      goto LABEL_4;
    }
    v4 = xxxSetThreadDesktop(0LL, 0LL);
    v6 = v4;
  }
  else
  {
    v4 = xxxSetThreadDesktop(a1, Object);
    ObfDereferenceObject(Object);
    v6 = v4;
  }
  v7 = v6 >= 0;
  if ( v4 < 0 )
LABEL_4:
    SetLastNtError(v4);
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
