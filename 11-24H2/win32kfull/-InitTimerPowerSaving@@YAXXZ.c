/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x14021B2EC
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void __fastcall InitTimerPowerSaving(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse", 43200000LL, UserSessionState + 62724);
  v5 = W32GetUserSessionState(v4, v3);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing", 43200000LL, v5 + 62728);
}
