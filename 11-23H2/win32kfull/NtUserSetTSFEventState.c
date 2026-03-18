/*
 * XREFs of NtUserSetTSFEventState @ 0x1C01DC4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetTSFEventState(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 24LL) = a1;
  UserSessionSwitchLeaveCrit(v2, gptiCurrent, v3, v4);
  return 1LL;
}
