/*
 * XREFs of NtUserGetIMEShowStatus @ 0x1401C78C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetIMEShowStatus @ 0x1401C78FC (_GetIMEShowStatus.c)
 */

__int64 NtUserGetIMEShowStatus()
{
  __int64 IMEShowStatus; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  IMEShowStatus = (int)GetIMEShowStatus();
  UserSessionSwitchLeaveCrit(v1);
  return IMEShowStatus;
}
