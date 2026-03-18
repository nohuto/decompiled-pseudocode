/*
 * XREFs of _EnableSessionForMMCSS @ 0x1401E1088
 * Callers:
 *     EditionEnableSessionForMMCSS @ 0x1401E1070 (EditionEnableSessionForMMCSS.c)
 * Callees:
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( (_DWORD)a1 )
    _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(a1, a2) + 19928), 0x1000u);
  else
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(a1, a2) + 19928), 0xFFFFEFFF);
  WakeRIT(4LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  KeSetEvent(*(PRKEVENT *)(UserSessionState + 63232), 1, 0);
  return 1LL;
}
