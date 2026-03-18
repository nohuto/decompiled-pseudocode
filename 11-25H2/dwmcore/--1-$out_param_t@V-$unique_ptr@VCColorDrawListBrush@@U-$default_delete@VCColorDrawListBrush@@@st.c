/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180221DBC
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<CColorDrawListBrush>>::~out_param_t<std::unique_ptr<CColorDrawListBrush>>(
        _BYTE *a1)
{
  _QWORD *v1; // rdx

  if ( a1[16] )
  {
    v1 = **(_QWORD ***)a1;
    **(_QWORD **)a1 = *((_QWORD *)a1 + 1);
    if ( v1 )
      std::default_delete<CColorDrawListBrush>::operator()((struct CColorDrawListBrush *)a1, v1);
  }
}
