/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18002A648
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180029684 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CDrawingContext *a7,
        struct CMILMatrix *a8,
        struct D2D_SIZE_F *a9)
{
  char v10; // al
  char v11; // dl
  CMILMatrix *v12; // r11
  __int64 v13; // rcx
  struct D2D_SIZE_F *v14; // rax
  float v15; // xmm1_4
  CDropShadow *v16; // rcx
  char v17; // dh
  __int16 v18; // edx^2
  CMILMatrix *v19; // r11
  const struct CMILMatrix *v20; // rdx
  _OWORD v21[4]; // [rsp+20h] [rbp-78h] BYREF
  char v22; // [rsp+60h] [rbp-38h]
  char v23; // [rsp+61h] [rbp-37h]
  __int16 v24; // [rsp+62h] [rbp-36h]

  *(_QWORD *)a8 = 1065353216LL;
  *((_QWORD *)a8 + 1) = 0LL;
  *((_DWORD *)a8 + 4) = 0;
  *(_QWORD *)((char *)a8 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a8 + 28) = 0LL;
  *((_DWORD *)a8 + 9) = 0;
  *((_QWORD *)a8 + 5) = 1065353216LL;
  *((_QWORD *)a8 + 6) = 0LL;
  *((_DWORD *)a8 + 14) = 0;
  *((_DWORD *)a8 + 15) = 1065353216;
  v10 = *((_BYTE *)a8 + 65);
  *((_BYTE *)a8 + 64) = -86;
  *((_BYTE *)a8 + 65) = v10 & 0xC0 | 0x29;
  CMILMatrix::Scale(a8, 1.0 / a4, 1.0 / a5, 1.0);
  v13 = *((_QWORD *)this + 32);
  if ( *(_BYTE *)(v13 + 696) == v11 )
  {
    CMILMatrix::Translate(v12, a2, a3);
    v14 = a9;
    a9->width = *((float *)this + 51) - *((float *)this + 49);
    v15 = *((float *)this + 52) - *((float *)this + 50);
  }
  else
  {
    if ( *(_BYTE *)(v13 + 697) == v11 )
    {
      CMILMatrix::Translate(v12, *((float *)this + 57) - a6->x, *((float *)this + 58) - a6->y);
    }
    else
    {
      v16 = *(CDropShadow **)(v13 + 672);
      if ( !v16 || CDropShadow::GetMaskForLayerVisualNoRef(v16) )
      {
        CMILMatrix::Translate(v12, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v20 = (CTreeEffectLayer *)((char *)this + 128);
      }
      else
      {
        v24 = v18;
        v21[0] = _xmm;
        v21[1] = _xmm;
        v23 = v17 & 0xC0 | 0x29;
        v21[2] = _xmm;
        v21[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
        v22 = -86;
        CMatrixStack::Top((struct CDrawingContext *)((char *)a7 + 288), (struct CMILMatrix *)v21);
        v20 = (const struct CMILMatrix *)v21;
      }
      CMILMatrix::Multiply(v19, v20);
    }
    v14 = a9;
    a9->width = *((float *)this + 59) * *((float *)this + 70);
    v15 = *((float *)this + 60) * *((float *)this + 70);
  }
  v14->height = v15;
}
