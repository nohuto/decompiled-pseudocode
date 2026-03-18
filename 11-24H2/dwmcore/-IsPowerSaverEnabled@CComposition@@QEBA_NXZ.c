/*
 * XREFs of ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x180230080 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x180234630 (-BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z.c)
 *     ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1802346D0 (-BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18025C59C (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CComposition::IsPowerSaverEnabled(CComposition *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 6471) || *((_BYTE *)this + 6472) )
    return 1;
  return result;
}
