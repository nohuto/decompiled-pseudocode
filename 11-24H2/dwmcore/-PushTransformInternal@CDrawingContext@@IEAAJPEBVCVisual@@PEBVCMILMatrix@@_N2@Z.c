/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18005DF6C (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006CC40 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18006DA94 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18006DA94.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006F9C8 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800F5B08 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800FDFD4 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180137450 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1801396B0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0C98 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180209AF0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180235340 (-RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18001E260 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        const void **this,
        const struct CVisual *a2,
        __m128 *a3,
        char a4,
        bool a5)
{
  char v5; // bp
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  const void **v13; // rsi
  __int64 v14; // rax
  char v15; // r13
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // rdx
  __int32 v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  _BYTE *v22; // rcx
  char v23; // dl
  float v24; // xmm3_4
  bool v25; // bl
  size_t v26; // rsi
  bool v27; // bl
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // ebp
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  unsigned int v34; // ebx
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  unsigned int v48; // esi
  __int64 v49; // rdx
  unsigned int v50; // ebx
  __int64 result; // rax
  void *v52; // r14
  unsigned int v53; // eax
  unsigned int v54; // r13d
  __int64 v55; // rdx
  int v56; // r15d
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // r14d
  HANDLE v60; // rax
  void *v61; // rax
  const void *v62; // rbx
  unsigned int v63; // ebp
  HANDLE v64; // rax
  void *v65; // rax
  const void *v66; // rbx
  HANDLE v67; // rax
  void *v68; // rax
  const void *v69; // r12
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  unsigned int v72; // r15d
  HANDLE ProcessHeap; // rax
  void *v74; // rax
  int v75; // eax
  HANDLE v76; // rax
  size_t Size[2]; // [rsp+30h] [rbp-D8h]
  unsigned int Sizea; // [rsp+30h] [rbp-D8h]
  const void *Sizeb; // [rsp+30h] [rbp-D8h]
  void *Sizec; // [rsp+30h] [rbp-D8h]
  _OWORD v81[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v82; // [rsp+80h] [rbp-88h]
  _OWORD v83[4]; // [rsp+90h] [rbp-78h] BYREF
  __int32 v84; // [rsp+D0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v5 = 0;
  if ( !a5 )
    goto LABEL_6;
  v10 = *((unsigned int *)this + 68);
  v11 = *((unsigned int *)this + 69);
  Size[0] = 5LL;
  Size[1] = (size_t)a2;
  if ( (_DWORD)v10 == (_DWORD)v11 )
  {
    v48 = 2 * v11;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF )
    {
      if ( v48 <= 0x40 )
        v48 = 64;
      v63 = 16 * v10;
      if ( (unsigned __int64)(16 * v10) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v48 <= 0x10 )
        {
          v50 = -2147024809;
        }
        else
        {
          v68 = MIDL_user_allocate(16LL * v48);
          v69 = v68;
          if ( v68 )
          {
            memcpy_0(v68, this[33], v63);
            operator delete((void *)this[33]);
            this[33] = v69;
            *((_DWORD *)this + 69) = v48;
            goto LABEL_3;
          }
          v50 = -2147024882;
        }
        v49 = 104LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v49,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v50);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v50);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0xD4Du, 0LL);
        return v50;
      }
      v49 = 101LL;
    }
    else
    {
      v49 = 98LL;
    }
    v50 = -2147024362;
    goto LABEL_34;
  }
LABEL_3:
  v5 = 1;
  *((_OWORD *)this[33] + *((unsigned int *)this + 68)) = *(_OWORD *)Size;
  v12 = *((_DWORD *)this + 71);
  if ( v12 <= ++*((_DWORD *)this + 68) )
    v12 = *((_DWORD *)this + 68);
  *((_DWORD *)this + 71) = v12;
LABEL_6:
  v13 = this + 36;
  v14 = *((unsigned int *)this + 74);
  v15 = v5;
  if ( (_DWORD)v14 && a4 )
  {
    v82 = 0;
    v84 = 0;
    v37 = (unsigned int)(v14 - 1);
    v38 = *v13;
    v39 = *(_OWORD *)((char *)*v13 + 68 * v37 + 16);
    v81[0] = *(_OWORD *)((char *)*v13 + 68 * v37);
    v40 = *(_OWORD *)&v38[17 * v37 + 8];
    v81[1] = v39;
    v41 = *(_OWORD *)&v38[17 * v37 + 12];
    LODWORD(v38) = v38[17 * v37 + 16];
    v81[2] = v40;
    v81[3] = v41;
    v82 = (int)v38;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v81, (struct CMILMatrix *)v83);
    if ( *((_DWORD *)this + 74) == *((_DWORD *)this + 75) )
    {
      v75 = CWatermarkStack<CMILMatrix,8,2,8>::Grow((__int64)(this + 36), v42, v43, v44, this + 36);
      v34 = v75;
      v56 = v75;
      if ( v75 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v75);
        v57 = 69;
        goto LABEL_47;
      }
    }
    v17 = (char *)*v13;
    v45 = v83[1];
    v18 = 68LL * *((unsigned int *)this + 74);
    v19 = v84;
    *(_OWORD *)&v17[v18] = v83[0];
    v46 = v83[2];
    *(_OWORD *)&v17[v18 + 16] = v45;
    v47 = v83[3];
    *(_OWORD *)&v17[v18 + 32] = v46;
    *(_OWORD *)&v17[v18 + 48] = v47;
LABEL_9:
    *(_DWORD *)&v17[v18 + 64] = v19;
    ++*((_DWORD *)this + 74);
    v20 = *((_DWORD *)this + 77);
    if ( v20 <= *((_DWORD *)this + 74) )
      v20 = *((_DWORD *)this + 74);
    *((_DWORD *)this + 77) = v20;
    v21 = *((_DWORD *)this + 74);
    if ( v21 )
      v22 = (char *)*v13 + 68 * (unsigned int)(v21 - 1);
    else
      v22 = &CMILMatrix::Identity;
    v23 = v22[65];
    if ( (v23 & 0x20) != 0 || 4 * (v23 & 0xF0) == 0 )
    {
      if ( (v23 & 0x20) != 0 )
      {
        v25 = 1;
LABEL_16:
        v26 = *((unsigned int *)this + 80);
        v27 = !v25;
        if ( (_DWORD)v26 != *((_DWORD *)this + 81) )
          goto LABEL_17;
        v70 = 2LL * *((unsigned int *)this + 81);
        if ( v70 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v70 <= 0x40 )
            LODWORD(v70) = 64;
          v72 = v70;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v70 <= 1 )
          {
            v34 = -2147024809;
          }
          else
          {
            ProcessHeap = GetProcessHeap();
            v74 = HeapAlloc(ProcessHeap, 0, v72);
            Sizeb = v74;
            if ( v74 )
            {
              memcpy_0(v74, this[39], v26);
              operator delete((void *)this[39]);
              this[39] = Sizeb;
              *((_DWORD *)this + 81) = v72;
LABEL_17:
              *((_BYTE *)this[39] + (unsigned int)(*((_DWORD *)this + 80))++) = v27;
              v28 = *((_DWORD *)this + 83);
              if ( v28 <= *((_DWORD *)this + 80) )
                v28 = *((_DWORD *)this + 80);
              *((_DWORD *)this + 83) = v28;
              if ( a2 )
              {
                v29 = *((unsigned int *)this + 86);
                v30 = *((_DWORD *)this + 87);
                v31 = *((_DWORD *)this + 74);
                if ( (_DWORD)v29 == v30 )
                {
                  v32 = 2LL * v30;
                  if ( v32 > 0xFFFFFFFF )
                  {
                    v33 = 98LL;
LABEL_23:
                    v34 = -2147024362;
                    goto LABEL_24;
                  }
                  if ( (unsigned int)v32 <= 0x40 )
                    v32 = 64LL;
                  v59 = 4 * v29;
                  if ( (unsigned __int64)(4 * v29) > 0xFFFFFFFF )
                  {
                    v33 = 101LL;
                    goto LABEL_23;
                  }
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 <= 4 )
                  {
                    v34 = -2147024809;
                    goto LABEL_60;
                  }
                  v60 = GetProcessHeap();
                  v61 = HeapAlloc(v60, 0, 4 * v32);
                  v62 = v61;
                  if ( !v61 )
                  {
                    v34 = -2147024882;
LABEL_60:
                    v33 = 104LL;
LABEL_24:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v33,
                      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                      (const char *)v34);
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x83,
                      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                      (const char *)v34);
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xD5Cu, 0LL);
                    v35 = *((_DWORD *)this + 80);
                    v5 = v15;
                    if ( v35 )
                      *((_DWORD *)this + 80) = v35 - 1;
                    goto LABEL_26;
                  }
                  memcpy_0(v61, this[42], v59);
                  v52 = (void *)this[42];
                  if ( v52 )
                  {
                    v67 = GetProcessHeap();
                    HeapFree(v67, 0, v52);
                  }
                  this[42] = v62;
                  *((_DWORD *)this + 87) = v32;
                }
                *((_DWORD *)this[42] + *((unsigned int *)this + 86)) = v31;
                v53 = *((_DWORD *)this + 89);
                if ( v53 <= ++*((_DWORD *)this + 86) )
                  v53 = *((_DWORD *)this + 86);
                *((_DWORD *)this + 89) = v53;
              }
              return 0LL;
            }
            v34 = -2147024882;
          }
          v71 = 104LL;
        }
        else
        {
          v34 = -2147024362;
          v71 = 98LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v71,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v34);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v34);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xD56u, 0LL);
LABEL_26:
        v36 = *((_DWORD *)this + 74);
        if ( v36 )
          *((_DWORD *)this + 74) = v36 - 1;
        goto LABEL_48;
      }
      LODWORD(v24) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v22 + 7) & _xmm) * 61440.0)
                                     + (float)(COERCE_FLOAT(*((_DWORD *)v22 + 3) & _xmm) * 61440.0))
                             + COERCE_FLOAT(*((_DWORD *)v22 + 15) & _xmm))
                     - 1.0) & _xmm;
      v25 = v24 < 0.000081380211;
      v22[65] = v23 & 0xCF | (32 * (v24 < 0.000081380211) + 16);
      if ( v24 < 0.000081380211 )
        goto LABEL_16;
    }
    v25 = 0;
    goto LABEL_16;
  }
  v16 = *((unsigned int *)this + 75);
  if ( (_DWORD)v14 != (_DWORD)v16 )
  {
LABEL_8:
    v17 = (char *)*v13;
    v18 = 68LL * *((unsigned int *)this + 74);
    *(__m128 *)&v17[v18] = *a3;
    *(__m128 *)&v17[v18 + 16] = a3[1];
    *(__m128 *)&v17[v18 + 32] = a3[2];
    *(__m128 *)&v17[v18 + 48] = a3[3];
    v19 = a3[4].m128_i32[0];
    goto LABEL_9;
  }
  v54 = 2 * v16;
  if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
  {
    v55 = 98LL;
LABEL_45:
    v34 = -2147024362;
    goto LABEL_46;
  }
  if ( v54 <= 8 )
    v54 = 8;
  Sizea = 68 * v14;
  if ( (unsigned __int64)(68 * v14) > 0xFFFFFFFF )
  {
    v55 = 101LL;
    goto LABEL_45;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v54 <= 0x44 )
  {
    v34 = -2147024809;
  }
  else
  {
    v64 = GetProcessHeap();
    v65 = HeapAlloc(v64, 0, 68LL * v54);
    v66 = v65;
    if ( v65 )
    {
      memcpy_0(v65, *v13, Sizea);
      Sizec = (void *)*v13;
      if ( *v13 )
      {
        v76 = GetProcessHeap();
        HeapFree(v76, 0, Sizec);
      }
      *v13 = v66;
      *((_DWORD *)this + 75) = v54;
      v15 = v5;
      goto LABEL_8;
    }
    v34 = -2147024882;
  }
  v55 = 104LL;
LABEL_46:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v55,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v34);
  v56 = v34;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v34);
  v57 = 54;
LABEL_47:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, v57, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xD52u, 0LL);
LABEL_48:
  result = v34;
  if ( v5 )
  {
    v58 = *((_DWORD *)this + 68);
    if ( v58 )
      *((_DWORD *)this + 68) = v58 - 1;
  }
  return result;
}
