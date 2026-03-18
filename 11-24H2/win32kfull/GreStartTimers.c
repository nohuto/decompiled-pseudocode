/*
 * XREFs of GreStartTimers @ 0x14021F19C
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     UserSetTimer @ 0x1402DC9AC (UserSetTimer.c)
 */

__int64 GreStartTimers()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rdi

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    UserEnterUserCritSec(v1, v0, v2);
  }
  result = W32GetSessionState(v1, v0);
  v5 = *(_QWORD *)(result + 96);
  if ( *(_QWORD *)(v5 + 4720) != -1LL )
  {
    result = UserSetTimer();
    *(_QWORD *)(v5 + 4720) = result;
  }
  if ( v3 )
    return UserLeaveUserCritSec();
  return result;
}
