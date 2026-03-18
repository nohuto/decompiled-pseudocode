/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016AED0
 * Callers:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18013D1F0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18016AAAC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18016AB10 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x18016AD60 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18016BEA4 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D360 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18016E020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801CC004 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        __int64 *a2,
        _OWORD *a3,
        _OWORD *a4)
{
  __int64 v8; // rcx
  __m128 *v9; // r13
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  CSurfaceDrawListBrush *(__fastcall *v14)(CSurfaceDrawListBrush *, char, __int64); // r8
  CDrawListPrimitive0 *(__fastcall *v15)(CDrawListPrimitive0 *, char); // r9
  __int64 v16; // rax
  CMultiPrimitiveDrawListBrush *v17; // rcx
  void (__fastcall *v18)(CMultiPrimitiveDrawListBrush *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char, __int64), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)); // rax
  CDrawingContext *v19; // r14
  char *v20; // rsi
  CRectanglesShape *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r12
  int v24; // eax
  int v25; // eax
  CVisual *v26; // r12
  struct _LIST_ENTRY *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __m128 v34; // xmm3
  __m128 v35; // xmm6
  __m128 v36; // xmm12
  char v37; // cl
  __int32 v38; // xmm5_4
  unsigned __int32 v39; // xmm13_4
  unsigned __int32 v40; // xmm8_4
  float v41; // xmm9_4
  unsigned __int32 v42; // xmm10_4
  float v43; // xmm4_4
  char v44; // cl
  float v45; // xmm8_4
  float v46; // xmm0_4
  size_t v47; // r8
  unsigned int v48; // edx
  int DrawListWorker; // r14d
  int BuiltHWPrimitiveEntry; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // r8
  unsigned int v60; // r15d
  int v61; // eax
  _QWORD *v62; // rbx
  _QWORD *v63; // r14
  CRectanglesShape *(__fastcall *v64)(CRectanglesShape *, char, __int64); // rax
  __m128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __m128 v68; // xmm1
  bool v69; // al
  __int64 v70; // r9
  __m128 *v71; // r10
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned int v77; // ebx
  CMultiPrimitiveDrawListBrush *v78; // rcx
  void (__fastcall *v79)(CMultiPrimitiveDrawListBrush *, __int64); // rax
  unsigned int v81; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v84; // eax
  struct Windows::Foundation::Numerics::float4x4 *v85; // r8
  float *v86; // r9
  float v87; // xmm5_4
  float v88; // xmm6_4
  __m128 v89; // xmm0
  __m128 v90; // xmm1
  __m128 v91; // xmm0
  __m128 v92; // xmm1
  __m128 v93; // xmm1
  __m128 v94; // xmm1
  bool v95; // al
  __m128 v96; // xmm0
  __m128 v97; // xmm1
  __m128 v98; // xmm0
  __m128 v99; // xmm1
  __m128 v100; // xmm1
  __m128 v101; // xmm1
  __int64 v102; // [rsp+38h] [rbp-D0h]
  __m128 v103; // [rsp+40h] [rbp-C8h]
  __m256i v104; // [rsp+50h] [rbp-B8h]
  __m128 v105; // [rsp+70h] [rbp-98h]
  __m128 v106; // [rsp+88h] [rbp-80h] BYREF
  __m256i v107; // [rsp+98h] [rbp-70h]
  __m128 v108; // [rsp+B8h] [rbp-50h]
  int v109; // [rsp+C8h] [rbp-40h]
  __int64 v110; // [rsp+D8h] [rbp-30h]
  __m128 v111; // [rsp+E8h] [rbp-20h] BYREF
  __m128 v112; // [rsp+F8h] [rbp-10h]
  __int128 v113; // [rsp+108h] [rbp+0h]
  __m128 v114; // [rsp+118h] [rbp+10h]
  int v115; // [rsp+128h] [rbp+20h]
  _QWORD v116[2]; // [rsp+138h] [rbp+30h] BYREF
  void ***v117; // [rsp+148h] [rbp+40h]
  __int64 v118; // [rsp+150h] [rbp+48h]
  __int64 v119; // [rsp+158h] [rbp+50h]
  CRectanglesShape *v120; // [rsp+160h] [rbp+58h] BYREF
  char v121; // [rsp+168h] [rbp+60h]
  _BYTE v122[68]; // [rsp+170h] [rbp+68h]
  __int64 v123; // [rsp+1B4h] [rbp+ACh]
  char v124; // [rsp+1BCh] [rbp+B4h]
  _OWORD v125[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v126; // [rsp+1E0h] [rbp+D8h]
  __int64 v127; // [rsp+1E8h] [rbp+E0h]
  __int64 v128; // [rsp+1F0h] [rbp+E8h]
  BOOL v129; // [rsp+240h] [rbp+138h]
  float v130; // [rsp+244h] [rbp+13Ch] BYREF
  float v131; // [rsp+248h] [rbp+140h] BYREF
  __int16 v132; // [rsp+24Ch] [rbp+144h]
  void **v133; // [rsp+258h] [rbp+150h] BYREF
  int v134; // [rsp+2A8h] [rbp+1A0h]
  CDrawingContext *v135; // [rsp+2C8h] [rbp+1C0h] BYREF
  CMultiPrimitiveDrawListBrush *Src; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v137[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v138[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int128 v139; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v140[24]; // [rsp+2F8h] [rbp+1F0h]
  wil::details::in1diag3 *retaddr; // [rsp+400h] [rbp+2F8h]

  v135 = a1;
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    v139 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&Src);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v139 + 1) = 0LL;
    *(_QWORD *)v140 = 0LL;
  }
  else
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v137);
  }
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    *(_OWORD *)v140 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v138);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v139);
  v8 = *a2;
  v9 = 0LL;
  *((_QWORD *)&v139 + 1) = 0LL;
  *(_QWORD *)v140 = 0LL;
  *(_QWORD *)&v140[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v140[16] = 1065353216;
  *(_DWORD *)&v140[20] = 1065353216;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  v11 = *(_DWORD *)&v140[4];
  if ( v10 )
    v11 = 128;
  *(_DWORD *)&v140[4] = v11;
  v12 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
  v13 = v12;
  v14 = CSurfaceDrawListBrush::`vector deleting destructor';
  v15 = CDrawListPrimitive0::`scalar deleting destructor';
  if ( !v12 )
  {
    v60 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x378u, 0LL);
    v20 = (char *)a1 + 3440;
    goto LABEL_70;
  }
  *(_QWORD *)(v12 + 8) = 1065353216LL;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 20) = 1065353216LL;
  *(_DWORD *)(v12 + 28) = 0;
  *(_BYTE *)(v12 + 52) = 0;
  *(_BYTE *)(v12 + 64) = 0;
  *(_QWORD *)v12 = &CMultiPrimitiveDrawListBrush::`vftable';
  v16 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v13 + 72) = v16;
  *(_OWORD *)(v13 + 80) = *a3;
  v17 = Src;
  Src = (CMultiPrimitiveDrawListBrush *)v13;
  *(_OWORD *)&v140[8] = *a4;
  if ( v17 )
  {
    v18 = **(void (__fastcall ***)(CMultiPrimitiveDrawListBrush *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char, __int64), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v17;
    if ( (char *)v18 == (char *)CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        v17,
        1,
        (__int64)CSurfaceDrawListBrush::`vector deleting destructor');
    }
    else if ( (char *)v18 == (char *)CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(
        v17,
        1,
        (__int64)CSurfaceDrawListBrush::`vector deleting destructor');
    }
    else if ( (char *)v18 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v17, 1);
    }
    else
    {
      v18(
        v17,
        1LL,
        CSurfaceDrawListBrush::`vector deleting destructor',
        CDrawListPrimitive0::`scalar deleting destructor');
    }
  }
  if ( DWORD2(v139) <= 1 )
    DWORD2(v139) = 1;
  v19 = v135;
  v20 = (char *)a1 + 3440;
  LOBYTE(v13) = 0;
  v133 = &CCommonRenderingEffectFactory::`vftable';
  v21 = 0LL;
  *(struct _D3DCOLORVALUE *)&v122[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v116[0] = &v135;
  *(_QWORD *)&v122[60] = 0x29AA3F800000LL;
  v117 = &v133;
  v127 = 0LL;
  v128 = 0LL;
  v132 = 0;
  v116[1] = (char *)a1 + 3440;
  v120 = 0LL;
  v121 = 0;
  v124 = 0;
  v118 = 0LL;
  v123 = 1LL;
  v119 = 0LL;
  *(_QWORD *)v122 = 1065353216LL;
  *(_OWORD *)&v122[24] = 0LL;
  *(_OWORD *)&v122[40] = _xmm;
  *(_DWORD *)&v122[56] = 0;
  v22 = *((_QWORD *)v135 + 94);
  if ( *(_BYTE *)(v22 - 8) )
  {
    v102 = 0x400000001LL;
    v23 = 0LL;
    v115 = 0;
    v110 = 0LL;
    if ( v22 == *((_QWORD *)v135 + 93) || !*(_QWORD *)(v22 - 176) )
      goto LABEL_35;
    v24 = *((_DWORD *)v135 + 86);
    if ( v24 )
    {
      v13 = (unsigned int)(v24 - 1);
      v25 = *(_DWORD *)(*((_QWORD *)v135 + 42) + 4 * v13);
    }
    else
    {
      v25 = 0;
    }
    if ( *((_DWORD *)v135 + 74) == v25 )
    {
      if ( *((_BYTE *)v135 + 7936) )
      {
        if ( *((_BYTE *)v135 + 7937) )
          v26 = (CVisual *)*((_QWORD *)v135 + 402);
        else
          v26 = (CVisual *)*((_QWORD *)v135 + 994);
      }
      else
      {
        v26 = 0LL;
      }
      v27 = (struct _LIST_ENTRY *)*((_QWORD *)v135 + 993);
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char, __int64), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v27->Flink[11].Blink)(
             v27,
             v13,
             v14,
             v15) )
      {
        v9 = (__m128 *)((char *)v26 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v26);
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
          {
            if ( i[2].Flink == v27 )
            {
              v9 = (__m128 *)&i[-22];
              break;
            }
          }
        }
      }
      v9 = (__m128 *)v9[7].m128_u64[0];
      goto LABEL_31;
    }
    v65 = *(__m128 *)(v22 - 84);
    v66 = *(_OWORD *)(v22 - 84 + 16);
    v109 = *(_DWORD *)(v22 - 20);
    v106 = v65;
    v67 = *(_OWORD *)(v22 - 84 + 32);
    *(_OWORD *)v107.m256i_i8 = v66;
    v68 = *(__m128 *)(v22 - 84 + 48);
    *(_OWORD *)&v107.m256i_u64[2] = v67;
    v108 = v68;
    v69 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v106,
            &v106,
            (struct Windows::Foundation::Numerics::float4x4 *)v14);
    LOWORD(v109) = v109 & 0xC003;
    if ( v69 )
    {
LABEL_79:
      CMILMatrix::Multiply(v71, (const struct CMILMatrix *)&v106, (struct CMILMatrix *)&v111);
      if ( CMILMatrix::ProducesUniformZ<1>((__int64)&v111) )
      {
        if ( COERCE_FLOAT(v114.m128_i32[2] & _xmm) < 0.000081380211 )
          goto LABEL_81;
        if ( CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)v19 + 94) - 84LL) )
        {
          *(_OWORD *)&v104.m256i_u64[1] = 0LL;
          v103.m128_u64[1] = 0LL;
          v96 = v103;
          v105.m128_u64[1] = 0x3F80000000000000LL;
          v104.m256i_i64[3] = 1065353216LL;
          v96.m128_f32[0] = v111.m128_f32[0];
          v97 = *(__m128 *)v104.m256i_i8;
          v97.m128_f32[0] = v112.m128_f32[0];
          v98 = _mm_shuffle_ps(v96, v96, 225);
          v99 = _mm_shuffle_ps(v97, v97, 225);
          v98.m128_f32[0] = v111.m128_f32[1];
          v99.m128_f32[0] = v112.m128_f32[1];
          v112 = _mm_shuffle_ps(v99, v99, 225);
          v100 = v105;
          v115 = 10248;
          v111 = _mm_shuffle_ps(v98, v98, 225);
          HIDWORD(v102) = 36;
          v100.m128_f32[0] = v114.m128_f32[0];
          v101 = _mm_shuffle_ps(v100, v100, 225);
          v101.m128_f32[0] = v114.m128_f32[1];
          v113 = *(_OWORD *)&v104.m256i_u64[2];
          v114 = _mm_shuffle_ps(v101, v101, 225);
LABEL_81:
          v9 = &v111;
          if ( CMILMatrix::IsInvertibleDeterminant((float)(v112.m128_f32[1] * v111.m128_f32[0]) - (float)(v112.m128_f32[0] * v111.m128_f32[1])) )
          {
LABEL_31:
            v28 = *((_QWORD *)v19 + 94);
            if ( v28 == *((_QWORD *)v19 + 93) || !*(_QWORD *)(v28 - 176) )
            {
              v23 = 0LL;
            }
            else
            {
              v29 = *((_QWORD *)v19 + 337);
              v23 = *(_QWORD *)(v29 - 40);
              LODWORD(v102) = *(_DWORD *)(v29 - 8);
            }
            v30 = *((_QWORD *)v19 + 94);
            v19 = v135;
            v21 = v120;
            v110 = *(_QWORD *)(v30 - 16);
            LOBYTE(v13) = v121;
LABEL_35:
            if ( !(_BYTE)v13 || !v21 )
              goto LABEL_37;
            v64 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v21;
            if ( v64 == CRectanglesShape::`scalar deleting destructor' )
            {
              CRectanglesShape::~CRectanglesShape(v21);
              CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v21);
LABEL_77:
              v19 = v135;
              goto LABEL_37;
            }
            if ( (char *)v64 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
            {
              CRoundedRectangleShape::~CRoundedRectangleShape(v21);
              CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v21);
              v19 = v135;
            }
            else
            {
              if ( (char *)v64 != (char *)CPolygonShape::`scalar deleting destructor' )
              {
                ((void (__fastcall *)(CRectanglesShape *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char, __int64), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v64)(
                  v21,
                  1LL,
                  v14,
                  v15);
                goto LABEL_77;
              }
              CPolygonShape::`scalar deleting destructor'(v21, 1);
              v19 = v135;
            }
LABEL_37:
            v123 = v102;
            v118 = v23;
            v119 = v110;
            v120 = 0LL;
            v121 = 0;
            v124 = 0;
            if ( v9 )
            {
              *(__m128 *)v122 = *v9;
              *(__m128 *)&v122[16] = v9[1];
              *(__m128 *)&v122[32] = v9[2];
              *(__m128 *)&v122[48] = v9[3];
              *(_DWORD *)&v122[64] = v9[4].m128_i32[0];
            }
            else
            {
              *(struct _D3DCOLORVALUE *)&v122[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
              v122[65] = v122[65] & 0xC0 | 0x29;
              *(_QWORD *)v122 = 1065353216LL;
              *(_OWORD *)&v122[24] = 0LL;
              *(_OWORD *)&v122[40] = _xmm;
              *(_DWORD *)&v122[56] = 0;
              *(_DWORD *)&v122[60] = 1065353216;
              v122[64] = -86;
            }
            goto LABEL_39;
          }
        }
      }
LABEL_118:
      v19 = v135;
      goto LABEL_39;
    }
    if ( COERCE_FLOAT(*(_DWORD *)(v70 + 40) & _xmm) < 0.000081380211 )
    {
      if ( !CMILMatrix::IsPure2DUniformZ<1>(v70) )
        goto LABEL_118;
      v87 = v86[12];
      v88 = v86[13];
      *(_OWORD *)&v104.m256i_u64[1] = 0LL;
      v103.m128_u64[1] = 0LL;
      v89 = v103;
      v105.m128_u64[1] = 0x3F80000000000000LL;
      v89.m128_f32[0] = *v86;
      v104.m256i_i64[3] = 1065353216LL;
      v90 = *(__m128 *)v104.m256i_i8;
      v90.m128_f32[0] = v86[4];
      v91 = _mm_shuffle_ps(v89, v89, 225);
      v92 = _mm_shuffle_ps(v90, v90, 225);
      v91.m128_f32[0] = v86[1];
      v92.m128_f32[0] = v86[5];
      *(__m128 *)v104.m256i_i8 = _mm_shuffle_ps(v92, v92, 225);
      v109 = 10248;
      v107 = v104;
      v93 = v105;
      v103 = _mm_shuffle_ps(v91, v91, 225);
      v93.m128_f32[0] = v87;
      v106 = v103;
      v94 = _mm_shuffle_ps(v93, v93, 225);
      v94.m128_f32[0] = v88;
      v105 = _mm_shuffle_ps(v94, v94, 225);
      v108 = v105;
      v95 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v106, &v106, v85);
      LOWORD(v109) = v109 & 0xC003;
      if ( !v95 )
        goto LABEL_118;
      goto LABEL_79;
    }
  }
LABEL_39:
  v31 = *((_DWORD *)v19 + 74);
  v134 = 0;
  if ( v31 )
  {
    v32 = (unsigned int)(v31 - 1);
    v33 = *((_QWORD *)v19 + 36);
    v34 = *(__m128 *)(68 * v32 + v33);
    v35 = *(__m128 *)(68 * v32 + v33 + 16);
    v36 = *(__m128 *)(68 * v32 + v33 + 48);
    v134 = *(_DWORD *)(68 * v32 + v33 + 64);
    v37 = BYTE1(v134);
    v38 = _mm_shuffle_ps(v36, v36, 255).m128_u32[0];
    v39 = _mm_shuffle_ps(v36, v36, 85).m128_u32[0];
    v40 = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
    LODWORD(v41) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
    v42 = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
    LODWORD(v43) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
  }
  else
  {
    v34.m128_i32[0] = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v43 = 0.0;
    v42 = 0;
    v35.m128_i32[0] = 0;
    LODWORD(v41) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v40 = 0;
    v36.m128_i32[0] = 0;
    v39 = 0;
    v38 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v37 = 41;
  }
  v44 = (char)(4 * v37) >> 6;
  v129 = *((_DWORD *)v19 + 61) != 0;
  if ( v44 > 0
    || v44 >= 0
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(v42 & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(v40 & _xmm) * 61440.0))
                            + COERCE_FLOAT(v38 & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    v106.m128_u64[0] = __PAIR64__(LODWORD(v43), v34.m128_u32[0]);
    v106.m128_u64[1] = __PAIR64__(v35.m128_u32[0], v42);
    v107.m256i_i64[0] = __PAIR64__(v40, LODWORD(v41));
    v107.m256i_i64[1] = __PAIR64__(v39, v36.m128_u32[0]);
    v107.m256i_i32[4] = v38;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v106, &v130, &v131, 0LL);
    v19 = v135;
  }
  else
  {
    v45 = sqrtf_0((float)(v34.m128_f32[0] * v34.m128_f32[0]) + (float)(v43 * v43));
    v46 = sqrtf_0((float)(v35.m128_f32[0] * v35.m128_f32[0]) + (float)(v41 * v41));
    v130 = v45;
    v131 = v46;
  }
  v47 = 8LL * DWORD2(v139);
  LODWORD(v127) = DWORD2(v139);
  HIDWORD(v127) = DWORD2(v139);
  if ( v47 )
  {
    if ( v47 > 0x28 )
    {
      memset(v125, 0, sizeof(v125));
      v126 = 0LL;
      *_errno() = 34;
      _invalid_parameter_noinfo();
      v19 = v135;
    }
    else
    {
      memcpy_0(v125, &Src, v47);
    }
  }
  HIDWORD(v128) = 0;
  LOBYTE(v132) = CDrawingContext::IsWarpFastPathEnabled(v19)
              && ((unsigned int (__fastcall *)(void ***))(*v117)[1])(v117) == 1
              && !HIDWORD(v128);
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)v116);
  if ( DrawListWorker < 0 )
  {
    v81 = 311;
    goto LABEL_107;
  }
  if ( *((_QWORD *)a1 + 440) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (struct CDrawingContext *)((char *)a1 + 3440),
                              v48,
                              0LL,
                              0LL);
    DrawListWorker = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BuiltHWPrimitiveEntry, 0x32Du, 0LL);
    v51 = *((_QWORD *)a1 + 440);
    *((_QWORD *)a1 + 440) = 0LL;
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
    v52 = *((_QWORD *)a1 + 441);
    *((_QWORD *)a1 + 441) = 0LL;
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
    v53 = *((_QWORD *)a1 + 442);
    *((_QWORD *)a1 + 442) = 0LL;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v54 = *((_QWORD *)a1 + 443);
    *((_QWORD *)a1 + 443) = 0LL;
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    if ( DrawListWorker < 0 )
    {
      v81 = 316;
LABEL_107:
      v60 = DrawListWorker;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListWorker, v81, 0LL);
      CShapePtr::~CShapePtr(&v120);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListWorker, 0x380u, 0LL);
      goto LABEL_70;
    }
  }
  CShapePtr::~CShapePtr(&v120);
  if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793)
    && (v84 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160), v60 = v84, v84 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v84);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x383u, 0LL);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = 1065353216;
    v57 = *((_DWORD *)a1 + 795);
    if ( v57 <= ++*((_DWORD *)a1 + 792) )
      v57 = *((_DWORD *)a1 + 792);
    *((_DWORD *)a1 + 795) = v57;
    v58 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3440), a1, v55, v56);
    v60 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x386u, 0LL);
    v61 = *((_DWORD *)a1 + 792);
    if ( v61 )
      *((_DWORD *)a1 + 792) = v61 - 1;
  }
LABEL_70:
  v62 = (_QWORD *)*((_QWORD *)v20 + 14);
  v63 = (_QWORD *)*((_QWORD *)v20 + 15);
  while ( v62 != v63 )
  {
    if ( *v62 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v62 + 8LL))(*v62);
      *v62 = 0LL;
    }
    ++v62;
  }
  v72 = (__int64)(*((_QWORD *)v20 + 15) - *((_QWORD *)v20 + 14)) >> 3;
  if ( v72 )
    *((_QWORD *)v20 + 15) -= 8 * v72;
  v20[4488] = 0;
  v73 = *((_QWORD *)v20 + 10);
  *((_QWORD *)v20 + 10) = 0LL;
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
  v74 = *((_QWORD *)v20 + 11);
  *((_QWORD *)v20 + 11) = 0LL;
  if ( v74 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
  v75 = *((_QWORD *)v20 + 12);
  *((_QWORD *)v20 + 12) = 0LL;
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
  v76 = *((_QWORD *)v20 + 13);
  *((_QWORD *)v20 + 13) = 0LL;
  if ( v76 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
  v77 = 0;
  *(_QWORD *)&v140[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v140[16] = 1065353216;
  *(_DWORD *)&v140[20] = 1065353216;
  for ( *(_DWORD *)&v140[4] = 0; v77 < DWORD2(v139); ++v77 )
  {
    v78 = *(CMultiPrimitiveDrawListBrush **)&v137[8 * v77 - 8];
    *(_QWORD *)&v137[8 * v77 - 8] = 0LL;
    if ( v78 )
    {
      v79 = **(void (__fastcall ***)(CMultiPrimitiveDrawListBrush *, __int64))v78;
      if ( (char *)v79 == (char *)CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v78, 1, v59);
      }
      else if ( (char *)v79 == (char *)CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v78, 1, v59);
      }
      else if ( (char *)v79 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v78, 1);
      }
      else
      {
        v79(v78, 1LL);
      }
    }
  }
  DWORD2(v139) = 0;
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v139);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v138);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v137);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&Src);
  return v60;
}
