/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18001DA30 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180038C40 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ @ 0x180039B30 (-GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F0F0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800FE87C (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800FE9E0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?HasEffects@NodeEffects@CDrawingContext@@QEAA_NXZ @ 0x1801AA210 (-HasEffects@NodeEffects@CDrawingContext@@QEAA_NXZ.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180200474 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@PEAPEAV1@@Z @ 0x18027C4B4 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CDrawingContext::PushEffects(
        struct IDeviceTarget **this,
        CDrawingContext::NodeEffects *a2,
        __int64 a3,
        struct IRenderTargetBitmap *a4,
        __int64 a5,
        void *a6,
        ...)
{
  double v6; // xmm2_8
  struct CLayer *v7; // rbx
  float v8; // xmm1_4
  unsigned int v11; // r15d
  _QWORD *v12; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v13; // r10
  int v14; // eax
  int v15; // eax
  struct IRenderTargetBitmap *v16; // rbx
  double v17; // xmm10_8
  double v18; // xmm8_8
  double v19; // xmm7_8
  int v20; // ebx
  int v21; // edi
  int v22; // eax
  struct IDeviceTarget *v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  void *v27; // rdi
  CVisual *v28; // rcx
  CEffectBrush *EffectInternal; // rax
  int v30; // eax
  char v31; // al
  CEffectBrush **v32; // rax
  CEffectBrush *v33; // rcx
  int v34; // eax
  double v35; // xmm10_8
  double v36; // xmm8_8
  double v37; // xmm7_8
  int v38; // ebx
  int v39; // edi
  int v40; // eax
  __int64 v41; // rcx
  struct IDeviceTarget *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  float v46; // xmm0_4
  float v47; // xmm0_4
  double v48; // xmm10_8
  double v49; // xmm8_8
  double v50; // xmm7_8
  int v51; // ebx
  int v52; // edi
  CExternalLayer *v53; // rdi
  bool v54; // zf
  __int64 *v55; // r8
  __int64 v56; // rax
  int v57; // edx
  int v58; // r9d
  CDeviceTextureTarget *v59; // rax
  int v60; // eax
  struct IRenderTargetBitmap *v61; // rbx
  HANDLE ProcessHeap; // rax
  CExternalLayer *v63; // rax
  int v64; // edx
  struct IDeviceTarget *v65; // rcx
  const struct CVisual *v66; // rdi
  int v67; // eax
  struct CLayer *v68; // rbx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // eax
  unsigned int v73; // ecx
  __int64 v74; // rcx
  __int128 v76; // [rsp+48h] [rbp-C0h] BYREF
  struct CVisual *v77; // [rsp+58h] [rbp-B0h] BYREF
  int v78; // [rsp+60h] [rbp-A8h]
  __int128 v79; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v80; // [rsp+78h] [rbp-90h]
  __int128 v81; // [rsp+88h] [rbp-80h]
  __int128 v82; // [rsp+98h] [rbp-70h]
  int v83; // [rsp+A8h] [rbp-60h]
  const char *v84; // [rsp+B8h] [rbp-50h] BYREF
  int v85; // [rsp+C0h] [rbp-48h]
  char v86[112]; // [rsp+C8h] [rbp-40h] BYREF
  void *retaddr; // [rsp+170h] [rbp+68h]
  struct CVisual *ColorTransform; // [rsp+180h] [rbp+78h] BYREF
  __int64 v89; // [rsp+188h] [rbp+80h]
  struct IRenderTargetBitmap *v90; // [rsp+190h] [rbp+88h] BYREF
  struct CLayer *v91; // [rsp+1A8h] [rbp+A0h] BYREF
  va_list va; // [rsp+1A8h] [rbp+A0h]
  va_list va1; // [rsp+1B0h] [rbp+A8h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v91 = va_arg(va1, struct CLayer *);
  v90 = a4;
  v89 = a3;
  v7 = v91;
  LODWORD(v8) = *((_DWORD *)a2 + 9) & _xmm;
  v11 = 0;
  *(_BYTE *)v91 = 0;
  if ( v8 < 0.0000011920929 )
  {
    *(_BYTE *)v7 = 1;
    return v11;
  }
  if ( !CDrawingContext::NodeEffects::HasEffects(a2) )
  {
    *((_QWORD *)&v76 + 1) = *v12;
    *(_QWORD *)&v76 = 7LL;
    v14 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((__int64)(this + 33), &v76);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xDA6u, 0LL);
    return v11;
  }
  v15 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal((struct CDrawingContext *)this, v13, (__int64)a2, v7);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xDACu, 0LL);
    return v11;
  }
  if ( !*(_BYTE *)v7 )
  {
    LOBYTE(v90) = 0;
    if ( *((_BYTE *)a2 + 185) )
    {
      v77 = *(struct CVisual **)a2;
      ColorTransform = CVisual::GetColorTransform(v77);
      v16 = 0LL;
      v90 = 0LL;
      v76 = 0LL;
      CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v76);
      *(_QWORD *)&v17 = DWORD2(v76);
      if ( *((float *)&v76 + 2) < *(float *)&v76
        || (*(_QWORD *)&v18 = HIDWORD(v76), *(_QWORD *)&v19 = DWORD1(v76), *((float *)&v76 + 3) < *((float *)&v76 + 1))
        || *(float *)&v76 < -2147483600.0
        || *(float *)&v76 > 2147483600.0
        || *((float *)&v76 + 1) < -2147483600.0
        || *((float *)&v76 + 1) > 2147483600.0
        || *((float *)&v76 + 2) > 2147483600.0
        || *((float *)&v76 + 3) > 2147483600.0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0x47u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xE49u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xED5u, 0LL);
      }
      else
      {
        LODWORD(v76) = PixelAlign(COERCE_DOUBLE((unsigned __int64)(unsigned int)v76), 0, v6);
        v20 = v76;
        DWORD1(v76) = PixelAlign(v19, 0, v6);
        v21 = DWORD1(v76);
        DWORD2(v76) = PixelAlign(v17, 1, v6) - v20;
        v22 = PixelAlign(v18, 1, v6);
        v23 = this[4];
        HIDWORD(v76) = v22 - v21;
        v24 = CColorTransformLayer::Create(v23, (const struct D2D_POINTANDSIZE_L *)&v76, ColorTransform, &v90);
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xEDAu, 0LL);
          v16 = v90;
        }
        else
        {
          v16 = v90;
          v25 = CDrawingContext::PushLayer((CDrawingContext *)this, v77, v90, 1, 1);
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xEE0u, 0LL);
          else
            v16 = 0LL;
        }
      }
      if ( v16 )
      {
        *(_QWORD *)v16 = &CExternalLayer::`vftable';
        v26 = *((_QWORD *)v16 + 1);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        operator delete(v16, 0x80uLL);
      }
      v7 = v91;
      LOBYTE(v90) = 1;
    }
    v27 = a6;
    if ( *((_BYTE *)a2 + 186) )
    {
      v28 = *(CVisual **)a2;
      LOBYTE(v91) = 0;
      EffectInternal = CVisual::GetEffectInternal(v28);
      v30 = CDrawingContext::PushEffectLayer(this, *(struct CVisual **)a2, v89, a5, v27, EffectInternal, va);
      v11 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0xDCAu, 0LL);
        return v11;
      }
      *(_BYTE *)v7 |= (unsigned __int8)v91;
      v31 = 1;
      LOBYTE(v90) = 1;
    }
    else
    {
      v31 = (char)v90;
    }
    if ( *((_BYTE *)a2 + 187) )
    {
      v32 = (CEffectBrush **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 224LL))(*(_QWORD *)a2);
      LOBYTE(v91) = 0;
      v33 = 0LL;
      if ( v32 )
        v33 = *v32;
      v34 = CDrawingContext::PushEffectLayer(this, *(struct CVisual **)a2, v89, a5, v27, v33, va);
      v11 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xDE3u, 0LL);
        return v11;
      }
      *(_BYTE *)v7 |= (unsigned __int8)v91;
      v31 = 1;
      LOBYTE(v90) = 1;
    }
    if ( *((_DWORD *)a2 + 8) )
    {
      v76 = 0LL;
      CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v76);
      *(_QWORD *)&v35 = DWORD2(v76);
      if ( *((float *)&v76 + 2) < *(float *)&v76
        || (*(_QWORD *)&v36 = HIDWORD(v76), *(_QWORD *)&v37 = DWORD1(v76), *((float *)&v76 + 3) < *((float *)&v76 + 1))
        || *(float *)&v76 < -2147483600.0
        || *(float *)&v76 > 2147483600.0
        || *((float *)&v76 + 1) < -2147483600.0
        || *((float *)&v76 + 1) > 2147483600.0
        || *((float *)&v76 + 2) > 2147483600.0
        || *((float *)&v76 + 3) > 2147483600.0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0x47u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xE49u, 0LL);
        v11 = -2003304438;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xDECu, 0LL);
        return v11;
      }
      LODWORD(v76) = PixelAlign(COERCE_DOUBLE((unsigned __int64)(unsigned int)v76), 0, v6);
      v38 = v76;
      DWORD1(v76) = PixelAlign(v37, 0, v6);
      v39 = DWORD1(v76);
      DWORD2(v76) = PixelAlign(v35, 1, v6) - v38;
      v11 = 0;
      HIDWORD(v76) = PixelAlign(v36, 1, v6) - v39;
      v83 = 10496;
      v79 = _xmm;
      v40 = *((_DWORD *)this + 74);
      v80 = _xmm;
      v81 = _xmm;
      v82 = *(__int128 *)&_xmm.r;
      LOBYTE(v83) = -86;
      if ( v40 )
      {
        v41 = (unsigned int)(v40 - 1);
        v42 = this[36];
        v43 = *(_OWORD *)((char *)v42 + 68 * v41 + 16);
        v79 = *(_OWORD *)((char *)v42 + 68 * v41);
        v44 = *(_OWORD *)((char *)v42 + 68 * v41 + 32);
        v80 = v43;
        v45 = *(_OWORD *)((char *)v42 + 68 * v41 + 48);
        LODWORD(v42) = *((_DWORD *)v42 + 17 * v41 + 16);
        v81 = v44;
        v82 = v45;
        v83 = (int)v42;
      }
      else
      {
        v83 = 10666;
      }
      LODWORD(v91) = 0;
      LODWORD(ColorTransform) = 0;
      CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&v79, (float *)va, (float *)&ColorTransform, 0LL);
      if ( *(float *)&v91 <= 1.0 )
        v46 = 1.0 - *(float *)&v91;
      else
        v46 = *(float *)&v91 - 1.0;
      *(_QWORD *)&v6 = (unsigned int)ColorTransform;
      if ( v46 > 0.0000099999997
        || (*(float *)&ColorTransform <= 1.0
          ? (v47 = 1.0 - *(float *)&ColorTransform)
          : (v47 = *(float *)&ColorTransform - 1.0),
            v47 > 0.0000099999997) )
      {
        v64 = *((_DWORD *)a2 + 8);
        v65 = this[4];
        v66 = *(const struct CVisual **)a2;
        v90 = (struct IRenderTargetBitmap *)__PAIR64__((unsigned int)ColorTransform, (unsigned int)v91);
        BYTE4(ColorTransform) = 0;
        v91 = 0LL;
        v67 = CResampleLayer::Create(
                (_DWORD)v65,
                v64,
                (unsigned int)&v76,
                (unsigned int)&v90,
                (__int64)&ColorTransform,
                (__int64)va);
        v11 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v67, 0xFB6u, 0LL);
          v68 = v91;
        }
        else
        {
          v68 = v91;
          v69 = CDrawingContext::PushLayer((CDrawingContext *)this, v66, v91, 1, 1);
          v11 = v69;
          if ( v69 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v69, 0xFBCu, 0LL);
          else
            v68 = 0LL;
        }
        if ( v68 )
        {
          v70 = *((_QWORD *)v68 + 16);
          if ( v70 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
          *(_QWORD *)v68 = &CExternalLayer::`vftable';
          v71 = *((_QWORD *)v68 + 1);
          if ( v71 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
          operator delete(v68, 0xA8uLL);
        }
        if ( (v11 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xDFBu, 0LL);
          return v11;
        }
        v31 = 1;
      }
      else
      {
        v31 = (char)v90;
      }
    }
    if ( *((_BYTE *)a2 + 188) )
    {
      ColorTransform = *(struct CVisual **)a2;
      LODWORD(v91) = CVisual::GetColorSpace(ColorTransform);
      v76 = 0LL;
      CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v76);
      *(_QWORD *)&v48 = DWORD2(v76);
      if ( *((float *)&v76 + 2) < *(float *)&v76
        || (*(_QWORD *)&v49 = HIDWORD(v76), *(_QWORD *)&v50 = DWORD1(v76), *((float *)&v76 + 3) < *((float *)&v76 + 1))
        || *(float *)&v76 < -2147483600.0
        || *(float *)&v76 > 2147483600.0
        || *((float *)&v76 + 1) < -2147483600.0
        || *((float *)&v76 + 1) > 2147483600.0
        || *((float *)&v76 + 2) > 2147483600.0
        || *((float *)&v76 + 3) > 2147483600.0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0x47u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xE49u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0xE65u, 0LL);
      }
      else
      {
        LODWORD(v76) = PixelAlign(COERCE_DOUBLE((unsigned __int64)(unsigned int)v76), 0, v6);
        v51 = v76;
        DWORD1(v76) = PixelAlign(v50, 0, v6);
        v52 = DWORD1(v76);
        DWORD2(v76) = PixelAlign(v48, 1, v6) - v51;
        HIDWORD(v76) = PixelAlign(v49, 1, v6) - v52;
        v53 = 0LL;
        v54 = !IsDXGIColorSpaceHDR((enum DXGI_COLOR_SPACE_TYPE)v91);
        HIDWORD(v77) = 1;
        v56 = *v55;
        v57 = 87;
        v78 = v58;
        if ( !v54 )
          v57 = 10;
        v90 = 0LL;
        LODWORD(v77) = v57;
        v59 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(__int64 *, char *))(v56 + 120))(v55, v86);
        v85 = 43;
        v84 = "DWM Scratch Rendertarget (colorspace layer)";
        v60 = CExternalLayer::CreateBitmap(
                (struct CResourceTag *)&v84,
                &v76,
                (struct PixelFormatInfo *)&v77,
                v59,
                1,
                (__int64 *)&v90);
        v61 = v90;
        LODWORD(v91) = v60;
        if ( v60 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x20u, 0LL);
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v63 = (CExternalLayer *)HeapAlloc(ProcessHeap, 0, 0x80uLL);
          v53 = v63;
          if ( !v63 )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          CExternalLayer::CExternalLayer(v63, (const struct D2D_POINTANDSIZE_L *)&v76, v61);
          *((_BYTE *)v53 + 120) = 1;
          *(_QWORD *)v53 = &CColorSpaceLayer::`vftable';
        }
        if ( v61 )
          (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v61 + 16LL))(v61);
        v72 = (int)v91;
        if ( (int)v91 < 0 )
        {
          v73 = 3690;
LABEL_96:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v72, v73, 0LL);
          if ( v53 )
          {
            *(_QWORD *)v53 = &CExternalLayer::`vftable';
            v74 = *((_QWORD *)v53 + 1);
            if ( v74 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
            operator delete(v53, 0x80uLL);
          }
          goto LABEL_102;
        }
        v72 = CDrawingContext::PushLayer((CDrawingContext *)this, ColorTransform, v53, 1, 1);
        if ( v72 < 0 )
        {
          v73 = 3696;
          goto LABEL_96;
        }
      }
    }
    else if ( !v31 )
    {
      return v11;
    }
LABEL_102:
    CMatrixStack::Top((CMatrixStack *)(this + 36), (CDrawingContext::NodeEffects *)((char *)a2 + 40));
  }
  return v11;
}
