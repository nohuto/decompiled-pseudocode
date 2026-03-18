/*
 * XREFs of FreeAllSpbs @ 0x140097C40
 * Callers:
 *     xxxRealizePalette @ 0x1401D6620 (xxxRealizePalette.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 * Callees:
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 */

__int64 __fastcall FreeAllSpbs(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rax
  __int64 v6; // rdx

  while ( 1 )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008);
    if ( !*(_QWORD *)(v3 + 40) )
      break;
    UserSessionState = W32GetUserSessionState(v3, v2);
    FreeSpb(*(char **)(*(_QWORD *)(UserSessionState + 57008) + 40LL), v6);
  }
  result = W32GetUserSessionState(v3, v2);
  *(_QWORD *)(*(_QWORD *)(result + 57008) + 40LL) = 0LL;
  return result;
}
