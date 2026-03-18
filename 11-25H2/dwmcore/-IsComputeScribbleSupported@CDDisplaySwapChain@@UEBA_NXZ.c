/*
 * XREFs of ?IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ @ 0x1802C89E0
 * Callers:
 *     ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180233240 (-IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 */

char __fastcall CDDisplaySwapChain::IsComputeScribbleSupported(CDDisplaySwapChain *this)
{
  __int64 v1; // r8

  if ( *((_QWORD *)this + 27) == *((_QWORD *)this + 26) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v1 = 11LL;
LABEL_13:
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        v1);
      return 0;
    }
    return 0;
  }
  if ( *((_BYTE *)this - 132) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v1 = 4LL;
      goto LABEL_13;
    }
    return 0;
  }
  if ( *((_DWORD *)this + 64) < 2u )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v1 = 13LL;
      goto LABEL_13;
    }
    return 0;
  }
  if ( *((_QWORD *)this - 10) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v1 = 22LL;
      goto LABEL_13;
    }
    return 0;
  }
  return CScribbleSwapChain::IsComputeScribbleSupported(this);
}
