/*
 * XREFs of ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802240DC
 * Callers:
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18022FA30 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall CTreeData::GetSuperWetInkClip(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rax
  __int128 v3; // xmm0
  __int128 *result; // rax

  v2 = *(__int128 **)(a1 + 272);
  if ( v2 )
    v3 = *v2;
  else
    v3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  result = a2;
  *a2 = v3;
  return result;
}
