/*
 * XREFs of PopPowerRequestStatsCreate @ 0x140A24B3C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopPowerRequestStatsFreeId @ 0x140A24BAC (PopPowerRequestStatsFreeId.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A24BE4 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A24E10 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
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
