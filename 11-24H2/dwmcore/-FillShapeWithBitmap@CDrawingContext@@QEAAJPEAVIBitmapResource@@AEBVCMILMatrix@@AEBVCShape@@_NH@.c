/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0
 * Callers:
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0C98 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18006A7A0 (-clear_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x1800BA33C (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x1800BA42C (--1CSurfaceDrawListBrush@@UEAA@XZ.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BA4A0 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800BA4FC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800BC090 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800BC0FC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016AED0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801B2190 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___ @ 0x1801E22F8 (gsl--final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___--_final_action__lambda_8739158a9a1.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        bool a5,
        int a6)
{
  __int64 v6; // rax
  unsigned int v8; // edi
  CDrawListPrimitive0 *v9; // r15
  bool (__fastcall *v12)(CRectanglesShape *__hidden); // rax
  bool IsEmpty; // al
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  float v18; // xmm13_4
  int v19; // xmm9_4
  float v20; // xmm14_4
  __int64 v21; // rdx
  char (__fastcall *v22)(CGdiSpriteBitmap *); // rax
  float v23; // xmm6_4
  float v24; // xmm4_4
  unsigned int v25; // xmm8_4
  float v26; // xmm15_4
  float v27; // xmm0_4
  float v28; // xmm13_4
  float v29; // xmm14_4
  bool v30; // cl
  bool v31; // r12
  bool v32; // bl
  void (__fastcall *v33)(struct IBitmapResource *, bool, _QWORD, void *); // r14
  int v34; // edx
  int v35; // eax
  void *v36; // r9
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r14
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  CRectanglesShape *v44; // rsi
  CRectanglesShape *(__fastcall *v45)(CRectanglesShape *, char, __int64); // rax
  __int64 v46; // rax
  struct IBitmapRealization *v47; // rdi
  bool (__fastcall *v48)(CRectanglesShape *__hidden, unsigned int *); // rax
  unsigned int (__fastcall *v49)(CMILRefCountImpl *__hidden); // rax
  int v50; // et0
  unsigned __int64 v51; // r14
  _OWORD *v52; // rsi
  _OWORD *v53; // rdx
  _BYTE *v54; // rdi
  unsigned __int64 v55; // r15
  LPVOID v56; // rax
  void *v57; // rdi
  size_t v58; // rsi
  void *v59; // rbx
  void *v60; // rax
  _BYTE *v61; // rcx
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rcx
  __int64 v64; // rcx
  _OWORD *v65; // rax
  char (__fastcall *v66)(__int64, __int64, int); // rax
  int v67; // ebx
  _BYTE *v68; // rsi
  __int64 v69; // rax
  CRectanglesShape *v70; // rsi
  CRectanglesShape *(__fastcall *v71)(CRectanglesShape *, char, __int64); // rax
  bool (__fastcall *v73)(CRectanglesShape *__hidden); // rax
  bool v74; // al
  int v75; // eax
  float *v76; // rax
  float v77; // xmm3_4
  float v78; // xmm4_4
  float v79; // xmm6_4
  float v80; // xmm12_4
  float v81; // xmm5_4
  int v82; // xmm10_4
  float v83; // xmm11_4
  float v84; // xmm0_4
  float v85; // xmm7_4
  float v86; // xmm9_4
  float v87; // xmm10_4
  float v88; // xmm11_4
  float v89; // xmm12_4
  int v90; // eax
  int v91; // eax
  int v92; // eax
  __m128i v93; // xmm0
  __int64 v94; // rcx
  int v95; // eax
  int v96; // eax
  int v97; // eax
  HANDLE ProcessHeap; // rax
  CDrawListPrimitive0 *v99; // rdi
  int v100; // esi
  __int64 v101; // rdx
  __int64 v102; // r8
  char v103; // al
  _OWORD *v104; // r8
  unsigned __int64 v105; // rcx
  int v106; // eax
  float *v107; // rsi
  char v108; // r11
  float v109; // xmm6_4
  float v110; // xmm7_4
  float v111; // xmm9_4
  float v112; // xmm8_4
  char v113; // r10
  unsigned int v114; // edx
  unsigned int i; // ecx
  __int64 v116; // rax
  int v117; // eax
  __m128 v118; // xmm2
  float v119; // xmm5_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  __int64 v122; // rax
  int v123; // eax
  __m128 v124; // xmm0
  float v125; // xmm11_4
  float v126; // xmm1_4
  float v127; // xmm10_4
  float v128; // xmm1_4
  float v129; // xmm0_4
  float v130; // xmm1_4
  float v131; // xmm2_4
  float v132; // xmm1_4
  float v133; // xmm0_4
  unsigned int v134; // ecx
  __m128 v135; // xmm2
  float v136; // xmm5_4
  __m128 *v137; // rax
  float v138; // xmm13_4
  float v139; // xmm0_4
  float v140; // xmm4_4
  float v141; // xmm3_4
  float v142; // xmm10_4
  float v143; // xmm12_4
  float v144; // xmm11_4
  float v145; // xmm1_4
  float v146; // xmm1_4
  bool (__fastcall *v147)(CRectanglesShape *__hidden, unsigned int *); // rax
  int v148; // eax
  int v149; // eax
  float *v150; // rcx
  char v151; // dl
  __int64 (__fastcall *v152)(CDrawListPrimitive0 *, struct D2D_RECT_F *, _QWORD); // rax
  int TightBounds; // eax
  __int64 v154; // r9
  char v155; // si
  __int64 v156; // rax
  __int64 (__fastcall *v157)(CDrawListPrimitive0 *, __int128 *, void *, char *); // rsi
  int v158; // eax
  void *v159; // r8
  int v160; // eax
  float x; // xmm2_4
  unsigned __int64 v162; // rax
  float y; // xmm3_4
  float v164; // xmm4_4
  float v165; // xmm5_4
  float v166; // xmm1_4
  float v167; // xmm0_4
  float v168; // xmm2_4
  float v169; // xmm3_4
  float v170; // xmm0_4
  float v171; // xmm0_4
  __int64 v172; // rcx
  void (__fastcall *v173)(__int64, int *); // rax
  __int64 (__fastcall *v174)(struct IBitmapRealization *, int *); // rax
  unsigned __int64 *Size; // rax
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // rcx
  float v178; // xmm9_4
  float v179; // xmm4_4
  float v180; // xmm5_4
  int D2DInterpolationMode; // eax
  char v182; // di
  _QWORD *v183; // rax
  __int64 v184; // rax
  __int64 v185; // r8
  CSurfaceDrawListBrush *(__fastcall *v186)(CSurfaceDrawListBrush *, char, __int64); // rax
  int v187; // [rsp+20h] [rbp-E0h]
  unsigned int v188[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v189[4]; // [rsp+50h] [rbp-B0h] BYREF
  CDrawListPrimitive0 *v190; // [rsp+60h] [rbp-A0h]
  struct IBitmapRealization *v191; // [rsp+68h] [rbp-98h]
  __int128 v192; // [rsp+70h] [rbp-90h]
  CRectanglesShape *v193; // [rsp+80h] [rbp-80h] BYREF
  struct IBitmapRealization *v194; // [rsp+88h] [rbp-78h] BYREF
  __int128 v195; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v196; // [rsp+A0h] [rbp-60h]
  float v197; // [rsp+A8h] [rbp-58h]
  float v198; // [rsp+ACh] [rbp-54h]
  int v199; // [rsp+B0h] [rbp-50h]
  float v200; // [rsp+C0h] [rbp-40h]
  int v201; // [rsp+C8h] [rbp-38h] BYREF
  int v202; // [rsp+CCh] [rbp-34h]
  float v203; // [rsp+D0h] [rbp-30h]
  float v204; // [rsp+D4h] [rbp-2Ch]
  __m128 v205; // [rsp+D8h] [rbp-28h] BYREF
  __m128 v206; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v207; // [rsp+100h] [rbp+0h]
  _QWORD v208[2]; // [rsp+110h] [rbp+10h] BYREF
  bool v209; // [rsp+120h] [rbp+20h]
  __int128 v210; // [rsp+128h] [rbp+28h]
  struct D2D_RECT_F v211; // [rsp+138h] [rbp+38h] BYREF
  __int128 v212; // [rsp+148h] [rbp+48h] BYREF
  void *Src; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v214; // [rsp+168h] [rbp+68h]
  char *v215; // [rsp+170h] [rbp+70h]
  _BYTE v216[64]; // [rsp+178h] [rbp+78h] BYREF
  char v217; // [rsp+1B8h] [rbp+B8h] BYREF
  char v218[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct D2D_POINT_2F v219[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v6 = *(_QWORD *)a4;
  v190 = a4;
  v8 = 0;
  v9 = a4;
  v12 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(v6 + 16);
  if ( v12 == CRectanglesShape::IsEmpty )
    IsEmpty = CRectanglesShape::IsEmpty(a4);
  else
    IsEmpty = v12(a4);
  if ( IsEmpty )
    return v8;
  v14 = *((float *)a3 + 4);
  v15 = *((float *)a3 + 5);
  v16 = *(float *)a3;
  v17 = *((float *)a3 + 1);
  v18 = *((float *)a3 + 12);
  v19 = _xmm;
  v20 = *((float *)a3 + 13);
  v21 = *(_QWORD *)a2;
  v22 = *(char (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)a2 + 32LL);
  v23 = v20 * *(float *)a3;
  v24 = 1.0 / (float)((float)(v15 * *(float *)a3) - (float)(v14 * v17));
  *(float *)&v25 = COERCE_FLOAT(LODWORD(v17) ^ _xmm) * v24;
  v26 = COERCE_FLOAT(LODWORD(v14) ^ _xmm) * v24;
  v203 = v15 * v24;
  v188[0] = v25;
  *(float *)&v191 = v26;
  v204 = v16 * v24;
  v27 = v18 * v15;
  v28 = (float)((float)(v18 * v17) - v23) * v24;
  v29 = (float)((float)(v20 * v14) - v27) * v24;
  v189[0] = v28;
  v200 = v29;
  if ( v22 == CGdiSpriteBitmap::IsOpaque )
  {
    v30 = !*((_BYTE *)a2 + 51) && *((_DWORD *)a2 + 9) == 3;
  }
  else
  {
    v103 = v22(a2);
    v21 = *(_QWORD *)a2;
    v30 = v103;
  }
  v31 = 1;
  if ( !v30 )
    v31 = a5;
  v32 = *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 6466);
  v33 = *(void (__fastcall **)(struct IBitmapResource *, bool, _QWORD, void *))(v21 + 48);
  v34 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 24LL))(
                      *((_QWORD *)this + 4) + 8LL,
                      v218)
                  + 8);
  v35 = *((_DWORD *)this + 74);
  if ( v35 )
    v36 = (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v35 - 1));
  else
    v36 = &CMILMatrix::Identity;
  v187 = v34;
  v33(a2, v32, 0LL, v36);
  v37 = *(_QWORD *)a2;
  v194 = 0LL;
  v38 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v37 + 64))(a2, &v194);
  v8 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x892u, 0LL);
    goto LABEL_70;
  }
  v193 = 0LL;
  *((_QWORD *)&v195 + 1) = 0LL;
  v41 = *((_QWORD *)this + 995);
  v42 = -2003304309;
  *(_QWORD *)&v195 = &v193;
  LOBYTE(v196) = 1;
  if ( v41 )
  {
    v147 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v9 + 64LL);
    if ( v147 == CRectanglesShape::IsRectangles || v147(v9, 0LL) )
    {
      if ( !a6 )
        goto LABEL_188;
      if ( *((_DWORD *)this + 80) )
      {
        v148 = *((_DWORD *)this + 80);
        if ( v148 )
        {
          if ( *(_BYTE *)((unsigned int)(v148 - 1) + *((_QWORD *)this + 39)) )
            goto LABEL_188;
        }
      }
      v149 = *((_DWORD *)this + 74);
      if ( v149 )
        v150 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v149 - 1));
      else
        v150 = (float *)&CMILMatrix::Identity;
      v151 = *((_BYTE *)v150 + 64);
      if ( v151 >> 6 == 1 )
      {
LABEL_193:
        if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v150) )
          goto LABEL_188;
LABEL_185:
        v211 = 0LL;
        v152 = *(__int64 (__fastcall **)(CDrawListPrimitive0 *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v190 + 48LL);
        if ( (char *)v152 == (char *)CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds(v190, &v211, 0LL);
        else
          TightBounds = v152(v190, &v211, 0LL);
        if ( TightBounds < 0 )
          goto LABEL_188;
        v106 = *((_DWORD *)this + 74);
        v210 = 0LL;
        v192 = 0LL;
        if ( v106 )
          v107 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v106 - 1));
        else
          v107 = (float *)&CMILMatrix::Identity;
        if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v107, v39, v40, v154) )
        {
          v108 = 1;
          v109 = v107[12] + v211.left;
          v110 = v107[12] + v211.right;
          v111 = v107[13] + v211.top;
          v112 = v107[13] + v211.bottom;
          *(float *)&v210 = v109;
          *(_QWORD *)((char *)&v210 + 4) = __PAIR64__(LODWORD(v110), LODWORD(v111));
          *((float *)&v210 + 3) = v112;
        }
        else
        {
          if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v107) )
          {
            CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v107, &v211, v219);
            v112 = *((float *)&v210 + 3);
            v110 = *((float *)&v210 + 2);
            v114 = 8;
            v111 = *((float *)&v210 + 1);
            v109 = *(float *)&v210;
LABEL_123:
            for ( i = 0; i < v114; ++i )
              ;
            if ( !v113 )
            {
              if ( v108 )
              {
                if ( v109 > v110 )
                {
                  v170 = v109;
                  *(float *)&v210 = v110;
                  v109 = v110;
                  *((float *)&v210 + 2) = v170;
                  v110 = v170;
                }
                if ( v111 > v112 )
                {
                  v171 = v111;
                  *((float *)&v210 + 1) = v112;
                  v111 = v112;
                  *((float *)&v210 + 3) = v171;
                  v112 = v171;
                }
              }
              else
              {
                x = v219[0].x;
                v162 = 1LL;
                y = v219[0].y;
                v164 = v219[0].x;
                v165 = v219[0].y;
                do
                {
                  v166 = v219[v162].x;
                  v167 = v219[v162].y;
                  x = fminf(x, v166);
                  y = fminf(y, v167);
                  ++v162;
                  v164 = fmaxf(v164, v166);
                  v165 = fmaxf(v165, v167);
                  *(_QWORD *)&v210 = __PAIR64__(LODWORD(y), LODWORD(x));
                  v109 = x;
                  v111 = y;
                  *((_QWORD *)&v210 + 1) = __PAIR64__(LODWORD(v165), LODWORD(v164));
                  v110 = v164;
                  v112 = v165;
                }
                while ( v162 < 4 );
              }
            }
            v116 = *((_QWORD *)this + 94);
            if ( v116 == *((_QWORD *)this + 93) )
            {
              v118.m128_i32[0] = _xmm;
              LODWORD(v119) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
              LODWORD(v120) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
              LODWORD(v121) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
              v192 = _xmm;
            }
            else
            {
              if ( *(_QWORD *)(v116 - 184) )
              {
                v117 = *((_DWORD *)this + 780);
                if ( v117 )
                  v118 = *(__m128 *)(*((_QWORD *)this + 389) + 16LL * (unsigned int)(v117 - 1));
                else
                  v118 = (__m128)_xmm;
                LODWORD(v119) = _mm_shuffle_ps(v118, v118, 255).m128_u32[0];
                LODWORD(v120) = _mm_shuffle_ps(v118, v118, 170).m128_u32[0];
                LODWORD(v121) = _mm_shuffle_ps(v118, v118, 85).m128_u32[0];
                v192 = (__int128)v118;
              }
              else
              {
                v172 = *(_QWORD *)(v116 - 192);
                v173 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v172 + 88LL);
                if ( (char *)v173 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
                  IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v172, &v201);
                else
                  v173(v172, &v201);
                v118.m128_i32[0] = 0;
                v121 = 0.0;
                *(_QWORD *)&v192 = 0LL;
                *((float *)&v192 + 2) = (float)v201;
                v120 = (float)v201;
                *((float *)&v192 + 3) = (float)v202;
                v119 = (float)v202;
              }
              v122 = *((_QWORD *)this + 94);
              if ( v122 != *((_QWORD *)this + 93) && *(_QWORD *)(v122 - 168) )
              {
                v123 = *((_DWORD *)this + 786);
                v205 = 0LL;
                if ( v123 )
                  v124 = *(__m128 *)(*((_QWORD *)this + 392) + 16LL * (unsigned int)(v123 - 1));
                else
                  v124 = (__m128)_xmm;
                v205 = v124;
                if ( v124.m128_f32[0] > v118.m128_f32[0] )
                {
                  LODWORD(v192) = v124.m128_i32[0];
                  v118.m128_i32[0] = v124.m128_i32[0];
                }
                v125 = v121;
                v126 = _mm_shuffle_ps(v124, v124, 85).m128_f32[0];
                if ( v126 > v121 )
                {
                  *((float *)&v192 + 1) = v126;
                  v121 = v126;
                  v125 = v126;
                }
                v127 = v120;
                v128 = _mm_shuffle_ps(v124, v124, 170).m128_f32[0];
                if ( v120 > v128 )
                {
                  *((float *)&v192 + 2) = v128;
                  v120 = v128;
                  v127 = v128;
                }
                v129 = _mm_shuffle_ps(v124, v124, 255).m128_f32[0];
                v130 = v119;
                if ( v119 > v129 )
                {
                  *((float *)&v192 + 3) = v129;
                  v119 = v129;
                  v130 = v129;
                }
                if ( v127 <= v118.m128_f32[0] || v130 <= v125 )
                {
                  v119 = 0.0;
                  v120 = 0.0;
                  v121 = 0.0;
                  v118.m128_i32[0] = 0;
                  v192 = 0uLL;
                }
              }
            }
            if ( v118.m128_f32[0] > v109 )
            {
              LODWORD(v210) = v118.m128_i32[0];
              v109 = v118.m128_f32[0];
            }
            v131 = v111;
            if ( v121 > v111 )
            {
              *((float *)&v210 + 1) = v121;
              v111 = v121;
              v131 = v121;
            }
            v132 = v110;
            if ( v110 > v120 )
            {
              *((float *)&v210 + 2) = v120;
              v110 = v120;
              v132 = v120;
            }
            v133 = v112;
            if ( v112 > v119 )
            {
              *((float *)&v210 + 3) = v119;
              v112 = v119;
              v133 = v119;
            }
            if ( v132 <= v109 || v133 <= v131 )
            {
              v110 = 0.0;
              v109 = 0.0;
              v210 = 0uLL;
              v112 = 0.0;
              v111 = 0.0;
            }
            v134 = *(_DWORD *)(v41 + 640);
            v39 = 0LL;
            v135 = 0LL;
            v136 = 0.0;
            v212 = 0LL;
            v206 = 0LL;
            if ( v134 )
            {
              v137 = *(__m128 **)(v41 + 616);
              do
              {
                if ( v137[1].m128_i32[0] >= a6 )
                  break;
                v138 = v137->m128_f32[2];
                if ( v138 > v137->m128_f32[0] && v137->m128_f32[3] > v137->m128_f32[1] )
                {
                  v139 = v109;
                  v140 = v111;
                  v141 = v110;
                  if ( v137->m128_f32[0] > v109 )
                    v139 = v137->m128_f32[0];
                  v142 = v139;
                  v143 = v139;
                  if ( v137->m128_f32[1] > v111 )
                    v140 = v137->m128_f32[1];
                  v144 = v140;
                  if ( v110 > v138 )
                  {
                    v141 = v137->m128_f32[2];
                    v142 = v139;
                    v143 = v139;
                  }
                  v145 = v112;
                  if ( v112 > v137->m128_f32[3] )
                  {
                    v142 = v143;
                    v144 = v140;
                    v145 = v137->m128_f32[3];
                  }
                  if ( v141 > v142 && v145 > v144 )
                  {
                    v146 = (float)(v145 - v140) * (float)(v141 - v139);
                    if ( v146 > v136 )
                    {
                      v135 = *v137;
                      v136 = v146;
                      v206 = *v137;
                    }
                  }
                }
                v39 = (unsigned int)(v39 + 1);
                v137 += 3;
              }
              while ( (unsigned int)v39 < v134 );
              v9 = v190;
              if ( v136 > 0.0 )
              {
                v156 = *(_QWORD *)v190;
                LODWORD(v212) = v135.m128_i32[0];
                v157 = *(__int64 (__fastcall **)(CDrawListPrimitive0 *, __int128 *, void *, char *))(v156 + 96);
                v158 = *((_DWORD *)this + 74);
                DWORD1(v212) = _mm_shuffle_ps(v135, v135, 85).m128_u32[0];
                DWORD2(v212) = _mm_shuffle_ps(v135, v135, 170).m128_u32[0];
                HIDWORD(v212) = _mm_shuffle_ps(v135, v135, 255).m128_u32[0];
                v159 = v158 ? (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v158 - 1)) : &CMILMatrix::Identity;
                v160 = (char *)v157 == (char *)CRectanglesShape::GetUnOccludedWorldShape
                     ? CRectanglesShape::GetUnOccludedWorldShape(v190, &v212, v159, (char *)&v195 + 8)
                     : v157(v190, &v212, v159, (char *)&v195 + 8);
                v42 = v160;
                if ( v160 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v160, 0x149Au, 0LL);
              }
              v19 = _xmm;
              v28 = v189[0];
              v29 = v200;
              v26 = *(float *)&v191;
              v25 = v188[0];
              goto LABEL_17;
            }
            v19 = _xmm;
            v25 = v188[0];
LABEL_188:
            v9 = v190;
            goto LABEL_17;
          }
          v168 = *v107;
          v108 = 1;
          v169 = v107[5];
          v109 = (float)(*v107 * v211.left) + v107[12];
          v111 = (float)(v169 * v211.top) + v107[13];
          v110 = (float)(*v107 * v211.right) + v107[12];
          v112 = (float)(v169 * v211.bottom) + v107[13];
          *(float *)&v210 = v109;
          *(_QWORD *)((char *)&v210 + 4) = __PAIR64__(LODWORD(v110), LODWORD(v111));
          *((float *)&v210 + 3) = v112;
          if ( v168 <= 0.0 || v169 <= 0.0 )
          {
LABEL_122:
            v114 = 4;
            goto LABEL_123;
          }
        }
        v113 = 1;
        goto LABEL_122;
      }
      if ( v151 >> 6 < 0 )
        goto LABEL_185;
      v155 = *((_BYTE *)v150 + 65);
      if ( (char)(4 * v155) >> 6 != 1 )
      {
        if ( (char)(4 * v155) >> 6 < 0 )
        {
LABEL_191:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v150[1] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v150[4] - 0.0) & _xmm) < 0.000081380211 )
          {
            *((_BYTE *)v150 + 64) = v151 | 0xC0;
            goto LABEL_185;
          }
          goto LABEL_192;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT((_DWORD)v150[7] & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT((_DWORD)v150[3] & _xmm) * 61440.0))
                                  + COERCE_FLOAT((_DWORD)v150[15] & _xmm))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          *((_BYTE *)v150 + 65) = v155 | 0x30;
          goto LABEL_191;
        }
        *((_BYTE *)v150 + 65) = v155 & 0xCF | 0x10;
      }
LABEL_192:
      *((_BYTE *)v150 + 64) = v151 & 0x3F | 0x40;
      goto LABEL_193;
    }
  }
LABEL_17:
  v43 = v42 >> 31;
  if ( (_BYTE)v196 )
  {
    v39 = v195;
    v44 = *(CRectanglesShape **)v195;
    *(_QWORD *)v195 = *((_QWORD *)&v195 + 1);
    if ( v44 )
    {
      v45 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v44;
      if ( v45 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v44);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v44);
      }
      else
      {
        ((void (__fastcall *)(CRectanglesShape *, __int64))v45)(v44, 1LL);
      }
    }
  }
  if ( (_BYTE)v43 )
  {
    v46 = *(_QWORD *)v9;
    v47 = v194;
    v191 = v194;
    *(float *)v188 = 0.0;
    v48 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(v46 + 64);
    if ( v48 == CRectanglesShape::IsRectangles )
    {
      v188[0] = (__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 4;
    }
    else if ( !v48(v9, v188) )
    {
      v8 = -2147024809;
      v67 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x8DEu, 0LL);
LABEL_96:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v67, 0x8BBu, 0LL);
      goto LABEL_67;
    }
    v208[0] = 0LL;
    v208[1] = v47;
    if ( v47 )
    {
      v49 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v47 + 8LL);
      if ( v49 == CMILRefCountImpl::AddReference )
      {
        v50 = _InterlockedAdd((volatile signed __int32 *)v47, 1u);
        if ( (v50 < 0) ^ __OFSUB__(v49, CMILRefCountImpl::AddReference) | (v50 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v187);
      }
      else if ( (char *)v49 == (char *)CGDISectionBitmapRealization::AddRef )
      {
        CGDISectionBitmapRealization::AddRef(v47, v39, v40);
      }
      else
      {
        v49(v47);
      }
    }
    v51 = v188[0];
    v52 = v216;
    v209 = v31;
    v53 = v216;
    Src = v216;
    v214 = v216;
    v215 = &v217;
    if ( *(float *)v188 == 0.0 )
    {
      detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&Src,
        0LL,
        0LL);
LABEL_49:
      v66 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v9 + 80LL);
      if ( v66 == CRectanglesShape::GetRectangles )
        CRectanglesShape::GetRectangles((__int64)v9, (__int64)Src, v188[0]);
      else
        v66((__int64)v9, (__int64)Src, v188[0]);
      v205.m128_u64[0] = v188[0];
      v205.m128_u64[1] = (unsigned __int64)Src;
      if ( !Src && *(float *)v188 != 0.0 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      if ( v47 )
      {
        v174 = *(__int64 (__fastcall **)(struct IBitmapRealization *, int *))(*(_QWORD *)v47 + 32LL);
        if ( (char *)v174 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
        {
          Size = (unsigned __int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                       v47,
                                       &v201);
        }
        else if ( (char *)v174 == (char *)CDxHandleBitmapRealization::GetSize )
        {
          Size = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v47, &v201);
        }
        else
        {
          Size = (unsigned __int64 *)v174(v47, &v201);
        }
        v176 = *Size;
        v177 = HIDWORD(v176);
      }
      else
      {
        LODWORD(v176) = 0;
        LODWORD(v177) = 0;
      }
      DWORD2(v195) = 0;
      HIDWORD(v196) = 0;
      v199 = 1065353216;
      v178 = 1.0 / (float)(int)v177;
      v179 = 0.0 - (float)((float)(1.0 / (float)(int)v176) * 0.0);
      v180 = 0.0 - (float)(v178 * 0.0);
      *(float *)&v195 = (float)((float)((float)(1.0 / (float)(int)v176) * v203) + (float)(*(float *)&v25 * 0.0))
                      + (float)(v179 * 0.0);
      *((float *)&v195 + 1) = (float)((float)(v178 * *(float *)&v25) + (float)(v203 * 0.0)) + (float)(v180 * 0.0);
      *((float *)&v195 + 3) = (float)((float)((float)(1.0 / (float)(int)v176) * v26) + (float)(v204 * 0.0))
                            + (float)(v179 * 0.0);
      *(float *)&v196 = (float)((float)(v204 * v178) + (float)(v26 * 0.0)) + (float)(v180 * 0.0);
      v197 = (float)((float)(v29 * (float)(1.0 / (float)(int)v176)) + (float)(v28 * 0.0)) + v179;
      v198 = (float)((float)(v28 * v178) + (float)(v29 * 0.0)) + v180;
      D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
      v182 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
      v183 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
      if ( v183 )
      {
        LOBYTE(v189[0]) = v182;
        *(_WORD *)((char *)v189 + 1) = 257;
        v184 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(
                 (__int64)v183,
                 (const struct CDrawListBitmap *)v208,
                 (__int64)v189,
                 &v195,
                 0);
        v99 = (CDrawListPrimitive0 *)v184;
        if ( v184 )
        {
          *(_BYTE *)(v184 + 52) = 1;
          *(_QWORD *)(v184 + 32) = 0LL;
          *(_QWORD *)(v184 + 40) = 0LL;
          *(_DWORD *)(v184 + 48) = 0;
          *(_QWORD *)&v212 = 0x3F8000003F800000LL;
          DWORD2(v212) = 1065353216;
          HIDWORD(v212) = CDrawingContext::GetOpacity(this);
          v190 = v99;
          v100 = CDrawingContext::FillRectanglesWithDrawListBrush(this);
          v8 = v100;
          if ( v190 )
          {
            v186 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v190;
            if ( v186 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
            {
              CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v190, 1, v185);
            }
            else if ( v186 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(v190, 1, v185);
            }
            else if ( (char *)v186 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
            {
              CDrawListPrimitive0::`scalar deleting destructor'(v190, 1u);
            }
            else
            {
              ((void (__fastcall *)(CDrawListPrimitive0 *, __int64))v186)(v190, 1LL);
            }
          }
          if ( v100 >= 0 )
          {
LABEL_60:
            v67 = v100;
            v8 = v100;
            if ( v100 >= 0 )
            {
              v68 = Src;
              v69 = (v214 - (_BYTE *)Src) >> 4;
              if ( v69 )
                v214 -= 16 * v69;
              Src = 0LL;
              if ( v68 != v216 && v68 )
              {
                ProcessHeap = GetProcessHeap();
                HeapFree(ProcessHeap, 0, v68);
              }
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v208);
              goto LABEL_67;
            }
            goto LABEL_95;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v100, 0x35Cu, 0LL);
LABEL_94:
          v67 = v100;
LABEL_95:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v100, 0x8DAu, 0LL);
          detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&Src);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v208);
          goto LABEL_96;
        }
      }
      else
      {
        v99 = 0LL;
      }
      v100 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x351u, 0LL);
      if ( !v99 )
        goto LABEL_60;
      CSurfaceDrawListBrush::~CSurfaceDrawListBrush(v99, v101, v102);
      CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Free(v99);
      v8 = -2147024882;
      goto LABEL_94;
    }
    v54 = v216;
    if ( v188[0] > 4uLL )
    {
      v55 = v188[0];
      if ( v188[0] <= 6uLL )
        v55 = 6LL;
      v56 = operator new[](saturated_mul(v55, 0x10uLL));
      v57 = Src;
      v195 = (unsigned __int64)v56;
      v58 = v214 - (_BYTE *)Src;
      v196 = 0LL;
      v59 = v56;
      v206 = (__m128)(unsigned __int64)v56;
      v207 = 0LL;
      v60 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                      &v206,
                      (v214 - (_BYTE *)Src) >> 4);
      memmove_0(v60, v57, v58);
      v61 = Src;
      Src = v59;
      if ( v61 == v216 )
        v61 = 0LL;
      operator delete(v61);
      v52 = Src;
      v53 = Src;
      v214 = Src;
      v215 = (char *)Src + 16 * v55;
      v54 = Src;
    }
    v196 = 0LL;
    v62 = (v54 - (_BYTE *)v52) >> 4;
    *((_QWORD *)&v195 + 1) = v51;
    v207 = 0LL;
    *(_QWORD *)&v195 = &v52[v62];
    if ( (_QWORD)v195 )
    {
      v207 = v51;
      v63 = v62;
      if ( v51 < v62 )
        v63 = v51;
      v64 = 16 * v63;
      v65 = &v53[v64 / 0xFFFFFFFFFFFFFFF0uLL];
      v196 = v51;
      if ( v53 != &v53[v64 / 0xFFFFFFFFFFFFFFF0uLL] )
      {
        v104 = (_OWORD *)(v195 + 16 * v51);
        v105 = v196;
        do
        {
          --v53;
          if ( !(_QWORD)v195 )
            goto LABEL_42;
          if ( !v105 )
            goto LABEL_42;
          --v105;
          --v104;
          if ( v105 >= *((_QWORD *)&v195 + 1) )
            goto LABEL_42;
          *v104 = *v53;
        }
        while ( v53 != v65 );
        v53 = v214;
      }
      if ( v62 <= v51 )
      {
        v214 = &v53[v51];
LABEL_48:
        v9 = v190;
        *v52 = 0LL;
        qmemcpy(v52 + 1, v52, 8 * ((16 * v51 - 9) >> 3));
        v47 = v191;
        goto LABEL_49;
      }
      if ( !v62 || v52 && (v62 & 0x8000000000000000uLL) == 0LL )
      {
        if ( (__int64)(-16LL * v51 + 16 * v62) >> 4 > 0 )
        {
          if ( v62 >= (__int64)(-16LL * v51 + 16 * v62) >> 4 )
            goto LABEL_47;
        }
        else if ( (__int64)(-16LL * v51 + 16 * v62) >> 4 >= 0 )
        {
LABEL_47:
          memmove_0(&v52[v51], v52, -16LL * v51 + 16 * v62);
          v214 += 16 * v51;
          goto LABEL_48;
        }
      }
    }
LABEL_42:
    _invalid_parameter_noinfo_noreturn();
  }
  v73 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(*(_QWORD *)v193 + 16LL);
  if ( v73 == CRectanglesShape::IsEmpty )
    v74 = CRectanglesShape::IsEmpty(v193);
  else
    v74 = v73(v193);
  if ( v74 )
  {
LABEL_67:
    v70 = v193;
    if ( v193 )
    {
      v71 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v193;
      if ( v71 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v193);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v70);
      }
      else
      {
        ((void (__fastcall *)(CRectanglesShape *, __int64))v71)(v193, 1LL);
      }
    }
    goto LABEL_70;
  }
  v75 = *((_DWORD *)this + 74);
  if ( v75 )
    v76 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v75 - 1));
  else
    v76 = (float *)&CMILMatrix::Identity;
  v77 = v76[5];
  v78 = v76[1];
  v79 = *v76;
  v80 = v76[12];
  v81 = v76[13];
  v82 = *((_DWORD *)v76 + 4) ^ v19;
  v83 = v81 * v76[4];
  v84 = 1.0 / (float)((float)(v77 * *v76) - (float)(v76[4] * v78));
  v85 = COERCE_FLOAT(LODWORD(v78) ^ v19) * v84;
  v86 = *v76 * v84;
  *(float *)&v191 = v84;
  v87 = *(float *)&v82 * v84;
  v88 = (float)(v83 - (float)(v80 * v77)) * v84;
  v89 = (float)((float)(v80 * v78) - (float)(v81 * v79)) * v84;
  *(float *)&v195 = (float)(v85 * v26) + (float)((float)(v77 * v84) * v203);
  *((float *)&v195 + 1) = (float)(v85 * v204) + (float)((float)(v77 * v84) * *(float *)v188);
  *((float *)&v195 + 2) = (float)(v86 * v26) + (float)(v87 * v203);
  *((float *)&v195 + 3) = (float)(v86 * v204) + (float)(v87 * *(float *)v188);
  *(float *)&v196 = (float)((float)(v88 * v203) + (float)(v26 * v89)) + v29;
  *((float *)&v196 + 1) = (float)((float)(v88 * *(float *)v188) + (float)(v204 * v89)) + v28;
  v90 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v8 = v90;
  if ( v90 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v90, 0x8AAu, 0LL);
    goto LABEL_67;
  }
  v205.m128_u64[0] = (unsigned __int64)this;
  v205.m128_i8[8] = 1;
  v91 = CDrawingContext::FillShapeWithBitmapRealization(this, v194, v193, (const struct MILMatrix3x2 *)&v195, v31);
  v8 = v91;
  if ( v91 >= 0 )
  {
    v92 = *((_DWORD *)this + 68);
    v93 = 0LL;
    if ( v92 )
    {
      v94 = (unsigned int)(v92 - 1);
      *((_DWORD *)this + 68) = v94;
      v93 = *(__m128i *)(*((_QWORD *)this + 33) + 16 * v94);
    }
    if ( _mm_srli_si128(v93, 8).m128i_u64[0] )
    {
      v95 = *((_DWORD *)this + 86);
      if ( v95 )
        *((_DWORD *)this + 86) = v95 - 1;
    }
    v96 = *((_DWORD *)this + 74);
    if ( v96 )
      *((_DWORD *)this + 74) = v96 - 1;
    v97 = *((_DWORD *)this + 80);
    if ( v97 )
      *((_DWORD *)this + 80) = v97 - 1;
    goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v91, 0x8B3u, 0LL);
  gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___(&v205);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v193);
LABEL_70:
  if ( v194 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v194 + 16LL))(v194);
  return v8;
}
