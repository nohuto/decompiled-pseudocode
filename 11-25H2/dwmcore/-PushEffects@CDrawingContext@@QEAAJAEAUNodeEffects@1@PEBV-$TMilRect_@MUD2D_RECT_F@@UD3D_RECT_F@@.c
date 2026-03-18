/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A5060
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x18002855C (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180028A60 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800577E0 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800A3E30 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800A4040 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800A41A4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18020C7F8 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z @ 0x180210458 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x1802137E0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x18022D11C (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180271910 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CDrawingContext::PushEffects(
        struct IDeviceTarget **this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        ...)
{
  float v6; // xmm1_4
  unsigned int v7; // edi
  struct CLayer *v8; // rsi
  __int64 v9; // r12
  int v12; // eax
  char v13; // r14
  void *v14; // r15
  int v16; // eax
  __int64 v17; // rcx
  struct IDeviceTarget *v18; // rax
  const struct CVisual *v19; // r12
  _DWORD *v20; // r8
  __int64 v21; // rax
  _BYTE *v22; // rdx
  unsigned int i; // ecx
  struct CColorTransformResource **v24; // r15
  struct CColorTransformResource *v25; // r15
  CColorTransformLayer *v26; // r14
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CVisual *v31; // rcx
  CEffectBrush *EffectInternal; // rax
  int v33; // eax
  CEffectBrush **v34; // rax
  CEffectBrush *v35; // rcx
  int v36; // eax
  int v37; // eax
  float v38; // xmm0_4
  float v39; // xmm0_4
  int v40; // eax
  int v41; // eax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int128 v43; // [rsp+48h] [rbp-71h] BYREF
  __int128 v44; // [rsp+58h] [rbp-61h] BYREF
  _OWORD v45[4]; // [rsp+68h] [rbp-51h] BYREF
  int v46; // [rsp+A8h] [rbp-11h]
  __int64 v48; // [rsp+120h] [rbp+67h] BYREF
  struct CLayer *v49; // [rsp+138h] [rbp+7Fh] BYREF
  va_list va; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v49 = va_arg(va1, struct CLayer *);
  v48 = a4;
  v6 = *((float *)a2 + 9);
  v7 = 0;
  v8 = v49;
  v9 = a3;
  *(_BYTE *)v49 = 0;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 0.0000011920929 )
  {
    *(_BYTE *)v8 = 1;
    return v7;
  }
  if ( a2[1]
    || *((_BYTE *)a2 + 185)
    || *((_BYTE *)a2 + 186)
    || *((_BYTE *)a2 + 187)
    || *((_BYTE *)a2 + 188)
    || *((_DWORD *)a2 + 8)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v12 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal((struct CDrawingContext *)this);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xDACu, 0LL);
      return v7;
    }
    if ( !*(_BYTE *)v8 )
    {
      v13 = 0;
      if ( *((_BYTE *)a2 + 185) )
      {
        v19 = (const struct CVisual *)*a2;
        v20 = *(_DWORD **)(*a2 + 232LL);
        if ( (*v20 & 0x4000000) != 0 )
        {
          v21 = (unsigned int)v20[1];
          v22 = v20 + 2;
          for ( i = 0; i < (unsigned int)v21; ++v22 )
          {
            if ( *v22 == 6 )
              break;
            ++i;
          }
          if ( i >= (unsigned int)v21 )
            v24 = 0LL;
          else
            v24 = (struct CColorTransformResource **)((char *)v20 + v21 + 8LL * i - (((_BYTE)v21 + 15) & 7) + 15);
          v25 = *v24;
        }
        else
        {
          v25 = 0LL;
        }
        v26 = 0LL;
        v49 = 0LL;
        v44 = 0LL;
        v43 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v43);
        v27 = AlignRectFToPointAndSizeL((float *)&v43, &v44);
        LODWORD(v48) = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xE4Au, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0xEADu, 0LL);
        }
        else
        {
          v28 = CColorTransformLayer::Create(
                  this[4],
                  (const struct D2D_POINTANDSIZE_L *)&v44,
                  v25,
                  (struct CColorTransformLayer **)va);
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xEB2u, 0LL);
            v26 = v49;
          }
          else
          {
            v26 = v49;
            v29 = CDrawingContext::PushLayer((CDrawingContext *)this, v19, v49, 1, 1);
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xEB8u, 0LL);
            else
              v26 = 0LL;
          }
        }
        if ( v26 )
          CColorTransformLayer::`vector deleting destructor'(v26, 1u);
        v9 = a3;
        v13 = 1;
      }
      v14 = a6;
      if ( *((_BYTE *)a2 + 186) )
      {
        v31 = (CVisual *)*a2;
        LOBYTE(v48) = 0;
        EffectInternal = CVisual::GetEffectInternal(v31);
        v33 = CDrawingContext::PushEffectLayer(
                this,
                (const struct CVisual *)*a2,
                v9,
                a5,
                v14,
                EffectInternal,
                (char *)&v48);
        v7 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xDCAu, 0LL);
          return v7;
        }
        v13 = 1;
        *(_BYTE *)v8 |= v48;
      }
      if ( *((_BYTE *)a2 + 187) )
      {
        v34 = (CEffectBrush **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 224LL))(*a2);
        v35 = 0LL;
        LOBYTE(v48) = 0;
        if ( v34 )
          v35 = *v34;
        v36 = CDrawingContext::PushEffectLayer(this, (const struct CVisual *)*a2, v9, a5, v14, v35, (char *)&v48);
        v7 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xDE3u, 0LL);
          return v7;
        }
        v13 = 1;
        *(_BYTE *)v8 |= v48;
      }
      if ( *((_DWORD *)a2 + 8) )
      {
        v44 = 0LL;
        v37 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(
                (CDrawingContext *)this,
                (struct D2D_POINTANDSIZE_L *)&v44);
        v7 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xDECu, 0LL);
          return v7;
        }
        v46 = 10666;
        v45[0] = _xmm;
        v45[1] = _xmm;
        v45[2] = _xmm;
        v45[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
        CMatrixStack::Top((CMatrixStack *)(this + 36), (struct CMILMatrix *)v45);
        LODWORD(v48) = 0;
        LODWORD(v49) = 0;
        CMILMatrix::Get2DScaleDimensionsWithPerspective(v45, &v48, (struct CLayer **)va, 0LL);
        v38 = *(float *)&v48 <= 1.0 ? 1.0 - *(float *)&v48 : *(float *)&v48 - 1.0;
        if ( v38 > 0.0000099999997
          || (*(float *)&v49 <= 1.0 ? (v39 = 1.0 - *(float *)&v49) : (v39 = *(float *)&v49 - 1.0), v39 > 0.0000099999997) )
        {
          v40 = CDrawingContext::PushResampleLayer(
                  (CDrawingContext *)this,
                  (const struct CVisual *)*a2,
                  *((unsigned int *)a2 + 8),
                  (__int64)&v44);
          v7 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xDFCu, 0LL);
            return v7;
          }
          v13 = 1;
        }
      }
      if ( *((_BYTE *)a2 + 188) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
        CDrawingContext::PushColorSpaceLayer((CDrawingContext *)this, (const struct CVisual *)*a2, ColorSpace);
      }
      else if ( !v13 )
      {
        return v7;
      }
      v16 = *((_DWORD *)this + 74);
      if ( v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        v18 = this[36];
        *(_OWORD *)(a2 + 5) = *(_OWORD *)((char *)v18 + 68 * v17);
        *(_OWORD *)(a2 + 7) = *(_OWORD *)((char *)v18 + 68 * v17 + 16);
        *(_OWORD *)(a2 + 9) = *(_OWORD *)((char *)v18 + 68 * v17 + 32);
        *(_OWORD *)(a2 + 11) = *(_OWORD *)((char *)v18 + 68 * v17 + 48);
        *((_DWORD *)a2 + 26) = *((_DWORD *)v18 + 17 * v17 + 16);
      }
      else
      {
        *(_QWORD *)((char *)a2 + 100) = 1065353216LL;
        a2[5] = 1065353216LL;
        a2[6] = 0LL;
        *((_DWORD *)a2 + 14) = 0;
        *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 68) = 0LL;
        *((_DWORD *)a2 + 19) = 0;
        a2[10] = 1065353216LL;
        a2[11] = 0LL;
        *((_DWORD *)a2 + 24) = 0;
        v30 = *((unsigned __int8 *)a2 + 105);
        *((_BYTE *)a2 + 104) = -86;
        *((_BYTE *)a2 + 105) = v30 & 0xC0 | 0x29;
      }
    }
  }
  else
  {
    v41 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, (const struct CVisual *)*a2);
    v7 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xDA6u, 0LL);
  }
  return v7;
}
