/*
 * XREFs of NtUserCreateInputContext @ 0x1C01CD760
 * Callers:
 *     <none>
 * Callees:
 *     CreateInputContext @ 0x1C00759D0 (CreateInputContext.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *InputContext; // rax

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) != 0 )
  {
    v8 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1, gpsi, v2, v3);
      if ( InputContext )
        v8 = *InputContext;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(120);
    v8 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
