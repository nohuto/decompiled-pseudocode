/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800E0B50 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18012A860 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E3100 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801ECF34 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18024FB5C (-DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18029DDE0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18010C210 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CDrawingContext **this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  CVisual *v3; // r12
  struct CDrawListEntryBuilder *v5; // rbx
  CRectanglesShape *v7; // r15
  __int64 v8; // rdx
  void ***v9; // rcx
  void ***v10; // rax
  CDrawingContext *v11; // rdi
  __int64 v12; // rcx
  __m128 *p_Blink; // r13
  int v14; // eax
  int v15; // eax
  struct _LIST_ENTRY *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  CDrawingContext *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128 v23; // xmm3
  __m128 v24; // xmm6
  __m128 v25; // xmm11
  char v26; // cl
  __int32 v27; // xmm5_4
  unsigned __int32 v28; // xmm12_4
  unsigned __int32 v29; // xmm9_4
  float v30; // xmm8_4
  unsigned __int32 v31; // xmm10_4
  float v32; // xmm4_4
  char v33; // cl
  float v34; // xmm7_4
  float v35; // xmm0_4
  __int64 v36; // rax
  size_t v37; // rax
  int DrawListWorker; // eax
  __int64 v39; // rdx
  unsigned int v40; // edi
  int BuiltHWPrimitiveEntry; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  CRectanglesShape *v46; // rbx
  void *(__fastcall *v47)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall *v49)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __m128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __m128 v53; // xmm1
  bool v54; // al
  __int64 v55; // r9
  __m128 *v56; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v59; // r8
  float *v60; // r9
  float v61; // xmm5_4
  float v62; // xmm6_4
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __m128 v67; // xmm1
  __m128 v68; // xmm1
  bool v69; // al
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  int v72; // eax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __m128 v75; // xmm0
  __m128 v76; // xmm1
  __m128 v77; // xmm0
  __m128 v78; // xmm1
  __m128 v79; // xmm1
  __m128 v80; // xmm1
  __m128 v81; // [rsp+38h] [rbp-D0h]
  __m256i v82; // [rsp+48h] [rbp-C0h]
  __m128 v83; // [rsp+68h] [rbp-A0h]
  __m128 v84; // [rsp+88h] [rbp-80h] BYREF
  __m128 v85; // [rsp+98h] [rbp-70h]
  __int128 v86; // [rsp+A8h] [rbp-60h]
  __m128 v87; // [rsp+B8h] [rbp-50h]
  int v88; // [rsp+C8h] [rbp-40h]
  __m128 v89; // [rsp+D8h] [rbp-30h] BYREF
  __m256i v90; // [rsp+E8h] [rbp-20h]
  __m128 v91; // [rsp+108h] [rbp+0h]
  int v92; // [rsp+118h] [rbp+10h]
  _QWORD v93[2]; // [rsp+128h] [rbp+20h] BYREF
  void ***v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  CVisual *v96; // [rsp+148h] [rbp+40h]
  CRectanglesShape *v97; // [rsp+150h] [rbp+48h]
  unsigned __int8 v98; // [rsp+158h] [rbp+50h]
  _BYTE v99[68]; // [rsp+160h] [rbp+58h]
  unsigned __int64 v100; // [rsp+1A4h] [rbp+9Ch]
  char v101; // [rsp+1ACh] [rbp+A4h]
  _OWORD v102[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v103; // [rsp+1D0h] [rbp+C8h]
  __int64 v104; // [rsp+1D8h] [rbp+D0h]
  __int64 v105; // [rsp+1E0h] [rbp+D8h]
  __int128 v106; // [rsp+1E8h] [rbp+E0h]
  __int128 v107; // [rsp+1F8h] [rbp+F0h]
  int v108; // [rsp+208h] [rbp+100h]
  __int128 v109; // [rsp+20Ch] [rbp+104h]
  __int128 v110; // [rsp+21Ch] [rbp+114h]
  int v111; // [rsp+22Ch] [rbp+124h]
  BOOL v112; // [rsp+230h] [rbp+128h]
  float v113; // [rsp+234h] [rbp+12Ch] BYREF
  float v114; // [rsp+238h] [rbp+130h] BYREF
  bool v115; // [rsp+23Ch] [rbp+134h]
  char v116; // [rsp+23Dh] [rbp+135h]
  int v117; // [rsp+328h] [rbp+220h]
  int v118; // [rsp+330h] [rbp+228h]
  __int64 v119; // [rsp+338h] [rbp+230h]
  void **v120; // [rsp+340h] [rbp+238h] BYREF

  v3 = 0LL;
  v5 = a3;
  LOBYTE(a3) = 0;
  v7 = 0LL;
  v120 = &CCommonRenderingEffectFactory::`vftable';
  *(_QWORD *)&v99[60] = 1065353216LL;
  v8 = 0LL;
  v93[0] = this;
  v9 = (void ***)*((_QWORD *)a2 + 1);
  *(struct _D3DCOLORVALUE *)&v99[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v99[65] = 41;
  v10 = &v120;
  if ( v9 )
    v10 = v9;
  v97 = 0LL;
  v94 = v10;
  v116 = *((_BYTE *)a2 + 96);
  v98 = 0;
  v101 = 0;
  v95 = 0LL;
  v100 = 1LL;
  v96 = 0LL;
  *(_QWORD *)v99 = 1065353216LL;
  *(_OWORD *)&v99[24] = 0LL;
  *(_OWORD *)&v99[40] = _xmm;
  *(_DWORD *)&v99[56] = 0;
  v99[64] = -86;
  v104 = 0LL;
  v105 = 0LL;
  v115 = 0;
  v93[1] = v5;
  if ( *((_BYTE *)a2 + 92) )
  {
    v11 = *this;
    LOBYTE(v8) = 41;
    v99[65] = 41;
    v12 = *((_QWORD *)v11 + 94);
    if ( *(_BYTE *)(v12 - 8) )
    {
      p_Blink = 0LL;
      v119 = 0LL;
      v88 = 0;
      v117 = 1;
      v118 = 4;
      if ( v12 != *((_QWORD *)v11 + 93) && *(_QWORD *)(v12 - 176) )
      {
        v14 = *((_DWORD *)v11 + 86);
        if ( v14 )
        {
          v8 = (unsigned int)(v14 - 1);
          v15 = *(_DWORD *)(*((_QWORD *)v11 + 42) + 4 * v8);
        }
        else
        {
          v15 = 0;
        }
        if ( *((_DWORD *)v11 + 74) == v15 )
        {
          if ( *((_BYTE *)v11 + 7936) )
          {
            if ( *((_BYTE *)v11 + 7937) )
              v3 = (CVisual *)*((_QWORD *)v11 + 402);
            else
              v3 = (CVisual *)*((_QWORD *)v11 + 994);
          }
          v16 = (struct _LIST_ENTRY *)*((_QWORD *)v11 + 993);
          if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, struct CDrawListEntryBuilder *, void *(__fastcall *)(CRectanglesShape *__hidden, unsigned int)))v16->Flink[11].Blink)(
                 v16,
                 v8,
                 a3,
                 CRectanglesShape::`scalar deleting destructor') )
          {
            p_Blink = (__m128 *)((char *)v3 + 328);
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead(v3);
            if ( TreeDataListHead )
            {
              for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
              {
                if ( i[2].Flink == v16 )
                {
                  p_Blink = (__m128 *)&i[-22].Blink;
                  break;
                }
              }
            }
          }
          p_Blink = (__m128 *)p_Blink[7].m128_u64[0];
        }
        else
        {
          v50 = *(__m128 *)(v12 - 84);
          v51 = *(_OWORD *)(v12 - 84 + 16);
          v92 = *(_DWORD *)(v12 - 20);
          v89 = v50;
          v52 = *(_OWORD *)(v12 - 84 + 32);
          *(_OWORD *)v90.m256i_i8 = v51;
          v53 = *(__m128 *)(v12 - 84 + 48);
          *(_OWORD *)&v90.m256i_u64[2] = v52;
          v91 = v53;
          v54 = Windows::Foundation::Numerics::invert(
                  (Windows::Foundation::Numerics *)&v89,
                  (const struct Windows::Foundation::Numerics::float4x4 *)&v89,
                  a3);
          LOWORD(v92) = v92 & 0xC003;
          if ( !v54 )
          {
            if ( COERCE_FLOAT(*(_DWORD *)(v55 + 40) & _xmm) >= 0.000081380211 )
              goto LABEL_24;
            if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v55) )
              goto LABEL_24;
            v61 = v60[12];
            v62 = v60[13];
            *(_OWORD *)&v82.m256i_u64[1] = 0LL;
            v81.m128_u64[1] = 0LL;
            v63 = v81;
            v83.m128_u64[1] = 0x3F80000000000000LL;
            v63.m128_f32[0] = *v60;
            v82.m256i_i64[3] = 1065353216LL;
            v64 = *(__m128 *)v82.m256i_i8;
            v64.m128_f32[0] = v60[4];
            v65 = _mm_shuffle_ps(v63, v63, 225);
            v66 = _mm_shuffle_ps(v64, v64, 225);
            v65.m128_f32[0] = v60[1];
            v66.m128_f32[0] = v60[5];
            *(__m128 *)v82.m256i_i8 = _mm_shuffle_ps(v66, v66, 225);
            v92 = 10248;
            v90 = v82;
            v67 = v83;
            v81 = _mm_shuffle_ps(v65, v65, 225);
            v67.m128_f32[0] = v61;
            v89 = v81;
            v68 = _mm_shuffle_ps(v67, v67, 225);
            v68.m128_f32[0] = v62;
            v83 = _mm_shuffle_ps(v68, v68, 225);
            v91 = v83;
            v69 = Windows::Foundation::Numerics::invert(
                    (Windows::Foundation::Numerics *)&v89,
                    (const struct Windows::Foundation::Numerics::float4x4 *)&v89,
                    v59);
            LOWORD(v92) = v92 & 0xC003;
            if ( !v69 )
              goto LABEL_24;
          }
          CMILMatrix::Multiply(v56, (const struct CMILMatrix *)&v89, (struct CMILMatrix *)&v84);
          if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(&v84) )
            goto LABEL_24;
          if ( COERCE_FLOAT(v87.m128_i32[2] & _xmm) >= 0.000081380211 )
          {
            if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)v11 + 94) - 84LL) )
              goto LABEL_24;
            *(_OWORD *)&v82.m256i_u64[1] = 0LL;
            v81.m128_u64[1] = 0LL;
            v75 = v81;
            v83.m128_u64[1] = 0x3F80000000000000LL;
            v82.m256i_i64[3] = 1065353216LL;
            v75.m128_f32[0] = v84.m128_f32[0];
            v76 = *(__m128 *)v82.m256i_i8;
            v76.m128_f32[0] = v85.m128_f32[0];
            v77 = _mm_shuffle_ps(v75, v75, 225);
            v78 = _mm_shuffle_ps(v76, v76, 225);
            v77.m128_f32[0] = v84.m128_f32[1];
            v78.m128_f32[0] = v85.m128_f32[1];
            v85 = _mm_shuffle_ps(v78, v78, 225);
            v79 = v83;
            v88 = 10248;
            v84 = _mm_shuffle_ps(v77, v77, 225);
            v118 = 36;
            v79.m128_f32[0] = v87.m128_f32[0];
            v80 = _mm_shuffle_ps(v79, v79, 225);
            v80.m128_f32[0] = v87.m128_f32[1];
            v86 = *(_OWORD *)&v82.m256i_u64[2];
            v87 = _mm_shuffle_ps(v80, v80, 225);
          }
          p_Blink = &v84;
          if ( !CMILMatrix::IsInvertibleDeterminant((float)(v85.m128_f32[1] * v84.m128_f32[0]) - (float)(v85.m128_f32[0] * v84.m128_f32[1])) )
            goto LABEL_24;
        }
        v17 = *((_QWORD *)v11 + 94);
        if ( v17 == *((_QWORD *)v11 + 93) || !*(_QWORD *)(v17 - 176) )
        {
          v119 = 0LL;
        }
        else
        {
          v18 = *((_QWORD *)v11 + 337);
          v117 = *(_DWORD *)(v18 - 8);
          v119 = *(_QWORD *)(v18 - 40);
        }
        a3 = (struct CDrawListEntryBuilder *)v98;
        v7 = v97;
        v3 = *(CVisual **)(*((_QWORD *)v11 + 94) - 16LL);
      }
      if ( (_BYTE)a3 && v7 )
      {
        v49 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v7;
        if ( v49 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(v7);
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v7);
        }
        else if ( v49 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v7);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v7);
        }
        else if ( v49 == CPolygonShape::`scalar deleting destructor' )
        {
          CPolygonShape::`scalar deleting destructor'(v7, 1u);
        }
        else
        {
          ((void (__fastcall *)(CRectanglesShape *, __int64, struct CDrawListEntryBuilder *, void *(__fastcall *)(CRectanglesShape *__hidden, unsigned int)))v49)(
            v7,
            1LL,
            a3,
            CRectanglesShape::`scalar deleting destructor');
        }
      }
      v95 = v119;
      v100 = __PAIR64__(v118, v117);
      v97 = 0LL;
      v98 = 0;
      v101 = 0;
      v96 = v3;
      if ( p_Blink )
      {
        *(__m128 *)v99 = *p_Blink;
        *(__m128 *)&v99[16] = p_Blink[1];
        *(__m128 *)&v99[32] = p_Blink[2];
        *(__m128 *)&v99[48] = p_Blink[3];
        *(_DWORD *)&v99[64] = p_Blink[4].m128_i32[0];
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v99[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
        v99[65] = v99[65] & 0xC0 | 0x29;
        *(_QWORD *)v99 = 1065353216LL;
        *(_OWORD *)&v99[24] = 0LL;
        *(_OWORD *)&v99[40] = _xmm;
        *(_DWORD *)&v99[56] = 0;
        *(_DWORD *)&v99[60] = 1065353216;
        v99[64] = -86;
      }
    }
  }
LABEL_24:
  v19 = *this;
  v20 = *((_DWORD *)*this + 74);
  v88 = 0;
  if ( v20 )
  {
    v21 = (unsigned int)(v20 - 1);
    v22 = *((_QWORD *)v19 + 36);
    v23 = *(__m128 *)(68 * v21 + v22);
    v24 = *(__m128 *)(68 * v21 + v22 + 16);
    v25 = *(__m128 *)(68 * v21 + v22 + 48);
    v88 = *(_DWORD *)(68 * v21 + v22 + 64);
    v26 = BYTE1(v88);
    v27 = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
    v28 = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
    v29 = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
    LODWORD(v30) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    v31 = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
    LODWORD(v32) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
  }
  else
  {
    v23.m128_i32[0] = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v32 = 0.0;
    v31 = 0;
    v24.m128_i32[0] = 0;
    LODWORD(v30) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v29 = 0;
    v25.m128_i32[0] = 0;
    v28 = 0;
    v27 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v26 = 41;
  }
  if ( *((_BYTE *)a2 + 95) )
    v112 = 1;
  else
    v112 = *((_DWORD *)v19 + 61) != 0;
  v33 = (char)(4 * v26) >> 6;
  if ( v33 > 0
    || v33 >= 0
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(v31 & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(v29 & _xmm) * 61440.0))
                            + COERCE_FLOAT(v27 & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    v89.m128_u64[0] = __PAIR64__(LODWORD(v32), v23.m128_u32[0]);
    v89.m128_u64[1] = __PAIR64__(v24.m128_u32[0], v31);
    v90.m256i_i64[0] = __PAIR64__(v29, LODWORD(v30));
    v90.m256i_i64[1] = __PAIR64__(v28, v25.m128_u32[0]);
    v90.m256i_i32[4] = v27;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v89, &v113, &v114, 0LL);
  }
  else
  {
    v34 = sqrtf_0((float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)(v32 * v32));
    v35 = sqrtf_0((float)(v24.m128_f32[0] * v24.m128_f32[0]) + (float)(v30 * v30));
    v113 = v34;
    v114 = v35;
  }
  v36 = *((unsigned int *)this + 10);
  LODWORD(v104) = v36;
  HIDWORD(v104) = v36;
  v37 = 8 * v36;
  if ( v37 )
  {
    if ( this != (CDrawingContext **)-8LL && v37 <= 0x28 )
    {
      memcpy_0(v102, this + 1, v37);
      goto LABEL_36;
    }
    v103 = 0LL;
    memset(v102, 0, sizeof(v102));
    if ( this == (CDrawingContext **)-8LL )
    {
      *_errno() = 22;
    }
    else
    {
      if ( v37 <= 0x28 )
        goto LABEL_36;
      *_errno() = 34;
    }
    _invalid_parameter_noinfo();
  }
LABEL_36:
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)v102 + (unsigned int)v104) = *(_QWORD *)a2;
    LODWORD(v104) = v104 + 1;
  }
  HIDWORD(v105) = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v104)) - 1);
  if ( HIDWORD(v105) )
  {
    v70 = *(_OWORD *)((char *)a2 + 20);
    v71 = *(_OWORD *)((char *)a2 + 36);
    v108 = *((_DWORD *)a2 + 13);
    v72 = *((_DWORD *)a2 + 22);
    v106 = v70;
    v73 = *(_OWORD *)((char *)a2 + 56);
    v111 = v72;
    v107 = v71;
    v74 = *(_OWORD *)((char *)a2 + 72);
    v109 = v73;
    v110 = v74;
  }
  v115 = !*((_BYTE *)a2 + 94)
      && CDrawingContext::IsWarpFastPathEnabled(*this)
      && ((unsigned int (__fastcall *)(void ***))(*v94)[1])(v94) == 1
      && !HIDWORD(v105);
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)v93);
  v40 = DrawListWorker;
  if ( DrawListWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListWorker, 0x137u, 0LL);
  }
  else if ( *((_QWORD *)v5 + 10) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(v5, v39, 0LL, 0LL);
    v40 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x32Du, 0LL);
    v42 = *((_QWORD *)v5 + 10);
    *((_QWORD *)v5 + 10) = 0LL;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
    v43 = *((_QWORD *)v5 + 11);
    *((_QWORD *)v5 + 11) = 0LL;
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
    v44 = *((_QWORD *)v5 + 12);
    *((_QWORD *)v5 + 12) = 0LL;
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
    v45 = *((_QWORD *)v5 + 13);
    *((_QWORD *)v5 + 13) = 0LL;
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
    if ( (v40 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x13Cu, 0LL);
  }
  if ( !v98 )
    return v40;
  v46 = v97;
  if ( !v97 )
    return v40;
  v47 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v97;
  if ( v47 == CRectanglesShape::`scalar deleting destructor' )
  {
    CRectanglesShape::~CRectanglesShape(v97);
    CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v46);
    return v40;
  }
  if ( v47 == CRoundedRectangleShape::`vector deleting destructor' )
  {
    CRoundedRectangleShape::~CRoundedRectangleShape(v97);
    CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v46);
    return v40;
  }
  else
  {
    if ( v47 != CPolygonShape::`scalar deleting destructor' )
    {
      v47(v97, 1u);
      return v40;
    }
    CPolygonShape::`scalar deleting destructor'(v97, 1u);
    return v40;
  }
}
