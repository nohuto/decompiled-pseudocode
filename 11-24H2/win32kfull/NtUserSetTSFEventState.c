/*
 * XREFs of NtUserSetTSFEventState @ 0x14029EC20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetTSFEventState(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*((_QWORD *)PtiCurrent(v3, v2) + 61) + 24LL) = a1;
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
