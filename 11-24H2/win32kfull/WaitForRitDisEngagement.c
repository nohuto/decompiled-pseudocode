/*
 * XREFs of WaitForRitDisEngagement @ 0x1401E0FC0
 * Callers:
 *     EditionActivateMitInput @ 0x14023FBB0 (EditionActivateMitInput.c)
 * Callees:
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 *     DitTakeOver @ 0x1401E11A4 (DitTakeOver.c)
 *     WaitForRitToCompleteLastCommand @ 0x1401E1228 (WaitForRitToCompleteLastCommand.c)
 */

__int64 WaitForRitDisEngagement()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL);
  WaitForRitToCompleteLastCommand();
  if ( !*(_DWORD *)(W32GetUserSessionState(v1, v0) + 18800) )
    return 0LL;
  if ( !(unsigned int)DitTakeOver() )
  {
    *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18800) = 0;
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
    return 0LL;
  }
  WakeRIT(128LL);
  WaitForRitToCompleteLastCommand();
  _InterlockedAnd((volatile signed __int32 *)(W32GetUserSessionState(v6, v5) + 18788), 0xFFFFFFFE);
  _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v8, v7) + 16340), 1);
  return 1LL;
}
