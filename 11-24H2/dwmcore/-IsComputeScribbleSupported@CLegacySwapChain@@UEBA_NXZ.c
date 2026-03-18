/*
 * XREFs of ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x180219E40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsComputeScribbleSupported@CScribbleSwapChain@@UEBA_NXZ @ 0x180219F10 (-IsComputeScribbleSupported@CScribbleSwapChain@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacySwapChain::IsComputeScribbleSupported(CLegacySwapChain *this)
{
  char *v2; // rdi
  __int64 v4; // r8

  if ( !*((_QWORD *)this + 5) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
      return 0;
    v4 = 11LL;
LABEL_16:
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v4);
    return 0;
  }
  v2 = (char *)this - 232;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 29) + 56LL))((char *)this - 232)
    || *((_DWORD *)this + 62) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
      return 0;
    v4 = 4LL;
    goto LABEL_16;
  }
  if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v2 + 88LL))(v2) < 2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
      return 0;
    v4 = 13LL;
    goto LABEL_16;
  }
  if ( !(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 296LL))(v2) )
    return CScribbleSwapChain::IsComputeScribbleSupported(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v4 = 22LL;
    goto LABEL_16;
  }
  return 0;
}
