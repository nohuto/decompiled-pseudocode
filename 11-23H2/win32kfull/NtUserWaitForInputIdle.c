/*
 * XREFs of NtUserWaitForInputIdle @ 0x1C0096600
 * Callers:
 *     <none>
 * Callees:
 *     xxxWaitForInputIdle @ 0x1C0096660 (xxxWaitForInputIdle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserWaitForInputIdle(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 0LL);
  if ( a3 )
  {
    UserSetLastError(87LL);
    v8 = -1;
  }
  else
  {
    v8 = xxxWaitForInputIdle(a1, a2);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v8;
}
