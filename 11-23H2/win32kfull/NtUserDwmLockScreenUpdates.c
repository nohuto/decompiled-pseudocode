/*
 * XREFs of NtUserDwmLockScreenUpdates @ 0x1C00A0990
 * Callers:
 *     <none>
 * Callees:
 *     _DwmLockScreenUpdates @ 0x1C00A09D0 (_DwmLockScreenUpdates.c)
 */

__int64 __fastcall NtUserDwmLockScreenUpdates(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = DwmLockScreenUpdates(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
