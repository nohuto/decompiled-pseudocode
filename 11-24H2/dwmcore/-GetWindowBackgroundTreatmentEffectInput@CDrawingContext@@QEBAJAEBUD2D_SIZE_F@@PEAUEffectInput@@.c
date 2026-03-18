/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802280F0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180033368 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x1800337E0 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180033C70 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x1800488E0 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004AA90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18004BD18 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180173024 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801B2254 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEB.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B2458 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 *     ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7C30 (-HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1801C82F4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18021E1C0 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        const struct CVisualTree **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  const struct CVisualTree **v3; // r12
  unsigned int v5; // r13d
  struct IBitmapResource *v6; // r14
  struct _D3DCOLORVALUE v7; // xmm7
  const struct D2D_SIZE_F *v9; // rbx
  __m128 v10; // xmm8
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v13; // rcx
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  struct CVisual *CurrentVisual; // rbx
  const struct CVisualTree *v19; // rdi
  struct _LIST_ENTRY *v20; // rax
  const struct CVisualTree *v21; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  CVisualReferenceController *v23; // rcx
  __int64 (*v24)(void); // rax
  struct CVisual *VisualNoRef; // rax
  struct _LIST_ENTRY *v26; // rax
  CVisual *v27; // rax
  struct CTreeData *TreeData; // rax
  char v29; // cl
  int v30; // edx
  char v31; // al
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rdi
  struct CCachedWindowBackgroundTreatment *v33; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v35; // r10
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v37; // rax
  struct _LIST_ENTRY *v38; // r10
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v40; // rax
  struct _LIST_ENTRY *k; // rcx
  float v42; // xmm3_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm6_4
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // di
  CVisual *v49; // rax
  struct CWindowBackgroundTreatment *v50; // rax
  CCachedWindowBackgroundTreatment *v51; // r11
  int v52; // eax
  struct CWindowBackgroundTreatment *v54; // rax
  int v55; // eax
  CVisual *v56; // rax
  CDrawListBitmap *v57; // rax
  CVisual *v58; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rdi
  const struct RenderTargetInfo *v60; // rax
  __int64 v61; // xmm0_8
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  const struct CMILMatrix *v70; // rax
  char v71; // [rsp+38h] [rbp-D0h]
  bool v72; // [rsp+39h] [rbp-CFh] BYREF
  int v73; // [rsp+3Ch] [rbp-CCh]
  CVisual *v74[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _D3DCOLORVALUE v75; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v76; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+78h] [rbp-90h]
  __int128 v78; // [rsp+88h] [rbp-80h]
  __int128 v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+A8h] [rbp-60h]
  __int64 v81; // [rsp+B8h] [rbp-50h] BYREF
  int v82; // [rsp+C0h] [rbp-48h]
  __int64 v83; // [rsp+C4h] [rbp-44h]
  int v84; // [rsp+CCh] [rbp-3Ch]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  int v86; // [rsp+D8h] [rbp-30h]
  const struct D2D_SIZE_F *v87; // [rsp+E0h] [rbp-28h]
  _OWORD v88[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v89; // [rsp+128h] [rbp+20h]
  char v90[40]; // [rsp+138h] [rbp+30h] BYREF
  struct CCachedWindowBackgroundTreatment *v91[2]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v92; // [rsp+170h] [rbp+68h]
  float v93; // [rsp+178h] [rbp+70h] BYREF
  int v94; // [rsp+17Ch] [rbp+74h]
  FLOAT width; // [rsp+180h] [rbp+78h]
  float v96; // [rsp+184h] [rbp+7Ch]
  float v97; // [rsp+188h] [rbp+80h]
  float v98; // [rsp+18Ch] [rbp+84h]

  v80 = 10666;
  v5 = 0;
  v6 = 0LL;
  v76 = _xmm;
  v77 = _xmm;
  *(struct _D3DCOLORVALUE *)&v7.r = 0LL;
  v72 = 0;
  v9 = a2;
  v89 = 0;
  v10 = 0LL;
  v87 = a2;
  v78 = _xmm;
  v79 = *(__int128 *)&_xmm.r;
  *(struct _D3DCOLORVALUE *)&v75.r = 0LL;
  EffectInput::Reset(a3);
  v93 = 0.0;
  v94 = 0;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 104) = 1;
  *((_BYTE *)a3 + 106) = 1;
  height = v9->height;
  width = v9->width;
  *(_OWORD *)v91 = 0LL;
  v96 = height;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 36));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v93, v91);
  *(_OWORD *)v74 = 0LL;
  CDrawingContext::GetClipBoundsWorld(this, v74);
  v14 = *(float *)v74;
  if ( *(float *)v91 > *(float *)v74 )
    v14 = *(float *)v91;
  v15 = *((float *)v74 + 1);
  if ( *((float *)v91 + 1) > *((float *)v74 + 1) )
    v15 = *((float *)v91 + 1);
  v16 = *(float *)&v74[1];
  if ( *(float *)&v74[1] > *(float *)&v91[1] )
    v16 = *(float *)&v91[1];
  v17 = *((float *)&v74[1] + 1);
  if ( *((float *)&v74[1] + 1) > *((float *)&v91[1] + 1) )
    v17 = *((float *)&v91[1] + 1);
  if ( v16 <= v14 || v17 <= v15 )
    goto LABEL_80;
  LOBYTE(v3) = 0;
  v73 = (int)v3;
  v71 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
  if ( !CurrentVisual )
    goto LABEL_75;
  v3 = this + 993;
  while ( (**((_DWORD **)CurrentVisual + 29) & 0x400000) == 0 )
  {
    v3 = this + 993;
    CVisual::CalcTransform(CurrentVisual, this[993], 0LL, &v72, (struct CMILMatrix *)v88, 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v76, (const struct CMILMatrix *)v88, (struct CMILMatrix *)&v76);
    v19 = this[993];
    if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v3 + 184LL))(*v3) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(CurrentVisual);
      v35 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != v35; i = i->Flink )
        {
          v20 = i - 22;
          if ( (const struct CVisualTree *)i[2].Flink == v19 )
            goto LABEL_16;
        }
      }
      goto LABEL_34;
    }
    v20 = (struct _LIST_ENTRY *)((char *)CurrentVisual + 328);
LABEL_16:
    if ( v20 )
    {
      v21 = *v3;
      if ( CurrentVisual != *((struct CVisual **)*v3 + 9) )
      {
        v74[0] = 0LL;
        TransformParentDataInternal = CVisual::GetTransformParentDataInternal(CurrentVisual);
        if ( TransformParentDataInternal )
        {
          v23 = *(CVisualReferenceController **)TransformParentDataInternal;
          v24 = *(__int64 (**)(void))(**(_QWORD **)TransformParentDataInternal + 184LL);
          if ( (char *)v24 == (char *)CVisualReferenceController::GetVisualNoRef )
            VisualNoRef = CVisualReferenceController::GetVisualNoRef(v23);
          else
            VisualNoRef = (struct CVisual *)v24();
          v74[0] = VisualNoRef;
        }
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v21 + 184LL))(v21) )
        {
          v26 = (struct _LIST_ENTRY *)((char *)CurrentVisual + 328);
LABEL_24:
          if ( !v26 || !BYTE4(v26->Blink) || !v74[0] )
            goto LABEL_27;
          TreeData = CVisual::FindTreeData(v74[0], v21);
          v29 = 1;
        }
        else
        {
          v37 = CVisual::GetTreeDataListHead(CurrentVisual);
          v38 = v37;
          if ( v37 )
          {
            for ( j = v37->Flink; j != v38; j = j->Flink )
            {
              v26 = j - 22;
              if ( (const struct CVisualTree *)j[2].Flink == v21 )
                goto LABEL_24;
            }
          }
LABEL_27:
          v27 = (CVisual *)*((_QWORD *)CurrentVisual + 11);
          v91[0] = 0LL;
          v74[0] = v27;
          if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v21 + 184LL))(v21) )
          {
            TreeData = (CVisual *)((char *)v74[0] + 328);
          }
          else
          {
            v40 = CVisual::GetTreeDataListHead(v74[0]);
            if ( v40 )
            {
              for ( k = v40->Flink; k != v40; k = k->Flink )
              {
                if ( (const struct CVisualTree *)k[2].Flink == v21 )
                {
                  TreeData = (struct CTreeData *)&k[-22];
                  goto LABEL_29;
                }
              }
            }
            TreeData = v91[0];
          }
LABEL_29:
          v29 = 0;
        }
        if ( TreeData )
        {
          v30 = (unsigned __int8)v73;
          if ( v29 )
            v30 = 1;
          v73 = v30;
        }
      }
    }
LABEL_34:
    CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 11);
    if ( !CurrentVisual )
      break;
  }
  v5 = 0;
  if ( CurrentVisual )
  {
    v31 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v3 + 184LL))(*v3);
    LOBYTE(v3) = v73;
    if ( v31 )
      goto LABEL_37;
  }
  else
  {
    LOBYTE(v3) = v73;
  }
LABEL_75:
  v58 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
  CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(v58);
  if ( CachedWindowBackgroundTreatment )
  {
    v60 = (const struct RenderTargetInfo *)(*((__int64 (__fastcall **)(char *))this[3] + 2))((char *)this + 24);
    if ( CCachedWindowBackgroundTreatment::HasValidRenderingRealization(CachedWindowBackgroundTreatment, v60) )
    {
      v6 = (struct IBitmapResource *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
      if ( v6 )
      {
        v61 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
        v62 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
        v10 = *(__m128 *)((char *)CachedWindowBackgroundTreatment + 100);
        v80 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
        v92 = v61;
        v63 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
        v76 = v62;
        v64 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
        v77 = v63;
        v65 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
        v78 = v64;
        v79 = v65;
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)((char *)CachedWindowBackgroundTreatment
                                                                                                 + 124));
        *(struct _D3DCOLORVALUE *)&v75.r = *(struct _D3DCOLORVALUE *)&v7.r;
      }
      v71 = 1;
LABEL_58:
      if ( v6 )
        goto LABEL_59;
      goto LABEL_60;
    }
  }
  if ( !CurrentVisual )
  {
    *(struct _D3DCOLORVALUE *)&v7.r = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    goto LABEL_70;
  }
LABEL_37:
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
  if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
  {
    v48 = 0;
    goto LABEL_61;
  }
  v33 = (struct CCachedWindowBackgroundTreatment *)*((_QWORD *)WindowBackgroundTreatmentInternal + 10);
  v91[0] = v33;
  if ( !v33 )
  {
    *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(*((_QWORD *)WindowBackgroundTreatmentInternal
                                                                                               + 9)
                                                                                             + 104LL));
    *(struct _D3DCOLORVALUE *)&v75.r = *(struct _D3DCOLORVALUE *)&v7.r;
    goto LABEL_58;
  }
  if ( !(_BYTE)v3 )
    goto LABEL_40;
  v66 = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
  v67 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
  v89 = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
  v88[0] = v66;
  v68 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
  v88[1] = v67;
  v69 = *((_OWORD *)WindowBackgroundTreatmentInternal + 13);
  v88[2] = v68;
  v88[3] = v69;
  if ( !CMILMatrix::Invert((CMILMatrix *)v88) )
    goto LABEL_70;
  v70 = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 36));
  CMILMatrix::Multiply(v70, (const struct CMILMatrix *)v88, (struct CMILMatrix *)&v76);
  v33 = v91[0];
LABEL_40:
  v6 = v33;
  v10 = *(__m128 *)((char *)WindowBackgroundTreatmentInternal + 88);
  v92 = *((_QWORD *)WindowBackgroundTreatmentInternal + 13);
LABEL_59:
  *(_OWORD *)v91 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(&v76, &v93, v91);
  v42 = *((float *)v91 + 1);
  v43 = *((float *)&v91[1] + 1);
  v44 = *(float *)&v91[1] - v10.m128_f32[0];
  v45 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  *((float *)a3 + 21) = *(float *)v91 - v10.m128_f32[0];
  *((float *)a3 + 22) = v42 - v45;
  *((float *)a3 + 23) = v44;
  *((float *)a3 + 24) = v43 - v45;
  v81 = v76;
  v82 = HIDWORD(v76);
  v85 = v79;
  v83 = v77;
  v86 = HIDWORD(v79);
  v84 = HIDWORD(v77);
  *(_OWORD *)v91 = _xmm;
  LODWORD(v92) = v10.m128_i32[0] ^ _xmm;
  HIDWORD(v92) = LODWORD(v45) ^ _xmm;
  v46 = Matrix3x3::operator*(&v81, v90, v91);
  v94 = 0;
  width = 0.0;
  v93 = 1.0 / (float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v10.m128_f32[0]);
  v96 = 1.0 / (float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] - v45);
  v97 = 0.0 - (float)(v93 * 0.0);
  v98 = 0.0 - (float)(v96 * 0.0);
  v47 = Matrix3x3::operator*(v46, v88, &v93);
  *((_OWORD *)a3 + 3) = *(_OWORD *)v47;
  *((_OWORD *)a3 + 4) = *(_OWORD *)(v47 + 16);
  *((_DWORD *)a3 + 20) = *(_DWORD *)(v47 + 32);
LABEL_60:
  v48 = v71;
  if ( !CurrentVisual )
    goto LABEL_70;
LABEL_61:
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)this[993] + 184LL))(this[993]) || v48 )
  {
LABEL_70:
    if ( v6 )
    {
      v57 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v93, v6);
      CDrawListBitmap::operator=(a3, v57);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v93);
      *((_DWORD *)a3 + 10) |= 0x200u;
      return v5;
    }
    v9 = v87;
LABEL_80:
    CDrawingContext::SetEffectInputToTransparentBlack(v13, v9, a3);
    *(struct _D3DCOLORVALUE *)((char *)a3 + 24) = *(struct _D3DCOLORVALUE *)&v7.r;
    return v5;
  }
  v49 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
  v91[0] = CVisual::GetCachedWindowBackgroundTreatment(v49);
  if ( !v91[0] )
  {
    v54 = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
    v55 = CCachedWindowBackgroundTreatment::Create(v54, (const struct CMILMatrix *)&v76, &v75, v91);
    v5 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x83Bu, 0LL);
      return v5;
    }
    v56 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
    CVisual::SetCachedWindowBackgroundTreatment(v56, v91[0]);
LABEL_69:
    *(struct _D3DCOLORVALUE *)&v7.r = *(struct _D3DCOLORVALUE *)&v75.r;
    goto LABEL_70;
  }
  v50 = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
  v52 = CCachedWindowBackgroundTreatment::Update(v51, v50, (const struct CMILMatrix *)&v76, &v75);
  v5 = v52;
  if ( v52 >= 0 )
    goto LABEL_69;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x834u, 0LL);
  return v5;
}
