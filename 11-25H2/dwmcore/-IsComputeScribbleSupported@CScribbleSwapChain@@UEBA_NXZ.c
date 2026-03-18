/*
 * XREFs of ?IsComputeScribbleSupported@CScribbleSwapChain@@UEBA_NXZ @ 0x180225BA0
 * Callers:
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x180225AD0 (-IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ @ 0x1802C89E0 (-IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 */

char __fastcall CScribbleSwapChain::IsComputeScribbleSupported(CScribbleSwapChain *this)
{
  if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this + 4) )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      12LL);
  return 0;
}
