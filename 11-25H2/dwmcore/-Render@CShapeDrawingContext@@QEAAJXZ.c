/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000DF90 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x180012608 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x180012CD0 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x18002B3F0 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800873A0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800896E0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800D3CA0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D5FE0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800DD364 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DEBCC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18010CFA0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180114E40 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011A280 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  CDrawListCache *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // rax
  int *v19; // r15
  int v20; // ecx
  CGeometry *v21; // rcx
  int ShapeData; // eax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  FLOAT m12; // xmm1_4
  CDrawingContext *v31; // rcx
  FLOAT m21; // xmm0_4
  FLOAT m22; // xmm1_4
  FLOAT dy; // xmm0_4
  FLOAT dx; // xmm1_4
  int v36; // eax
  int v37; // ebx
  CLinearGradientBrush *v38; // rbx
  struct ID2D1Brush *v39; // rcx
  __int64 (__fastcall *v40)(CLinearGradientBrush *, struct CDrawingContext *, const struct D2D_RECT_F *, struct ID2D1Brush **); // rsi
  struct CDrawingContext *v41; // rdx
  const struct D2D_RECT_F *v42; // r8
  int D2DBrush; // eax
  CPathSegmentsShape *v44; // r12
  __int64 v45; // r14
  struct ID2D1Geometry *v46; // rbx
  void *(__fastcall **v47)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  int (*v48)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  int v50; // esi
  __int64 v51; // rax
  __int64 (__fastcall *v52)(CDrawingContext *__hidden); // rax
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // esi
  __int64 v56; // r12
  BOOL v57; // eax
  CDrawingContext *v58; // r14
  void (__fastcall **v59)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v60)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  int v61; // esi
  int v62; // eax
  CPathSegmentsShape *v63; // rbx
  void *(__fastcall *v64)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  struct ID2D1Brush *v65; // rcx
  int v66; // ecx
  CGeometry *v67; // rcx
  int v68; // eax
  int v69; // eax
  __int64 v70; // r14
  int v71; // eax
  float v72; // xmm1_4
  struct CShape *v73; // rsi
  struct ID2D1Brush *v74; // rbx
  int v75; // eax
  CPathSegmentsShape **v76; // rcx
  struct ID2D1Brush *v77; // rcx
  __m128i v78; // xmm0
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  int v82; // eax
  int v83; // eax
  __int64 (__fastcall *v85)(CDrawingContext *__hidden); // rax
  int CurrentZ; // eax
  __int64 v87; // r8
  __int64 v88; // rdx
  __m128i v89; // xmm0
  int v90; // eax
  __int64 v91; // rcx
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  CGeometry *v98; // rcx
  int v99; // eax
  int v100; // eax
  __int64 v101; // r12
  int v102; // eax
  float v103; // xmm1_4
  struct ID2D1StrokeStyle1 *v104; // rsi
  float v105; // xmm6_4
  struct CShape *v106; // r14
  struct ID2D1Brush *v107; // rbx
  int v108; // eax
  int v109; // eax
  __int64 v110; // r8
  __int64 (__fastcall *v111)(CDrawingContext *__hidden); // rax
  int v112; // eax
  __int64 v113; // r8
  CGeometry *v114; // rcx
  int v115; // eax
  int v116; // eax
  __int64 v117; // rsi
  __int64 (__fastcall *v118)(__int64, _QWORD, int *, struct ID2D1Brush **); // rbx
  int v119; // eax
  int v120; // eax
  struct ID2D1Brush *v121; // rcx
  float v122; // xmm6_4
  float v123; // xmm7_4
  struct CDrawingContext *v124; // rdx
  int v125; // eax
  int v126; // eax
  int v127; // xmm2_4
  struct ID2D1Brush *v128; // rax
  bool v129; // zf
  __int64 v130; // xmm0_8
  int DrawList; // eax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  int v136; // ebx
  void *v137; // rcx
  int v138; // eax
  __int64 v139; // rax
  __int64 (__fastcall *v140)(CPolygonShape *); // rax
  int TightBounds; // eax
  int v142; // eax
  int v143; // ebx
  void *v144; // rcx
  int v145; // ecx
  int v146; // [rsp+20h] [rbp-E0h]
  struct ID2D1Brush *v147; // [rsp+30h] [rbp-D0h] BYREF
  struct ID2D1Geometry *v148; // [rsp+38h] [rbp-C8h] BYREF
  int *v149; // [rsp+40h] [rbp-C0h]
  struct ID2D1Geometry *v150; // [rsp+48h] [rbp-B8h] BYREF
  int v151; // [rsp+50h] [rbp-B0h]
  struct D2D_MATRIX_3X2_F *v152; // [rsp+58h] [rbp-A8h]
  CPathSegmentsShape *v153; // [rsp+60h] [rbp-A0h] BYREF
  char v154; // [rsp+68h] [rbp-98h]
  struct ID2D1Geometry *v155; // [rsp+70h] [rbp-90h] BYREF
  struct CShape *v156; // [rsp+78h] [rbp-88h] BYREF
  char v157; // [rsp+80h] [rbp-80h]
  int v158; // [rsp+88h] [rbp-78h] BYREF
  int v159; // [rsp+90h] [rbp-70h] BYREF
  int v160; // [rsp+98h] [rbp-68h] BYREF
  int v161; // [rsp+A0h] [rbp-60h] BYREF
  int v162; // [rsp+A8h] [rbp-58h] BYREF
  int v163; // [rsp+B0h] [rbp-50h] BYREF
  int v164; // [rsp+B8h] [rbp-48h] BYREF
  int v165; // [rsp+C0h] [rbp-40h] BYREF
  CDrawListCache *v166; // [rsp+C8h] [rbp-38h] BYREF
  struct CShape *v167; // [rsp+D0h] [rbp-30h] BYREF
  char v168; // [rsp+D8h] [rbp-28h]
  struct CShape *v169; // [rsp+E0h] [rbp-20h] BYREF
  char v170; // [rsp+E8h] [rbp-18h]
  struct D2D_SIZE_F v171; // [rsp+F0h] [rbp-10h] BYREF
  struct ID2D1Brush *v172; // [rsp+F8h] [rbp-8h]
  __int128 v173; // [rsp+100h] [rbp+0h] BYREF
  __int64 v174; // [rsp+110h] [rbp+10h]
  _QWORD v175[2]; // [rsp+120h] [rbp+20h] BYREF
  int v176; // [rsp+130h] [rbp+30h]
  int v177; // [rsp+17Ch] [rbp+7Ch]
  char v178; // [rsp+180h] [rbp+80h]
  struct CGeometryOnlyDrawListBrush *v179[2]; // [rsp+190h] [rbp+90h] BYREF
  int v180; // [rsp+1A0h] [rbp+A0h]
  int v181; // [rsp+1A4h] [rbp+A4h]
  _DWORD v182[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v183; // [rsp+1B8h] [rbp+B8h] BYREF
  FLOAT v184; // [rsp+1C0h] [rbp+C0h]
  FLOAT v185; // [rsp+1C4h] [rbp+C4h]
  __int64 v186; // [rsp+1C8h] [rbp+C8h]
  __int128 v187; // [rsp+1D0h] [rbp+D0h]
  FLOAT v188; // [rsp+1E0h] [rbp+E0h]
  FLOAT v189; // [rsp+1E4h] [rbp+E4h]
  int v190; // [rsp+1E8h] [rbp+E8h]
  __int64 v191; // [rsp+1ECh] [rbp+ECh]
  __int128 v192; // [rsp+200h] [rbp+100h] BYREF
  __int128 v193; // [rsp+210h] [rbp+110h] BYREF
  __int128 v194; // [rsp+220h] [rbp+120h] BYREF
  __int64 v195; // [rsp+230h] [rbp+130h]
  struct D2D_MATRIX_3X2_F v196; // [rsp+238h] [rbp+138h] BYREF
  __int128 v197; // [rsp+250h] [rbp+150h] BYREF
  __int128 v198; // [rsp+260h] [rbp+160h] BYREF
  struct D2D_MATRIX_3X2_F v199; // [rsp+270h] [rbp+170h] BYREF
  struct D2D_MATRIX_3X2_F v200; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v201[4496]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v202[16]; // [rsp+1430h] [rbp+1330h] BYREF
  int *v203; // [rsp+1440h] [rbp+1340h]
  __int64 v204; // [rsp+1448h] [rbp+1348h]
  int *v205; // [rsp+1450h] [rbp+1350h]
  __int64 v206; // [rsp+1458h] [rbp+1358h]
  int *v207; // [rsp+1460h] [rbp+1360h]
  __int64 v208; // [rsp+1468h] [rbp+1368h]
  int *v209; // [rsp+1470h] [rbp+1370h]
  __int64 v210; // [rsp+1478h] [rbp+1378h]
  char v211[16]; // [rsp+1480h] [rbp+1380h] BYREF
  int *v212; // [rsp+1490h] [rbp+1390h]
  __int64 v213; // [rsp+1498h] [rbp+1398h]
  int *v214; // [rsp+14A0h] [rbp+13A0h]
  __int64 v215; // [rsp+14A8h] [rbp+13A8h]
  char v216[16]; // [rsp+14B0h] [rbp+13B0h] BYREF
  int *v217; // [rsp+14C0h] [rbp+13C0h]
  __int64 v218; // [rsp+14C8h] [rbp+13C8h]
  int *v219; // [rsp+14D0h] [rbp+13D0h]
  __int64 v220; // [rsp+14D8h] [rbp+13D8h]
  wil::details::in1diag3 *retaddr; // [rsp+1548h] [rbp+1448h]

  v2 = &v200;
  *((_BYTE *)this + 520) = 0;
  *((_BYTE *)this + 522) = 0;
  *(_OWORD *)&v200.m11 = _xmm;
  *(_QWORD *)&v200.m[2][0] = 0LL;
  v152 = &v200;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v201);
  v166 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v166, v3, v4, v5);
  v148 = 0LL;
  v6 = (volatile signed __int32 *)CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  v10 = (CDrawListCache *)v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v148, v133, v134, v135);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x39u, 0LL);
    goto LABEL_76;
  }
  *((_DWORD *)v6 + 2) = 0;
  v11 = 0LL;
  *(_QWORD *)v6 = &CDrawListCache::`vftable';
  if ( g_pComposition )
    v11 = *((_QWORD *)g_pComposition + 111);
  *((_QWORD *)v6 + 2) = v11;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 2LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_WORD *)v6 + 42) = 0;
  *((_BYTE *)v6 + 86) = 1;
  if ( _InterlockedAdd(v6 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v146);
  v155 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v155, v7, v8, v9);
  v148 = 0LL;
  v166 = v10;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v148, v12, v13, v14);
  v18 = (int *)*((_QWORD *)this + 63);
  v19 = (int *)*((_QWORD *)this + 62);
  v149 = v18;
  while ( 1 )
  {
    if ( v19 == v18 )
      goto LABEL_76;
    v20 = *v19;
    if ( *v19 == 1 )
    {
      v2 = (struct D2D_MATRIX_3X2_F *)(v19 + 2);
      *((_BYTE *)this + 520) = 1;
      v152 = (struct D2D_MATRIX_3X2_F *)(v19 + 2);
      goto LABEL_64;
    }
    if ( v20 == 3 )
    {
      v21 = (CGeometry *)*((_QWORD *)v19 + 1);
      v147 = 0LL;
      v153 = 0LL;
      v154 = 0;
      ShapeData = CGeometry::GetShapeData(v21, 0LL, (struct CShapePtr *)&v153);
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x62u, 0LL);
        goto LABEL_73;
      }
      if ( !v2 )
      {
        if ( *((_BYTE *)this + 522) )
        {
          v88 = *((_QWORD *)this + 40);
          v89 = 0LL;
          v90 = *(_DWORD *)(v88 + 272);
          if ( v90 )
          {
            v91 = (unsigned int)(v90 - 1);
            *(_DWORD *)(v88 + 272) = v91;
            v89 = *(__m128i *)(*(_QWORD *)(v88 + 264) + 16 * v91);
          }
          if ( _mm_srli_si128(v89, 8).m128i_u64[0] )
          {
            v92 = *(_DWORD *)(v88 + 344);
            if ( v92 )
              *(_DWORD *)(v88 + 344) = v92 - 1;
          }
          v93 = *(_DWORD *)(v88 + 296);
          if ( v93 )
            *(_DWORD *)(v88 + 296) = v93 - 1;
          v94 = *(_DWORD *)(v88 + 320);
          if ( v94 )
            *(_DWORD *)(v88 + 320) = v94 - 1;
          *((_BYTE *)this + 522) = 0;
        }
        goto LABEL_27;
      }
      if ( *((_BYTE *)this + 520) )
      {
        if ( !*((_BYTE *)this + 522) )
        {
LABEL_25:
          m12 = v2->m12;
          v31 = (CDrawingContext *)*((_QWORD *)this + 40);
          v182[0] = LODWORD(v2->m11);
          m21 = v2->m21;
          v191 = 1065353216LL;
          v184 = m21;
          *(FLOAT *)&v182[1] = m12;
          m22 = v2->m22;
          v187 = _xmm;
          dy = v2->dy;
          v185 = m22;
          dx = v2->dx;
          v189 = dy;
          v188 = dx;
          v183 = 0LL;
          v186 = 0LL;
          v190 = 0;
          WORD2(v191) = 10248;
          v36 = CDrawingContext::PushTransformInternal(v31, 0LL, (const struct CMILMatrix *)v182, 1, 1);
          v37 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x186u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x67u, 0LL);
            CShapePtr::~CShapePtr((CShapePtr *)&v153);
            v77 = v147;
            if ( !v147 )
              goto LABEL_76;
            goto LABEL_75;
          }
          *((_BYTE *)this + 520) = 0;
          *((_BYTE *)this + 522) = 1;
LABEL_27:
          v38 = (CLinearGradientBrush *)*((_QWORD *)v19 + 4);
          v39 = v147;
          v40 = *(__int64 (__fastcall **)(CLinearGradientBrush *, struct CDrawingContext *, const struct D2D_RECT_F *, struct ID2D1Brush **))(*(_QWORD *)v38 + 360LL);
          if ( v147 )
          {
            v147 = 0LL;
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v39 + 16LL))(v39);
          }
          v41 = (struct CDrawingContext *)*((_QWORD *)this + 40);
          v42 = (const struct D2D_RECT_F *)(v19 + 4);
          if ( v40 == CLinearGradientBrush::GetD2DBrush )
            D2DBrush = CLinearGradientBrush::GetD2DBrush(v38, v41, v42, &v147);
          else
            D2DBrush = v40(v38, v41, v42, &v147);
          if ( D2DBrush < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBrush, 0x6Bu, 0LL);
            goto LABEL_73;
          }
          (*(void (**)(void))(*(_QWORD *)v147 + 32LL))();
          v44 = v153;
          v45 = *((_QWORD *)this + 40);
          v46 = 0LL;
          v172 = v147;
          v150 = 0LL;
          v47 = *(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v153;
          v148 = 0LL;
          v48 = (int (*)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))v47[3];
          if ( v48 == CPathSegmentsShape::GetD2DGeometry )
          {
            D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v153, 0LL, &v148);
          }
          else if ( (char *)v48 == (char *)CRoundedRectangleShape::GetD2DGeometry )
          {
            D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v153, 0LL, &v148);
          }
          else
          {
            D2DGeometry = ((__int64 (__fastcall *)(CPathSegmentsShape *, _QWORD, struct ID2D1Geometry **))v48)(
                            v153,
                            0LL,
                            &v148);
          }
          v50 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0xA4Eu, 0LL);
            goto LABEL_51;
          }
          v51 = *(_QWORD *)(v45 + 752);
          if ( v51 != *(_QWORD *)(v45 + 744) && *(_QWORD *)(v51 - 160) )
          {
            v139 = *(_QWORD *)v44;
            v192 = 0LL;
            v140 = *(__int64 (__fastcall **)(CPolygonShape *))(v139 + 48);
            if ( v140 == CShape::GetTightBounds )
              TightBounds = CShape::GetTightBounds(v44);
            else
              TightBounds = ((__int64 (__fastcall *)(CPathSegmentsShape *, __int128 *, _QWORD))v140)(v44, &v192, 0LL);
            v50 = TightBounds;
            if ( TightBounds < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0xA55u, 0LL);
LABEL_52:
              if ( v148 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v148 + 16LL))(v148);
              if ( v50 >= 0 )
              {
                if ( v154 )
                {
                  v63 = v153;
                  if ( v153 )
                  {
                    v64 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v153;
                    if ( v64 == CRectanglesShape::`scalar deleting destructor' )
                    {
                      CRectanglesShape::~CRectanglesShape(v153);
                      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v63);
                    }
                    else if ( v64 == CRoundedRectangleShape::`vector deleting destructor' )
                    {
                      CRoundedRectangleShape::~CRoundedRectangleShape(v153);
                      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v63);
                    }
                    else if ( v64 == CPolygonShape::`scalar deleting destructor' )
                    {
                      CPolygonShape::`scalar deleting destructor'(v153, 1u);
                    }
                    else
                    {
                      v64(v153, 1u);
                    }
                  }
                }
                v65 = v147;
                v153 = 0LL;
                v154 = 0;
                if ( v147 )
                {
                  v147 = 0LL;
                  (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v65 + 16LL))(v65);
                }
LABEL_61:
                v2 = v152;
LABEL_62:
                v18 = v149;
                goto LABEL_64;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x6Fu, 0LL);
LABEL_73:
              v76 = &v153;
LABEL_74:
              CShapePtr::~CShapePtr((CShapePtr *)v76);
              v77 = v147;
              if ( !v147 )
                goto LABEL_76;
LABEL_75:
              v147 = 0LL;
              (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v77 + 16LL))(v77);
              goto LABEL_76;
            }
            v195 = 0LL;
            v194 = v192;
            v142 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v150, v45, &v194, 0LL);
            v50 = v142;
            if ( v142 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v142, 0xA57u, 0LL);
              v46 = v150;
              goto LABEL_51;
            }
            v46 = v150;
          }
          v52 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)(v45 + 16) + 112LL);
          if ( v52 == CDrawingContext::ApplyRenderState )
            v53 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)v45, 0);
          else
            v53 = v52((CDrawingContext *)(v45 + 16));
          v50 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xA5Au, 0LL);
            goto LABEL_51;
          }
          v54 = *(_DWORD *)(v45 + 248);
          v55 = 0;
          v56 = *(_QWORD *)(v45 + 40);
          if ( v54 )
          {
            v145 = v54 - 1;
            if ( v145 )
            {
              if ( v145 == 3 )
                v55 = 2;
            }
            else
            {
              v55 = 1;
            }
          }
          v57 = *(_DWORD *)(v45 + 244) != 0;
          v58 = (CDrawingContext *)(v45 + 24);
          LODWORD(v150) = v57;
          v155 = v148;
          CD2DContext::FlushDrawList((CD2DContext *)(v56 + 16));
          v151 = 0;
          memset(&v199, 0, sizeof(v199));
          CD2DContext::EnsureBeginDraw((CD2DContext *)(v56 + 16));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v85 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v58 + 8LL);
            if ( v85 == CDrawingContext::GetCurrentZ )
              CurrentZ = CDrawingContext::GetCurrentZ(v58);
            else
              CurrentZ = v85(v58);
            v159 = CurrentZ;
            v158 = 3;
            v212 = &v158;
            v213 = 4LL;
            v214 = &v159;
            v215 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DRAWEVENT_Start,
              v87,
              3LL,
              v211);
          }
          v59 = *(void (__fastcall ***)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *))v58;
          memset(&v196, 0, sizeof(v196));
          v60 = *v59;
          if ( v60 == CDrawingContext::GetWorldTransform3x2 )
            CDrawingContext::GetWorldTransform3x2(v58, &v196);
          else
            v60(v58, &v196);
          (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v56 + 216) + 240LL))(
            *(_QWORD *)(v56 + 216),
            &v196);
          if ( v55 != *(_DWORD *)(v56 + 412) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v56 + 216) + 624LL))(*(_QWORD *)(v56 + 216), v55);
            *(_DWORD *)(v56 + 412) = v55;
          }
          v61 = (int)v150;
          if ( (_DWORD)v150 != *(_DWORD *)(v56 + 408) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v56 + 216) + 256LL))(
              *(_QWORD *)(v56 + 216),
              (unsigned int)v150);
            *(_DWORD *)(v56 + 408) = v61;
          }
          v199 = v196;
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v193 = 0LL;
            v109 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, __int128 *))(*(_QWORD *)v155 + 32LL))(
                     v155,
                     &v199,
                     &v193);
            v151 = v109;
            v50 = v109;
            if ( v109 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v109, 0x410u, 0LL);
              v62 = v50;
LABEL_193:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0xA60u, 0LL);
LABEL_51:
              if ( v46 )
              {
                v95 = *((_DWORD *)v46 + 780);
                if ( v95 )
                  *((_DWORD *)v46 + 780) = v95 - 1;
                --*(_QWORD *)(*((_QWORD *)v46 + 94) - 184LL);
                *((_BYTE *)v46 + 8065) = 1;
                CDrawingContext::PopClippingScope(v46, 0);
              }
              goto LABEL_52;
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            {
              v203 = &v160;
              v163 = HIDWORD(v193);
              v205 = &v161;
              v207 = &v162;
              v209 = &v163;
              v162 = DWORD2(v193);
              v161 = DWORD1(v193);
              v160 = v193;
              v204 = 4LL;
              v206 = 4LL;
              v208 = 4LL;
              v210 = 4LL;
              McGenEventWrite_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_DRAWEVENT,
                v110,
                5LL,
                v202);
            }
          }
          (*(void (__fastcall **)(_QWORD, struct ID2D1Geometry *, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v56 + 216)
                                                                                              + 184LL))(
            *(_QWORD *)(v56 + 216),
            v155,
            v172,
            0LL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v111 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v58 + 8LL);
            if ( v111 == CDrawingContext::GetCurrentZ )
              v112 = CDrawingContext::GetCurrentZ(v58);
            else
              v112 = v111(v58);
            v165 = v112;
            v164 = 3;
            v217 = &v164;
            v218 = 4LL;
            v220 = 4LL;
            v219 = &v165;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DRAWEVENT_Stop,
              v113,
              3LL,
              v216);
          }
          v62 = v151;
          v50 = v151;
          if ( v151 >= 0 )
            goto LABEL_51;
          goto LABEL_193;
        }
        v23 = *((_QWORD *)this + 40);
        v24 = 0LL;
        v25 = *(_DWORD *)(v23 + 272);
        if ( v25 )
        {
          v26 = (unsigned int)(v25 - 1);
          *(_DWORD *)(v23 + 272) = v26;
          v24 = *(__m128i *)(*(_QWORD *)(v23 + 264) + 16 * v26);
        }
        if ( _mm_srli_si128(v24, 8).m128i_u64[0] )
        {
          v27 = *(_DWORD *)(v23 + 344);
          if ( v27 )
            *(_DWORD *)(v23 + 344) = v27 - 1;
        }
        v28 = *(_DWORD *)(v23 + 296);
        if ( v28 )
          *(_DWORD *)(v23 + 296) = v28 - 1;
        v29 = *(_DWORD *)(v23 + 320);
        if ( v29 )
          *(_DWORD *)(v23 + 320) = v29 - 1;
        *((_BYTE *)this + 522) = 0;
      }
      if ( *((_BYTE *)this + 522) )
        goto LABEL_27;
      goto LABEL_25;
    }
    v66 = v20 - 2;
    if ( !v66 )
    {
      v170 = 0;
      v67 = (CGeometry *)*((_QWORD *)v19 + 1);
      v169 = 0LL;
      v68 = CGeometry::GetShapeData(v67, 0LL, (struct CShapePtr *)&v169);
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x4Bu, 0LL);
      }
      else
      {
        v69 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x50u, 0LL);
        }
        else
        {
          v70 = *((_QWORD *)this + 40);
          v198 = *((_OWORD *)v19 + 1);
          v71 = *(_DWORD *)(v70 + 3168);
          if ( v71 )
            v72 = *(float *)(*(_QWORD *)(v70 + 3160) + 4LL * (unsigned int)(v71 - 1));
          else
            v72 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v73 = v169;
          *((float *)&v198 + 3) = *((float *)&v198 + 3) * v72;
          v74 = *(struct ID2D1Brush **)(*(_QWORD *)(v70 + 40) + 328LL);
          (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v74 + 64LL))(v74, &v198);
          v75 = CDrawingContext::FillShapeWithBrush((CDrawingContext *)v70, v73, v74);
          if ( v75 >= 0 )
          {
            CShapePtr::~CShapePtr((CShapePtr *)&v169);
            v18 = v149;
            v2 = v152;
            goto LABEL_64;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x56u, 0LL);
        }
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v169);
      goto LABEL_76;
    }
    v96 = v66 - 2;
    if ( !v96 )
      break;
    v97 = v96 - 1;
    if ( !v97 )
    {
      v168 = 0;
      v98 = (CGeometry *)*((_QWORD *)v19 + 1);
      v167 = 0LL;
      v99 = CGeometry::GetShapeData(v98, 0LL, (struct CShapePtr *)&v167);
      if ( v99 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0xBBu, 0LL);
      }
      else
      {
        v100 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
        if ( v100 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, 0xC0u, 0LL);
        }
        else
        {
          v101 = *((_QWORD *)this + 40);
          v197 = *((_OWORD *)v19 + 1);
          v102 = *(_DWORD *)(v101 + 3168);
          if ( v102 )
            v103 = *(float *)(*(_QWORD *)(v101 + 3160) + 4LL * (unsigned int)(v102 - 1));
          else
            v103 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v104 = (struct ID2D1StrokeStyle1 *)*((_QWORD *)v19 + 5);
          v105 = *((float *)v19 + 8);
          v106 = v167;
          *((float *)&v197 + 3) = *((float *)&v197 + 3) * v103;
          v107 = *(struct ID2D1Brush **)(*(_QWORD *)(v101 + 40) + 328LL);
          (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v107 + 64LL))(v107, &v197);
          v108 = CDrawingContext::StrokeShapeWithBrush((CDrawingContext *)v101, v106, v107, v105, v104);
          if ( v108 >= 0 )
          {
            CShapePtr::~CShapePtr((CShapePtr *)&v167);
            v18 = v149;
            v2 = v152;
            goto LABEL_64;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0xC9u, 0LL);
        }
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v167);
      goto LABEL_76;
    }
    if ( v97 != 1 )
      goto LABEL_62;
    v114 = (CGeometry *)*((_QWORD *)v19 + 1);
    v147 = 0LL;
    v156 = 0LL;
    v157 = 0;
    v115 = CGeometry::GetShapeData(v114, 0LL, (struct CShapePtr *)&v156);
    if ( v115 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v115, 0xD5u, 0LL);
      v76 = &v156;
      goto LABEL_74;
    }
    v116 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
    if ( v116 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v116, 0xDAu, 0LL);
      goto LABEL_203;
    }
    v117 = *((_QWORD *)v19 + 4);
    v118 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, struct ID2D1Brush **))(*(_QWORD *)v117 + 360LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v147);
    v119 = v118(v117, *((_QWORD *)this + 40), v19 + 4, &v147);
    if ( v119 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v119, 0xDEu, 0LL);
      goto LABEL_203;
    }
    (*(void (**)(void))(*(_QWORD *)v147 + 32LL))();
    v120 = CDrawingContext::StrokeShapeWithBrush(
             *((CDrawingContext **)this + 40),
             v156,
             v147,
             *((float *)v19 + 10),
             *((struct ID2D1StrokeStyle1 **)v19 + 6));
    if ( v120 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v120, 0xE4u, 0LL);
LABEL_203:
      CShapePtr::~CShapePtr((CShapePtr *)&v156);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v147);
      goto LABEL_76;
    }
    CShapePtr::~CShapePtr((CShapePtr *)&v156);
    v121 = v147;
    if ( !v147 )
      goto LABEL_61;
    v147 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v121 + 16LL))(v121);
    v18 = v149;
    v2 = v152;
LABEL_64:
    v19 += 14;
  }
  v122 = *((float *)v19 + 4) - *((float *)v19 + 2);
  v123 = *((float *)v19 + 5) - *((float *)v19 + 3);
  v124 = (struct CDrawingContext *)*((_QWORD *)this + 40);
  v147 = 0LL;
  v171.width = v122;
  v171.height = v123;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v182, v124, &v171);
  v125 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v19 + 3) + 336LL))(*((_QWORD *)v19 + 3), v182);
  if ( v125 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v125, 0x80u, 0LL);
    goto LABEL_169;
  }
  v126 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL);
  if ( v126 >= 0 )
  {
    if ( !DWORD2(v187) )
    {
      v148 = 0LL;
      v179[0] = (struct CGeometryOnlyDrawListBrush *)&v148;
      v179[1] = 0LL;
      LOBYTE(v180) = 1;
      v136 = CGeometryOnlyDrawListBrush::Create(&v179[1]);
      if ( (_BYTE)v180 )
      {
        v137 = *(void **)v179[0];
        *(_QWORD *)v179[0] = v179[1];
        if ( v137 )
          CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v137);
      }
      if ( v136 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v136, 0x88u, 0LL);
        std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&v148);
        goto LABEL_204;
      }
      v150 = v148;
      v148 = 0LL;
      std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v183, &v150);
      v138 = DWORD2(v187);
      if ( DWORD2(v187) <= 1 )
        v138 = 1;
      DWORD2(v187) = v138;
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v150);
      if ( v148 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v148);
    }
    v127 = v19[3];
    v180 = v19[2];
    v181 = v127;
    *(_OWORD *)v179 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v173,
      (const struct D2D1::Matrix3x2F *)v179,
      (const struct D2D1::Matrix3x2F *)v2);
    v129 = *((_BYTE *)v128 + 52) == 0;
    v130 = v174;
    *(_OWORD *)((char *)v128 + 8) = v173;
    *((_QWORD *)v128 + 3) = v130;
    if ( !v129 )
    {
      v179[1] = 0LL;
      v179[0] = (struct CGeometryOnlyDrawListBrush *)&v147;
      LOBYTE(v180) = 1;
      v143 = CGeometryOnlyDrawListBrush::Create(&v179[1]);
      if ( (_BYTE)v180 )
      {
        v144 = *(void **)v179[0];
        *(_QWORD *)v179[0] = v179[1];
        if ( v144 )
          CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v144);
      }
      if ( v143 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v143, 0x9Du, 0LL);
        goto LABEL_204;
      }
      v128 = v147;
    }
    *((_BYTE *)v128 + 52) = 1;
    *((_QWORD *)v128 + 4) = 0LL;
    *((float *)v128 + 10) = v122;
    *((float *)v128 + 11) = v123;
    *((_DWORD *)v128 + 12) = 50529027;
    v175[0] = v147;
    v175[1] = 0LL;
    v176 = 0;
    v177 = 257;
    v178 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v182,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v175,
                 (struct CDrawListEntryBuilder *)v201);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0xACu, 0LL);
LABEL_169:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v182);
      if ( v147 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v147);
      goto LABEL_76;
    }
    CDrawListCache::Update(v10, *((struct CDrawingContext **)this + 40), (struct CDrawListEntryBuilder *)v201);
    v132 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 40), v10);
    if ( v132 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v132, 0xAFu, 0LL);
      goto LABEL_204;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v201);
    CDrawListCache::Invalidate(v10);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v182);
    if ( !v147 )
      goto LABEL_62;
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v147);
    v18 = v149;
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v126, 0x82u, 0LL);
LABEL_204:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v182);
  std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&v147);
LABEL_76:
  if ( *((_BYTE *)this + 522) )
  {
    v15 = *((_QWORD *)this + 40);
    v78 = 0LL;
    v79 = *(_DWORD *)(v15 + 272);
    if ( v79 )
    {
      v80 = (unsigned int)(v79 - 1);
      *(_DWORD *)(v15 + 272) = v80;
      v78 = *(__m128i *)(*(_QWORD *)(v15 + 264) + 16 * v80);
    }
    if ( _mm_srli_si128(v78, 8).m128i_u64[0] )
    {
      v81 = *(_DWORD *)(v15 + 344);
      if ( v81 )
        *(_DWORD *)(v15 + 344) = v81 - 1;
    }
    v82 = *(_DWORD *)(v15 + 296);
    if ( v82 )
      *(_DWORD *)(v15 + 296) = v82 - 1;
    v83 = *(_DWORD *)(v15 + 320);
    if ( v83 )
      *(_DWORD *)(v15 + 320) = v83 - 1;
    *((_BYTE *)this + 522) = 0;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v166, v15, v16, v17);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v201);
  return 0LL;
}
