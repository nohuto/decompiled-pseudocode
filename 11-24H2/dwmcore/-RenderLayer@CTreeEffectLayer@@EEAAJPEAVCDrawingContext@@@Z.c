/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800A6ACC (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800A7200 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A7528 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1800A75F0 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800A886C (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800A8CCC (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800A9A98 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800FDFD4 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180210574 (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // r10
  int v5; // r15d
  CDropShadow *v6; // rax
  float top; // xmm4_4
  float left; // xmm1_4
  float right; // xmm3_4
  float bottom; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // eax
  unsigned int v19; // esi
  float v21; // xmm1_4
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  FLOAT v24; // xmm0_4
  FLOAT v25; // xmm1_4
  float v26; // xmm2_4
  FLOAT v27; // xmm0_4
  float v28; // xmm3_4
  __int64 v29; // r10
  struct CBrush *MaskForLayerVisualNoRef; // r12
  __int64 v31; // rax
  char v32; // bl
  int v33; // eax
  __int64 v34; // rcx
  __m128i v35; // xmm4
  FLOAT v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  int v39; // eax
  float v40; // xmm1_4
  CDrawingContext *v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  const struct CMILMatrix *v45; // r13
  int v46; // eax
  struct IRenderTargetBitmap *v47; // rbx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int *v51; // rdx
  float v52; // xmm5_4
  float v53; // xmm2_4
  float v54; // xmm3_4
  __int64 v55; // rax
  float v56; // xmm4_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  struct D2D_SIZE_F *v63; // rdx
  int v64; // eax
  int v65; // eax
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int64 v72; // rax
  int v73; // eax
  float v74; // xmm4_4
  float v75; // xmm5_4
  __int64 v76; // rax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  struct IRenderTargetBitmap *v81; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v82; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v83; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_POINT_2F v84; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v85; // [rsp+80h] [rbp-88h] BYREF
  __int128 v86; // [rsp+98h] [rbp-70h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-60h]
  __int128 v88; // [rsp+B8h] [rbp-50h]
  __int128 v89; // [rsp+C8h] [rbp-40h]
  int v90; // [rsp+D8h] [rbp-30h]
  int v91[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v92; // [rsp+F8h] [rbp-10h]
  __int128 v93; // [rsp+108h] [rbp+0h]
  __int128 v94; // [rsp+118h] [rbp+10h]
  char v95; // [rsp+128h] [rbp+20h]
  __int16 v96; // [rsp+129h] [rbp+21h]
  char v97; // [rsp+12Bh] [rbp+23h]
  _OWORD v98[4]; // [rsp+138h] [rbp+30h] BYREF
  int v99; // [rsp+178h] [rbp+70h]
  struct D2D_RECT_F v100; // [rsp+188h] [rbp+80h] BYREF
  struct D2D_RECT_F v101; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_RECT_F v102; // [rsp+1A8h] [rbp+A0h] BYREF

  v2 = *((_QWORD *)this + 32);
  v90 = 0;
  v5 = 0;
  if ( !v2 || (v6 = *(CDropShadow **)(v2 + 680), (*(_QWORD *)&v100.left = v6) == 0LL) )
  {
    top = *((float *)this + 58);
    v100.left = *((FLOAT *)this + 57);
    left = v100.left;
    right = v100.left + *((float *)this + 59);
    bottom = top + *((float *)this + 60);
    v100.top = top;
    v100.right = right;
    v100.bottom = bottom;
    if ( *(_BYTE *)(v2 + 705) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 128, &v100, &v100.left);
      bottom = v100.bottom;
      right = v100.right;
      top = v100.top;
      left = v100.left;
    }
    v11 = *((float *)this + 66);
    if ( v11 > left )
    {
      v100.left = *((FLOAT *)this + 66);
      left = v11;
    }
    v12 = *((float *)this + 67);
    if ( v12 > top )
    {
      v100.top = *((FLOAT *)this + 67);
      top = v12;
    }
    v13 = *((float *)this + 68);
    if ( right > v13 )
    {
      v100.right = *((FLOAT *)this + 68);
      right = v13;
    }
    v14 = *((float *)this + 69);
    if ( bottom > v14 )
    {
      v100.bottom = *((FLOAT *)this + 69);
      bottom = v14;
    }
    if ( right <= left || bottom <= top )
    {
      v100.bottom = 0.0;
      v100.right = 0.0;
      *(_QWORD *)&v100.left = 0LL;
    }
    v15 = *((float *)this + 70);
    v85.left = 0.0;
    v85.top = 0.0;
    v16 = *((float *)this + 50);
    v17 = *((float *)this + 49);
    v82 = 0LL;
    v99 = 0;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v17,
      v16,
      v15,
      v15,
      (const struct D2D_POINT_2F *)&v85,
      a2,
      (struct CMILMatrix *)v98,
      &v82);
    v18 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)v98, (__int64)&v82);
    v19 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x209u, 0LL);
      return v19;
    }
LABEL_16:
    if ( !v5 )
      return v19;
    goto LABEL_70;
  }
  v21 = *((float *)this + 58);
  v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v24 = (float)*((int *)this + 4);
  v81 = 0LL;
  v102.top = v21;
  v25 = v21 + *((float *)this + 60);
  v84.x = v24;
  LODWORD(v26) = _mm_cvtepi32_ps(v22).m128_u32[0];
  v84.y = (float)*((int *)this + 5);
  v102.left = *((FLOAT *)this + 57);
  v27 = v102.left + *((float *)this + 59);
  LODWORD(v28) = _mm_cvtepi32_ps(v23).m128_u32[0];
  v83.width = v26;
  v102.right = v27;
  v83.height = v28;
  v102.bottom = v25;
  MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v6);
  if ( MaskForLayerVisualNoRef )
  {
    v101 = 0LL;
    v85 = 0LL;
    if ( *(_BYTE *)(v29 + 705) )
    {
      v51 = v91;
      v97 = 0;
      v95 = -86;
      *(_OWORD *)v91 = _xmm;
      v92 = _xmm;
      v96 = 41;
      v93 = _xmm;
      v94 = *(__int128 *)&_xmm.r;
    }
    else
    {
      v66 = *((_OWORD *)this + 8);
      v51 = (int *)v98;
      v67 = *((_OWORD *)this + 9);
      v99 = *((_DWORD *)this + 48);
      v98[0] = v66;
      v68 = *((_OWORD *)this + 10);
      v98[1] = v67;
      v69 = *((_OWORD *)this + 11);
      v98[2] = v68;
      v98[3] = v69;
    }
    CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
      v29,
      (__int64)v51,
      (struct D2D_RECT_F *)((char *)this + 212),
      &v101,
      &v85);
    v26 = v101.right - v101.left;
    v28 = v101.bottom - v101.top;
    v84 = *(struct D2D_POINT_2F *)&v101.left;
    v83.width = v101.right - v101.left;
    v83.height = v101.bottom - v101.top;
  }
  if ( !CDrawingContext::IsSurfaceSizeValid(a2, (int)v26, (int)v28) )
  {
    v65 = CDrawingContext::PushNoOpLayer(a2, *((const struct CVisual **)this + 32));
    v19 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v65, 0x12Cu, 0LL);
      return v19;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
    v32 = 0;
LABEL_22:
    v33 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v19 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x132u, 0LL);
      if ( v81 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v81 + 16LL))(v81);
      goto LABEL_65;
    }
    v34 = *((_QWORD *)this + 32);
    v5 = 1;
    if ( MaskForLayerVisualNoRef )
    {
      v40 = *(float *)(v34 + 148);
      if ( *(float *)(v34 + 144) != 0.0 && v40 != 0.0 )
      {
        v72 = *(_QWORD *)MaskForLayerVisualNoRef;
        v82.width = *(FLOAT *)(v34 + 144);
        v82.height = v40;
        v102 = 0LL;
        v73 = (*(__int64 (__fastcall **)(struct CBrush *, struct D2D_SIZE_F *, struct D2D_RECT_F *))(v72 + 184))(
                MaskForLayerVisualNoRef,
                &v82,
                &v102);
        v19 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x142u, 0LL);
LABEL_26:
          if ( v81 )
            (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v81 + 16LL))(v81);
          goto LABEL_28;
        }
        v74 = v102.left;
        v75 = v102.top;
        v76 = *((_QWORD *)this + 32);
        v101 = v102;
        v85.left = v102.right - v102.left;
        v85.top = v102.bottom - v102.top;
        if ( !*(_BYTE *)(v76 + 705) )
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 128, &v102, &v101.left);
          v75 = v101.top;
          v74 = v101.left;
        }
        v97 = 0;
        *(_OWORD *)v91 = _xmm;
        v92 = _xmm;
        v96 = 41;
        v93 = _xmm;
        v94 = *(__int128 *)&_xmm.r;
        v95 = -86;
        CMILMatrix::Translate((CMILMatrix *)v91, v74 - v84.x, v75 - v84.y);
        v77 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v91, 0, 1);
        v19 = v77;
        if ( v77 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v77, 0x156u, 0LL);
        }
        else
        {
          v5 = 2;
          v78 = (*(__int64 (__fastcall **)(struct CBrush *, struct CDrawingContext *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)MaskForLayerVisualNoRef + 200LL))(
                  MaskForLayerVisualNoRef,
                  a2,
                  &v85,
                  0LL);
          v19 = v78;
          if ( v78 >= 0 )
          {
            CDrawingContext::PopTransformInternal(a2, 1);
            goto LABEL_33;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v78, 0x15Bu, 0LL);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
        do
        {
LABEL_28:
          CDrawingContext::PopTransformInternal(a2, 1);
          --v5;
        }
        while ( v5 );
LABEL_65:
        if ( v32 )
          CDrawingContext::PopLayer(a2);
        return v19;
      }
    }
    else
    {
      v101 = 0LL;
      CLayerVisual::GetUpdatedDropShadowBounds(v34, &v102, &v101);
      v35 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      v36 = (float)*((int *)this + 5);
      v97 = 0;
      v95 = -86;
      v96 = 41;
      v82 = 0LL;
      v85.left = _mm_cvtepi32_ps(v35).m128_f32[0];
      v85.top = v36;
      v102.top = v101.top + COERCE_FLOAT(LODWORD(v36) ^ _xmm);
      v102.left = COERCE_FLOAT(LODWORD(v85.left) ^ _xmm) + v101.left;
      v37 = *((float *)this + 50) - v36;
      v102.bottom = v101.bottom + COERCE_FLOAT(LODWORD(v36) ^ _xmm);
      v92 = _xmm;
      v94 = *(__int128 *)&_xmm.r;
      v38 = *((float *)this + 49);
      v102.right = v101.right + COERCE_FLOAT(LODWORD(v85.left) ^ _xmm);
      *(_OWORD *)v91 = _xmm;
      v93 = _xmm;
      CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        this,
        v38 - v85.left,
        v37,
        1.0,
        1.0,
        (const struct D2D_POINT_2F *)&v85,
        a2,
        (struct CMILMatrix *)v91,
        &v82);
      v39 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)v91, (__int64)&v82);
      v19 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x181u, 0LL);
        goto LABEL_26;
      }
    }
LABEL_33:
    CDrawingContext::PopTransformInternal(a2, 1);
    CDrawingContext::PopLayer(v42);
    if ( *(_BYTE *)(*((_QWORD *)this + 32) + 705LL) )
    {
      v70 = *((_OWORD *)this + 8);
      v71 = *((_OWORD *)this + 9);
      v90 = *((_DWORD *)this + 48);
      v86 = v70;
      v43 = *((_OWORD *)this + 10);
      v87 = v71;
      v44 = *((_OWORD *)this + 11);
    }
    else
    {
      v86 = _xmm;
      v43 = _xmm;
      v87 = _xmm;
      v44 = *(__int128 *)&_xmm.r;
      BYTE1(v90) = BYTE1(v90) & 0xC0 | 0x29;
      LOBYTE(v90) = -86;
    }
    v89 = v44;
    v88 = v43;
    v45 = (CTreeEffectLayer *)((char *)this + 128);
    v46 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v86, 0, 1);
    v19 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x196u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
      return v19;
    }
    v47 = v81;
    v5 = 1;
    v48 = CTreeEffectLayer::RenderShadow(this, &v84, &v83, 1.0, 1.0, a2, *(struct CDropShadow **)&v100.left, v81);
    v19 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x1A2u, 0LL);
    }
    else
    {
      v90 = 10666;
      v86 = _xmm;
      v87 = _xmm;
      v88 = _xmm;
      v89 = *(__int128 *)&_xmm.r;
      if ( MaskForLayerVisualNoRef )
      {
        v52 = *((float *)this + 58);
        v53 = *((float *)this + 57);
        v54 = v52 + *((float *)this + 60);
        v55 = *((_QWORD *)this + 32);
        v56 = v53 + *((float *)this + 59);
        v100.left = v53;
        v100.top = v52;
        v100.bottom = v54;
        v100.right = v56;
        if ( *(_BYTE *)(v55 + 705) )
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)v45, &v100, &v100.left);
          CMILMatrix::Translate((CMILMatrix *)&v86, (float)*((int *)this + 4), (float)*((int *)this + 5));
          CMILMatrix::Multiply((CMILMatrix *)&v86, v45);
          v80 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v86, 0, 1);
          v19 = v80;
          if ( v80 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v80, 0x1BEu, 0LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
LABEL_70:
            v32 = 0;
            goto LABEL_28;
          }
          v54 = v100.bottom;
          v5 = 2;
          v56 = v100.right;
          v52 = v100.top;
          v53 = v100.left;
        }
        v57 = *((float *)this + 66);
        if ( v57 > v53 )
        {
          v100.left = *((FLOAT *)this + 66);
          v53 = v57;
        }
        v58 = *((float *)this + 67);
        if ( v58 > v52 )
        {
          v100.top = *((FLOAT *)this + 67);
          v52 = v58;
        }
        v59 = *((float *)this + 68);
        if ( v56 > v59 )
        {
          v100.right = *((FLOAT *)this + 68);
          v56 = v59;
        }
        v60 = *((float *)this + 69);
        if ( v54 > v60 )
        {
          v100.bottom = *((FLOAT *)this + 69);
          v54 = v60;
        }
        if ( v56 <= v53 || v54 <= v52 )
        {
          v100.bottom = 0.0;
          v100.right = 0.0;
          *(_QWORD *)&v100.left = 0LL;
        }
        v61 = *((float *)this + 50);
        v85.left = 0.0;
        v85.top = 0.0;
        v62 = *((float *)this + 49);
        v82 = 0LL;
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v62,
          v61,
          1.0,
          1.0,
          (const struct D2D_POINT_2F *)&v85,
          a2,
          (struct CMILMatrix *)&v86,
          &v82);
        v63 = &v82;
        if ( *(_BYTE *)(*((_QWORD *)this + 32) + 704LL) )
          v63 = &v83;
        v64 = CTreeEffectLayer::RenderEffect(this, a2, (struct CMILMatrix *)&v86, (__int64)v63);
        v19 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v64, 0x1D2u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
          goto LABEL_16;
        }
        goto LABEL_43;
      }
      CMILMatrix::Translate((CMILMatrix *)&v86, (float)*((int *)this + 4), (float)*((int *)this + 5));
      if ( *(_BYTE *)(*((_QWORD *)this + 32) + 705LL) )
        CMILMatrix::Multiply((CMILMatrix *)&v86, v45);
      v49 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v86, 0, 1);
      v19 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x1E3u, 0LL);
      }
      else
      {
        v5 = 2;
        v50 = CTreeEffectLayer::RenderMask(this, &v83, a2, v47);
        v19 = v50;
        if ( v50 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          v5 = 1;
LABEL_43:
          if ( v47 )
            (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v47 + 16LL))(v47);
          goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x1E6u, 0LL);
      }
    }
    if ( v47 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v47 + 16LL))(v47);
    goto LABEL_70;
  }
  v31 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  LODWORD(v101.right) = 35;
  *(_QWORD *)&v101.left = "DWM Tree Effect Shadow intermediate";
  if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, &v101, &v83, *(unsigned int *)(v31 + 8), 1, &v81) >= 0 )
  {
LABEL_21:
    v32 = 1;
    goto LABEL_22;
  }
  v79 = CDrawingContext::PushNoOpLayer(a2, *((const struct CVisual **)this + 32));
  v19 = v79;
  if ( v79 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v79, 0x122u, 0LL);
  if ( v81 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v81 + 16LL))(v81);
  return v19;
}
