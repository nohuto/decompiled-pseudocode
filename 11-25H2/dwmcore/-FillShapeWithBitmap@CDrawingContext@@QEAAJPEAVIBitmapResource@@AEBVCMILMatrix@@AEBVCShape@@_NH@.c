/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769C8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180051CA0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180075020 (-clear_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800921D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800A27D0 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800E0960 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800E09BC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E23D0 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800E243C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801C22A0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___ @ 0x1801EC008 (gsl--final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___--_final_action__lambda_8739158a9a1.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v10; // ebx
  bool (__fastcall *v11)(CRectanglesShape *__hidden); // rax
  bool IsEmpty; // al
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm7_4
  float v16; // xmm5_4
  float v17; // xmm13_4
  int v18; // xmm8_4
  float v19; // xmm14_4
  __int64 v20; // rdx
  bool (__fastcall *v21)(CGdiSpriteBitmap *__hidden); // rax
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm15_4
  unsigned int v25; // xmm9_4
  float v26; // xmm0_4
  float v27; // xmm13_4
  float v28; // xmm14_4
  bool v29; // cl
  bool v30; // r12
  void (__fastcall *v31)(struct IBitmapResource *, _QWORD, _QWORD, void *); // r14
  int v32; // edx
  int v33; // eax
  void *v34; // r9
  __int64 v35; // rax
  int v36; // eax
  CDrawListPrimitive0 *v37; // rsi
  unsigned int v38; // r14d
  __int64 v39; // r15
  unsigned int v40; // r14d
  CRectanglesShape *v41; // rdi
  CRectanglesShape *(__fastcall *v42)(CRectanglesShape *, char); // rax
  __int64 v43; // rax
  struct IBitmapRealization *v44; // r12
  bool (__fastcall *v45)(CRectanglesShape *__hidden, unsigned int *); // rax
  unsigned int (__fastcall *v46)(CMILRefCountImpl *__hidden); // rax
  int v47; // et0
  unsigned __int64 v48; // r14
  _OWORD *v49; // rsi
  bool v50; // bl
  _OWORD *v51; // rdx
  _BYTE *v52; // rdi
  unsigned __int64 v53; // r15
  LPVOID v54; // rax
  void *v55; // rdi
  void *v56; // rbx
  size_t v57; // rsi
  void *v58; // rax
  _BYTE *v59; // rcx
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  _OWORD *v63; // rax
  char (__fastcall *v64)(__int64, __int64, int); // rax
  __int64 v65; // r8
  _BYTE *v66; // rdi
  __int64 v67; // rax
  CRectanglesShape *v68; // rdi
  CRectanglesShape *(__fastcall *v69)(CRectanglesShape *, char); // rax
  bool (__fastcall *v71)(CRectanglesShape *__hidden); // rax
  bool v72; // al
  int v73; // eax
  float *v74; // rax
  float v75; // xmm3_4
  float v76; // xmm5_4
  float v77; // xmm7_4
  float v78; // xmm10_4
  float v79; // xmm6_4
  float v80; // xmm12_4
  float v81; // xmm11_4
  float v82; // xmm4_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  int v86; // eax
  int v87; // eax
  int v88; // eax
  __m128i v89; // xmm0
  __int64 v90; // rcx
  int v91; // eax
  int v92; // eax
  int v93; // eax
  HANDLE ProcessHeap; // rax
  int v95; // esi
  bool v96; // al
  _OWORD *v97; // r8
  unsigned __int64 v98; // rcx
  int v99; // eax
  float *v100; // rdi
  char v101; // si
  char v102; // r10
  float v103; // xmm6_4
  float v104; // xmm7_4
  float v105; // xmm9_4
  float v106; // xmm8_4
  unsigned int v107; // edx
  unsigned int i; // ecx
  __int64 v109; // rax
  int v110; // eax
  __m128 v111; // xmm2
  float v112; // xmm5_4
  float v113; // xmm4_4
  float v114; // xmm3_4
  __int64 v115; // rax
  int v116; // eax
  __m128 v117; // xmm0
  float v118; // xmm11_4
  float v119; // xmm1_4
  float v120; // xmm10_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm1_4
  float v126; // xmm0_4
  unsigned int v127; // ecx
  unsigned int v128; // edx
  __m128 v129; // xmm2
  float v130; // xmm5_4
  __m128 *v131; // rax
  float v132; // xmm13_4
  float v133; // xmm0_4
  float v134; // xmm4_4
  float v135; // xmm3_4
  float v136; // xmm10_4
  float v137; // xmm12_4
  float v138; // xmm11_4
  float v139; // xmm1_4
  float v140; // xmm1_4
  bool (__fastcall *v141)(CRectanglesShape *__hidden, unsigned int *); // rax
  int v142; // eax
  int v143; // eax
  float *v144; // rcx
  char v145; // dl
  __int64 v146; // rax
  __int64 (__fastcall *v147)(__int64, struct D2D_RECT_F *, __int64); // rax
  int TightBounds; // eax
  char v149; // di
  __int64 v150; // rax
  __int64 (__fastcall *v151)(__int64, const __m128i *, float *, _QWORD *); // rdi
  int v152; // eax
  float *v153; // r8
  int UnOccludedWorldShape; // eax
  float x; // xmm2_4
  unsigned __int64 v156; // rax
  float y; // xmm3_4
  float v158; // xmm4_4
  float v159; // xmm5_4
  float v160; // xmm1_4
  float v161; // xmm0_4
  float v162; // xmm2_4
  float v163; // xmm3_4
  float v164; // xmm0_4
  float v165; // xmm0_4
  __int64 v166; // rcx
  void (__fastcall *v167)(__int64, int *); // rax
  __int64 (__fastcall *v168)(struct IBitmapRealization *, int *); // rax
  unsigned __int64 *Size; // rax
  unsigned __int64 v170; // rax
  unsigned __int64 v171; // rcx
  float v172; // xmm10_4
  float v173; // xmm7_4
  float v174; // xmm4_4
  float v175; // xmm5_4
  int D2DInterpolationMode; // eax
  char v177; // si
  _QWORD *v178; // rax
  _QWORD *v179; // rdi
  CMILRefCountImpl *v180; // rcx
  void (*v181)(void); // rax
  struct IBitmapRealization *v182; // rcx
  __int128 v183; // xmm0
  __int128 v184; // xmm1
  int v185; // edi
  CDrawListPrimitive0 *(__fastcall *v186)(CDrawListPrimitive0 *, char); // rax
  int v187; // [rsp+20h] [rbp-E0h]
  bool v188; // [rsp+40h] [rbp-C0h]
  __int16 v189; // [rsp+40h] [rbp-C0h]
  unsigned int v190; // [rsp+50h] [rbp-B0h] BYREF
  float v191; // [rsp+54h] [rbp-ACh]
  CDrawListPrimitive0 *v192; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v193; // [rsp+60h] [rbp-A0h]
  __int128 v194; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v195; // [rsp+80h] [rbp-80h]
  CRectanglesShape *v196; // [rsp+90h] [rbp-70h] BYREF
  struct IBitmapRealization *v197; // [rsp+98h] [rbp-68h] BYREF
  struct IBitmapRealization *v198; // [rsp+A0h] [rbp-60h]
  CMILRefCountImpl *v199; // [rsp+A8h] [rbp-58h]
  int v200; // [rsp+B0h] [rbp-50h] BYREF
  int v201; // [rsp+B4h] [rbp-4Ch]
  float v202; // [rsp+B8h] [rbp-48h]
  float v203; // [rsp+BCh] [rbp-44h]
  float v204; // [rsp+C0h] [rbp-40h]
  __m128 v205; // [rsp+C8h] [rbp-38h] BYREF
  CMILRefCountImpl *v206; // [rsp+D8h] [rbp-28h] BYREF
  struct IBitmapRealization *v207; // [rsp+E0h] [rbp-20h]
  bool v208; // [rsp+E8h] [rbp-18h]
  __m128 v209; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v210; // [rsp+100h] [rbp+0h]
  __int128 v211; // [rsp+110h] [rbp+10h]
  __int128 v212; // [rsp+120h] [rbp+20h]
  __int128 v213; // [rsp+138h] [rbp+38h]
  struct D2D_RECT_F v214; // [rsp+148h] [rbp+48h] BYREF
  __m128i v215; // [rsp+158h] [rbp+58h] BYREF
  void *Src; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v217; // [rsp+178h] [rbp+78h]
  char *v218; // [rsp+180h] [rbp+80h]
  _BYTE v219[64]; // [rsp+188h] [rbp+88h] BYREF
  char v220; // [rsp+1C8h] [rbp+C8h] BYREF
  char v221[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct D2D_POINT_2F v222[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v6 = *(_QWORD *)a4;
  v192 = a4;
  v10 = 0;
  v11 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(v6 + 16);
  if ( v11 == CRectanglesShape::IsEmpty )
    IsEmpty = CRectanglesShape::IsEmpty(a4);
  else
    IsEmpty = v11(a4);
  if ( IsEmpty )
    return v10;
  v13 = *((float *)a3 + 4);
  v14 = *((float *)a3 + 5);
  v15 = *(float *)a3;
  v16 = *((float *)a3 + 1);
  v17 = *((float *)a3 + 12);
  v18 = _xmm;
  v19 = *((float *)a3 + 13);
  v20 = *(_QWORD *)a2;
  v21 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)a2 + 32LL);
  v22 = v19 * *(float *)a3;
  v23 = (float)(v14 * *(float *)a3) - (float)(v13 * v16);
  v191 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v24 = COERCE_FLOAT(LODWORD(v16) ^ _xmm) * (float)(1.0 / v23);
  *(float *)&v25 = COERCE_FLOAT(LODWORD(v13) ^ _xmm) * (float)(1.0 / v23);
  v202 = v14 * (float)(1.0 / v23);
  *(float *)&v199 = v24;
  v190 = v25;
  v203 = v15 * (float)(1.0 / v23);
  v26 = v17 * v14;
  v27 = (float)((float)(v17 * v16) - v22) * (float)(1.0 / v23);
  v28 = (float)((float)(v19 * v13) - v26) * (float)(1.0 / v23);
  v204 = v27;
  *(float *)&v198 = v28;
  if ( v21 == CGdiSpriteBitmap::IsOpaque )
  {
    v29 = !*((_BYTE *)a2 + 51) && *((_DWORD *)a2 + 9) == 3;
  }
  else
  {
    v96 = v21(a2);
    v20 = *(_QWORD *)a2;
    v29 = v96;
  }
  v30 = 1;
  if ( !v29 )
    v30 = a5;
  v188 = v30;
  if ( *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 6490) )
    LOBYTE(v10) = 1;
  v31 = *(void (__fastcall **)(struct IBitmapResource *, _QWORD, _QWORD, void *))(v20 + 48);
  v32 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 24LL))(
                      *((_QWORD *)this + 4) + 8LL,
                      v221)
                  + 8);
  v33 = *((_DWORD *)this + 74);
  if ( v33 )
    v34 = (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v33 - 1));
  else
    v34 = &CMILMatrix::Identity;
  v187 = v32;
  v31(a2, (unsigned __int8)v10, 0LL, v34);
  v35 = *(_QWORD *)a2;
  v197 = 0LL;
  v36 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v35 + 64))(a2, &v197);
  v10 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x892u, 0LL);
    goto LABEL_70;
  }
  v37 = v192;
  v196 = 0LL;
  *((_QWORD *)&v194 + 1) = 0LL;
  v38 = -2003304309;
  v39 = *((_QWORD *)this + 995);
  *(_QWORD *)&v194 = &v196;
  LOBYTE(v195) = 1;
  if ( !v39 )
    goto LABEL_17;
  v141 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v192 + 64LL);
  if ( v141 != CRectanglesShape::IsRectangles && !v141(v192, 0LL) )
    goto LABEL_17;
  if ( !a6 )
    goto LABEL_17;
  if ( *((_DWORD *)this + 80) )
  {
    v142 = *((_DWORD *)this + 80);
    if ( v142 )
    {
      if ( *(_BYTE *)((unsigned int)(v142 - 1) + *((_QWORD *)this + 39)) )
        goto LABEL_17;
    }
  }
  v143 = *((_DWORD *)this + 74);
  if ( v143 )
    v144 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v143 - 1));
  else
    v144 = (float *)&CMILMatrix::Identity;
  v145 = *((_BYTE *)v144 + 64);
  if ( v145 >> 6 == 1 )
    goto LABEL_188;
  if ( v145 >> 6 < 0 )
    goto LABEL_180;
  v149 = *((_BYTE *)v144 + 65);
  if ( (char)(4 * v149) >> 6 != 1 )
  {
    if ( (char)(4 * v149) >> 6 < 0 )
    {
LABEL_186:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v144[1] - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v144[4] - 0.0) & _xmm) < 0.000081380211 )
      {
        *((_BYTE *)v144 + 64) = v145 | 0xC0;
        goto LABEL_180;
      }
      goto LABEL_187;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT((_DWORD)v144[7] & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT((_DWORD)v144[3] & _xmm) * 61440.0))
                              + COERCE_FLOAT((_DWORD)v144[15] & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)v144 + 65) = v149 | 0x30;
      goto LABEL_186;
    }
    *((_BYTE *)v144 + 65) = v149 & 0xCF | 0x10;
  }
LABEL_187:
  *((_BYTE *)v144 + 64) = v145 & 0x3F | 0x40;
LABEL_188:
  if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)v144) )
    goto LABEL_17;
LABEL_180:
  v146 = *(_QWORD *)v37;
  v214 = 0LL;
  v147 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(v146 + 48);
  if ( v147 == CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds((__int64)v37, &v214, 0LL);
  else
    TightBounds = v147((__int64)v37, &v214, 0LL);
  if ( TightBounds < 0 )
    goto LABEL_17;
  v99 = *((_DWORD *)this + 74);
  v213 = 0LL;
  v193 = 0LL;
  if ( v99 )
    v100 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v99 - 1));
  else
    v100 = (float *)&CMILMatrix::Identity;
  v101 = 0;
  if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)v100) )
  {
    v102 = 1;
    v103 = v100[12] + v214.left;
    v104 = v100[12] + v214.right;
    v105 = v100[13] + v214.top;
    v106 = v100[13] + v214.bottom;
    *(float *)&v213 = v103;
    *(_QWORD *)((char *)&v213 + 4) = __PAIR64__(LODWORD(v104), LODWORD(v105));
    *((float *)&v213 + 3) = v106;
LABEL_116:
    v101 = 1;
LABEL_117:
    v107 = 4;
    goto LABEL_118;
  }
  if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v100) )
  {
    v162 = *v100;
    v102 = 1;
    v163 = v100[5];
    v103 = (float)(*v100 * v214.left) + v100[12];
    v105 = (float)(v163 * v214.top) + v100[13];
    v104 = (float)(*v100 * v214.right) + v100[12];
    v106 = (float)(v163 * v214.bottom) + v100[13];
    *(float *)&v213 = v103;
    *(_QWORD *)((char *)&v213 + 4) = __PAIR64__(LODWORD(v104), LODWORD(v105));
    *((float *)&v213 + 3) = v106;
    if ( v162 <= 0.0 || v163 <= 0.0 )
      goto LABEL_117;
    goto LABEL_116;
  }
  CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v100, &v214, v222);
  v106 = *((float *)&v213 + 3);
  v104 = *((float *)&v213 + 2);
  v107 = 8;
  v105 = *((float *)&v213 + 1);
  v103 = *(float *)&v213;
LABEL_118:
  for ( i = 0; i < v107; ++i )
    ;
  if ( !v101 )
  {
    if ( v102 )
    {
      if ( v103 > v104 )
      {
        v164 = v103;
        *(float *)&v213 = v104;
        v103 = v104;
        *((float *)&v213 + 2) = v164;
        v104 = v164;
      }
      if ( v105 > v106 )
      {
        v165 = v105;
        *((float *)&v213 + 1) = v106;
        v105 = v106;
        *((float *)&v213 + 3) = v165;
        v106 = v165;
      }
    }
    else
    {
      x = v222[0].x;
      v156 = 1LL;
      y = v222[0].y;
      v158 = v222[0].x;
      v159 = v222[0].y;
      do
      {
        v160 = v222[v156].x;
        v161 = v222[v156].y;
        x = fminf(x, v160);
        y = fminf(y, v161);
        ++v156;
        v158 = fmaxf(v158, v160);
        v159 = fmaxf(v159, v161);
        *(_QWORD *)&v213 = __PAIR64__(LODWORD(y), LODWORD(x));
        v103 = x;
        v105 = y;
        *((_QWORD *)&v213 + 1) = __PAIR64__(LODWORD(v159), LODWORD(v158));
        v104 = v158;
        v106 = v159;
      }
      while ( v156 < 4 );
    }
  }
  v109 = *((_QWORD *)this + 94);
  if ( v109 == *((_QWORD *)this + 93) )
  {
    v111.m128_i32[0] = _xmm;
    LODWORD(v112) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v113) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    LODWORD(v114) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
    v193 = _xmm;
  }
  else
  {
    if ( *(_QWORD *)(v109 - 184) )
    {
      v110 = *((_DWORD *)this + 780);
      if ( v110 )
        v111 = *(__m128 *)(*((_QWORD *)this + 389) + 16LL * (unsigned int)(v110 - 1));
      else
        v111 = (__m128)_xmm;
      LODWORD(v112) = _mm_shuffle_ps(v111, v111, 255).m128_u32[0];
      LODWORD(v113) = _mm_shuffle_ps(v111, v111, 170).m128_u32[0];
      LODWORD(v114) = _mm_shuffle_ps(v111, v111, 85).m128_u32[0];
      v193 = (__int128)v111;
    }
    else
    {
      v166 = *(_QWORD *)(v109 - 192);
      v167 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v166 + 88LL);
      if ( (char *)v167 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v166, &v200);
      else
        v167(v166, &v200);
      v111.m128_i32[0] = 0;
      v114 = 0.0;
      *(_QWORD *)&v193 = 0LL;
      *((float *)&v193 + 2) = (float)v200;
      v113 = (float)v200;
      *((float *)&v193 + 3) = (float)v201;
      v112 = (float)v201;
    }
    v115 = *((_QWORD *)this + 94);
    if ( v115 != *((_QWORD *)this + 93) && *(_QWORD *)(v115 - 168) )
    {
      v116 = *((_DWORD *)this + 786);
      v205 = 0LL;
      if ( v116 )
        v117 = *(__m128 *)(*((_QWORD *)this + 392) + 16LL * (unsigned int)(v116 - 1));
      else
        v117 = (__m128)_xmm;
      v205 = v117;
      if ( v117.m128_f32[0] > v111.m128_f32[0] )
      {
        LODWORD(v193) = v117.m128_i32[0];
        v111.m128_i32[0] = v117.m128_i32[0];
      }
      v118 = v114;
      v119 = _mm_shuffle_ps(v117, v117, 85).m128_f32[0];
      if ( v119 > v114 )
      {
        *((float *)&v193 + 1) = v119;
        v114 = v119;
        v118 = v119;
      }
      v120 = v113;
      v121 = _mm_shuffle_ps(v117, v117, 170).m128_f32[0];
      if ( v113 > v121 )
      {
        *((float *)&v193 + 2) = v121;
        v113 = v121;
        v120 = v121;
      }
      v122 = _mm_shuffle_ps(v117, v117, 255).m128_f32[0];
      v123 = v112;
      if ( v112 > v122 )
      {
        *((float *)&v193 + 3) = v122;
        v112 = v122;
        v123 = v122;
      }
      if ( v120 <= v111.m128_f32[0] || v123 <= v118 )
      {
        v112 = 0.0;
        v113 = 0.0;
        v114 = 0.0;
        v111.m128_i32[0] = 0;
        v193 = 0uLL;
      }
    }
  }
  if ( v111.m128_f32[0] > v103 )
  {
    LODWORD(v213) = v111.m128_i32[0];
    v103 = v111.m128_f32[0];
  }
  v124 = v105;
  if ( v114 > v105 )
  {
    *((float *)&v213 + 1) = v114;
    v105 = v114;
    v124 = v114;
  }
  v125 = v104;
  if ( v104 > v113 )
  {
    *((float *)&v213 + 2) = v113;
    v104 = v113;
    v125 = v113;
  }
  v126 = v106;
  if ( v106 > v112 )
  {
    *((float *)&v213 + 3) = v112;
    v106 = v112;
    v126 = v112;
  }
  if ( v125 <= v103 || v126 <= v124 )
  {
    v104 = 0.0;
    v103 = 0.0;
    v213 = 0uLL;
    v106 = 0.0;
    v105 = 0.0;
  }
  v127 = *(_DWORD *)(v39 + 640);
  v128 = 0;
  v129 = 0LL;
  v130 = 0.0;
  v215 = 0LL;
  v209 = 0LL;
  if ( !v127 )
  {
    v37 = v192;
    goto LABEL_170;
  }
  v131 = *(__m128 **)(v39 + 616);
  do
  {
    if ( v131[1].m128_i32[0] >= a6 )
      break;
    v132 = v131->m128_f32[2];
    if ( v132 > v131->m128_f32[0] && v131->m128_f32[3] > v131->m128_f32[1] )
    {
      v133 = v103;
      v134 = v105;
      v135 = v104;
      if ( v131->m128_f32[0] > v103 )
        v133 = v131->m128_f32[0];
      v136 = v133;
      v137 = v133;
      if ( v131->m128_f32[1] > v105 )
        v134 = v131->m128_f32[1];
      v138 = v134;
      if ( v104 > v132 )
      {
        v135 = v131->m128_f32[2];
        v136 = v133;
        v137 = v133;
      }
      v139 = v106;
      if ( v106 > v131->m128_f32[3] )
      {
        v136 = v137;
        v138 = v134;
        v139 = v131->m128_f32[3];
      }
      if ( v135 > v136 && v139 > v138 )
      {
        v140 = (float)(v139 - v134) * (float)(v135 - v133);
        if ( v140 > v130 )
        {
          v129 = *v131;
          v130 = v140;
          v209 = *v131;
        }
      }
    }
    ++v128;
    v131 += 3;
  }
  while ( v128 < v127 );
  v37 = v192;
  if ( v130 <= 0.0 )
  {
    v27 = v204;
    v28 = *(float *)&v198;
    v24 = *(float *)&v199;
LABEL_170:
    v25 = v190;
    v18 = _xmm;
    goto LABEL_17;
  }
  v150 = *(_QWORD *)v192;
  v215.m128i_i32[0] = v129.m128_i32[0];
  v151 = *(__int64 (__fastcall **)(__int64, const __m128i *, float *, _QWORD *))(v150 + 96);
  v152 = *((_DWORD *)this + 74);
  v215.m128i_i32[1] = _mm_shuffle_ps(v129, v129, 85).m128_u32[0];
  v215.m128i_i32[2] = _mm_shuffle_ps(v129, v129, 170).m128_u32[0];
  v215.m128i_i32[3] = _mm_shuffle_ps(v129, v129, 255).m128_u32[0];
  if ( v152 )
    v153 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v152 - 1));
  else
    v153 = (float *)&CMILMatrix::Identity;
  if ( v151 == CRectanglesShape::GetUnOccludedWorldShape )
    UnOccludedWorldShape = CRectanglesShape::GetUnOccludedWorldShape((__int64)v192, &v215, v153, (_QWORD *)&v194 + 1);
  else
    UnOccludedWorldShape = v151((__int64)v192, &v215, v153, (_QWORD *)&v194 + 1);
  v38 = UnOccludedWorldShape;
  if ( UnOccludedWorldShape < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, UnOccludedWorldShape, 0x1472u, 0LL);
  v18 = _xmm;
  v27 = v204;
  v28 = *(float *)&v198;
  v24 = *(float *)&v199;
  v25 = v190;
LABEL_17:
  v40 = v38 >> 31;
  if ( (_BYTE)v195 )
  {
    v41 = *(CRectanglesShape **)v194;
    *(_QWORD *)v194 = *((_QWORD *)&v194 + 1);
    if ( v41 )
    {
      v42 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v41;
      if ( v42 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v41);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v41);
      }
      else
      {
        v42(v41, 1);
      }
    }
  }
  if ( (_BYTE)v40 )
  {
    v43 = *(_QWORD *)v37;
    v44 = v197;
    *(float *)&v190 = 0.0;
    v45 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(v43 + 64);
    if ( v45 == CRectanglesShape::IsRectangles )
    {
      v190 = (__int64)(*((_QWORD *)v37 + 3) - *((_QWORD *)v37 + 2)) >> 4;
    }
    else if ( !v45(v37, &v190) )
    {
      v10 = -2147024809;
      v95 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8DEu, 0LL);
LABEL_91:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x8BBu, 0LL);
      goto LABEL_67;
    }
    v198 = v44;
    v207 = v44;
    v199 = 0LL;
    v206 = 0LL;
    if ( v44 )
    {
      v46 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v44 + 8LL);
      if ( v46 == CMILRefCountImpl::AddReference )
      {
        v47 = _InterlockedAdd((volatile signed __int32 *)v44, 1u);
        if ( (v47 < 0) ^ __OFSUB__(v46, CMILRefCountImpl::AddReference) | (v47 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v187);
        v198 = v207;
        v199 = v206;
      }
      else if ( (char *)v46 == (char *)CGDISectionBitmapRealization::AddRef )
      {
        CGDISectionBitmapRealization::AddRef(v44);
      }
      else
      {
        v46(v44);
      }
    }
    v48 = v190;
    v49 = v219;
    v50 = v188;
    v51 = v219;
    v208 = v188;
    Src = v219;
    v217 = v219;
    v218 = &v220;
    if ( *(float *)&v190 == 0.0 )
    {
      detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&Src,
        0LL,
        0LL);
      goto LABEL_50;
    }
    v52 = v219;
    if ( v190 > 4uLL )
    {
      v53 = v190;
      if ( v190 <= 6uLL )
        v53 = 6LL;
      v54 = operator new[](saturated_mul(v53, 0x10uLL));
      v55 = Src;
      v56 = v54;
      v194 = (unsigned __int64)v54;
      v57 = v217 - (_BYTE *)Src;
      v195 = 0LL;
      v209 = (__m128)(unsigned __int64)v54;
      v210 = 0LL;
      v58 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                      &v209,
                      (v217 - (_BYTE *)Src) >> 4);
      memmove_0(v58, v55, v57);
      v59 = Src;
      Src = v56;
      if ( v59 == v219 )
        v59 = 0LL;
      operator delete(v59);
      v49 = Src;
      v51 = Src;
      v217 = Src;
      v218 = (char *)Src + 16 * v53;
      v52 = Src;
    }
    v195 = 0LL;
    v60 = (v52 - (_BYTE *)v49) >> 4;
    *((_QWORD *)&v194 + 1) = v48;
    v210 = 0LL;
    *(_QWORD *)&v194 = &v49[v60];
    if ( (_QWORD)v194 )
    {
      v210 = v48;
      v61 = v60;
      if ( v48 < v60 )
        v61 = v48;
      v62 = 16 * v61;
      v63 = &v51[v62 / 0xFFFFFFFFFFFFFFF0uLL];
      v195 = v48;
      if ( v51 != &v51[v62 / 0xFFFFFFFFFFFFFFF0uLL] )
      {
        v97 = (_OWORD *)(v194 + 16 * v48);
        v98 = v195;
        do
        {
          --v51;
          if ( !(_QWORD)v194 )
            goto LABEL_43;
          if ( !v98 )
            goto LABEL_43;
          --v98;
          --v97;
          if ( v98 >= *((_QWORD *)&v194 + 1) )
            goto LABEL_43;
          *v97 = *v51;
        }
        while ( v51 != v63 );
        v51 = v217;
      }
      if ( v60 <= v48 )
      {
        v217 = &v51[v48];
LABEL_49:
        v50 = v188;
        *v49 = 0LL;
        qmemcpy(v49 + 1, v49, 8 * ((16 * v48 - 9) >> 3));
LABEL_50:
        v64 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v192 + 80LL);
        if ( v64 == CRectanglesShape::GetRectangles )
          CRectanglesShape::GetRectangles((__int64)v192, (__int64)Src, v190);
        else
          v64((__int64)v192, (__int64)Src, v190);
        v205.m128_u64[0] = v190;
        v205.m128_u64[1] = (unsigned __int64)Src;
        if ( !Src && *(float *)&v190 != 0.0 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        if ( v44 )
        {
          v168 = *(__int64 (__fastcall **)(struct IBitmapRealization *, int *))(*(_QWORD *)v44 + 32LL);
          if ( (char *)v168 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
          {
            Size = (unsigned __int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                         v44,
                                         &v200);
          }
          else if ( (char *)v168 == (char *)CDxHandleBitmapRealization::GetSize )
          {
            Size = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v44, &v200, v65);
          }
          else
          {
            Size = (unsigned __int64 *)v168(v44, &v200);
          }
          v170 = *Size;
          v171 = HIDWORD(v170);
        }
        else
        {
          LODWORD(v170) = 0;
          LODWORD(v171) = 0;
        }
        v172 = v191;
        DWORD1(v212) = 0;
        v173 = v191 / (float)(int)v171;
        v174 = 0.0 - (float)((float)(v191 / (float)(int)v170) * 0.0);
        v175 = 0.0 - (float)(v173 * 0.0);
        *(float *)&v211 = (float)((float)((float)(v191 / (float)(int)v170) * v202) + (float)(v24 * 0.0))
                        + (float)(v174 * 0.0);
        *(_QWORD *)((char *)&v211 + 4) = COERCE_UNSIGNED_INT((float)((float)(v24 * v173) + (float)(v202 * 0.0)) + (float)(v175 * 0.0));
        *((float *)&v211 + 3) = (float)((float)((float)(v191 / (float)(int)v170) * *(float *)&v25) + (float)(v203 * 0.0))
                              + (float)(v174 * 0.0);
        *(float *)&v212 = (float)((float)(v203 * v173) + (float)(*(float *)&v25 * 0.0)) + (float)(v175 * 0.0);
        *((float *)&v212 + 2) = (float)((float)(v28 * (float)(v191 / (float)(int)v170)) + (float)(v27 * 0.0)) + v174;
        *((float *)&v212 + 3) = (float)((float)(v173 * v27) + (float)(v28 * 0.0)) + v175;
        D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
        v177 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
        v178 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
        v179 = v178;
        if ( v178 )
        {
          LOBYTE(v189) = v177;
          HIBYTE(v189) = 1;
          v178[1] = 1065353216LL;
          *((_DWORD *)v178 + 4) = 0;
          *(_QWORD *)((char *)v178 + 20) = 1065353216LL;
          *((_DWORD *)v178 + 7) = 0;
          v180 = v199;
          *((_BYTE *)v178 + 52) = 0;
          *v178 = &CSurfaceDrawListBrush::`vftable';
          v178[7] = v180;
          if ( v180 )
          {
            v181 = *(void (**)(void))(*(_QWORD *)v180 + 8LL);
            if ( (char *)v181 == (char *)CMILRefCountImpl::AddReference )
              CMILRefCountImpl::AddReference(v180);
            else
              v181();
          }
          v182 = v198;
          v179[8] = v198;
          if ( v182 )
            (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v182 + 8LL))(v182);
          v183 = v211;
          v184 = v212;
          *((_BYTE *)v179 + 72) = v50;
          *((_WORD *)v179 + 40) = v189;
          *((_BYTE *)v179 + 82) = 1;
          *((float *)v179 + 29) = v172;
          *(_OWORD *)((char *)v179 + 84) = v183;
          *(_OWORD *)((char *)v179 + 100) = v184;
          *((_DWORD *)v179 + 36) = 0;
          *(_OWORD *)(v179 + 15) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
          *((_BYTE *)v179 + 52) = 1;
          v179[4] = 0LL;
          v179[5] = 0LL;
          *((_DWORD *)v179 + 12) = 0;
          v215.m128i_i64[0] = 0x3F8000003F800000LL;
          v215.m128i_i32[2] = 1065353216;
          v215.m128i_i32[3] = CDrawingContext::GetOpacity(this);
          v192 = (CDrawListPrimitive0 *)v179;
          v185 = CDrawingContext::FillRectanglesWithDrawListBrush(this, (__int64 *)&v192, &v205, &v215);
          v10 = v185;
          if ( v192 )
          {
            v186 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v192;
            if ( v186 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
            {
              CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v192, 1);
            }
            else if ( v186 == CSurfaceDrawListBrush::`vector deleting destructor' )
            {
              CSurfaceDrawListBrush::`vector deleting destructor'(v192, 1);
            }
            else if ( v186 == CDrawListPrimitive0::`scalar deleting destructor' )
            {
              CDrawListPrimitive0::`scalar deleting destructor'(v192, 1);
            }
            else
            {
              v186(v192, 1);
            }
          }
          if ( v185 >= 0 )
          {
            v66 = Src;
            v67 = (v217 - (_BYTE *)Src) >> 4;
            if ( v67 )
              v217 -= 16 * v67;
            Src = 0LL;
            if ( v66 != v219 && v66 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v66);
            }
            CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v206);
            goto LABEL_67;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v185, 0x35Cu, 0LL);
          v95 = v185;
        }
        else
        {
          v185 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x351u, 0LL);
          v10 = -2147024882;
          v95 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v185, 0x8DAu, 0LL);
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&Src);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v206);
        goto LABEL_91;
      }
      if ( !v60 || v49 && (v60 & 0x8000000000000000uLL) == 0LL )
      {
        if ( (__int64)(-16LL * v48 + 16 * v60) >> 4 > 0 )
        {
          if ( v60 >= (__int64)(-16LL * v48 + 16 * v60) >> 4 )
            goto LABEL_48;
        }
        else if ( (__int64)(-16LL * v48 + 16 * v60) >> 4 >= 0 )
        {
LABEL_48:
          memmove_0(&v49[v48], v49, -16LL * v48 + 16 * v60);
          v217 += 16 * v48;
          goto LABEL_49;
        }
      }
    }
LABEL_43:
    _invalid_parameter_noinfo_noreturn();
  }
  v71 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(*(_QWORD *)v196 + 16LL);
  if ( v71 == CRectanglesShape::IsEmpty )
    v72 = CRectanglesShape::IsEmpty(v196);
  else
    v72 = v71(v196);
  if ( v72 )
  {
LABEL_67:
    v68 = v196;
    if ( v196 )
    {
      v69 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v196;
      if ( v69 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v196);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v68);
      }
      else
      {
        v69(v196, 1);
      }
    }
    goto LABEL_70;
  }
  v73 = *((_DWORD *)this + 74);
  if ( v73 )
    v74 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v73 - 1));
  else
    v74 = (float *)&CMILMatrix::Identity;
  v75 = v74[5];
  v76 = v74[1];
  v77 = *v74;
  v78 = v74[4];
  v79 = v74[13];
  v80 = v74[12];
  v81 = v79 * v78;
  v191 = v191 / (float)((float)(v75 * *v74) - (float)(v78 * v76));
  v82 = COERCE_FLOAT(LODWORD(v76) ^ v18) * v191;
  v83 = COERCE_FLOAT(LODWORD(v78) ^ v18) * v191;
  v84 = (float)(v81 - (float)(v80 * v75)) * v191;
  v85 = (float)((float)(v80 * v76) - (float)(v79 * v77)) * v191;
  *(float *)&v194 = (float)(*(float *)&v190 * v82) + (float)(v202 * (float)(v75 * v191));
  *((float *)&v194 + 1) = (float)(v203 * v82) + (float)(v24 * (float)(v75 * v191));
  *((float *)&v194 + 2) = (float)(*(float *)&v190 * (float)(v77 * v191)) + (float)(v202 * v83);
  *((float *)&v194 + 3) = (float)(v203 * (float)(v77 * v191)) + (float)(v24 * v83);
  *(float *)&v195 = (float)((float)(*(float *)&v190 * v85) + (float)(v202 * v84)) + v28;
  *((float *)&v195 + 1) = (float)((float)(v203 * v85) + (float)(v24 * v84)) + v27;
  v86 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
  v10 = v86;
  if ( v86 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x8AAu, 0LL);
    goto LABEL_67;
  }
  v205.m128_u64[0] = (unsigned __int64)this;
  v205.m128_i8[8] = 1;
  v87 = CDrawingContext::FillShapeWithBitmapRealization(this, v197, v196, (const struct MILMatrix3x2 *)&v194, v30);
  v10 = v87;
  if ( v87 >= 0 )
  {
    v88 = *((_DWORD *)this + 68);
    v89 = 0LL;
    if ( v88 )
    {
      v90 = (unsigned int)(v88 - 1);
      *((_DWORD *)this + 68) = v90;
      v89 = *(__m128i *)(*((_QWORD *)this + 33) + 16 * v90);
    }
    if ( _mm_srli_si128(v89, 8).m128i_u64[0] )
    {
      v91 = *((_DWORD *)this + 86);
      if ( v91 )
        *((_DWORD *)this + 86) = v91 - 1;
    }
    v92 = *((_DWORD *)this + 74);
    if ( v92 )
      *((_DWORD *)this + 74) = v92 - 1;
    v93 = *((_DWORD *)this + 80);
    if ( v93 )
      *((_DWORD *)this + 80) = v93 - 1;
    goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0x8B3u, 0LL);
  gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___(&v205);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v196);
LABEL_70:
  if ( v197 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v197 + 16LL))(v197);
  return v10;
}
