/*
 * XREFs of NtUserResetDblClk @ 0x14029BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserResetDblClk()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v2 = *((_QWORD *)PtiCurrent(v1, v0) + 59);
  *(_DWORD *)(v2 + 168) = 0;
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
