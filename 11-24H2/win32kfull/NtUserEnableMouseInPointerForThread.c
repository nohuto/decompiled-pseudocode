/*
 * XREFs of NtUserEnableMouseInPointerForThread @ 0x14020E050
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserEnableMouseInPointerForThread()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = PtiCurrent(v1, v0);
  *((_QWORD *)v2 + 170) |= 0x2000000uLL;
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
