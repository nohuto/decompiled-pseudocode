/*
 * XREFs of NtUserEnableMouseInPointerForThread @ 0x1C009F2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserEnableMouseInPointerForThread()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(gptiCurrent + 1272LL) |= 0x2000000u;
  UserSessionSwitchLeaveCrit(gptiCurrent, v0, v1, v2);
  return 1LL;
}
