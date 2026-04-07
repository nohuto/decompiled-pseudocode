/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180035864
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180035CF4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18010609C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  int v1; // eax
  int v2; // eax

  if ( *((_QWORD *)this + 32) && *((_QWORD *)this + 33) && *((float *)this + 80) > 0.0 )
  {
    v2 = *((_DWORD *)this + 51);
    if ( (v2 & 8) == 0 || *((_DWORD *)this + 53) )
    {
      *((_DWORD *)this + 53) = 0;
      *((_DWORD *)this + 51) = v2 | 8;
      (*(void (__fastcall **)(CWindowBorder *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
    }
  }
  else
  {
    v1 = *((_DWORD *)this + 51);
    if ( (v1 & 8) != 0 )
    {
      *((_DWORD *)this + 51) = v1 & 0xFFFFFFF7;
      (*(void (__fastcall **)(CWindowBorder *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
    }
  }
}
