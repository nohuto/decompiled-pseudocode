/*
 * XREFs of ?GetTooltipShowDelay@@YAIXZ @ 0x1C013CACC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTooltipShowDelay(__int64 a1)
{
  return (unsigned int)(3 * *(_DWORD *)(SGDGetUserSessionState(a1) + 14360));
}
