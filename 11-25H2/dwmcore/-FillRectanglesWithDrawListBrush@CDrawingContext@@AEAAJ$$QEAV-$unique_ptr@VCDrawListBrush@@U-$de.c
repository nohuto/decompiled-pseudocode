/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0
 * Callers:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007466C (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0874 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18010C210 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118E60 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        __int64 *a2,
        _OWORD *a3,
        _OWORD *a4)
{
  __int64 v8; // rcx
  __m128 *p_Blink; // r13
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  CSurfaceDrawListBrush *(__fastcall *v14)(CSurfaceDrawListBrush *, char); // r8
  CDrawListPrimitive0 *(__fastcall *v15)(CDrawListPrimitive0 *, char); // r9
  __int64 v16; // rax
  CMultiPrimitiveDrawListBrush *v17; // rcx
  CDrawListPrimitive0 *(__fastcall *v18)(CDrawListPrimitive0 *, char); // rax
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
  __int64 v48; // rdx
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
  unsigned int v59; // r15d
  int v60; // eax
  _QWORD *v61; // rbx
  _QWORD *v62; // r14
  CRectanglesShape *(__fastcall *v63)(CRectanglesShape *, char); // rax
  __m128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __m128 v67; // xmm1
  bool v68; // al
  __int64 v69; // r9
  __m128 *v70; // r10
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned int v76; // ebx
  CMultiPrimitiveDrawListBrush *v77; // rcx
  CDrawListPrimitive0 *(__fastcall *v78)(CDrawListPrimitive0 *, char); // rax
  unsigned int v80; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v83; // eax
  struct Windows::Foundation::Numerics::float4x4 *v84; // r8
  float *v85; // r9
  float v86; // xmm5_4
  float v87; // xmm6_4
  __m128 v88; // xmm0
  __m128 v89; // xmm1
  __m128 v90; // xmm0
  __m128 v91; // xmm1
  __m128 v92; // xmm1
  __m128 v93; // xmm1
  bool v94; // al
  __m128 v95; // xmm0
  __m128 v96; // xmm1
  __m128 v97; // xmm0
  __m128 v98; // xmm1
  __m128 v99; // xmm1
  __m128 v100; // xmm1
  __int64 v101; // [rsp+38h] [rbp-D0h]
  __m128 v102; // [rsp+40h] [rbp-C8h]
  __m256i v103; // [rsp+50h] [rbp-B8h]
  __m128 v104; // [rsp+70h] [rbp-98h]
  __m128 v105; // [rsp+88h] [rbp-80h] BYREF
  __m256i v106; // [rsp+98h] [rbp-70h]
  __m128 v107; // [rsp+B8h] [rbp-50h]
  int v108; // [rsp+C8h] [rbp-40h]
  __int64 v109; // [rsp+D8h] [rbp-30h]
  __m128 v110; // [rsp+E8h] [rbp-20h] BYREF
  __m128 v111; // [rsp+F8h] [rbp-10h]
  __int128 v112; // [rsp+108h] [rbp+0h]
  __m128 v113; // [rsp+118h] [rbp+10h]
  int v114; // [rsp+128h] [rbp+20h]
  _QWORD v115[2]; // [rsp+138h] [rbp+30h] BYREF
  void ***v116; // [rsp+148h] [rbp+40h]
  __int64 v117; // [rsp+150h] [rbp+48h]
  __int64 v118; // [rsp+158h] [rbp+50h]
  CRectanglesShape *v119; // [rsp+160h] [rbp+58h] BYREF
  char v120; // [rsp+168h] [rbp+60h]
  _BYTE v121[68]; // [rsp+170h] [rbp+68h]
  __int64 v122; // [rsp+1B4h] [rbp+ACh]
  char v123; // [rsp+1BCh] [rbp+B4h]
  _OWORD v124[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v125; // [rsp+1E0h] [rbp+D8h]
  __int64 v126; // [rsp+1E8h] [rbp+E0h]
  __int64 v127; // [rsp+1F0h] [rbp+E8h]
  BOOL v128; // [rsp+240h] [rbp+138h]
  float v129; // [rsp+244h] [rbp+13Ch] BYREF
  float v130; // [rsp+248h] [rbp+140h] BYREF
  __int16 v131; // [rsp+24Ch] [rbp+144h]
  void **v132; // [rsp+258h] [rbp+150h] BYREF
  int v133; // [rsp+2A8h] [rbp+1A0h]
  CDrawingContext *v134; // [rsp+2C8h] [rbp+1C0h] BYREF
  CMultiPrimitiveDrawListBrush *Src; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v136[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v137[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int128 v138; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v139[24]; // [rsp+2F8h] [rbp+1F0h]
  wil::details::in1diag3 *retaddr; // [rsp+400h] [rbp+2F8h]

  v134 = a1;
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    v138 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&Src);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v138 + 1) = 0LL;
    *(_QWORD *)v139 = 0LL;
  }
  else
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v136);
  }
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    *(_OWORD *)v139 = 0LL;
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v137);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v138);
  v8 = *a2;
  p_Blink = 0LL;
  *((_QWORD *)&v138 + 1) = 0LL;
  *(_QWORD *)v139 = 0LL;
  *(_QWORD *)&v139[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v139[16] = 1065353216;
  *(_DWORD *)&v139[20] = 1065353216;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  v11 = *(_DWORD *)&v139[4];
  if ( v10 )
    v11 = 128;
  *(_DWORD *)&v139[4] = v11;
  v12 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
  v13 = v12;
  v14 = CSurfaceDrawListBrush::`vector deleting destructor';
  v15 = CDrawListPrimitive0::`scalar deleting destructor';
  if ( !v12 )
  {
    v59 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x378u, 0LL);
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
  *(_OWORD *)&v139[8] = *a4;
  if ( v17 )
  {
    v18 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v17;
    if ( v18 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v17, 1);
    }
    else if ( v18 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1);
    }
    else if ( v18 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v17, 1);
    }
    else
    {
      ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v18)(
        v17,
        1LL,
        CSurfaceDrawListBrush::`vector deleting destructor',
        CDrawListPrimitive0::`scalar deleting destructor');
    }
  }
  if ( DWORD2(v138) <= 1 )
    DWORD2(v138) = 1;
  v19 = v134;
  v20 = (char *)a1 + 3440;
  LOBYTE(v13) = 0;
  v132 = &CCommonRenderingEffectFactory::`vftable';
  v21 = 0LL;
  *(struct _D3DCOLORVALUE *)&v121[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v115[0] = &v134;
  *(_QWORD *)&v121[60] = 0x29AA3F800000LL;
  v116 = &v132;
  v126 = 0LL;
  v127 = 0LL;
  v131 = 0;
  v115[1] = (char *)a1 + 3440;
  v119 = 0LL;
  v120 = 0;
  v123 = 0;
  v117 = 0LL;
  v122 = 1LL;
  v118 = 0LL;
  *(_QWORD *)v121 = 1065353216LL;
  *(_OWORD *)&v121[24] = 0LL;
  *(_OWORD *)&v121[40] = _xmm;
  *(_DWORD *)&v121[56] = 0;
  v22 = *((_QWORD *)v134 + 94);
  if ( *(_BYTE *)(v22 - 8) )
  {
    v101 = 0x400000001LL;
    v23 = 0LL;
    v114 = 0;
    v109 = 0LL;
    if ( v22 == *((_QWORD *)v134 + 93) || !*(_QWORD *)(v22 - 176) )
      goto LABEL_35;
    v24 = *((_DWORD *)v134 + 86);
    if ( v24 )
    {
      v13 = (unsigned int)(v24 - 1);
      v25 = *(_DWORD *)(*((_QWORD *)v134 + 42) + 4 * v13);
    }
    else
    {
      v25 = 0;
    }
    if ( *((_DWORD *)v134 + 74) == v25 )
    {
      if ( *((_BYTE *)v134 + 7936) )
      {
        if ( *((_BYTE *)v134 + 7937) )
          v26 = (CVisual *)*((_QWORD *)v134 + 402);
        else
          v26 = (CVisual *)*((_QWORD *)v134 + 994);
      }
      else
      {
        v26 = 0LL;
      }
      v27 = (struct _LIST_ENTRY *)*((_QWORD *)v134 + 993);
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v27->Flink[11].Blink)(
             v27,
             v13,
             v14,
             v15) )
      {
        p_Blink = (__m128 *)((char *)v26 + 328);
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
              p_Blink = (__m128 *)&i[-22].Blink;
              break;
            }
          }
        }
      }
      p_Blink = (__m128 *)p_Blink[7].m128_u64[0];
      goto LABEL_31;
    }
    v64 = *(__m128 *)(v22 - 84);
    v65 = *(_OWORD *)(v22 - 84 + 16);
    v108 = *(_DWORD *)(v22 - 20);
    v105 = v64;
    v66 = *(_OWORD *)(v22 - 84 + 32);
    *(_OWORD *)v106.m256i_i8 = v65;
    v67 = *(__m128 *)(v22 - 84 + 48);
    *(_OWORD *)&v106.m256i_u64[2] = v66;
    v107 = v67;
    v68 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v105,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v105,
            (struct Windows::Foundation::Numerics::float4x4 *)v14);
    LOWORD(v108) = v108 & 0xC003;
    if ( v68 )
    {
LABEL_79:
      CMILMatrix::Multiply(v70, (const struct CMILMatrix *)&v105, (struct CMILMatrix *)&v110);
      if ( (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(&v110) )
      {
        if ( COERCE_FLOAT(v113.m128_i32[2] & _xmm) < 0.000081380211 )
          goto LABEL_81;
        if ( (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)v19 + 94) - 84LL) )
        {
          *(_OWORD *)&v103.m256i_u64[1] = 0LL;
          v102.m128_u64[1] = 0LL;
          v95 = v102;
          v104.m128_u64[1] = 0x3F80000000000000LL;
          v103.m256i_i64[3] = 1065353216LL;
          v95.m128_f32[0] = v110.m128_f32[0];
          v96 = *(__m128 *)v103.m256i_i8;
          v96.m128_f32[0] = v111.m128_f32[0];
          v97 = _mm_shuffle_ps(v95, v95, 225);
          v98 = _mm_shuffle_ps(v96, v96, 225);
          v97.m128_f32[0] = v110.m128_f32[1];
          v98.m128_f32[0] = v111.m128_f32[1];
          v111 = _mm_shuffle_ps(v98, v98, 225);
          v99 = v104;
          v114 = 10248;
          v110 = _mm_shuffle_ps(v97, v97, 225);
          HIDWORD(v101) = 36;
          v99.m128_f32[0] = v113.m128_f32[0];
          v100 = _mm_shuffle_ps(v99, v99, 225);
          v100.m128_f32[0] = v113.m128_f32[1];
          v112 = *(_OWORD *)&v103.m256i_u64[2];
          v113 = _mm_shuffle_ps(v100, v100, 225);
LABEL_81:
          p_Blink = &v110;
          if ( CMILMatrix::IsInvertibleDeterminant((float)(v111.m128_f32[1] * v110.m128_f32[0]) - (float)(v111.m128_f32[0] * v110.m128_f32[1])) )
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
              LODWORD(v101) = *(_DWORD *)(v29 - 8);
            }
            v30 = *((_QWORD *)v19 + 94);
            v19 = v134;
            v21 = v119;
            v109 = *(_QWORD *)(v30 - 16);
            LOBYTE(v13) = v120;
LABEL_35:
            if ( !(_BYTE)v13 || !v21 )
              goto LABEL_37;
            v63 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v21;
            if ( v63 == CRectanglesShape::`scalar deleting destructor' )
            {
              CRectanglesShape::~CRectanglesShape(v21);
              CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v21);
LABEL_77:
              v19 = v134;
              goto LABEL_37;
            }
            if ( v63 == CRoundedRectangleShape::`vector deleting destructor' )
            {
              CRoundedRectangleShape::~CRoundedRectangleShape(v21);
              CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v21);
              v19 = v134;
            }
            else
            {
              if ( v63 != CPolygonShape::`scalar deleting destructor' )
              {
                ((void (__fastcall *)(CRectanglesShape *, __int64, CSurfaceDrawListBrush *(__fastcall *)(CSurfaceDrawListBrush *, char), CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char)))v63)(
                  v21,
                  1LL,
                  v14,
                  v15);
                goto LABEL_77;
              }
              CPolygonShape::`scalar deleting destructor'(v21, 1);
              v19 = v134;
            }
LABEL_37:
            v122 = v101;
            v117 = v23;
            v118 = v109;
            v119 = 0LL;
            v120 = 0;
            v123 = 0;
            if ( p_Blink )
            {
              *(__m128 *)v121 = *p_Blink;
              *(__m128 *)&v121[16] = p_Blink[1];
              *(__m128 *)&v121[32] = p_Blink[2];
              *(__m128 *)&v121[48] = p_Blink[3];
              *(_DWORD *)&v121[64] = p_Blink[4].m128_i32[0];
            }
            else
            {
              *(struct _D3DCOLORVALUE *)&v121[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
              v121[65] = v121[65] & 0xC0 | 0x29;
              *(_QWORD *)v121 = 1065353216LL;
              *(_OWORD *)&v121[24] = 0LL;
              *(_OWORD *)&v121[40] = _xmm;
              *(_DWORD *)&v121[56] = 0;
              *(_DWORD *)&v121[60] = 1065353216;
              v121[64] = -86;
            }
            goto LABEL_39;
          }
        }
      }
LABEL_118:
      v19 = v134;
      goto LABEL_39;
    }
    if ( COERCE_FLOAT(*(_DWORD *)(v69 + 40) & _xmm) < 0.000081380211 )
    {
      if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v69) )
        goto LABEL_118;
      v86 = v85[12];
      v87 = v85[13];
      *(_OWORD *)&v103.m256i_u64[1] = 0LL;
      v102.m128_u64[1] = 0LL;
      v88 = v102;
      v104.m128_u64[1] = 0x3F80000000000000LL;
      v88.m128_f32[0] = *v85;
      v103.m256i_i64[3] = 1065353216LL;
      v89 = *(__m128 *)v103.m256i_i8;
      v89.m128_f32[0] = v85[4];
      v90 = _mm_shuffle_ps(v88, v88, 225);
      v91 = _mm_shuffle_ps(v89, v89, 225);
      v90.m128_f32[0] = v85[1];
      v91.m128_f32[0] = v85[5];
      *(__m128 *)v103.m256i_i8 = _mm_shuffle_ps(v91, v91, 225);
      v108 = 10248;
      v106 = v103;
      v92 = v104;
      v102 = _mm_shuffle_ps(v90, v90, 225);
      v92.m128_f32[0] = v86;
      v105 = v102;
      v93 = _mm_shuffle_ps(v92, v92, 225);
      v93.m128_f32[0] = v87;
      v104 = _mm_shuffle_ps(v93, v93, 225);
      v107 = v104;
      v94 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)&v105,
              (const struct Windows::Foundation::Numerics::float4x4 *)&v105,
              v84);
      LOWORD(v108) = v108 & 0xC003;
      if ( !v94 )
        goto LABEL_118;
      goto LABEL_79;
    }
  }
LABEL_39:
  v31 = *((_DWORD *)v19 + 74);
  v133 = 0;
  if ( v31 )
  {
    v32 = (unsigned int)(v31 - 1);
    v33 = *((_QWORD *)v19 + 36);
    v34 = *(__m128 *)(68 * v32 + v33);
    v35 = *(__m128 *)(68 * v32 + v33 + 16);
    v36 = *(__m128 *)(68 * v32 + v33 + 48);
    v133 = *(_DWORD *)(68 * v32 + v33 + 64);
    v37 = BYTE1(v133);
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
  v128 = *((_DWORD *)v19 + 61) != 0;
  if ( v44 > 0
    || v44 >= 0
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(v42 & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(v40 & _xmm) * 61440.0))
                            + COERCE_FLOAT(v38 & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    v105.m128_u64[0] = __PAIR64__(LODWORD(v43), v34.m128_u32[0]);
    v105.m128_u64[1] = __PAIR64__(v35.m128_u32[0], v42);
    v106.m256i_i64[0] = __PAIR64__(v40, LODWORD(v41));
    v106.m256i_i64[1] = __PAIR64__(v39, v36.m128_u32[0]);
    v106.m256i_i32[4] = v38;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v105, &v129, &v130, 0LL);
    v19 = v134;
  }
  else
  {
    v45 = sqrtf_0((float)(v34.m128_f32[0] * v34.m128_f32[0]) + (float)(v43 * v43));
    v46 = sqrtf_0((float)(v35.m128_f32[0] * v35.m128_f32[0]) + (float)(v41 * v41));
    v129 = v45;
    v130 = v46;
  }
  v47 = 8LL * DWORD2(v138);
  LODWORD(v126) = DWORD2(v138);
  HIDWORD(v126) = DWORD2(v138);
  if ( v47 )
  {
    if ( v47 > 0x28 )
    {
      memset(v124, 0, sizeof(v124));
      v125 = 0LL;
      *_errno() = 34;
      _invalid_parameter_noinfo();
      v19 = v134;
    }
    else
    {
      memcpy_0(v124, &Src, v47);
    }
  }
  HIDWORD(v127) = 0;
  LOBYTE(v131) = CDrawingContext::IsWarpFastPathEnabled(v19)
              && ((unsigned int (__fastcall *)(void ***))(*v116)[1])(v116) == 1
              && !HIDWORD(v127);
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)v115);
  if ( DrawListWorker < 0 )
  {
    v80 = 311;
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x32Du, 0LL);
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
      v80 = 316;
LABEL_107:
      v59 = DrawListWorker;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListWorker, v80, 0LL);
      CShapePtr::~CShapePtr(&v119);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListWorker, 0x380u, 0LL);
      goto LABEL_70;
    }
  }
  CShapePtr::~CShapePtr(&v119);
  if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793)
    && (v83 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160), v59 = v83, v83 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v83);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x383u, 0LL);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = 1065353216;
    v57 = *((_DWORD *)a1 + 795);
    if ( v57 <= ++*((_DWORD *)a1 + 792) )
      v57 = *((_DWORD *)a1 + 792);
    *((_DWORD *)a1 + 795) = v57;
    v58 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3440), a1, v55, v56);
    v59 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x386u, 0LL);
    v60 = *((_DWORD *)a1 + 792);
    if ( v60 )
      *((_DWORD *)a1 + 792) = v60 - 1;
  }
LABEL_70:
  v61 = (_QWORD *)*((_QWORD *)v20 + 14);
  v62 = (_QWORD *)*((_QWORD *)v20 + 15);
  while ( v61 != v62 )
  {
    if ( *v61 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v61 + 8LL))(*v61);
      *v61 = 0LL;
    }
    ++v61;
  }
  v71 = (__int64)(*((_QWORD *)v20 + 15) - *((_QWORD *)v20 + 14)) >> 3;
  if ( v71 )
    *((_QWORD *)v20 + 15) -= 8 * v71;
  v20[4488] = 0;
  v72 = *((_QWORD *)v20 + 10);
  *((_QWORD *)v20 + 10) = 0LL;
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 8LL))(v72);
  v73 = *((_QWORD *)v20 + 11);
  *((_QWORD *)v20 + 11) = 0LL;
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
  v74 = *((_QWORD *)v20 + 12);
  *((_QWORD *)v20 + 12) = 0LL;
  if ( v74 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
  v75 = *((_QWORD *)v20 + 13);
  *((_QWORD *)v20 + 13) = 0LL;
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
  v76 = 0;
  *(_QWORD *)&v139[8] = 0x3F8000003F800000LL;
  *(_DWORD *)&v139[16] = 1065353216;
  *(_DWORD *)&v139[20] = 1065353216;
  for ( *(_DWORD *)&v139[4] = 0; v76 < DWORD2(v138); ++v76 )
  {
    v77 = *(CMultiPrimitiveDrawListBrush **)&v136[8 * v76 - 8];
    *(_QWORD *)&v136[8 * v76 - 8] = 0LL;
    if ( v77 )
    {
      v78 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v77;
      if ( v78 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v77, 1);
      }
      else if ( v78 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v77, 1);
      }
      else if ( v78 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v77, 1);
      }
      else
      {
        v78(v77, 1);
      }
    }
  }
  DWORD2(v138) = 0;
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v138);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v137);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v136);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&Src);
  return v59;
}
