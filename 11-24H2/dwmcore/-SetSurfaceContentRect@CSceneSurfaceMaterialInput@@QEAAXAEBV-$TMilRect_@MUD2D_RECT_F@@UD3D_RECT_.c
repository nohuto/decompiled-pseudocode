/*
 * XREFs of ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A612C
 * Callers:
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x1802A5F94 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180022BF0 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSceneSurfaceMaterialInput::SetSurfaceContentRect(const struct D2D_RECT_F *a1, float *a2)
{
  char result; // al
  _OWORD *v3; // rdx
  __int64 *v4; // r10
  _OWORD *v5; // r11
  __int64 v6; // rax

  result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, a1 + 6);
  if ( !result )
  {
    v6 = *v4;
    *v3 = *v5;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v6 + 80))(v4, 0LL, v4);
  }
  return result;
}
