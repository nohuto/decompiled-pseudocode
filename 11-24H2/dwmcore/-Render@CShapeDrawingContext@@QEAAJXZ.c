/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180051250 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18006C0F8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE620 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0B40 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D76E0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800FDDF0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18013A190 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18013E808 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18013EED0 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014F8C0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AC0C (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x1801C4270 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v2; // rsi
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  int *v6; // rax
  int *v7; // r15
  int v8; // ecx
  CGeometry *v9; // rcx
  int ShapeData; // eax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int32 m12_low; // xmm1_4
  const void **v19; // rcx
  FLOAT m21; // xmm0_4
  FLOAT m22; // xmm1_4
  FLOAT dy; // xmm0_4
  FLOAT dx; // xmm1_4
  int v24; // eax
  int v25; // ebx
  CLinearGradientBrush *v26; // rbx
  LPVOID v27; // rcx
  __int64 (__fastcall *v28)(CLinearGradientBrush *, struct CDrawingContext *, const struct D2D_RECT_F *, struct ID2D1Brush **); // rsi
  struct CDrawingContext *v29; // rdx
  const struct D2D_RECT_F *v30; // r8
  int D2DBrush; // eax
  CRoundedRectangleShape *v32; // r12
  __m128 *v33; // r14
  struct ID2D1Geometry *v34; // rbx
  void (__fastcall **v35)(CRoundedRectangleShape *, __int64); // rax
  __int64 (__fastcall *v36)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  int v38; // esi
  unsigned __int64 v39; // rax
  __int64 (__fastcall *v40)(__m128 *); // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int32 v44; // ecx
  unsigned int v45; // esi
  unsigned __int64 v46; // r12
  BOOL v47; // eax
  CDrawingContext *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r8
  void (__fastcall **v51)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v52)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  int v53; // esi
  int v54; // eax
  CRoundedRectangleShape *v55; // rbx
  void (__fastcall *v56)(CRoundedRectangleShape *, __int64); // rax
  LPVOID v57; // rcx
  int v58; // ecx
  CGeometry *v59; // rcx
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __m128 *v64; // r14
  __int32 v65; // eax
  float v66; // xmm1_4
  struct CShape *v67; // rsi
  struct ID2D1Brush *v68; // rbx
  int v69; // eax
  CRoundedRectangleShape **v70; // rcx
  LPVOID v71; // rcx
  __int64 v72; // rdx
  __m128i v73; // xmm0
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int64 (__fastcall *v80)(CDrawingContext *__hidden); // rax
  int CurrentZ; // eax
  __int64 v82; // r8
  __int64 v83; // rdx
  __m128i v84; // xmm0
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  CGeometry *v93; // rcx
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  __m128 *v98; // r12
  __int32 v99; // eax
  float v100; // xmm1_4
  struct ID2D1StrokeStyle1 *v101; // rsi
  float v102; // xmm6_4
  struct CShape *v103; // r14
  struct ID2D1Brush *v104; // rbx
  int v105; // eax
  int v106; // eax
  __int64 v107; // r8
  __int64 (__fastcall *v108)(CDrawingContext *__hidden); // rax
  int v109; // eax
  __int64 v110; // r8
  CGeometry *v111; // rcx
  int v112; // eax
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // eax
  __int64 v116; // rsi
  __int64 (__fastcall *v117)(__int64, _QWORD, int *, LPVOID *); // rbx
  int v118; // eax
  int v119; // eax
  LPVOID v120; // rcx
  float v121; // xmm6_4
  float v122; // xmm7_4
  struct CDrawingContext *v123; // rdx
  int v124; // eax
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // eax
  int v128; // xmm2_4
  char *v129; // rax
  bool v130; // zf
  __int64 v131; // xmm0_8
  int DrawList; // eax
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // r8
  int v136; // ebx
  _QWORD *v137; // rcx
  int v138; // eax
  __int64 v139; // rax
  __int64 (__fastcall *v140)(CPolygonShape *, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  int v142; // eax
  __int64 v143; // rdx
  __int64 v144; // r8
  int v145; // ebx
  _QWORD *v146; // rcx
  __int32 v147; // ecx
  __int64 v148; // rdx
  __int64 v149; // r8
  int v150; // [rsp+20h] [rbp-E0h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  struct ID2D1Geometry *v152; // [rsp+38h] [rbp-C8h] BYREF
  int *v153; // [rsp+40h] [rbp-C0h]
  struct ID2D1Geometry *v154; // [rsp+48h] [rbp-B8h] BYREF
  int v155; // [rsp+50h] [rbp-B0h]
  struct D2D_MATRIX_3X2_F *v156; // [rsp+58h] [rbp-A8h]
  CRoundedRectangleShape *v157; // [rsp+60h] [rbp-A0h] BYREF
  char v158; // [rsp+68h] [rbp-98h]
  struct ID2D1Geometry *v159; // [rsp+70h] [rbp-90h] BYREF
  struct CShape *v160; // [rsp+78h] [rbp-88h] BYREF
  char v161; // [rsp+80h] [rbp-80h]
  int v162; // [rsp+88h] [rbp-78h] BYREF
  int v163; // [rsp+90h] [rbp-70h] BYREF
  int v164; // [rsp+98h] [rbp-68h] BYREF
  int v165; // [rsp+A0h] [rbp-60h] BYREF
  int v166; // [rsp+A8h] [rbp-58h] BYREF
  int v167; // [rsp+B0h] [rbp-50h] BYREF
  int v168; // [rsp+B8h] [rbp-48h] BYREF
  int v169; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v170; // [rsp+C8h] [rbp-38h] BYREF
  struct CShape *v171; // [rsp+D0h] [rbp-30h] BYREF
  char v172; // [rsp+D8h] [rbp-28h]
  struct CShape *v173; // [rsp+E0h] [rbp-20h] BYREF
  char v174; // [rsp+E8h] [rbp-18h]
  struct D2D_SIZE_F v175; // [rsp+F0h] [rbp-10h] BYREF
  LPVOID v176; // [rsp+F8h] [rbp-8h]
  __int128 v177; // [rsp+100h] [rbp+0h] BYREF
  __int64 v178; // [rsp+110h] [rbp+10h]
  _QWORD v179[2]; // [rsp+120h] [rbp+20h] BYREF
  int v180; // [rsp+130h] [rbp+30h]
  int v181; // [rsp+17Ch] [rbp+7Ch]
  char v182; // [rsp+180h] [rbp+80h]
  struct CGeometryOnlyDrawListBrush *v183[2]; // [rsp+190h] [rbp+90h] BYREF
  int v184; // [rsp+1A0h] [rbp+A0h]
  int v185; // [rsp+1A4h] [rbp+A4h]
  __m128 v186; // [rsp+1B0h] [rbp+B0h] BYREF
  FLOAT v187; // [rsp+1C0h] [rbp+C0h]
  FLOAT v188; // [rsp+1C4h] [rbp+C4h]
  __int64 v189; // [rsp+1C8h] [rbp+C8h]
  __int128 v190; // [rsp+1D0h] [rbp+D0h]
  FLOAT v191; // [rsp+1E0h] [rbp+E0h]
  FLOAT v192; // [rsp+1E4h] [rbp+E4h]
  int v193; // [rsp+1E8h] [rbp+E8h]
  __int64 v194; // [rsp+1ECh] [rbp+ECh]
  __int128 v195; // [rsp+200h] [rbp+100h] BYREF
  __int128 v196; // [rsp+210h] [rbp+110h] BYREF
  __int128 v197; // [rsp+220h] [rbp+120h] BYREF
  __int64 v198; // [rsp+230h] [rbp+130h]
  struct D2D_MATRIX_3X2_F v199; // [rsp+238h] [rbp+138h] BYREF
  __int128 v200; // [rsp+250h] [rbp+150h] BYREF
  __int128 v201; // [rsp+260h] [rbp+160h] BYREF
  struct D2D_MATRIX_3X2_F v202; // [rsp+270h] [rbp+170h] BYREF
  struct D2D_MATRIX_3X2_F v203; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v204[4496]; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v205; // [rsp+1430h] [rbp+1330h] BYREF
  int *v206; // [rsp+1440h] [rbp+1340h]
  __int64 v207; // [rsp+1448h] [rbp+1348h]
  int *v208; // [rsp+1450h] [rbp+1350h]
  __int64 v209; // [rsp+1458h] [rbp+1358h]
  int *v210; // [rsp+1460h] [rbp+1360h]
  __int64 v211; // [rsp+1468h] [rbp+1368h]
  int *v212; // [rsp+1470h] [rbp+1370h]
  __int64 v213; // [rsp+1478h] [rbp+1378h]
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+1480h] [rbp+1380h] BYREF
  int *v215; // [rsp+1490h] [rbp+1390h]
  __int64 v216; // [rsp+1498h] [rbp+1398h]
  int *v217; // [rsp+14A0h] [rbp+13A0h]
  __int64 v218; // [rsp+14A8h] [rbp+13A8h]
  struct _EVENT_DATA_DESCRIPTOR v219; // [rsp+14B0h] [rbp+13B0h] BYREF
  int *v220; // [rsp+14C0h] [rbp+13C0h]
  __int64 v221; // [rsp+14C8h] [rbp+13C8h]
  int *v222; // [rsp+14D0h] [rbp+13D0h]
  __int64 v223; // [rsp+14D8h] [rbp+13D8h]
  wil::details::in1diag3 *retaddr; // [rsp+1548h] [rbp+1448h]

  v2 = &v203;
  *((_BYTE *)this + 520) = 0;
  *((_BYTE *)this + 522) = 0;
  *(_OWORD *)&v203.m11 = _xmm;
  *(_QWORD *)&v203.m[2][0] = 0LL;
  v156 = &v203;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v204);
  v170 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v170);
  v152 = 0LL;
  v3 = (volatile signed __int32 *)CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  v4 = v3;
  if ( !v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v152);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x39u, 0LL);
    goto LABEL_76;
  }
  *((_DWORD *)v3 + 2) = 0;
  v5 = 0LL;
  *(_QWORD *)v3 = &CDrawListCache::`vftable';
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 111);
  *((_QWORD *)v3 + 2) = v5;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 2LL;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_WORD *)v3 + 42) = 0;
  *((_BYTE *)v3 + 86) = 1;
  if ( _InterlockedAdd(v3 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v150);
  v159 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v159);
  v152 = 0LL;
  v170 = v4;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v152);
  v6 = (int *)*((_QWORD *)this + 63);
  v7 = (int *)*((_QWORD *)this + 62);
  v153 = v6;
  while ( 1 )
  {
    if ( v7 == v6 )
      goto LABEL_76;
    v8 = *v7;
    if ( *v7 == 1 )
    {
      v2 = (struct D2D_MATRIX_3X2_F *)(v7 + 2);
      *((_BYTE *)this + 520) = 1;
      v156 = (struct D2D_MATRIX_3X2_F *)(v7 + 2);
      goto LABEL_64;
    }
    if ( v8 == 3 )
    {
      v9 = (CGeometry *)*((_QWORD *)v7 + 1);
      lpMem = 0LL;
      v157 = 0LL;
      v158 = 0;
      ShapeData = CGeometry::GetShapeData(v9, 0LL, &v157);
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x62u, 0LL);
        goto LABEL_73;
      }
      if ( !v2 )
      {
        if ( *((_BYTE *)this + 522) )
        {
          v83 = *((_QWORD *)this + 40);
          v84 = 0LL;
          v85 = *(_DWORD *)(v83 + 272);
          if ( v85 )
          {
            v86 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v83 + 272) = v86;
            v84 = *(__m128i *)(*(_QWORD *)(v83 + 264) + 16 * v86);
          }
          if ( _mm_srli_si128(v84, 8).m128i_u64[0] )
          {
            v87 = *(_DWORD *)(v83 + 344);
            if ( v87 )
              *(_DWORD *)(v83 + 344) = v87 - 1;
          }
          v88 = *(_DWORD *)(v83 + 296);
          if ( v88 )
            *(_DWORD *)(v83 + 296) = v88 - 1;
          v89 = *(_DWORD *)(v83 + 320);
          if ( v89 )
            *(_DWORD *)(v83 + 320) = v89 - 1;
          *((_BYTE *)this + 522) = 0;
        }
        goto LABEL_27;
      }
      if ( *((_BYTE *)this + 520) )
      {
        if ( !*((_BYTE *)this + 522) )
        {
LABEL_25:
          m12_low = LODWORD(v2->m12);
          v19 = (const void **)*((_QWORD *)this + 40);
          v186.m128_i32[0] = LODWORD(v2->m11);
          m21 = v2->m21;
          v194 = 1065353216LL;
          v187 = m21;
          v186.m128_i32[1] = m12_low;
          m22 = v2->m22;
          v190 = _xmm;
          dy = v2->dy;
          v188 = m22;
          dx = v2->dx;
          v192 = dy;
          v191 = dx;
          v186.m128_u64[1] = 0LL;
          v189 = 0LL;
          v193 = 0;
          WORD2(v194) = 10248;
          v24 = CDrawingContext::PushTransformInternal(v19, 0LL, &v186, 1, 1);
          v25 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x186u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x67u, 0LL);
            CShapePtr::~CShapePtr(&v157);
            v71 = lpMem;
            if ( !lpMem )
              goto LABEL_76;
            goto LABEL_75;
          }
          *((_BYTE *)this + 520) = 0;
          *((_BYTE *)this + 522) = 1;
LABEL_27:
          v26 = (CLinearGradientBrush *)*((_QWORD *)v7 + 4);
          v27 = lpMem;
          v28 = *(__int64 (__fastcall **)(CLinearGradientBrush *, struct CDrawingContext *, const struct D2D_RECT_F *, struct ID2D1Brush **))(*(_QWORD *)v26 + 360LL);
          if ( lpMem )
          {
            lpMem = 0LL;
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v29 = (struct CDrawingContext *)*((_QWORD *)this + 40);
          v30 = (const struct D2D_RECT_F *)(v7 + 4);
          if ( v28 == CLinearGradientBrush::GetD2DBrush )
            D2DBrush = CLinearGradientBrush::GetD2DBrush(v26, v29, v30, (struct ID2D1Brush **)&lpMem);
          else
            D2DBrush = v28(v26, v29, v30, (struct ID2D1Brush **)&lpMem);
          if ( D2DBrush < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DBrush, 0x6Bu, 0LL);
            goto LABEL_73;
          }
          (*(void (**)(void))(*(_QWORD *)lpMem + 32LL))();
          v32 = v157;
          v33 = (__m128 *)*((_QWORD *)this + 40);
          v34 = 0LL;
          v176 = lpMem;
          v154 = 0LL;
          v35 = *(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v157;
          v152 = 0LL;
          v36 = (__int64 (__fastcall *)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))v35[3];
          if ( v36 == CPathSegmentsShape::GetD2DGeometry )
          {
            D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v157, 0LL, &v152);
          }
          else if ( v36 == CRoundedRectangleShape::GetD2DGeometry )
          {
            D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v157, 0LL, &v152);
          }
          else
          {
            D2DGeometry = v36(v157, 0LL, &v152);
          }
          v38 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0xA4Eu, 0LL);
            goto LABEL_51;
          }
          v39 = v33[47].m128_u64[0];
          if ( v39 != v33[46].m128_u64[1] && *(_QWORD *)(v39 - 160) )
          {
            v139 = *(_QWORD *)v32;
            v195 = 0LL;
            v140 = *(__int64 (__fastcall **)(CPolygonShape *, __int64, CMILMatrix *))(v139 + 48);
            if ( v140 == CShape::GetTightBounds )
              TightBounds = CShape::GetTightBounds(v32, (__int64)&v195, 0LL);
            else
              TightBounds = v140(v32, (__int64)&v195, 0LL);
            v38 = TightBounds;
            if ( TightBounds < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0xA55u, 0LL);
LABEL_52:
              if ( v152 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v152 + 16LL))(v152);
              if ( v38 >= 0 )
              {
                if ( v158 )
                {
                  v55 = v157;
                  if ( v157 )
                  {
                    v56 = **(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v157;
                    if ( (char *)v56 == (char *)CRectanglesShape::`scalar deleting destructor' )
                    {
                      CRectanglesShape::~CRectanglesShape(v157);
                      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v55);
                    }
                    else if ( (char *)v56 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
                    {
                      CRoundedRectangleShape::~CRoundedRectangleShape(v157);
                      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v55);
                    }
                    else if ( (char *)v56 == (char *)CPolygonShape::`scalar deleting destructor' )
                    {
                      CPolygonShape::`scalar deleting destructor'(v157, 1);
                    }
                    else
                    {
                      v56(v157, 1LL);
                    }
                  }
                }
                v57 = lpMem;
                v157 = 0LL;
                v158 = 0;
                if ( lpMem )
                {
                  lpMem = 0LL;
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v57 + 16LL))(v57);
                }
LABEL_61:
                v2 = v156;
LABEL_62:
                v6 = v153;
                goto LABEL_64;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x6Fu, 0LL);
LABEL_73:
              v70 = &v157;
LABEL_74:
              CShapePtr::~CShapePtr(v70);
              v71 = lpMem;
              if ( !lpMem )
                goto LABEL_76;
LABEL_75:
              lpMem = 0LL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v71 + 16LL))(v71);
              goto LABEL_76;
            }
            v198 = 0LL;
            v197 = v195;
            v142 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v154, (__int64)v33, (__int64)&v197);
            v38 = v142;
            if ( v142 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v142, 0xA57u, 0LL);
              v34 = v154;
              goto LABEL_51;
            }
            v34 = v154;
          }
          v40 = *(__int64 (__fastcall **)(__m128 *))(v33[1].m128_u64[0] + 112);
          if ( v40 == CDrawingContext::ApplyRenderState )
            v41 = CDrawingContext::ApplyRenderStateInternal(v33, 0);
          else
            v41 = v40(v33 + 1);
          v38 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v41, 0xA5Au, 0LL);
            goto LABEL_51;
          }
          v44 = v33[15].m128_i32[2];
          v45 = 0;
          v46 = v33[2].m128_u64[1];
          if ( v44 )
          {
            v147 = v44 - 1;
            if ( v147 )
            {
              if ( v147 == 3 )
                v45 = 2;
            }
            else
            {
              v45 = 1;
            }
          }
          v47 = v33[15].m128_i32[1] != 0;
          v48 = (CDrawingContext *)&v33[1].m128_u16[4];
          LODWORD(v154) = v47;
          v159 = v152;
          CD2DContext::FlushDrawList((CD2DContext *)(v46 + 16), v42, v43);
          v155 = 0;
          memset(&v202, 0, sizeof(v202));
          CD2DContext::EnsureBeginDraw((CD2DContext *)(v46 + 16), v49, v50);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v80 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v48 + 8LL);
            if ( v80 == CDrawingContext::GetCurrentZ )
              CurrentZ = CDrawingContext::GetCurrentZ(v48);
            else
              CurrentZ = v80(v48);
            v163 = CurrentZ;
            v162 = 3;
            v215 = &v162;
            v216 = 4LL;
            v217 = &v163;
            v218 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              (const EVENT_DESCRIPTOR *)"1",
              v82,
              3u,
              &v214);
          }
          v51 = *(void (__fastcall ***)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))v48;
          memset(&v199, 0, sizeof(v199));
          v52 = *v51;
          if ( v52 == CDrawingContext::GetWorldTransform3x2 )
            CDrawingContext::GetWorldTransform3x2(v48, &v199);
          else
            v52(v48, &v199);
          (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v46 + 216) + 240LL))(
            *(_QWORD *)(v46 + 216),
            &v199);
          if ( v45 != *(_DWORD *)(v46 + 412) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v46 + 216) + 624LL))(*(_QWORD *)(v46 + 216), v45);
            *(_DWORD *)(v46 + 412) = v45;
          }
          v53 = (int)v154;
          if ( (_DWORD)v154 != *(_DWORD *)(v46 + 408) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v46 + 216) + 256LL))(
              *(_QWORD *)(v46 + 216),
              (unsigned int)v154);
            *(_DWORD *)(v46 + 408) = v53;
          }
          v202 = v199;
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v196 = 0LL;
            v106 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, __int128 *))(*(_QWORD *)v159 + 32LL))(
                     v159,
                     &v202,
                     &v196);
            v155 = v106;
            v38 = v106;
            if ( v106 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v106, 0x410u, 0LL);
              v54 = v38;
LABEL_193:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0xA60u, 0LL);
LABEL_51:
              if ( v34 )
              {
                v90 = *((_DWORD *)v34 + 780);
                if ( v90 )
                  *((_DWORD *)v34 + 780) = v90 - 1;
                --*(_QWORD *)(*((_QWORD *)v34 + 94) - 184LL);
                *((_BYTE *)v34 + 8065) = 1;
                CDrawingContext::PopClippingScope(v34, 0);
              }
              goto LABEL_52;
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            {
              v206 = &v164;
              v167 = HIDWORD(v196);
              v208 = &v165;
              v210 = &v166;
              v212 = &v167;
              v166 = DWORD2(v196);
              v165 = DWORD1(v196);
              v164 = v196;
              v207 = 4LL;
              v209 = 4LL;
              v211 = 4LL;
              v213 = 4LL;
              McGenEventWrite_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_DRAWEVENT,
                v107,
                5u,
                &v205);
            }
          }
          (*(void (__fastcall **)(_QWORD, struct ID2D1Geometry *, LPVOID, _QWORD))(**(_QWORD **)(v46 + 216) + 184LL))(
            *(_QWORD *)(v46 + 216),
            v159,
            v176,
            0LL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v108 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v48 + 8LL);
            if ( v108 == CDrawingContext::GetCurrentZ )
              v109 = CDrawingContext::GetCurrentZ(v48);
            else
              v109 = v108(v48);
            v169 = v109;
            v168 = 3;
            v220 = &v168;
            v221 = 4LL;
            v223 = 4LL;
            v222 = &v169;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DRAWEVENT_Stop,
              v110,
              3u,
              &v219);
          }
          v54 = v155;
          v38 = v155;
          if ( v155 >= 0 )
            goto LABEL_51;
          goto LABEL_193;
        }
        v11 = *((_QWORD *)this + 40);
        v12 = 0LL;
        v13 = *(_DWORD *)(v11 + 272);
        if ( v13 )
        {
          v14 = (unsigned int)(v13 - 1);
          *(_DWORD *)(v11 + 272) = v14;
          v12 = *(__m128i *)(*(_QWORD *)(v11 + 264) + 16 * v14);
        }
        if ( _mm_srli_si128(v12, 8).m128i_u64[0] )
        {
          v15 = *(_DWORD *)(v11 + 344);
          if ( v15 )
            *(_DWORD *)(v11 + 344) = v15 - 1;
        }
        v16 = *(_DWORD *)(v11 + 296);
        if ( v16 )
          *(_DWORD *)(v11 + 296) = v16 - 1;
        v17 = *(_DWORD *)(v11 + 320);
        if ( v17 )
          *(_DWORD *)(v11 + 320) = v17 - 1;
        *((_BYTE *)this + 522) = 0;
      }
      if ( *((_BYTE *)this + 522) )
        goto LABEL_27;
      goto LABEL_25;
    }
    v58 = v8 - 2;
    if ( !v58 )
    {
      v174 = 0;
      v59 = (CGeometry *)*((_QWORD *)v7 + 1);
      v173 = 0LL;
      v60 = CGeometry::GetShapeData(v59, 0LL, &v173);
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x4Bu, 0LL);
      }
      else
      {
        v63 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2, v61, v62);
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v63, 0x50u, 0LL);
        }
        else
        {
          v64 = (__m128 *)*((_QWORD *)this + 40);
          v201 = *((_OWORD *)v7 + 1);
          v65 = v64[198].m128_i32[0];
          if ( v65 )
            v66 = *(float *)(v64[197].m128_u64[1] + 4LL * (unsigned int)(v65 - 1));
          else
            v66 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v67 = v173;
          *((float *)&v201 + 3) = *((float *)&v201 + 3) * v66;
          v68 = *(struct ID2D1Brush **)(v64[2].m128_u64[1] + 328);
          (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v68 + 64LL))(v68, &v201);
          v69 = CDrawingContext::FillShapeWithBrush(v64, v67, v68);
          if ( v69 >= 0 )
          {
            CShapePtr::~CShapePtr(&v173);
            v6 = v153;
            v2 = v156;
            goto LABEL_64;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v69, 0x56u, 0LL);
        }
      }
      CShapePtr::~CShapePtr(&v173);
      goto LABEL_76;
    }
    v91 = v58 - 2;
    if ( !v91 )
      break;
    v92 = v91 - 1;
    if ( !v92 )
    {
      v172 = 0;
      v93 = (CGeometry *)*((_QWORD *)v7 + 1);
      v171 = 0LL;
      v94 = CGeometry::GetShapeData(v93, 0LL, &v171);
      if ( v94 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0xBBu, 0LL);
      }
      else
      {
        v97 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2, v95, v96);
        if ( v97 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v97, 0xC0u, 0LL);
        }
        else
        {
          v98 = (__m128 *)*((_QWORD *)this + 40);
          v200 = *((_OWORD *)v7 + 1);
          v99 = v98[198].m128_i32[0];
          if ( v99 )
            v100 = *(float *)(v98[197].m128_u64[1] + 4LL * (unsigned int)(v99 - 1));
          else
            v100 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v101 = (struct ID2D1StrokeStyle1 *)*((_QWORD *)v7 + 5);
          v102 = *((float *)v7 + 8);
          v103 = v171;
          *((float *)&v200 + 3) = *((float *)&v200 + 3) * v100;
          v104 = *(struct ID2D1Brush **)(v98[2].m128_u64[1] + 328);
          (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v104 + 64LL))(v104, &v200);
          v105 = CDrawingContext::StrokeShapeWithBrush(v98, v103, v104, v102, v101);
          if ( v105 >= 0 )
          {
            CShapePtr::~CShapePtr(&v171);
            v6 = v153;
            v2 = v156;
            goto LABEL_64;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v105, 0xC9u, 0LL);
        }
      }
      CShapePtr::~CShapePtr(&v171);
      goto LABEL_76;
    }
    if ( v92 != 1 )
      goto LABEL_62;
    v111 = (CGeometry *)*((_QWORD *)v7 + 1);
    lpMem = 0LL;
    v160 = 0LL;
    v161 = 0;
    v112 = CGeometry::GetShapeData(v111, 0LL, &v160);
    if ( v112 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v112, 0xD5u, 0LL);
      v70 = &v160;
      goto LABEL_74;
    }
    v115 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2, v113, v114);
    if ( v115 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v115, 0xDAu, 0LL);
      goto LABEL_203;
    }
    v116 = *((_QWORD *)v7 + 4);
    v117 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, LPVOID *))(*(_QWORD *)v116 + 360LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpMem);
    v118 = v117(v116, *((_QWORD *)this + 40), v7 + 4, &lpMem);
    if ( v118 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v118, 0xDEu, 0LL);
      goto LABEL_203;
    }
    (*(void (**)(void))(*(_QWORD *)lpMem + 32LL))();
    v119 = CDrawingContext::StrokeShapeWithBrush(
             *((__m128 **)this + 40),
             v160,
             (struct ID2D1Brush *)lpMem,
             *((float *)v7 + 10),
             *((struct ID2D1StrokeStyle1 **)v7 + 6));
    if ( v119 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v119, 0xE4u, 0LL);
LABEL_203:
      CShapePtr::~CShapePtr(&v160);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpMem);
      goto LABEL_76;
    }
    CShapePtr::~CShapePtr(&v160);
    v120 = lpMem;
    if ( !lpMem )
      goto LABEL_61;
    lpMem = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v120 + 16LL))(v120);
    v6 = v153;
    v2 = v156;
LABEL_64:
    v7 += 14;
  }
  v121 = *((float *)v7 + 4) - *((float *)v7 + 2);
  v122 = *((float *)v7 + 5) - *((float *)v7 + 3);
  v123 = (struct CDrawingContext *)*((_QWORD *)this + 40);
  lpMem = 0LL;
  v175.width = v121;
  v175.height = v122;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&v186, v123, &v175);
  v124 = (*(__int64 (__fastcall **)(_QWORD, __m128 *))(**((_QWORD **)v7 + 3) + 336LL))(*((_QWORD *)v7 + 3), &v186);
  if ( v124 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v124, 0x80u, 0LL);
    goto LABEL_169;
  }
  v127 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL, v125, v126);
  if ( v127 >= 0 )
  {
    if ( !DWORD2(v190) )
    {
      v152 = 0LL;
      v183[0] = (struct CGeometryOnlyDrawListBrush *)&v152;
      v183[1] = 0LL;
      LOBYTE(v184) = 1;
      v136 = CGeometryOnlyDrawListBrush::Create(&v183[1]);
      if ( (_BYTE)v184 )
      {
        v137 = *(_QWORD **)v183[0];
        *(_QWORD *)v183[0] = v183[1];
        if ( v137 )
          CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v137);
      }
      if ( v136 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v136, 0x88u, 0LL);
        std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v152);
        goto LABEL_204;
      }
      v154 = v152;
      v152 = 0LL;
      std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v186.m128_u16[4], &v154);
      v138 = DWORD2(v190);
      if ( DWORD2(v190) <= 1 )
        v138 = 1;
      DWORD2(v190) = v138;
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v154);
      if ( v152 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v152);
    }
    v128 = v7[3];
    v184 = v7[2];
    v185 = v128;
    *(_OWORD *)v183 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v177,
      (const struct D2D1::Matrix3x2F *)v183,
      (const struct D2D1::Matrix3x2F *)v2);
    v130 = v129[52] == 0;
    v131 = v178;
    *(_OWORD *)(v129 + 8) = v177;
    *((_QWORD *)v129 + 3) = v131;
    if ( !v130 )
    {
      v183[1] = 0LL;
      v183[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
      LOBYTE(v184) = 1;
      v145 = CGeometryOnlyDrawListBrush::Create(&v183[1]);
      if ( (_BYTE)v184 )
      {
        v146 = *(_QWORD **)v183[0];
        *(_QWORD *)v183[0] = v183[1];
        if ( v146 )
          CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v146);
      }
      if ( v145 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v145, 0x9Du, 0LL);
        goto LABEL_204;
      }
      v129 = (char *)lpMem;
    }
    v129[52] = 1;
    *((_QWORD *)v129 + 4) = 0LL;
    *((float *)v129 + 10) = v121;
    *((float *)v129 + 11) = v122;
    *((_DWORD *)v129 + 12) = 50529027;
    v179[0] = lpMem;
    v179[1] = 0LL;
    v180 = 0;
    v181 = 257;
    v182 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v186,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v179,
                 (struct CDrawListEntryBuilder *)v204);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0xACu, 0LL);
LABEL_169:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v186, v143, v144);
      if ( lpMem )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
      goto LABEL_76;
    }
    CDrawListCache::Update(
      (CDrawListCache *)v4,
      *((struct CDrawingContext **)this + 40),
      (struct CDrawListEntryBuilder *)v204);
    v133 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 40), (struct CDrawListCache *)v4);
    if ( v133 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v133, 0xAFu, 0LL);
      goto LABEL_204;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v204);
    CDrawListCache::Invalidate((CDrawListCache *)v4);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v186, v134, v135);
    if ( !lpMem )
      goto LABEL_62;
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    v6 = v153;
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v127, 0x82u, 0LL);
LABEL_204:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v186, v148, v149);
  std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
LABEL_76:
  if ( *((_BYTE *)this + 522) )
  {
    v72 = *((_QWORD *)this + 40);
    v73 = 0LL;
    v74 = *(_DWORD *)(v72 + 272);
    if ( v74 )
    {
      v75 = (unsigned int)(v74 - 1);
      *(_DWORD *)(v72 + 272) = v75;
      v73 = *(__m128i *)(*(_QWORD *)(v72 + 264) + 16 * v75);
    }
    if ( _mm_srli_si128(v73, 8).m128i_u64[0] )
    {
      v76 = *(_DWORD *)(v72 + 344);
      if ( v76 )
        *(_DWORD *)(v72 + 344) = v76 - 1;
    }
    v77 = *(_DWORD *)(v72 + 296);
    if ( v77 )
      *(_DWORD *)(v72 + 296) = v77 - 1;
    v78 = *(_DWORD *)(v72 + 320);
    if ( v78 )
      *(_DWORD *)(v72 + 320) = v78 - 1;
    *((_BYTE *)this + 522) = 0;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v170);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v204);
  return 0LL;
}
