/*
 * XREFs of ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180118608
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180118F44 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 */

__int64 __fastcall CDrawingContext::MarkCurrentState(CDrawingContext *this)
{
  char *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  __int128 v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)&v6 + 1) = -1LL;
  v1 = (char *)this + 264;
  *(_QWORD *)&v6 = 12LL;
  if ( *((_DWORD *)this + 68) == *((_DWORD *)this + 69)
    && (v5 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)this + 264),
        v3 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v5);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x106Du, 0LL);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v1 + 16LL * (unsigned int)(*((_DWORD *)v1 + 2))++) = v6;
    v2 = *((_DWORD *)v1 + 5);
    if ( v2 <= *((_DWORD *)v1 + 2) )
      v2 = *((_DWORD *)v1 + 2);
    v3 = 0;
    *((_DWORD *)v1 + 5) = v2;
  }
  return v3;
}
