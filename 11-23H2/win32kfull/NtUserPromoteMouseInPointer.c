/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01D8250
 * Callers:
 *     <none>
 * Callees:
 *     IsMiPEnabledForThread @ 0x1C007FB08 (IsMiPEnabledForThread.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  _DWORD *v5; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( IsMiPEnabledForThread(gptiCurrent) && (v5 = *(_DWORD **)(v1 + 1352)) != 0LL )
  {
    *v5 |= 2u;
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v4;
}
