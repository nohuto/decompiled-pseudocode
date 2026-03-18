/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x14019ED60
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x140133170 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void __fastcall MKShowMouseCursor(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = *(unsigned int *)(W32GetUserSessionState(a1) + 68704);
  if ( (v1 & 1) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    *(_DWORD *)(UserSessionState + 68704) |= 1u;
    v4 = W32GetUserSessionState(v3);
    *(_DWORD *)(v4 + 67056) |= 0x1000u;
    v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
    *(_DWORD *)(v6 + 1972) = 1;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 19928) + 2068LL) = 2;
    SetGlobalCursorLevel(0LL);
  }
}
