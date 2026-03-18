/*
 * XREFs of ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180233240
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800C95D0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 */

bool __fastcall CDDisplayRenderTarget::IsComputeScribbleSupported(CDDisplayRenderTarget *this)
{
  __int64 v2; // r8

  if ( !*((_QWORD *)this + 6) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v2 = 10LL;
LABEL_7:
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        v2);
      return 0;
    }
    return 0;
  }
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 64) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v2 = 1LL;
      goto LABEL_7;
    }
    return 0;
  }
  return CDDisplaySwapChain::IsComputeScribbleSupported((CDDisplaySwapChain *)(*((_QWORD *)this + 6) + 256LL));
}
