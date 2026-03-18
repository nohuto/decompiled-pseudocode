/*
 * XREFs of NtUserWaitForInputIdle @ 0x1401F4820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 */

__int64 __fastcall NtUserWaitForInputIdle(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 0LL);
  if ( a3 )
  {
    UserSetLastError(87);
    v7 = -1;
  }
  else
  {
    v7 = xxxWaitForInputIdle(a1, a2);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
