/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180044AC0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180047EA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800AC4A0 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x18010C960 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18010D5A0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18010D994 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x18019C72C (-ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C37D0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1801DFEE0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801E4F50 (--0SamplerMode@@QEAA@XZ.c)
 *     ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801FB9F0 (-IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1802019B8 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18025AF4C (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x180290CE8 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x180290DD4 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3)
{
  CPrimitiveGroupDrawListGenerator *v3; // r14
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned int (__fastcall *v16)(CMILRefCountImpl *__hidden); // r9
  __int64 i; // rax
  __int64 *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r8
  int v26; // eax
  bool v27; // cf
  char IsOpaque; // si
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  CMILRefCountImpl *v32; // rcx
  unsigned int (__fastcall *v33)(CMILRefCountImpl *__hidden); // rax
  CMILRefCountImpl *v34; // rcx
  unsigned int (__fastcall *v35)(CMILRefCountImpl *__hidden); // rax
  int v36; // et0
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rbx
  CMILRefCountImpl *v40; // rcx
  unsigned int (__fastcall *v41)(CMILRefCountImpl *__hidden); // rax
  CMILRefCountImpl *v42; // rcx
  unsigned int (__fastcall *v43)(CMILRefCountImpl *__hidden); // rax
  int v44; // et0
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  char v49; // r14
  int v50; // eax
  char v51; // si
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  char v56; // di
  int v57; // eax
  char v58; // bl
  CCommonRenderingEffectFactory *v59; // rcx
  CMILRefCountImpl *v60; // r14
  CMILRefCountImpl *v61; // rsi
  struct CRenderingEffect *v62; // rax
  struct CRenderingEffect *v63; // rbx
  _QWORD *v64; // rcx
  CDrawListBitmap *v65; // rcx
  CMILRefCountImpl *v66; // r14
  CEffectIntermediateProducer *v67; // r15
  unsigned int (__fastcall *v68)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v69)(CEffectIntermediateProducer *); // rax
  __int64 v70; // r15
  void (*v71)(void); // rax
  int v72; // et0
  CMILRefCountImpl *v73; // rsi
  CEffectIntermediateProducer *v74; // r15
  unsigned int (__fastcall *v75)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v76)(CEffectIntermediateProducer *); // rax
  __int64 v77; // r15
  void (*v78)(void); // rax
  int v79; // et0
  bool (__fastcall *v80)(CCompositionSurfaceBitmap *__hidden); // rax
  char v81; // al
  char v82; // al
  bool v83; // al
  __int64 v84; // rdx
  const struct PrimitiveVertexAttributesDesc *v85; // r8
  float v86; // xmm3_4
  unsigned int v87; // ecx
  unsigned int v88; // xmm1_4
  unsigned int v89; // xmm0_4
  int v90; // ecx
  unsigned int v91; // eax
  int v92; // eax
  unsigned int v93; // edx
  int v94; // eax
  unsigned __int64 v95; // rcx
  bool (__fastcall *v97)(CCompositionSurfaceBitmap *__hidden); // rax
  char v98; // al
  int v99; // eax
  unsigned int (__fastcall **v100)(CMILRefCountImpl *__hidden); // rax
  struct CRenderingEffect *v101; // rcx
  int v102; // ebx
  enum DXGI_COLOR_SPACE_TYPE v103; // esi
  int v104; // eax
  int v105; // eax
  __int128 *v106; // rcx
  unsigned int v107; // [rsp+20h] [rbp-E0h]
  char v108; // [rsp+30h] [rbp-D0h]
  char v109; // [rsp+32h] [rbp-CEh]
  char v110; // [rsp+34h] [rbp-CCh]
  volatile signed __int32 *v111; // [rsp+38h] [rbp-C8h]
  __int16 v112; // [rsp+40h] [rbp-C0h]
  __int16 v113; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v114; // [rsp+60h] [rbp-A0h]
  CMILRefCountImpl *v115[2]; // [rsp+68h] [rbp-98h] BYREF
  char v116; // [rsp+78h] [rbp-88h]
  CMILRefCountImpl *v117[2]; // [rsp+80h] [rbp-80h] BYREF
  char v118; // [rsp+90h] [rbp-70h]
  int v119; // [rsp+98h] [rbp-68h]
  struct CRenderingEffect *v120; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v121; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v122; // [rsp+B8h] [rbp-48h]
  int v123; // [rsp+C8h] [rbp-38h]
  unsigned int v124; // [rsp+CCh] [rbp-34h]
  __int128 v125; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v126; // [rsp+E0h] [rbp-20h]
  __int128 v127; // [rsp+F0h] [rbp-10h]
  __int128 v128; // [rsp+100h] [rbp+0h]
  int v129; // [rsp+110h] [rbp+10h]
  CPrimitiveGroupDrawListGenerator *v130; // [rsp+120h] [rbp+20h]
  struct D2D_RECT_F v131; // [rsp+128h] [rbp+28h] BYREF
  __int64 v132; // [rsp+138h] [rbp+38h] BYREF
  int v133; // [rsp+140h] [rbp+40h]
  __int64 v134; // [rsp+144h] [rbp+44h]
  int v135; // [rsp+14Ch] [rbp+4Ch]
  __int64 v136; // [rsp+150h] [rbp+50h]
  int v137; // [rsp+158h] [rbp+58h]
  __int64 v138; // [rsp+160h] [rbp+60h]
  __int64 v139; // [rsp+168h] [rbp+68h]
  struct CDrawingContext *v140; // [rsp+170h] [rbp+70h]
  CDrawListCache *v141; // [rsp+178h] [rbp+78h]
  _QWORD v142[2]; // [rsp+180h] [rbp+80h] BYREF
  CRectanglesShape *v143; // [rsp+190h] [rbp+90h] BYREF
  char v144; // [rsp+198h] [rbp+98h]
  __int128 v145; // [rsp+1A0h] [rbp+A0h]
  __int128 v146; // [rsp+1B0h] [rbp+B0h]
  __int128 v147; // [rsp+1C0h] [rbp+C0h]
  __int128 v148; // [rsp+1D0h] [rbp+D0h]
  int v149; // [rsp+1E0h] [rbp+E0h]
  __int64 v150; // [rsp+1E4h] [rbp+E4h]
  char v151; // [rsp+1ECh] [rbp+ECh]
  struct D2D_RECT_F v152; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v153; // [rsp+200h] [rbp+100h]
  _BYTE v154[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v155; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v156; // [rsp+300h] [rbp+200h]
  __int64 v157; // [rsp+310h] [rbp+210h]
  _DWORD *v158; // [rsp+318h] [rbp+218h]
  _BYTE v159[16]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v160[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v161[4496]; // [rsp+370h] [rbp+270h] BYREF
  _DWORD v162[9]; // [rsp+1500h] [rbp+1400h] BYREF
  __int128 v163; // [rsp+1524h] [rbp+1424h]
  char v164; // [rsp+1534h] [rbp+1434h]
  int v165; // [rsp+1538h] [rbp+1438h]
  int v166; // [rsp+153Ch] [rbp+143Ch]
  int v167; // [rsp+1540h] [rbp+1440h]
  int v168; // [rsp+1544h] [rbp+1444h]
  int v169; // [rsp+1548h] [rbp+1448h]
  int v170; // [rsp+154Ch] [rbp+144Ch]
  int v171; // [rsp+1550h] [rbp+1450h]
  int v172; // [rsp+1554h] [rbp+1454h]
  int v173; // [rsp+1558h] [rbp+1458h]
  __int128 v174; // [rsp+155Ch] [rbp+145Ch]
  wil::details::in1diag3 *retaddr; // [rsp+15E8h] [rbp+14E8h]

  v130 = this;
  v3 = this;
  v141 = a3;
  v4 = 0;
  v140 = a2;
  v5 = 0;
  v121 = 0LL;
  v122 = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v161);
  v143 = 0LL;
  v144 = 0;
  v149 = 0;
  CShapePtr::~CShapePtr(&v143);
  ++dword_180406890;
  v145 = _xmm;
  v146 = _xmm;
  BYTE1(v149) = BYTE1(v149) & 0xC0 | 0x29;
  v151 = 0;
  v142[0] = 0LL;
  v150 = 1LL;
  v142[1] = 0LL;
  v147 = _xmm;
  v148 = *(__int128 *)&_xmm.r;
  LOBYTE(v149) = -86;
  v129 = 0;
  CDrawListCache::Invalidate(a3);
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(v3) )
  {
    v9 = *((_DWORD *)a2 + 62) == 4;
    BYTE12(v122) = 1;
    if ( v9 )
    {
LABEL_182:
      BYTE12(v122) = 0;
    }
    else
    {
      v103 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 24LL))(
                           *((_QWORD *)a2 + 4) + 8LL,
                           v159)
                       + 8);
      while ( v4 < *((_DWORD *)v3 + 8) )
      {
        if ( !CDrawListBitmap::IsMatchingColorSpace((CDrawListBitmap *)(*((_QWORD *)v3 + 10) + 24LL * v4), v103) )
          goto LABEL_182;
        ++v4;
      }
    }
  }
  v8 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)a2 + 60));
  v9 = *((_DWORD *)a2 + 61) == 0;
  v123 = v8;
  v10 = *((_DWORD *)a2 + 74);
  HIDWORD(v121) = !v9;
  LODWORD(v121) = 2;
  if ( v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    v12 = *((_QWORD *)a2 + 36);
    v13 = *(_OWORD *)(68 * v11 + v12 + 16);
    v125 = *(_OWORD *)(68 * v11 + v12);
    v14 = *(_OWORD *)(68 * v11 + v12 + 32);
    v126 = v13;
    v15 = *(_OWORD *)(68 * v11 + v12 + 48);
    v129 = *(_DWORD *)(68 * v11 + v12 + 64);
  }
  else
  {
    v125 = _xmm;
    v14 = _xmm;
    v126 = _xmm;
    v15 = *(__int128 *)&_xmm.r;
    BYTE1(v129) = BYTE1(v129) & 0xC0 | 0x29;
    LOBYTE(v129) = -86;
  }
  v128 = v15;
  v127 = v14;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&v125) )
  {
    DWORD1(v121) = sqrtf_0((float)(*(float *)&v125 * *(float *)&v125) + (float)(*((float *)&v125 + 1)
                                                                              * *((float *)&v125 + 1)));
    DWORD2(v121) = sqrtf_0((float)(*(float *)&v126 * *(float *)&v126) + (float)(*((float *)&v126 + 1)
                                                                              * *((float *)&v126 + 1)));
  }
  else
  {
    v132 = v125;
    v133 = HIDWORD(v125);
    v134 = v126;
    v136 = v128;
    v135 = HIDWORD(v126);
    v137 = HIDWORD(v128);
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v132, (float *)&v121 + 1, (float *)&v121 + 2, 0LL);
  }
  CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v142);
  v16 = CMILRefCountImpl::AddReference;
  *(_QWORD *)&v122 = v142;
  for ( i = 0LL; ; i = (unsigned int)(v119 + 1) )
  {
    v18 = (__int64 *)*((_QWORD *)v3 + 2);
    v119 = i;
    if ( (unsigned int)i >= *((_DWORD *)v18 + 2) )
    {
      CDrawListCache::Update(v141, v140, (struct CDrawListEntryBuilder *)v161);
      goto LABEL_130;
    }
    v19 = *v18;
    v20 = 9 * i;
    v21 = (_QWORD *)*((_QWORD *)v3 + 3);
    v22 = 2 * v20;
    v138 = v19;
    DWORD2(v122) = 0;
    v23 = HIDWORD(*(_QWORD *)(v19 + 8 * v22 + 16));
    v24 = (unsigned int)*(_QWORD *)(v19 + 8 * v22 + 16) + *v21;
    v25 = (unsigned int)(100 * *(_DWORD *)(v19 + 8 * v22) + 48);
    v124 = v25;
    v139 = v24 + (unsigned int)(v25 * (v23 - 1));
    v26 = *(_DWORD *)(v19 + 8 * v22 + 4);
    if ( (v26 & 0x20) != 0 )
      break;
    if ( (v26 & 2) == 0 || HIDWORD(v121) != 1 )
    {
      v27 = *(_DWORD *)(v19 + 8 * v22) == 0;
      v116 = 0;
      IsOpaque = 1;
      v118 = 0;
      *(_OWORD *)v115 = 0LL;
      v110 = 1;
      *(_OWORD *)v117 = 0LL;
      if ( v27 )
        goto LABEL_30;
      v29 = *(unsigned int *)(v19 + 8 * v22 + 40);
      if ( (unsigned int)v29 < *((_DWORD *)v3 + 8) )
      {
        v30 = *((_QWORD *)v3 + 10);
        v31 = 3 * v29;
        v32 = *(CMILRefCountImpl **)(v30 + 24 * v29);
        v115[0] = v32;
        if ( v32 )
        {
          v33 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v32 + 8LL);
          if ( v33 == CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(v32);
          else
            ((void (__fastcall *)(CMILRefCountImpl *, __int64, __int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden)))v33)(
              v32,
              v23,
              v25,
              CMILRefCountImpl::AddReference);
        }
        v34 = *(CMILRefCountImpl **)(v30 + 8 * v31 + 8);
        v115[1] = v34;
        if ( v34 )
        {
          v35 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v34 + 8LL);
          if ( v35 == CMILRefCountImpl::AddReference )
          {
            v36 = _InterlockedAdd((volatile signed __int32 *)v34, 1u);
            if ( (v36 < 0) ^ __OFSUB__(v35, CMILRefCountImpl::AddReference) | (v36 == 0) )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v107);
          }
          else if ( (char *)v35 == (char *)CGDISectionBitmapRealization::AddRef )
          {
            CGDISectionBitmapRealization::AddRef(v34);
          }
          else
          {
            ((void (__fastcall *)(CMILRefCountImpl *, __int64, __int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden)))v35)(
              v34,
              v23,
              v25,
              CMILRefCountImpl::AddReference);
          }
        }
        v116 = *(_BYTE *)(v30 + 8 * v31 + 16);
        IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v115);
        v110 = IsOpaque;
        v16 = CMILRefCountImpl::AddReference;
      }
      v37 = *(unsigned int *)(v19 + 8 * v22 + 56);
      if ( (unsigned int)v37 < *((_DWORD *)v3 + 12) )
      {
        v38 = *((_QWORD *)v3 + 11);
        v39 = 3 * v37;
        v40 = *(CMILRefCountImpl **)(v38 + 24 * v37);
        v117[0] = v40;
        if ( v40 )
        {
          v41 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v40 + 8LL);
          if ( v41 == CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(v40);
          else
            ((void (__fastcall *)(CMILRefCountImpl *, __int64, __int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden)))v41)(
              v40,
              v23,
              v25,
              CMILRefCountImpl::AddReference);
        }
        v42 = *(CMILRefCountImpl **)(v38 + 8 * v39 + 8);
        v117[1] = v42;
        if ( v42 )
        {
          v43 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v42 + 8LL);
          if ( v43 == CMILRefCountImpl::AddReference )
          {
            v44 = _InterlockedAdd((volatile signed __int32 *)v42, 1u);
            if ( (v44 < 0) ^ __OFSUB__(v43, CMILRefCountImpl::AddReference) | (v44 == 0) )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v107);
          }
          else if ( (char *)v43 == (char *)CGDISectionBitmapRealization::AddRef )
          {
            CGDISectionBitmapRealization::AddRef(v42);
          }
          else
          {
            ((void (__fastcall *)(CMILRefCountImpl *, __int64 (__fastcall *)(_QWORD), __int64, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden)))v43)(
              v42,
              CGDISectionBitmapRealization::AddRef,
              v25,
              v16);
          }
        }
        v118 = *(_BYTE *)(v38 + 8 * v39 + 16);
        IsOpaque &= CDrawListBitmap::IsOpaque((CDrawListBitmap *)v117);
        v110 = IsOpaque;
      }
      if ( IsOpaque )
LABEL_30:
        DWORD2(v122) = 1;
      v45 = *(_DWORD *)(v19 + 8 * v22 + 52);
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 != 1 )
            goto LABEL_34;
          v108 = 3;
        }
        else
        {
          v108 = 2;
        }
      }
      else
      {
LABEL_34:
        v108 = 1;
      }
      v47 = *(_DWORD *)(v19 + 8 * v22 + 48);
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          if ( v48 != 1 )
            goto LABEL_38;
          v49 = 3;
        }
        else
        {
          v49 = 2;
        }
      }
      else
      {
LABEL_38:
        v49 = 1;
      }
      if ( !v123 )
        goto LABEL_150;
      v50 = *(_DWORD *)(v19 + 8 * v22 + 44);
      if ( v50 == 1 )
        goto LABEL_41;
      if ( v50 )
      {
        if ( v50 == 3 )
          v51 = 2;
        else
LABEL_41:
          v51 = 1;
      }
      else
      {
LABEL_150:
        v51 = 0;
      }
      v52 = *(_DWORD *)(v19 + 8 * v22 + 68);
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          if ( v53 != 1 )
            goto LABEL_45;
          v109 = 3;
        }
        else
        {
          v109 = 2;
        }
      }
      else
      {
LABEL_45:
        v109 = 1;
      }
      v54 = *(_DWORD *)(v19 + 8 * v22 + 64);
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          if ( v55 != 1 )
            goto LABEL_49;
          v56 = 3;
        }
        else
        {
          v56 = 2;
        }
      }
      else
      {
LABEL_49:
        v56 = 1;
      }
      if ( !v123 )
        goto LABEL_142;
      v57 = *(_DWORD *)(v19 + 8 * v22 + 60);
      if ( v57 == 1 )
        goto LABEL_52;
      if ( v57 )
      {
        if ( v57 == 3 )
          v58 = 2;
        else
LABEL_52:
          v58 = 1;
      }
      else
      {
LABEL_142:
        v58 = 0;
      }
      v120 = 0LL;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v120);
      HIBYTE(v112) = v49;
      v60 = v115[1];
      LOBYTE(v112) = v51;
      v61 = v117[1];
      LOBYTE(v113) = v58;
      HIBYTE(v113) = v56;
      v114 = (volatile signed __int32 *)v117[1];
      v111 = (volatile signed __int32 *)v115[1];
      if ( !v115[1] && !v117[1] )
      {
        v104 = CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(v59, &v120);
        v102 = v104;
        v5 = v104;
        if ( v104 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v104, 0x32u, 0LL);
LABEL_160:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v102, 0x17Cu, 0LL);
          v101 = v120;
          if ( v120 )
          {
            v100 = *(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v120;
            goto LABEL_147;
          }
          goto LABEL_148;
        }
        v63 = v120;
LABEL_101:
        CDrawListEntryBuilder::Begin(
          (CDrawListEntryBuilder *)v161,
          (const struct DrawListEntryBuilderSetupParams *)&v121,
          (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v63);
        while ( 1 )
        {
          v152 = 0LL;
          v153 = 0LL;
          v152 = *(struct D2D_RECT_F *)v24;
          LODWORD(v153) = *(_DWORD *)(v24 + 44);
          v155 = 0LL;
          v157 = 0LL;
          v156 = 0LL;
          v158 = 0LL;
          memset_0(v162, 0, 0x70uLL);
          v85 = 0LL;
          if ( *(_DWORD *)(v19 + 8 * v22) )
          {
            v86 = *(float *)(v24 + 60);
            v87 = 7;
            *(float *)&v88 = v86 * *(float *)(v24 + 52);
            *(float *)&v89 = v86 * *(float *)(v24 + 56);
            *(float *)&v155 = v86 * *(float *)(v24 + 48);
            *(_QWORD *)((char *)&v155 + 4) = __PAIR64__(v89, v88);
            *((float *)&v155 + 3) = v86;
            if ( *(_DWORD *)(v24 + 144) < 7u )
              v87 = *(_DWORD *)(v24 + 144);
            if ( v87 < *(_DWORD *)(v19 + 8 * v22 + 12) )
            {
              v95 = *(_DWORD *)(v19 + 8 * v22 + 8) + v87;
              if ( v95 >= *((_QWORD *)v130 + 8) )
                ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
                  v95,
                  v84,
                  0LL);
              *(_QWORD *)&v156 = *(_QWORD *)(*((_QWORD *)v130 + 9) + 8 * v95);
            }
            v90 = DWORD2(v122);
            if ( v110 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v86 - 1.0) & _xmm) < 0.0000011920929 )
              v91 = DWORD2(v122) | 1;
            else
              v91 = DWORD2(v122) & 0xFFFFFFFE;
            DWORD2(v122) = v91;
            if ( v90 != v91 )
            {
              v99 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v161, v84);
              v5 = v99;
              if ( v99 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v99, 0x1A9u, 0LL);
                goto LABEL_145;
              }
              CDrawListEntryBuilder::Begin(
                (CDrawListEntryBuilder *)v161,
                (const struct DrawListEntryBuilderSetupParams *)&v121,
                (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v63);
            }
            if ( v60 )
            {
              v162[0] = *(_DWORD *)(v24 + 64);
              v162[1] = *(_DWORD *)(v24 + 68);
              v162[2] = 0;
              v162[3] = *(_DWORD *)(v24 + 72);
              v162[4] = *(_DWORD *)(v24 + 76);
              v162[5] = 0;
              v162[6] = *(_DWORD *)(v24 + 80);
              v162[7] = *(_DWORD *)(v24 + 84);
              v162[8] = 1065353216;
              if ( *(float *)(v24 + 88) == 0.0
                && *(float *)(v24 + 92) == 0.0
                && *(float *)(v24 + 96) == 1.0
                && *(float *)(v24 + 100) == 1.0 )
              {
                v164 = 0;
              }
              else
              {
                v164 = 1;
                v163 = *(_OWORD *)(v24 + 88);
              }
            }
            if ( v61 )
            {
              v165 = *(_DWORD *)(v24 + 104);
              v166 = *(_DWORD *)(v24 + 108);
              v167 = 0;
              v168 = *(_DWORD *)(v24 + 112);
              v169 = *(_DWORD *)(v24 + 116);
              v170 = 0;
              v171 = *(_DWORD *)(v24 + 120);
              v172 = *(_DWORD *)(v24 + 124);
              v173 = 1065353216;
              if ( CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp((const struct D2D_RECT_F *)(v24 + 128)) )
                v174 = *v106;
            }
            v157 = 2LL;
            v158 = v162;
            v85 = (const struct PrimitiveVertexAttributesDesc *)&v155;
          }
          v92 = CDrawListEntryBuilder::Insert(
                  (CDrawListEntryBuilder *)v161,
                  (const struct PrimitiveGeometryDesc *)&v152,
                  v85,
                  (const struct D2D_MATRIX_3X2_F *)(v24 + 16));
          v5 = v92;
          if ( v92 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v92, 0x1CFu, 0LL);
            goto LABEL_145;
          }
          if ( v24 == v139 )
            break;
          v24 += v124;
        }
        v94 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v161, v93);
        v5 = v94;
        if ( v94 >= 0 )
        {
          if ( v63 )
            (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v63 + 8LL))(v63);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v117);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v115);
          v3 = v130;
          goto LABEL_124;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0x1D3u, 0LL);
LABEL_145:
        if ( !v63 )
          goto LABEL_148;
        v100 = *(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v63;
        v101 = v63;
LABEL_147:
        v100[1](v101);
LABEL_148:
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v117);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v115);
        goto LABEL_130;
      }
      v62 = (struct CRenderingEffect *)CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
      v63 = v62;
      if ( !v62 )
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Cu, 0LL);
        v102 = -2147024882;
        goto LABEL_160;
      }
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v62);
      *v64 = &CCommonRenderingEffect::`vftable';
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        v65 = (CDrawListBitmap *)(v64 + 5);
        *(_QWORD *)v65 = 0LL;
        *((_QWORD *)v65 + 1) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap((struct CRenderingEffect *)((char *)v63 + 16));
        v65 = (struct CRenderingEffect *)((char *)v63 + 40);
      }
      if ( CDrawListBitmap::CDrawListBitmap == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)v65 + 3) = 0LL;
        *((_QWORD *)v65 + 4) = 0LL;
      }
      else
      {
        CDrawListBitmap::CDrawListBitmap(v65);
      }
      if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *((_QWORD *)v63 + 11) = 0LL;
        *((_QWORD *)v63 + 12) = 0LL;
      }
      else
      {
        SamplerMode::SamplerMode((struct CRenderingEffect *)((char *)v63 + 64));
      }
      if ( SamplerMode::SamplerMode == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *(_QWORD *)((char *)v63 + 91) = 0LL;
        *(_QWORD *)((char *)v63 + 99) = 0LL;
      }
      else
      {
        SamplerMode::SamplerMode((struct CRenderingEffect *)((char *)v63 + 67));
      }
      v66 = v115[0];
      v67 = (CEffectIntermediateProducer *)*((_QWORD *)v63 + 2);
      *((CMILRefCountImpl **)v63 + 2) = v115[0];
      if ( v66 )
      {
        v68 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v66 + 8LL);
        if ( v68 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v66);
        else
          v68(v66);
      }
      if ( v67 )
      {
        v69 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v67 + 16LL);
        if ( v69 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v67);
        else
          v69(v67);
      }
      v70 = *((_QWORD *)v63 + 3);
      *((_QWORD *)v63 + 3) = v111;
      if ( v111 )
      {
        v71 = *(void (**)(void))(*(_QWORD *)v111 + 8LL);
        if ( (char *)v71 == (char *)CMILRefCountImpl::AddReference )
        {
          v72 = _InterlockedAdd(v111, 1u);
          if ( (v72 < 0) ^ __OFSUB__(v71, CMILRefCountImpl::AddReference) | (v72 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v107);
          v66 = v115[0];
          v111 = (volatile signed __int32 *)v115[1];
          v114 = (volatile signed __int32 *)v117[1];
        }
        else if ( (char *)v71 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v111);
        }
        else
        {
          v71();
        }
      }
      if ( v70 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      v73 = v117[0];
      *((_BYTE *)v63 + 32) = v116;
      v74 = (CEffectIntermediateProducer *)*((_QWORD *)v63 + 5);
      *((_QWORD *)v63 + 5) = v73;
      if ( v73 )
      {
        v75 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v73 + 8LL);
        if ( v75 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v73);
        else
          v75(v73);
      }
      if ( v74 )
      {
        v76 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v74 + 16LL);
        if ( v76 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
          CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v74);
        else
          v76(v74);
      }
      v77 = *((_QWORD *)v63 + 6);
      *((_QWORD *)v63 + 6) = v114;
      if ( v114 )
      {
        v78 = *(void (**)(void))(*(_QWORD *)v114 + 8LL);
        if ( (char *)v78 == (char *)CMILRefCountImpl::AddReference )
        {
          v79 = _InterlockedAdd(v114, 1u);
          if ( (v79 < 0) ^ __OFSUB__(v78, CMILRefCountImpl::AddReference) | (v79 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v107);
          v66 = v115[0];
          v73 = v117[0];
          v111 = (volatile signed __int32 *)v115[1];
          v114 = (volatile signed __int32 *)v117[1];
        }
        else if ( (char *)v78 == (char *)CGDISectionBitmapRealization::AddRef )
        {
          CGDISectionBitmapRealization::AddRef(v114);
        }
        else
        {
          v78();
        }
      }
      if ( v77 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
      *((_BYTE *)v63 + 56) = v118;
      *((_WORD *)v63 + 32) = v112;
      *((_BYTE *)v63 + 66) = v108;
      *(_WORD *)((char *)v63 + 67) = v113;
      *((_BYTE *)v63 + 69) = v109;
      if ( v111 )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets || !v66 )
        {
          v60 = (CMILRefCountImpl *)v111;
          goto LABEL_95;
        }
        v80 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v66 + 40LL);
        if ( v80 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
          v81 = *((_BYTE *)v66 + 41);
        else
          v81 = v80(v66);
        v60 = (CMILRefCountImpl *)v111;
        if ( !v81 )
        {
LABEL_95:
          v82 = 0;
          goto LABEL_98;
        }
        v82 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v111 + 64LL))(v111, 0LL);
        if ( !v82 )
        {
LABEL_98:
          *((_BYTE *)v63 + 70) = v82;
          v83 = 1;
          if ( v114 )
          {
            if ( !CCommonRegistryData::EnableCommonSuperSets
              || !v73
              || ((v97 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v73 + 40LL),
                   v97 != CCompositionSurfaceBitmap::IsWhitePixelInTopLeft)
                ? (v98 = v97(v73))
                : (v98 = *((_BYTE *)v73 + 41)),
                  !v98) )
            {
              v83 = 0;
            }
          }
          *((_BYTE *)v63 + 70) &= v83;
          (**(void (__fastcall ***)(struct CRenderingEffect *))v63)(v63);
          v19 = v138;
          v61 = (CMILRefCountImpl *)v114;
          v120 = v63;
          goto LABEL_101;
        }
      }
      else
      {
        v60 = 0LL;
      }
      v82 = 1;
      goto LABEL_98;
    }
LABEL_125:
    ;
  }
  CCpuClip::RemovePrimitiveClips((CCpuClip *)v142);
  CMILMatrix::CMILMatrix((CMILMatrix *)v154, (const struct D2D_MATRIX_3X2_F *)(v24 + 16));
  v131 = *(struct D2D_RECT_F *)v24;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v160, &v131);
  v105 = CCpuClip::AddPrimitiveClip((CCpuClip *)v142, (const struct CShape *)v160, (const struct CMILMatrix *)v154);
  v5 = v105;
  if ( v105 >= 0 )
  {
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v160);
LABEL_124:
    v16 = CMILRefCountImpl::AddReference;
    goto LABEL_125;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v105, 0x142u, 0LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v160);
LABEL_130:
  CShapePtr::~CShapePtr(&v143);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v161);
  return v5;
}
