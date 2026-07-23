/*
 * XREFs of PopPowerRequestStatsCreate @ 0x140A18B2C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopPowerRequestStatsFreeId @ 0x140A18B9C (PopPowerRequestStatsFreeId.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A18E00 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
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
