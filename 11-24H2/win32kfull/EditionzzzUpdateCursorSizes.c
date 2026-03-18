/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x14021A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void __fastcall EditionzzzUpdateCursorSizes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36400) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(UserSessionState + 36400));
  }
}
