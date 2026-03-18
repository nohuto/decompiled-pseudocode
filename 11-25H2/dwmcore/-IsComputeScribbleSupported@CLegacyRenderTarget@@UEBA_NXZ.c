/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x18022BA60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800C95D0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  __int64 v3; // r8

  if ( *((_QWORD *)this + 5) )
  {
    if ( !(unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 56) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 256LL) + 24LL))(*((_QWORD *)this + 5) + 256LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v3 = 1LL;
      goto LABEL_8;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v3 = 10LL;
LABEL_8:
    McTemplateU0t_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v3);
  }
  return 0;
}
