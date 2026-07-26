/*
 * XREFs of ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x14006C6E0
 * Callers:
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x140163740 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeRoundedAverage(__int64 a1, unsigned __int64 a2)
{
  if ( a2 <= 1 )
    return a1;
  else
    return (a1 + (a2 >> 1)) / a2;
}
