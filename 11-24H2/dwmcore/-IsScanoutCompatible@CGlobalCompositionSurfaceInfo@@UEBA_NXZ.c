/*
 * XREFs of ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18005E940
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18005E784 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsScanoutCompatible(CGlobalCompositionSurfaceInfo *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 36) == 3 && !*((_BYTE *)this + 300) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &CompSurfInfo_ScanoutIncompatible,
        0LL);
    return 0;
  }
  return result;
}
