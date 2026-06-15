/*
 * XREFs of ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180043264
 * Callers:
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x1800400FC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 *     _lambda_d796dcb77f0f197a5763ab5c6551444f_::operator() @ 0x18004058C (_lambda_d796dcb77f0f197a5763ab5c6551444f_--operator().c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180042050 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180042BF8 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x180042C84 (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall TsSessionRequiresReevaluationOfAudioInStandby(const struct TSSession *a1)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 253) || g_bLowPowerEpoch || g_PoBlockAudioPlayback || !*((_DWORD *)a1 + 254) || g_bApmSuspended )
    return 1;
  return result;
}
