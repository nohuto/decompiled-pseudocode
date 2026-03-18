/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1400A2700
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall AccessTimeOutReset(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 20960) )
    ApiSetEditionKillAccessibilityTimer();
  if ( (*(_DWORD *)(W32GetUserSessionState(v1) + 20948) & 1) != 0 )
    *(_QWORD *)(UserSessionState + 20960) = ApiSetEditionSetAccessibilityTimer(
                                              0LL,
                                              *(unsigned int *)(UserSessionState + 20952),
                                              xxxAccessTimeOutTimer);
}
