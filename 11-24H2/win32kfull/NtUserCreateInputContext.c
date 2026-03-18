/*
 * XREFs of NtUserCreateInputContext @ 0x1401B0EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     CreateInputContext @ 0x1401B0F80 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *InputContext; // rax
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v3, v2) + 19928) & 4) != 0 )
  {
    v4 = 0LL;
    if ( a1 )
    {
      InputContext = (__int64 *)CreateInputContext(a1);
      if ( InputContext )
        v4 = *InputContext;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(120);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
