/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x14014D7E0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1401F55A0 (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x140133170 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void __fastcall MKHideMouseCursor(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (*(_DWORD *)(W32GetUserSessionState(a1) + 67056) & 0x1000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    *(_DWORD *)(UserSessionState + 67056) &= ~0x1000u;
    v4 = W32GetUserSessionState(v3);
    *(_DWORD *)(v4 + 68704) &= ~1u;
    v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
    *(_DWORD *)(v6 + 1972) = 0;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 19928) + 2068LL) = 0;
    SetGlobalCursorLevel(0xFFFFFFFFLL);
  }
}
