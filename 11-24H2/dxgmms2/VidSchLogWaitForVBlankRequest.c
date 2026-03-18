/*
 * XREFs of VidSchLogWaitForVBlankRequest @ 0x1400F6460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchLogWaitForVBlankRequest(__int64 a1, __int64 a2)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a2 + 2816));
  return 0LL;
}
