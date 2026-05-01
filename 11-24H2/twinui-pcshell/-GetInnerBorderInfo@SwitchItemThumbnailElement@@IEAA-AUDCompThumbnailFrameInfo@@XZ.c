/*
 * XREFs of ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D5090
 * Callers:
 *     ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x1804D4C90 (-CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbn.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D5880 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801A7D60 (-IsHighContrast@@YAHXZ.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804D0C38 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetInnerBorderInfo(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx

  *(_QWORD *)a2 = *(unsigned int *)(a1 + 408);
  *(_DWORD *)(a2 + 8) = 1065353216;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( v3 )
  {
    v4 = 179;
LABEL_5:
    *(_DWORD *)(a2 + 4) = CImmersiveColor::GetColor(v4);
    return a2;
  }
  if ( (unsigned int)IsHighContrast() )
  {
    v4 = 181;
    goto LABEL_5;
  }
  return a2;
}
