/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800FBF8C (-RenderPerf_ApplyLayer@CLayer@@QEBAXXZ.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FC014 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801CC004 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1801D6DCC (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18027AB28 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char *v2; // rbx
  char v3; // r14
  unsigned int v6; // eax
  int v7; // esi
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v14; // eax
  unsigned int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)a2 + 3160;
  v3 = 0;
  if ( *((_DWORD *)a2 + 792) == *((_DWORD *)a2 + 793) )
  {
    v14 = CWatermarkStack<float,64,2,10>::Grow((char *)a2 + 3160);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v14);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1212u, 0LL);
      v15 = 61;
      v8 = v7;
      goto LABEL_12;
    }
  }
  v3 = 1;
  *(_DWORD *)(*(_QWORD *)v2 + 4LL * *((unsigned int *)v2 + 2)) = 1065353216;
  v6 = *((_DWORD *)v2 + 5);
  if ( v6 <= ++*((_DWORD *)v2 + 2) )
    v6 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 5) = v6;
  v7 = CExternalLayer::ApplyRenderTarget(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 68;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v15, 0LL);
    CExternalLayer::RestoreRenderTarget(this, a2);
    if ( v3 )
      CDrawingContext::PopAlpha(a2, 0);
    return (unsigned int)v7;
  }
  v9 = *((_QWORD *)a2 + 5);
  v10 = 0LL;
  v11 = *(_DWORD *)(v9 + 368);
  if ( v11 )
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 344) + 8LL * (unsigned int)(v11 - 1));
  *(_BYTE *)(v10 + 79) = 1;
  v12 = *((_QWORD *)a2 + 995);
  *((_QWORD *)a2 + 995) = 0LL;
  *((_QWORD *)this + 5) = v12;
  CLayer::RenderPerf_ApplyLayer(this);
  return (unsigned int)v7;
}
