/*
 * XREFs of ?GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10 (-GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::GetBrushParameters(
        CCompositionMagnifierBrush *this,
        struct CBrushDrawListGenerator *a2,
        double a3)
{
  int LayeredBrushParameters; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 108) || *((_BYTE *)this + 109) || *((_BYTE *)this + 205) )
  {
    LayeredBrushParameters = CCompositionMagnifierBrush::GetLayeredBrushParameters(this, a2);
    if ( LayeredBrushParameters < 0 )
    {
      v4 = 201LL;
      goto LABEL_8;
    }
  }
  else
  {
    LayeredBrushParameters = CCompositionMagnifierBrush::GetBVIBrushParameters(this, (CDrawingContext **)a2, a3);
    if ( LayeredBrushParameters < 0 )
    {
      v4 = 205LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)LayeredBrushParameters);
      return (unsigned int)LayeredBrushParameters;
    }
  }
  return 0LL;
}
