/*
 * XREFs of PopPowerRequestStatsCreate @ 0x140A1982C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopPowerRequestStatsFreeId @ 0x140A1989C (PopPowerRequestStatsFreeId.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A198D4 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A19B2C (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 */

void __fastcall PopPowerRequestStatsCreate(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  P = 0LL;
  if ( PopPowerRequestSleepstudyHandle )
  {
    if ( (int)PopPowerRequestStatsGetIdForRequest(a1, &P) >= 0
      && (int)PopPowerRequestStatsCreateSleepstudyBlocker(P, 7LL, &v3) >= 0 )
    {
      *(_QWORD *)(a1 + 160) = v3;
    }
    if ( P )
      PopPowerRequestStatsFreeId(P);
  }
}
