/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020DF68 (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180214CA8 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180265900 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@@Z @ 0x1802659BC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 *     ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8 (-PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r15
  char *v9; // rbx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebp
  unsigned int v15; // ebx
  __int64 result; // rax
  __int64 (__fastcall *v17)(CD2DLayer *__hidden, struct CDrawingContext *); // rax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // eax
  __int128 v25; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  if ( a5 )
  {
    v9 = (char *)this + 264;
    *(_QWORD *)&v25 = 6LL;
    v10 = *((_DWORD *)this + 69);
    *((_QWORD *)&v25 + 1) = a2;
    if ( *((_DWORD *)this + 68) == v10 )
    {
      v20 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)this + 264);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v20);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x1051u, 0LL);
        return v21;
      }
    }
    v5 = 1;
    *(_OWORD *)(*(_QWORD *)v9 + 16LL * *((unsigned int *)v9 + 2)) = v25;
    v11 = *((_DWORD *)v9 + 5);
    if ( v11 <= ++*((_DWORD *)v9 + 2) )
      v11 = *((_DWORD *)v9 + 2);
    *((_DWORD *)v9 + 5) = v11;
  }
  v12 = *((_DWORD *)this + 96);
  *(_QWORD *)&v25 = a3;
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v14 = -2147024362;
    v24 = 181;
    v15 = -2147024362;
    v23 = -2147024362;
    goto LABEL_28;
  }
  v14 = 0;
  if ( v13 <= *((_DWORD *)this + 95) )
  {
    *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * v12) = a3;
    *((_DWORD *)this + 96) = v13;
    goto LABEL_9;
  }
  v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 360, 8, 1, &v25);
  v14 = v22;
  v15 = v22;
  if ( v22 < 0 )
  {
    v23 = v22;
    v24 = 192;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, v24, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1056u, 0LL);
    goto LABEL_17;
  }
LABEL_9:
  v15 = v14;
  if ( !a4
    || ((v17 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)a3 + 24LL),
         v17 != CD2DLayer::ApplyState)
      ? (v17 != COffScreenRenderingLayer::ApplyState
       ? (v18 = v17(a3, this))
       : (v18 = COffScreenRenderingLayer::ApplyState(a3, this)))
      : (v18 = CD2DLayer::ApplyState(a3, this)),
        v15 = v18,
        v18 >= 0) )
  {
    ++dword_1803FA758;
    ++dword_1803FA808;
    return v15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x105Bu, 0LL);
  --*((_DWORD *)this + 96);
LABEL_17:
  if ( !v5 )
    return v15;
  v19 = *((_DWORD *)this + 68);
  result = v15;
  if ( v19 )
    *((_DWORD *)this + 68) = v19 - 1;
  return result;
}
