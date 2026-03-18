/*
 * XREFs of NtUserResetDblClk @ 0x1C01D9600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserResetDblClk()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 168LL) = 0;
  UserSessionSwitchLeaveCrit(gptiCurrent, v0, v1, v2);
  return 1LL;
}
