/*
 * XREFs of ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180040CC0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180045A90 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x18006C750 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180084920 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??1?$unique_ptr@$$BY0A@UD2D_POINT_2F@@U?$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@XZ @ 0x180092560 (--1-$unique_ptr@$$BY0A@UD2D_POINT_2F@@U-$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@X.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x180092798 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800927D0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x180094F10 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B13B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D5FE0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18010F900 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180124DF4 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansio.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180125094 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18014466C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180145C50 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x18018D2A8 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18018D450 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x1801942E0 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x1801C3400 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ??R?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@@Z @ 0x1801EB9A4 (--R-$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@.c)
 *     ??1?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18020AB58 (--1-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@deta.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
        CBatchCommand *a1,
        struct CDrawingContext *a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // r13
  float v6; // xmm6_4
  CBatchCommand *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r15
  unsigned __int64 v10; // rbx
  _OWORD *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  float v14; // xmm0_4
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdi
  char *v18; // r14
  float v19; // xmm11_4
  float v20; // xmm0_4
  float v21; // xmm11_4
  CDrawingContext *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edi
  CRenderTargetBitmap *v27; // r14
  void (__fastcall *v28)(CRenderTargetBitmap *, enum DXGI_ALPHA_MODE); // rax
  __int64 v29; // r8
  volatile signed __int32 *v30; // rdi
  unsigned int (__fastcall *v31)(CMILRefCountImpl *__hidden); // rax
  int v32; // et0
  __int64 (__fastcall *v33)(volatile signed __int32 *, float **); // rax
  int *Size; // rax
  int v35; // ecx
  float v36; // xmm6_4
  __int64 (__fastcall *v37)(volatile signed __int32 *, CBatchCommand **); // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // esi
  CSurfaceDrawListBrush *v41; // rcx
  int v42; // eax
  int v43; // eax
  _QWORD *v44; // rdx
  unsigned int v45; // r9d
  char *v46; // r15
  _QWORD *v47; // rsi
  int v48; // xmm12_4
  __int64 v49; // rcx
  _QWORD *v50; // r8
  float *v51; // rax
  _QWORD *v52; // rdi
  float *v53; // rbx
  float v54; // xmm9_4
  float v55; // xmm8_4
  float v56; // xmm10_4
  float v57; // xmm6_4
  float v58; // xmm7_4
  float v59; // xmm0_4
  float v60; // xmm4_4
  bool v61; // al
  float v62; // xmm14_4
  float v63; // xmm0_4
  int v64; // xmm6_4
  float v65; // xmm2_4
  float v66; // xmm3_4
  int v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm12_4
  float v70; // xmm13_4
  float v71; // xmm11_4
  float v72; // xmm0_4
  float v73; // xmm6_4
  float v74; // xmm7_4
  __int64 *v75; // rax
  __int64 v76; // rcx
  CBatchCommand *v77; // rbx
  __int64 v78; // rax
  CCommonRenderingEffect *v79; // rcx
  __int64 (__fastcall *v80)(CBrushRenderingEffect *, struct CDrawingContext *); // rax
  int updated; // eax
  __int64 v82; // r13
  CBatchCommand *v83; // rbx
  unsigned int v84; // eax
  __int64 v85; // rcx
  int v86; // r13d
  CBatchCommand *v87; // rcx
  float v88; // xmm3_4
  int v89; // r8d
  CBatchCommand *v90; // rcx
  __int64 v91; // r13
  __int64 v92; // rbx
  _OWORD *v93; // rax
  struct CHwLightCollectionBuffer *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // r8
  int appended; // ebx
  __int64 v98; // rcx
  __int64 *v99; // rbx
  CBatchCommand *v100; // r13
  void **v101; // rdi
  __int64 v102; // rcx
  int v103; // eax
  int v104; // eax
  unsigned int v105; // edi
  CBatchCommand **v106; // rax
  CBatchCommand *v107; // rdi
  CBatchCommand **v108; // rbx
  _QWORD *v109; // rcx
  CBatchCommand *v110; // r14
  _QWORD *v111; // rax
  _QWORD *v112; // rbx
  _QWORD *v113; // rcx
  unsigned __int64 v114; // rbx
  char *v115; // rax
  float *v116; // rcx
  _QWORD *v117; // rcx
  void *v118; // rdi
  __int64 v119; // rax
  int v121; // xmm1_4
  int v122; // xmm0_4
  int v123; // xmm1_4
  int v124; // xmm0_4
  int v125; // xmm1_4
  int v126; // xmm0_4
  int v127; // xmm1_4
  unsigned int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  _DWORD *v132; // rax
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rax
  void (*v136)(void); // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  int v141; // [rsp+28h] [rbp-E0h]
  int v142; // [rsp+28h] [rbp-E0h]
  int v143; // [rsp+28h] [rbp-E0h]
  CBatchCommand *v144[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v145[4]; // [rsp+58h] [rbp-B0h] BYREF
  char *v146; // [rsp+68h] [rbp-A0h] BYREF
  void *v147; // [rsp+70h] [rbp-98h] BYREF
  CRenderTargetBitmap *v148; // [rsp+78h] [rbp-90h] BYREF
  struct CDrawingContext *v149; // [rsp+80h] [rbp-88h]
  _QWORD *v150; // [rsp+88h] [rbp-80h]
  float *v151; // [rsp+90h] [rbp-78h] BYREF
  CBatchCommand *v152; // [rsp+98h] [rbp-70h] BYREF
  float v153; // [rsp+A0h] [rbp-68h]
  float v154; // [rsp+A4h] [rbp-64h]
  unsigned int v155; // [rsp+A8h] [rbp-60h]
  void *v156; // [rsp+B0h] [rbp-58h] BYREF
  void *v157; // [rsp+B8h] [rbp-50h]
  CSurfaceDrawListBrush **v158; // [rsp+C0h] [rbp-48h] BYREF
  CSurfaceDrawListBrush *v159; // [rsp+C8h] [rbp-40h] BYREF
  int v160; // [rsp+D0h] [rbp-38h]
  int v161; // [rsp+D4h] [rbp-34h]
  int v162; // [rsp+D8h] [rbp-30h]
  int v163; // [rsp+DCh] [rbp-2Ch]
  int v164; // [rsp+E0h] [rbp-28h]
  __int64 *v165; // [rsp+E8h] [rbp-20h]
  __int64 v166; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v167; // [rsp+F8h] [rbp-10h]
  char v168; // [rsp+100h] [rbp-8h]
  float v169; // [rsp+108h] [rbp+0h]
  __int64 v170; // [rsp+110h] [rbp+8h]
  __int64 v171; // [rsp+118h] [rbp+10h]
  __int64 v172; // [rsp+120h] [rbp+18h]
  __int64 *v173; // [rsp+128h] [rbp+20h]
  _DWORD *v174; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v175; // [rsp+138h] [rbp+30h]
  _OWORD *v176; // [rsp+140h] [rbp+38h]
  char *v177; // [rsp+148h] [rbp+40h]
  __int128 v178; // [rsp+158h] [rbp+50h]
  char *v179; // [rsp+168h] [rbp+60h] BYREF
  int v180; // [rsp+170h] [rbp+68h]
  __int64 v181; // [rsp+198h] [rbp+90h]
  __int64 v182; // [rsp+1A0h] [rbp+98h]
  int v183; // [rsp+1A8h] [rbp+A0h]
  __int64 v184; // [rsp+1B0h] [rbp+A8h]
  char v185; // [rsp+1B9h] [rbp+B1h]
  __int128 v186; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v187; // [rsp+1D8h] [rbp+D0h]
  float v188; // [rsp+1E8h] [rbp+E0h] BYREF
  float v189; // [rsp+1ECh] [rbp+E4h]
  __int64 v190; // [rsp+1F0h] [rbp+E8h]
  float v191; // [rsp+1F8h] [rbp+F0h]
  float v192; // [rsp+1FCh] [rbp+F4h]
  __int128 v193; // [rsp+200h] [rbp+F8h]
  __int64 v194; // [rsp+210h] [rbp+108h]
  float v195; // [rsp+218h] [rbp+110h]
  int v196; // [rsp+21Ch] [rbp+114h]
  int v197; // [rsp+220h] [rbp+118h]
  __int64 v198; // [rsp+224h] [rbp+11Ch]
  bool v199[8]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE *v200; // [rsp+240h] [rbp+138h]
  char *v201; // [rsp+248h] [rbp+140h]
  _BYTE v202[64]; // [rsp+250h] [rbp+148h] BYREF
  char v203; // [rsp+290h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v5 = a5;
  v6 = 0.0;
  v170 = *((_QWORD *)a2 + 5);
  v7 = a1;
  v8 = a5[1] - *a5;
  v178 = 0LL;
  v9 = (__int64 *)(*((_QWORD *)a1 + 2) + 432LL * a3);
  *(_QWORD *)v199 = v202;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (v8 >> 2);
  v200 = v202;
  v152 = a1;
  v150 = a4;
  v149 = a2;
  v173 = a5;
  v165 = v9;
  v201 = &v203;
  if ( v10 )
  {
    v11 = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
                      v199,
                      0LL,
                      v10);
    *v11 = 0LL;
    qmemcpy(v11 + 1, v11, 8 * ((16 * v10 - 9) >> 3));
  }
  else
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      v199,
      0LL,
      0LL);
  }
  v12 = *a5;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2);
  if ( (v13 & 0x8000000000000000uLL) != 0LL )
    v14 = (float)(int)(v13 & 1 | (v13 >> 1)) + (float)(int)(v13 & 1 | (v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = 0;
  *(float *)&v147 = v14 + v14;
  if ( v13 )
  {
    v13 = *(_QWORD *)v199;
    v16 = 0LL;
    do
    {
      v17 = 2 * v16;
      CCpuClipAntialiasSink::CalcBoundingRect(*v9, 1LL, v12 + 12 * v16, v13 + 16 * v16);
      v13 = *(_QWORD *)v199;
      if ( v6 <= (float)(*(float *)(*(_QWORD *)v199 + 8 * v17 + 12) - *(float *)(*(_QWORD *)v199 + 8 * v17 + 4)) )
        v6 = *(float *)(*(_QWORD *)v199 + 8 * v17 + 12) - *(float *)(*(_QWORD *)v199 + 8 * v17 + 4);
      v12 = *a5;
      v16 = ++v15;
    }
    while ( v15 < 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2) );
    v7 = v152;
  }
  v18 = (char *)v7 + 904;
  v145[0] = 0.0;
  LODWORD(v146) = 0;
  v176 = v18;
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)v18, v13) )
  {
    v19 = sqrtf_0((float)(*(float *)v18 * *(float *)v18) + (float)(*((float *)v18 + 1) * *((float *)v18 + 1)));
    v20 = sqrtf_0((float)(*((float *)v18 + 5) * *((float *)v18 + 5)) + (float)(*((float *)v18 + 4) * *((float *)v18 + 4)));
    v145[0] = v19;
    *(float *)&v146 = v20;
  }
  else
  {
    v121 = *((_DWORD *)v18 + 1);
    LODWORD(v158) = *(_DWORD *)v18;
    LODWORD(v159) = *((_DWORD *)v18 + 3);
    v122 = *((_DWORD *)v18 + 5);
    HIDWORD(v158) = v121;
    v123 = *((_DWORD *)v18 + 4);
    v160 = v122;
    v124 = *((_DWORD *)v18 + 12);
    HIDWORD(v159) = v123;
    v125 = *((_DWORD *)v18 + 7);
    v162 = v124;
    v126 = *((_DWORD *)v18 + 15);
    v161 = v125;
    v127 = *((_DWORD *)v18 + 13);
    v164 = v126;
    v163 = v127;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v158, v145, (float *)&v146, 0LL);
    v20 = *(float *)&v146;
    v19 = v145[0];
  }
  v21 = fmaxf(v19, v20);
  v154 = v21;
  HIDWORD(v147) = ceilf_0(v21 * v6);
  v148 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v148);
  v22 = v149;
  v23 = *((_QWORD *)v149 + 3);
  v177 = (char *)v149 + 24;
  v24 = (*(__int64 (**)(void))(v23 + 16))();
  LODWORD(v157) = 40;
  v156 = "DWM CPU-clip antialias sink intermediate";
  v25 = CDrawingContext::PushOffScreenRenderingLayer(v22, &v156, &v147, *(unsigned int *)(v24 + 8), 1, &v148);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v25,
      v141);
    if ( !v148 )
    {
LABEL_146:
      v137 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
      if ( v137 )
        v200 -= 16 * v137;
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
      return v26;
    }
    v136 = *(void (**)(void))(*(_QWORD *)v148 + 16LL);
LABEL_145:
    v136();
    goto LABEL_146;
  }
  v27 = v148;
  v28 = *(void (__fastcall **)(CRenderTargetBitmap *, enum DXGI_ALPHA_MODE))(*(_QWORD *)v148 + 96LL);
  if ( v28 == CRenderTargetBitmap::SetAlphaMode )
    CRenderTargetBitmap::SetAlphaMode(v148, DXGI_ALPHA_MODE_PREMULTIPLIED);
  else
    v28(v148, DXGI_ALPHA_MODE_PREMULTIPLIED);
  v166 = 0LL;
  v30 = (volatile signed __int32 *)((char *)v27 + 8);
  v168 = 0;
  if ( !v27 )
    v30 = 0LL;
  v167 = v30;
  if ( v30 )
  {
    v31 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v30 + 8LL);
    if ( v31 == CMILRefCountImpl::AddReference )
    {
      v32 = _InterlockedAdd(v30, 1u);
      if ( (v32 < 0) ^ __OFSUB__(v31, CMILRefCountImpl::AddReference) | (v32 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v141);
      v27 = v148;
      v30 = v167;
    }
    else if ( (char *)v31 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(v30);
    }
    else
    {
      v31((CMILRefCountImpl *)v30);
    }
    v33 = *(__int64 (__fastcall **)(volatile signed __int32 *, float **))(*(_QWORD *)v30 + 32LL);
    if ( (char *)v33 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (int *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v30, &v151);
    }
    else if ( (char *)v33 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (int *)CDxHandleBitmapRealization::GetSize(v30, &v151, v29);
    }
    else
    {
      Size = (int *)v33(v30, &v151);
    }
    v35 = *Size;
  }
  else
  {
    v35 = 0;
  }
  v36 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v169 = 1.0 / (float)v35;
  if ( v30 )
  {
    v37 = *(__int64 (__fastcall **)(volatile signed __int32 *, CBatchCommand **))(*(_QWORD *)v30 + 32LL);
    if ( (char *)v37 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      v38 = (_QWORD *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v30, v144);
    }
    else if ( (char *)v37 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      v38 = (_QWORD *)CDxHandleBitmapRealization::GetSize(v30, v144, v29);
    }
    else
    {
      v38 = (_QWORD *)v37(v30, v144);
    }
    v39 = HIDWORD(*v38);
  }
  else
  {
    LODWORD(v39) = 0;
  }
  v144[0] = 0LL;
  v159 = 0LL;
  LOBYTE(v160) = 1;
  v156 = 0LL;
  v158 = v144;
  LOWORD(v145[0]) = SamplerMode::k_ClampClampLinear;
  BYTE2(v145[0]) = 1;
  v153 = 1.0 / (float)(int)v39;
  v157 = v147;
  v40 = CSurfaceDrawListBrush::CreateWithContentRect(&v166, v145, &v156, &v159, v141);
  if ( (_BYTE)v160 )
  {
    v41 = *v158;
    *v158 = v159;
    if ( v41 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v41, 1u);
  }
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v40,
      v142);
    if ( v144[0] )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
    CDrawingContext::PopLayer(v22);
    if ( v27 )
      (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 16LL))(v27);
    v135 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
    if ( v135 )
      v200 -= 16 * v135;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
    return (unsigned int)v40;
  }
  *(_QWORD *)&v186 = 1LL;
  v152 = v144[0];
  v146 = 0LL;
  *((_QWORD *)&v186 + 1) = &v152;
  v42 = CCommonRenderingEffectFactory::CreateRenderingEffect(&v156, &v186, &v146);
  v26 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v42,
      v142);
    if ( v144[0] )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
    if ( v146 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v146 + 8LL))(v146);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
    CDrawingContext::PopLayer(v22);
    if ( !v27 )
      goto LABEL_146;
    v136 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
    goto LABEL_145;
  }
  if ( v144[0] )
    CSurfaceDrawListBrush::`vector deleting destructor'(v144[0], 1u);
  v43 = CDrawingContext::ApplyRenderStateInternal(v22, 1);
  v26 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v43,
      v142);
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v146);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
    CDrawingContext::PopLayer(v22);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v148);
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(v199);
    return v26;
  }
  v44 = v150;
  v45 = 0;
  v46 = v146;
  v47 = (_QWORD *)*v150;
  v48 = _xmm;
  v145[0] = 0.0;
  v155 = 20;
  while ( 2 )
  {
    v47 = (_QWORD *)*v47;
LABEL_42:
    v49 = *v5;
    v50 = v47;
    if ( v45 >= 0xAAAAAAAAAAAAAAABuLL * ((v5[1] - *v5) >> 2) || (v44 = (_QWORD *)*v44, v47 == v44) )
    {
      if ( v46 )
        (*(void (__fastcall **)(char *, _QWORD *, _QWORD *))(*(_QWORD *)v46 + 8LL))(v46, v44, v47);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
      CDrawingContext::PopLayer(v149);
      if ( g_LockAndReadCpuClipAntialiasSinkTexture )
      {
        v140 = (*(__int64 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 144LL))(v27);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v140 + 112LL))(v140, v177);
      }
      if ( v27 )
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 16LL))(v27);
      v119 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
      if ( v119 )
        v200 -= 16 * v119;
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
      return 0LL;
    }
    v156 = v47;
    v51 = (float *)(v49 + 12LL * v45);
    v52 = v47;
    v151 = v51;
    while ( v47 != v44 && v51[2] > *((float *)v47 + 6) && *((float *)v47 + 7) > v51[1] )
      v47 = (_QWORD *)*v47;
    if ( v47 == v50 )
    {
      v44 = v150;
      continue;
    }
    break;
  }
  v53 = (float *)(*(_QWORD *)v199 + 16LL * v45);
  v54 = v53[3];
  v55 = (float)(int)v45 + (float)(int)v45;
  v56 = v55 + v36;
  v57 = v53[1];
  v58 = v54 - v57;
  v59 = ceilf_0((float)(v54 - v57) * v21);
  v60 = *v53;
  v61 = 0;
  v187 = 0LL;
  v62 = v59;
  v186 = 0LL;
  if ( v60 == v55 && v57 == 0.0 && v53[2] == v56 )
    v61 = v54 == v59;
  if ( v61 )
  {
    v68 = *(float *)&_xmm;
    v74 = 0.0;
    LODWORD(v71) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v70) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    v73 = 0.0;
    LODWORD(v69) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  }
  else
  {
    v63 = v53[2] - v60;
    if ( v63 == 0.0 && v58 == 0.0 )
    {
      v73 = *((float *)&v187 + 1);
      v74 = *(float *)&v187;
      v71 = *((float *)&v186 + 3);
      v70 = *((float *)&v186 + 2);
      v69 = *((float *)&v186 + 1);
      v68 = *(float *)&v186;
    }
    else
    {
      v64 = LODWORD(v57) ^ v48;
      v65 = (float)(v56 - v55) / v63;
      v66 = (float)(v62 - 0.0) / v58;
      v67 = LODWORD(v60) ^ v48;
      v68 = v65 + 0.0;
      v69 = (float)(v66 * 0.0) + 0.0;
      v70 = (float)(v65 * 0.0) + 0.0;
      v71 = v66 + 0.0;
      v72 = *(float *)&v64 * 0.0;
      v73 = (float)((float)(*(float *)&v64 * v66) + (float)(*(float *)&v67 * 0.0)) + 0.0;
      v74 = (float)((float)(*(float *)&v67 * v65) + v72) + v55;
    }
  }
  v75 = v165;
  v152 = (CBatchCommand *)(v165 + 1);
  while ( v52 != v47 )
  {
    v76 = v75[1];
    v77 = (CBatchCommand *)(v75 + 1);
    v78 = *((unsigned int *)v52 + 4);
    v172 = v76;
    v152 = v77;
    v171 = 5 * v78;
    *(_QWORD *)&v186 = *(_QWORD *)(v76 + 40 * v78);
    v79 = *(CCommonRenderingEffect **)(v186 + 24);
    v80 = *(__int64 (__fastcall **)(CBrushRenderingEffect *, struct CDrawingContext *))(*(_QWORD *)v79 + 48LL);
    if ( v80 == CCommonRenderingEffect::UpdateBitmaps )
    {
      updated = CCommonRenderingEffect::UpdateBitmaps(v79, v149);
    }
    else if ( v80 == CBrushRenderingEffect::UpdateBitmaps )
    {
      updated = CBrushRenderingEffect::UpdateBitmaps(v79, v149);
    }
    else
    {
      updated = v80(v79, v149);
    }
    if ( updated < 0 )
      goto LABEL_74;
    v82 = v170;
    v83 = 0LL;
    v144[0] = 0LL;
    LODWORD(v146) = 0;
    if ( *(_DWORD *)(v170 + 88) )
      goto LABEL_63;
    v132 = MIDL_user_allocate(0xB8uLL);
    v175 = v132;
    if ( !v132 )
    {
      v86 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15Eu, 0LL);
      goto LABEL_67;
    }
    *v132 = 0;
    v174 = v132;
    v133 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v82 + 64, &v174, 1LL);
    LODWORD(v146) = v133;
    if ( v133 >= 0 )
    {
LABEL_63:
      v84 = *(_DWORD *)(v82 + 96);
      v85 = (unsigned int)(*(_DWORD *)(v82 + 88) - 1);
      if ( v84 >= (unsigned int)v85 )
        v84 = *(_DWORD *)(v82 + 88) - 1;
      v83 = *(CBatchCommand **)(*(_QWORD *)(v82 + 64) + 8 * v85);
      *(_DWORD *)(v82 + 96) = v84;
      *(_DWORD *)(v82 + 88) = v85;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v133, 0x160u, 0LL);
      std::default_delete<CBatchCommand>::operator()(v134, v175);
    }
    v86 = (int)v146;
LABEL_67:
    v87 = v144[0];
    v144[0] = v83;
    if ( v87 )
    {
      CBatchCommand::`scalar deleting destructor'(v87);
      v83 = v144[0];
    }
    if ( v86 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v86,
        v142);
      if ( v144[0] )
        std::default_delete<CBatchCommand>::operator()(v138, v144[0]);
      if ( v46 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v46 + 8LL))(v46);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
      CDrawingContext::PopLayer(v149);
      if ( v27 )
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 16LL))(v27);
      v139 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
      if ( v139 )
        v200 -= 16 * v139;
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
      return (unsigned int)v86;
    }
    v198 = 0x28003F800000LL;
    v188 = v68;
    v189 = v69;
    v191 = v70;
    v192 = v71;
    v88 = *(float *)(v172 + 8 * v171 + 8);
    v89 = *(_DWORD *)(v172 + 8 * v171 + 12);
    v195 = v74;
    v196 = LODWORD(v73);
    v190 = 0LL;
    v193 = 0LL;
    v194 = 1065353216LL;
    v197 = 0;
    BYTE4(v198) = 8;
    CBatchCommand::InitializeForRendering(
      (__int64)v83,
      (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v186,
      v89,
      v88,
      (__int64)&v188,
      0);
    v90 = v144[0];
    v91 = v170;
    v92 = v171;
    *((_DWORD *)v144[0] + 24) = 1;
    *(_QWORD *)((char *)v90 + 100) = *(_QWORD *)((char *)v52 + 20);
    *((_DWORD *)v90 + 27) = *((_DWORD *)v52 + 7);
    v93 = v176;
    *((_OWORD *)v90 + 7) = *v176;
    *((_OWORD *)v90 + 8) = v93[1];
    *((_OWORD *)v90 + 9) = v93[2];
    *((_OWORD *)v90 + 10) = v93[3];
    *((_DWORD *)v90 + 44) = *((_DWORD *)v93 + 16);
    v94 = *(struct CHwLightCollectionBuffer **)(v172 + 8 * v92 + 16);
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v91 + 16), v95, v96);
    appended = CD2DContext::EnsureDrawListBatch((CD2DContext *)(v91 + 16), v94, 0LL);
    if ( appended < 0 )
    {
      v155 = 20;
      v128 = 519;
LABEL_106:
      MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, appended, v128, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)appended,
        v143);
      if ( v144[0] )
        std::default_delete<CBatchCommand>::operator()(v129, v144[0]);
      if ( v46 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v46 + 8LL))(v46);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
      CDrawingContext::PopLayer(v149);
      if ( v27 )
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 16LL))(v27);
      v130 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
      if ( v130 )
        v200 -= 16 * v130;
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
      return (unsigned int)appended;
    }
    appended = CDrawListEntryBatch::AppendRenderCommand(*(_QWORD *)(v91 + 152), v144);
    if ( appended < 0 )
    {
      v128 = 522;
      goto LABEL_106;
    }
    if ( v144[0] )
      CBatchCommand::`scalar deleting destructor'(v144[0]);
LABEL_74:
    v52 = (_QWORD *)*v52;
    v75 = v165;
  }
  v158 = (CSurfaceDrawListBrush **)&v147;
  *((_QWORD *)&v178 + 1) = &v188;
  v98 = *v75;
  *(_QWORD *)&v178 = 1LL;
  v147 = 0LL;
  v196 = 1;
  LODWORD(v190) = 0;
  v189 = (float)(v69 * v153) + (float)(v68 * 0.0);
  v192 = 0.0;
  DWORD2(v193) = 1065353216;
  v188 = (float)(v68 * v169) + (float)(v69 * 0.0);
  v159 = 0LL;
  LOBYTE(v160) = 1;
  *((float *)&v190 + 1) = (float)(v70 * v169) + (float)(v71 * 0.0);
  v191 = (float)(v71 * v153) + (float)(v70 * 0.0);
  *(float *)&v193 = (float)((float)(v74 * v169) + (float)(v73 * 0.0)) + (float)(0.0 - (float)(v169 * 0.0));
  *((float *)&v193 + 3) = (float)(v55 + 0.5) * v169;
  *((float *)&v193 + 1) = (float)((float)(v73 * v153) + (float)(v74 * 0.0)) + (float)(0.0 - (float)(v153 * 0.0));
  *((float *)&v194 + 1) = (float)(v56 - 0.5) * v169;
  *(float *)&v194 = v153 * 0.5;
  v186 = v178;
  v195 = (float)(v62 - 0.5) * v153;
  CCpuClipAntialiasSink::CreateUVData(v98, 1, (_DWORD)v151, 2, 1, (__int64)&v186, (__int64)&v159);
  v99 = v165;
  v100 = (CBatchCommand *)(v165 + 1);
  if ( (_BYTE)v160 )
  {
    v100 = v152;
    v101 = (void **)*v158;
    *v158 = v159;
    if ( v101 )
    {
      std::unique_ptr<D2D_POINT_2F [0]>::~unique_ptr<D2D_POINT_2F [0]>(v101 + 2);
      operator delete(v101, 0x18uLL);
      v100 = (CBatchCommand *)(v99 + 1);
    }
  }
  memset_0(&v179, 0, 0x58uLL);
  v180 = 4;
  v179 = v46;
  v185 = 1;
  v102 = *(_QWORD *)v147;
  v181 = *v99;
  v184 = v102;
  v144[0] = 0LL;
  v103 = *((_DWORD *)v151 + 2);
  v182 = *(_QWORD *)v151;
  v183 = v103;
  v104 = CCpuClipAntialiasDrawListEntry::Create((__int64)&v179, (__int64 *)&v147, v144);
  v105 = v104;
  if ( v104 >= 0 )
  {
    v106 = (CBatchCommand **)detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
                               v100,
                               0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v100 + 1) - *(_QWORD *)v100) >> 3),
                               1LL);
    v107 = v144[0];
    v108 = v106;
    *v106 = v144[0];
    if ( v107 )
      CMILRefCountImpl::AddReference((CBatchCommand *)((char *)v107 + 8));
    v109 = v156;
    v110 = 0LL;
    v108[1] = (CBatchCommand *)1065353216;
    v108[2] = 0LL;
    v108[3] = 0LL;
    *((_WORD *)v108 + 16) = 1;
    v111 = (_QWORD *)v109[1];
    *v111 = v47;
    v47[1] = v111;
    do
    {
      v112 = (_QWORD *)*v109;
      operator delete(v109, 0x20uLL);
      v110 = (CBatchCommand *)((char *)v110 + 1);
      v109 = v112;
    }
    while ( v112 != v47 );
    v113 = v150;
    v144[0] = v110;
    v27 = v148;
    v150[1] -= v144[0];
    v114 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v100 + 1) - *(_QWORD *)v100) >> 3) - 1;
    if ( v113[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("list too long");
    v115 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    v116 = v151;
    v44 = v150;
    v45 = LODWORD(v145[0]) + 1;
    *((_DWORD *)v115 + 4) = v114;
    *(_QWORD *)(v115 + 20) = *(_QWORD *)v116;
    *((float *)v115 + 7) = v116[2];
    ++v44[1];
    v117 = (_QWORD *)v47[1];
    *(_QWORD *)v115 = v47;
    *((_QWORD *)v115 + 1) = v117;
    v47[1] = v115;
    *v117 = v115;
    LODWORD(v145[0]) = v45;
    if ( v107 )
    {
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v107);
      v44 = v150;
      v45 = LODWORD(v145[0]);
    }
    v118 = v147;
    v21 = v154;
    v36 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v48 = _xmm;
    v5 = v173;
    if ( v147 )
    {
      std::unique_ptr<D2D_POINT_2F [0]>::~unique_ptr<D2D_POINT_2F [0]>((void **)v147 + 2);
      operator delete(v118, 0x18uLL);
      v44 = v150;
      v45 = LODWORD(v145[0]);
      v48 = _xmm;
    }
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v104,
    v142);
  if ( v144[0] )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v144[0]);
  if ( v147 )
    std::default_delete<CCpuClipAntialiasSink::UVData>::operator()();
  if ( v46 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v46 + 8LL))(v46);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v166);
  CDrawingContext::PopLayer(v149);
  if ( v27 )
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v27 + 16LL))(v27);
  v131 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
  if ( v131 )
    v200 -= 16 * v131;
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
  return v105;
}
