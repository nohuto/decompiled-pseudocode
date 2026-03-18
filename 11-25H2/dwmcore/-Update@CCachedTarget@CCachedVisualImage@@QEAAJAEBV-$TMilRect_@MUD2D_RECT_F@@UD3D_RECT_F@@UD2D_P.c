/*
 * XREFs of ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18000CDC4 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028994 (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180190880 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ @ 0x1801FE550 (-FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ.c)
 *     McTemplateU0ppffffddtt_EventWriteTransfer @ 0x1802171BC (McTemplateU0ppffffddtt_EventWriteTransfer.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x180221B30 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802D70B0 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::Update(__int64 **this, struct D2D_RECT_F *a2, int a3, char *a4)
{
  __int64 *v5; // rcx
  int v6; // ebx
  char v9; // r12
  struct D2D_RECT_F *v10; // rdi
  _QWORD *v11; // r15
  unsigned __int64 v12; // r14
  float v13; // xmm6_4
  __int64 (__fastcall *v14)(_QWORD *, __int128 *); // rax
  _QWORD *v15; // rcx
  __int64 RenderTargetInfo; // rax
  void (__fastcall *v18)(_QWORD *, char **); // rax
  __int64 *v19; // rcx
  float v20; // xmm6_4
  float v21; // xmm7_4
  __int64 (__fastcall *v22)(__int64 *); // rax
  char v23; // al
  int v24; // edx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  char v26; // r13
  FLOAT left; // xmm1_4
  float v28; // xmm2_4
  int v29; // ecx
  float v30; // xmm6_4
  float v31; // xmm7_4
  int v32; // ecx
  int v33; // ecx
  __int64 *v34; // rax
  __int128 v35; // xmm3
  __int128 *v36; // rax
  __int128 v37; // xmm2
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  bool v40; // al
  void (__fastcall *v41)(_QWORD *, __int64); // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  CDrawingContext *v44; // rcx
  CCachedVisualImage *v45; // rbx
  __int64 v46; // rax
  void (*v47)(CCachedVisualImage *__hidden, struct CDrawingContext **); // rdi
  int v48; // eax
  char v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  char v53; // r13
  CDrawingContext *v54; // rdi
  __int64 *v55; // rcx
  CVisualTree *v56; // rax
  int v57; // eax
  bool v58; // zf
  CDrawingContext *v59; // rax
  CComposition *v60; // rcx
  int v61; // eax
  float v62; // xmm1_4
  float v63; // xmm0_4
  int v64; // eax
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int v68; // eax
  __int64 v69; // rdi
  void **v70; // rsi
  void **v71; // rax
  char *v72; // [rsp+70h] [rbp-98h] BYREF
  CDrawingContext *v73; // [rsp+78h] [rbp-90h] BYREF
  float *v74; // [rsp+80h] [rbp-88h] BYREF
  int v75; // [rsp+88h] [rbp-80h]
  int v76; // [rsp+8Ch] [rbp-7Ch]
  __int128 v77; // [rsp+98h] [rbp-70h] BYREF
  __int128 v78; // [rsp+A8h] [rbp-60h]
  __int128 v79; // [rsp+B8h] [rbp-50h]
  __int128 v80; // [rsp+C8h] [rbp-40h]
  int v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F8h] [rbp-10h]
  __int128 v84; // [rsp+108h] [rbp+0h]
  __int128 v85; // [rsp+118h] [rbp+10h]
  int v86; // [rsp+128h] [rbp+20h]
  __int128 v87; // [rsp+138h] [rbp+30h] BYREF
  __int128 v88; // [rsp+148h] [rbp+40h]
  __int128 v89; // [rsp+158h] [rbp+50h]
  __int128 v90; // [rsp+168h] [rbp+60h]
  int v91; // [rsp+178h] [rbp+70h]
  __int128 v92; // [rsp+180h] [rbp+78h] BYREF
  __int128 v93; // [rsp+190h] [rbp+88h] BYREF
  int v94; // [rsp+1A0h] [rbp+98h]
  int v95; // [rsp+1A4h] [rbp+9Ch]

  v74 = (float *)a4;
  v5 = this[1];
  v6 = 0;
  v73 = 0LL;
  v9 = 0;
  v10 = (struct D2D_RECT_F *)(this + 2);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(*v5 + 144))(v5);
  if ( (*((float *)this + 4) != a2->left
     || *((float *)this + 5) != a2->top
     || *((float *)this + 6) != a2->right
     || *((float *)this + 7) != a2->bottom)
    && (!IsEmpty((const struct D2D_RECT_F *)this + 1) || !IsEmpty(a2))
    && (!(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(this + 2)
     || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a2)) )
  {
    *v10 = *a2;
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  if ( *((_DWORD *)this + 8) != a3 )
  {
    *((_DWORD *)this + 8) = a3;
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  v12 = (unsigned __int64)(v11 + 2);
  v13 = v74[4];
  v14 = *(__int64 (__fastcall **)(_QWORD *, __int128 *))(v11[2] + 120LL);
  v15 = v11 + 2;
  if ( (char *)v14 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v15, &v93);
  else
    RenderTargetInfo = v14(v15, &v93);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(RenderTargetInfo + 16) - v13) & _xmm) > 0.0000011920929 )
  {
    (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v12 + 160LL))(v11 + 2);
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  if ( *((_BYTE *)this + 56) )
  {
    v18 = *(void (__fastcall **)(_QWORD *, char **))(*v11 + 88LL);
    if ( (char *)v18 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v11, &v72);
    else
      v18(v11, &v72);
    v19 = *this;
    *(_QWORD *)&v93 = 0LL;
    v20 = (float)(int)v72;
    v21 = (float)SHIDWORD(v72);
    v22 = *(__int64 (__fastcall **)(__int64 *))(*v19 + 208);
    *((float *)&v93 + 2) = (float)(int)v72;
    *((float *)&v93 + 3) = (float)SHIDWORD(v72);
    v23 = v22(v19);
    v26 = v23;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v62 = *((float *)this + 7) - *((float *)this + 5);
      v63 = *((float *)this + 6) - v10->left;
      McTemplateU0ppffffddtt_EventWriteTransfer(
        *((unsigned __int8 *)*this + 2060),
        v24,
        (unsigned int)*this,
        (*this)[17],
        LODWORD(v10->left),
        *((_DWORD *)this + 5),
        SLOBYTE(v63),
        SLOBYTE(v62),
        (char)v72,
        SBYTE4(v72),
        v23,
        *((_BYTE *)*this + 2060));
    }
    left = v10->left;
    v28 = *((float *)this + 5);
    v29 = *((_DWORD *)this + 8);
    v30 = (float)(v20 - 0.0) / (float)(*((float *)this + 6) - v10->left);
    v31 = (float)(v21 - 0.0) / (float)(*((float *)this + 7) - v28);
    if ( v29 )
    {
      v32 = v29 - 2;
      if ( !v32 )
      {
        v30 = fminf(v30, v31);
LABEL_28:
        v31 = v30;
        goto LABEL_29;
      }
      if ( v32 == 1 )
      {
        v30 = fmaxf(v30, v31);
        goto LABEL_28;
      }
    }
    else
    {
      v30 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v31 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    }
LABEL_29:
    v33 = 0;
    LODWORD(v78) = 0;
    HIDWORD(v78) = 0;
    *((_QWORD *)&v80 + 1) = 0x3F80000000000000LL;
    v34 = *this;
    v35 = _xmm;
    v81 = 0;
    v77 = LODWORD(v30);
    *(_QWORD *)((char *)&v78 + 4) = LODWORD(v31);
    v79 = _xmm;
    *(float *)&v80 = (float)(COERCE_FLOAT(LODWORD(left) ^ _xmm) * v30) + 0.0;
    *((float *)&v80 + 1) = (float)(COERCE_FLOAT(LODWORD(v28) ^ _xmm) * v31) + 0.0;
    v36 = (__int128 *)v34[20];
    if ( v36 )
    {
      v65 = v36[1];
      v87 = *v36;
      v66 = v36[2];
      v88 = v65;
      v67 = v36[3];
      v68 = *((_DWORD *)v36 + 16);
      v89 = v66;
      v91 = v68;
      v90 = v67;
      CMILMatrix::Multiply((CMILMatrix *)&v87, (const struct CMILMatrix *)&v77);
      v39 = v87;
      v33 = v91;
      v38 = v88;
      v81 = v91;
      v35 = v89;
      v37 = v90;
      v77 = v87;
      v78 = v88;
      v79 = v89;
      v80 = v90;
    }
    else
    {
      v37 = v80;
      v38 = v78;
      v39 = v77;
    }
    v86 = v33;
    v82 = v39;
    v83 = v38;
    v84 = v35;
    v85 = v37;
    v40 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v82,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v82,
            v25);
    LOWORD(v86) = v86 & 0xC003;
    if ( !v40 )
    {
      v6 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x48Bu, 0LL);
      goto LABEL_12;
    }
    v92 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(&v82, &v93, &v92);
    v41 = *(void (__fastcall **)(_QWORD *, __int64))(v11[2] + 152LL);
    v42 = *((unsigned int *)v74 + 2);
    v43 = v11 + 2;
    if ( (char *)v41 == (char *)CDeviceTextureTarget::SetDisplayId )
      CDeviceTextureTarget::SetDisplayId(v43, v42);
    else
      v41(v43, v42);
    v44 = v73;
    v45 = (CCachedVisualImage *)*this;
    v46 = **this;
    v73 = 0LL;
    v47 = *(void (**)(CCachedVisualImage *__hidden, struct CDrawingContext **))(v46 + 240);
    if ( v44 )
      (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v47 == CCachedVisualImage::CreateDrawingContext )
      CCachedVisualImage::CreateDrawingContext(v45, &v73);
    else
      ((void (__fastcall *)(CCachedVisualImage *, CDrawingContext **))v47)(v45, &v73);
    v48 = CDrawingContext::BeginFrame(
            v73,
            v12 & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
            &v77,
            &`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue,
            (unsigned int)(v26 != 0) + 5,
            0LL);
    v6 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x49Fu, 0LL);
      goto LABEL_12;
    }
    CD2DContext::FlushCurrentTargetOnPopForDImage((CD2DContext *)(*((_QWORD *)v73 + 5) + 16LL));
    ++dword_1804067B8;
    ++dword_18040687C;
    if ( (float)(*((float *)this + 6) - *((float *)this + 4)) > (float)(int)v72
      || (float)(*((float *)this + 7) - *((float *)this + 5)) > (float)SHIDWORD(v72) )
    {
      *(_QWORD *)&v82 = 0x600000003LL;
      LODWORD(v83) = 1;
      v61 = CDrawingContext::PushRenderOptionsInternal(v73, 0LL, (const struct MilRenderOptions *)&v82, 1);
      v6 = v61;
      if ( v61 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x4BAu, 0LL);
LABEL_58:
        CDrawingContext::EndFrame(v73);
        goto LABEL_12;
      }
      v9 = 1;
    }
    v49 = v9;
    v50 = (*this)[17];
    if ( (*(_DWORD *)(v50 + 96) & 0x400) != 0 && (*(float *)&v77 < 0.40000001 || *((float *)&v78 + 1) < 0.40000001) )
    {
      v74 = 0LL;
      v75 = PixelAlign(v50, 1LL);
      v76 = PixelAlign(v51, 1LL);
      v52 = CDrawingContext::PushLinearInterpolationLayer(v73);
      v6 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x4D1u, 0LL);
        goto LABEL_56;
      }
      v53 = 1;
      v49 = 0;
    }
    else
    {
      v53 = 0;
    }
    v54 = v73;
    (*(void (__fastcall **)(__int64 *, __int128 *))(**this + 232))(*this, &v92);
    v55 = *this;
    v94 = 0;
    v95 = 0;
    v93 = v92;
    v56 = (CVisualTree *)(*(__int64 (__fastcall **)(__int64 *))(*v55 + 216))(v55);
    v57 = CDrawingContext::DrawVisualTree(v54, v56, 2, v49, 0LL);
    v6 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x4E7u, 0LL);
    }
    else
    {
      if ( v53 )
      {
        v53 = 0;
        v64 = CDrawingContext::PopLayerInternal(v73);
        v6 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x4ECu, 0LL);
LABEL_56:
          if ( v9 )
            CDrawingContext::PopRenderOptionsInternal(v73, 1);
          goto LABEL_58;
        }
      }
      if ( v9 )
      {
        v9 = 0;
        CDrawingContext::PopRenderOptionsInternal(v73, 1);
      }
      v58 = !g_LockAndReadCVI;
      v59 = v73;
      *((_BYTE *)this + 57) = *((_BYTE *)v73 + 7982);
      if ( !v58 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 112LL))(
          v11,
          ((unsigned __int64)v59 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64));
      v60 = g_pComposition;
      *((_BYTE *)this + 56) = 0;
      this[5] = (__int64 *)CComposition::GetFrameTargetTime(v60);
      this[6] = (__int64 *)GetCurrentFrameId();
    }
    if ( v53 )
      CDrawingContext::PopLayerInternal(v73);
    goto LABEL_56;
  }
LABEL_12:
  if ( dword_180404D50 && (*(unsigned __int8 (__fastcall **)(__int64 *))(**this + 208))(*this) && v6 < 0 )
  {
    v69 = (__int64)*this;
    v70 = (void **)DwmDbg::DbgString::DbgString((char **)&v74, word_180336D88);
    switch ( v6 )
    {
      case -2147467263:
        DwmDbg::DbgString::DbgString(&v72, "E_NOTIMPL");
        break;
      case -2147467262:
        DwmDbg::DbgString::DbgString(&v72, "E_NOINTERFACE");
        break;
      case -2147467260:
        DwmDbg::DbgString::DbgString(&v72, "E_ABORT");
        break;
      case -2147467259:
        DwmDbg::DbgString::DbgString(&v72, "E_FAIL");
        break;
      case -2147418113:
        DwmDbg::DbgString::DbgString(&v72, "E_UNEXPECTED");
        break;
      case -2147221184:
        DwmDbg::DbgString::DbgString(&v72, "E_DRAW");
        break;
      case -2147024882:
        DwmDbg::DbgString::DbgString(&v72, "E_OUTOFMEMORY");
        break;
      case -2147024809:
        DwmDbg::DbgString::DbgString(&v72, "E_INVALIDARG");
        break;
      default:
        DwmDbg::DbgString::DbgString(&v72, "0x%x", v6);
        break;
    }
    v71 = (void **)DwmDbg::DbgString::DbgString((char **)&v92, "BVI-FailedRenderWalk-%s", v72);
    CBackdropVisualImage::LogEtwEvent(v69, v71, v70);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v72);
  }
  if ( v73 )
    (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v73 + 16LL))(v73);
  return (unsigned int)v6;
}
