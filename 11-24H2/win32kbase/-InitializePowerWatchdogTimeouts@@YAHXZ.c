/*
 * XREFs of ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14013FE9C
 * Callers:
 *     InitializePowerRequestList @ 0x1402E5290 (InitializePowerRequestList.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x14013FF20 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140140064 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 */

__int64 InitializePowerWatchdogTimeouts(void)
{
  __int64 v0; // rcx
  const unsigned __int16 *v1; // rcx
  __int64 UserSessionState; // rsi
  unsigned __int64 v3; // rdi
  unsigned int *v4; // rbx
  const unsigned __int16 *v5; // rdx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  InitializePowerWatchdogTimeoutDefaults();
  UserSessionState = W32GetUserSessionState(v0);
  v3 = 0LL;
  v4 = (unsigned int *)(UserSessionState + 384);
  while ( v3 < 5 )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)v4 - 1);
    v7 = 0;
    if ( GetConfigUlong(v1, v5, &v7) == 1 )
    {
      *v4 = v7;
    }
    else if ( *(_BYTE *)(UserSessionState + 528) != 1 )
    {
      return 0LL;
    }
    ++v3;
    v4 += 6;
  }
  return 1LL;
}
