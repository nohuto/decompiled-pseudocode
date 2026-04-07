/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18002EF74
 * Callers:
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  if ( *((_QWORD *)this + 26) && *((_QWORD *)this + 27) && *((float *)this + 68) > 0.0 )
    CVisual::SetBorderMode((__int64 *)this, 0);
  else
    CVisual::ClearBorderMode(this);
}
