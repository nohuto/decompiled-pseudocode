/*
 * XREFs of ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x1801DA3FC
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 */

__int64 __fastcall CDrawingContext::MarkCurrentState(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)&v9 + 1) = -1LL;
  v4 = (char *)this + 264;
  *(_QWORD *)&v9 = 12LL;
  if ( *((_DWORD *)this + 68) == *((_DWORD *)this + 69)
    && (v8 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(
               (__int64)this + 264,
               a2,
               a3,
               a4,
               (const void **)v4),
        v6 = v8,
        v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v8);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1095u, 0LL);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)(*((_DWORD *)v4 + 2))++) = v9;
    v5 = *((_DWORD *)v4 + 5);
    if ( v5 <= *((_DWORD *)v4 + 2) )
      v5 = *((_DWORD *)v4 + 2);
    v6 = 0;
    *((_DWORD *)v4 + 5) = v5;
  }
  return v6;
}
