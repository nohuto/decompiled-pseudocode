/*
 * XREFs of NtUserGetIMEShowStatus @ 0x1C0089950
 * Callers:
 *     <none>
 * Callees:
 *     _GetIMEShowStatus @ 0x1C008998C (_GetIMEShowStatus.c)
 */

__int64 NtUserGetIMEShowStatus()
{
  __int64 IMEShowStatus; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  IMEShowStatus = (int)GetIMEShowStatus();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return IMEShowStatus;
}
