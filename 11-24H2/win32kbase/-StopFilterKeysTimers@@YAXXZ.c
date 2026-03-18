/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1401F54F0
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A3A84 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall StopFilterKeysTimers(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 20552);
  if ( v3 )
  {
    ApiSetEditionKillAccessibilityTimer(v1, v3);
    *(_QWORD *)(UserSessionState + 20552) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v1) + 20560) )
  {
    v5 = W32GetUserSessionState(v4);
    ApiSetEditionKillAccessibilityTimer(v6, *(_QWORD *)(v5 + 20560));
    *(_QWORD *)(W32GetUserSessionState(v7) + 20560) = 0LL;
  }
  *(_BYTE *)(W32GetUserSessionState(v4) + 21904) = 0;
  *(_BYTE *)(W32GetUserSessionState(v8) + 21900) = 0;
}
