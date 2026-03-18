/*
 * XREFs of ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180167ED8
 * Callers:
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18006A2A0 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18016823C (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D2CA0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowCaster::GetCasterBounds(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 88);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( v4[4] >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( *((_BYTE *)v3 + 25) || a2 < v3[4] )
    v3 = v2;
  return (__int64)v3 + 60;
}
