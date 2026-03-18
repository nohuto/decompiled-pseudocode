/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x14029A390
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x14009B4E8 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _DWORD *v5; // rax

  EnterCrit(0LL, 0LL);
  v2 = PtiCurrent(v1, v0);
  v4 = 0LL;
  if ( IsMiPEnabledForThread((__int64)v2) && (v5 = *(_DWORD **)(v3 + 1512)) != 0LL )
  {
    *v5 |= 2u;
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
