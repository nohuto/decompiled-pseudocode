/*
 * XREFs of ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1801482FC (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C3B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A9B0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x18007702C (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800D7C20 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800DA040 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180108A2C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180146CD0 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x180147A30 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x18014A2A0 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180170420 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x180187F20 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UD2D_POINT_2F@@U?$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@XZ @ 0x1801999B4 (--1-$unique_ptr@$$BY0A@UD2D_POINT_2F@@U-$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@X.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18019B4C0 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x1801B3630 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801DC714 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansio.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DC96C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ??R?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@@Z @ 0x1801E1BE0 (--R-$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@.c)
 *     ??1?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801FE4D8 (--1-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@deta.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
        __int64 a1,
        char *a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5)
{
  float v5; // xmm6_4
  __int64 v6; // r14
  char *v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  float v13; // xmm0_4
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r14
  bool v19; // al
  float v20; // xmm1_4
  float v21; // xmm12_4
  float v22; // xmm0_4
  float v23; // xmm12_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // edi
  CBatchCommand *v29; // r14
  void (__fastcall *v30)(CRenderTargetBitmap *, enum DXGI_ALPHA_MODE); // rax
  __int64 v31; // r8
  volatile signed __int32 *v32; // rdi
  __int64 (__fastcall *v33)(CMILRefCountImpl *); // rax
  int v34; // et0
  __int64 (__fastcall *v35)(volatile signed __int32 *, float **); // rax
  int *Size; // rax
  int v37; // ecx
  float v38; // xmm13_4
  __int64 (__fastcall *v39)(volatile signed __int32 *, __int64 *); // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  float v42; // xmm10_4
  float v43; // xmm11_4
  __int64 (__fastcall *v44)(volatile signed __int32 *, unsigned int *); // rax
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  float v48; // xmm6_4
  float v49; // xmm7_4
  _QWORD *v50; // rax
  __int64 v51; // rax
  CSurfaceDrawListBrush *v52; // rdi
  __int128 v53; // xmm0
  int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // esi
  int v57; // eax
  unsigned int v58; // edi
  _QWORD *v59; // rdx
  unsigned int v60; // r9d
  int v61; // xmm11_4
  __int64 v62; // r15
  _QWORD *v63; // rsi
  _QWORD *v64; // r8
  __int64 v65; // rcx
  float *v66; // rax
  _QWORD *v67; // rdi
  float *v68; // rbx
  float v69; // xmm7_4
  float v70; // xmm6_4
  float v71; // xmm8_4
  float v72; // xmm9_4
  float v73; // xmm10_4
  float v74; // xmm0_4
  float v75; // xmm3_4
  bool v76; // al
  float v77; // xmm14_4
  float v78; // xmm0_4
  int v79; // xmm6_4
  int v80; // xmm3_4
  float v81; // xmm7_4
  float v82; // xmm2_4
  float v83; // xmm8_4
  float v84; // xmm12_4
  float v85; // xmm13_4
  float v86; // xmm11_4
  float v87; // xmm0_4
  float v88; // xmm6_4
  float v89; // xmm7_4
  _QWORD *v90; // r10
  __int64 v91; // rax
  CCommonRenderingEffect *v92; // rcx
  __int64 (__fastcall *v93)(CBrushRenderingEffect *, struct CDrawingContext *); // rax
  int updated; // eax
  CBatchCommand *v95; // rbx
  __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  CBatchCommand *v99; // rcx
  float v100; // xmm3_4
  int v101; // r8d
  CBatchCommand *v102; // rcx
  __int64 v103; // rbx
  _OWORD *v104; // rax
  struct CHwLightCollectionBuffer *v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // r8
  int appended; // ebx
  __int64 v109; // rcx
  char *v110; // rdi
  char *v111; // rbx
  int v112; // eax
  int v113; // eax
  CBatchCommand **v114; // rax
  CBatchCommand *v115; // rdi
  CBatchCommand **v116; // rbx
  _QWORD *v117; // rcx
  CBatchCommand *v118; // r15
  _QWORD *v119; // rax
  _QWORD *v120; // rbx
  _QWORD *v121; // rcx
  unsigned __int64 v122; // rbx
  char *v123; // rax
  float *v124; // rcx
  _QWORD *v125; // rcx
  void *v126; // rdi
  __int64 v127; // rax
  int v129; // xmm0_4
  int v130; // xmm1_4
  int v131; // xmm0_4
  int v132; // xmm1_4
  int v133; // xmm0_4
  int v134; // xmm1_4
  unsigned int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rax
  _DWORD *v138; // rax
  __int64 v139; // rcx
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rax
  int v150; // [rsp+28h] [rbp-E0h]
  CBatchCommand *v151[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v152[4]; // [rsp+58h] [rbp-B0h] BYREF
  char *v153; // [rsp+68h] [rbp-A0h] BYREF
  void *v154; // [rsp+70h] [rbp-98h] BYREF
  __int64 v155; // [rsp+78h] [rbp-90h] BYREF
  __int64 v156; // [rsp+80h] [rbp-88h]
  _QWORD *v157; // [rsp+88h] [rbp-80h]
  float *v158; // [rsp+90h] [rbp-78h] BYREF
  char *v159; // [rsp+98h] [rbp-70h] BYREF
  float v160; // [rsp+A0h] [rbp-68h]
  float v161; // [rsp+A4h] [rbp-64h]
  unsigned int v162; // [rsp+A8h] [rbp-60h] BYREF
  void *v163[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v164; // [rsp+C0h] [rbp-48h]
  __int64 v165; // [rsp+C8h] [rbp-40h]
  __int128 v166; // [rsp+D8h] [rbp-30h] BYREF
  char v167; // [rsp+E8h] [rbp-20h]
  __int64 v168; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v169; // [rsp+100h] [rbp-8h]
  char v170; // [rsp+108h] [rbp+0h]
  float v171; // [rsp+110h] [rbp+8h]
  __int64 v172; // [rsp+118h] [rbp+10h]
  __int64 v173; // [rsp+120h] [rbp+18h]
  __int64 *v174; // [rsp+128h] [rbp+20h]
  _DWORD *v175; // [rsp+130h] [rbp+28h] BYREF
  _OWORD *v176; // [rsp+138h] [rbp+30h]
  __int128 v177; // [rsp+148h] [rbp+40h]
  __int64 v178; // [rsp+158h] [rbp+50h] BYREF
  int v179; // [rsp+160h] [rbp+58h]
  __int64 v180; // [rsp+188h] [rbp+80h]
  __int64 v181; // [rsp+190h] [rbp+88h]
  int v182; // [rsp+198h] [rbp+90h]
  __int64 v183; // [rsp+1A0h] [rbp+98h]
  char v184; // [rsp+1A9h] [rbp+A1h]
  __int128 v185; // [rsp+1B8h] [rbp+B0h] BYREF
  float v186; // [rsp+1C8h] [rbp+C0h]
  float v187; // [rsp+1CCh] [rbp+C4h]
  __int128 v188; // [rsp+1D0h] [rbp+C8h]
  __int64 v189; // [rsp+1E0h] [rbp+D8h]
  float v190; // [rsp+1E8h] [rbp+E0h]
  int v191; // [rsp+1ECh] [rbp+E4h]
  int v192; // [rsp+1F0h] [rbp+E8h]
  __int64 v193; // [rsp+1F4h] [rbp+ECh]
  __int128 v194; // [rsp+208h] [rbp+100h] BYREF
  __int64 v195; // [rsp+218h] [rbp+110h]
  int v196; // [rsp+220h] [rbp+118h]
  int v197; // [rsp+224h] [rbp+11Ch]
  int v198; // [rsp+228h] [rbp+120h]
  bool v199[8]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE *v200; // [rsp+240h] [rbp+138h]
  char *v201; // [rsp+248h] [rbp+140h]
  _BYTE v202[64]; // [rsp+250h] [rbp+148h] BYREF
  char v203; // [rsp+290h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v5 = 0.0;
  v164 = *((_QWORD *)a2 + 5);
  v6 = a1;
  v7 = a2;
  v8 = a5[1] - *a5;
  v177 = 0LL;
  v156 = *(_QWORD *)(a1 + 16) + 432LL * a3;
  *(_QWORD *)v199 = v202;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v8 >> 2);
  v200 = v202;
  v165 = a1;
  v201 = &v203;
  v157 = a4;
  v159 = a2;
  v174 = a5;
  if ( v9 )
  {
    v10 = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
                      v199,
                      0LL,
                      v9);
    *v10 = 0LL;
    qmemcpy(v10 + 1, v10, 8 * ((16 * v9 - 9) >> 3));
  }
  else
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      v199,
      0LL,
      0LL);
  }
  v11 = *a5;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2);
  if ( (v12 & 0x8000000000000000uLL) != 0LL )
    v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = 0;
  *(float *)&v154 = v13 + v13;
  if ( v12 )
  {
    v15 = *(_QWORD *)v199;
    v16 = 0LL;
    do
    {
      v17 = 2 * v16;
      CCpuClipAntialiasSink::CalcBoundingRect(*(_QWORD *)v156, 1LL, v11 + 12 * v16, v15 + 16 * v16);
      v15 = *(_QWORD *)v199;
      if ( v5 <= (float)(*(float *)(*(_QWORD *)v199 + 8 * v17 + 12) - *(float *)(*(_QWORD *)v199 + 8 * v17 + 4)) )
        v5 = *(float *)(*(_QWORD *)v199 + 8 * v17 + 12) - *(float *)(*(_QWORD *)v199 + 8 * v17 + 4);
      v11 = *a5;
      v16 = ++v14;
    }
    while ( v14 < 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2) );
    v7 = v159;
    v6 = v165;
  }
  v18 = v6 + 904;
  LODWORD(v153) = 0;
  v152[0] = 0.0;
  v176 = (_OWORD *)v18;
  v19 = CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)v18);
  v20 = *(float *)(v18 + 4);
  if ( v19 )
  {
    v21 = sqrtf_0((float)(v20 * v20) + (float)(*(float *)v18 * *(float *)v18));
    v22 = sqrtf_0((float)(*(float *)(v18 + 20) * *(float *)(v18 + 20)) + (float)(*(float *)(v18 + 16)
                                                                               * *(float *)(v18 + 16)));
    *(float *)&v153 = v21;
    v152[0] = v22;
  }
  else
  {
    LODWORD(v194) = *(_DWORD *)v18;
    DWORD2(v194) = *(_DWORD *)(v18 + 12);
    v129 = *(_DWORD *)(v18 + 20);
    *((float *)&v194 + 1) = v20;
    v130 = *(_DWORD *)(v18 + 16);
    LODWORD(v195) = v129;
    v131 = *(_DWORD *)(v18 + 48);
    HIDWORD(v194) = v130;
    v132 = *(_DWORD *)(v18 + 28);
    v196 = v131;
    v133 = *(_DWORD *)(v18 + 60);
    HIDWORD(v195) = v132;
    v134 = *(_DWORD *)(v18 + 52);
    v198 = v133;
    v197 = v134;
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v194, (float *)&v153, v152, 0LL);
    v22 = v152[0];
    v21 = *(float *)&v153;
  }
  v23 = fmaxf(v21, v22);
  v161 = v23;
  HIDWORD(v154) = ceilf_0(v23 * v5);
  v151[0] = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v151, v24, v25);
  v26 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v7 + 3) + 16LL))((_QWORD *)v7 + 3);
  LODWORD(v163[1]) = 40;
  v163[0] = "DWM CPU-clip antialias sink intermediate";
  v27 = CDrawingContext::PushOffScreenRenderingLayer(
          (__int64)v7,
          (struct CResourceTag *)v163,
          (unsigned int *)&v154,
          *(_DWORD *)(v26 + 8),
          1,
          v151);
  v28 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v27);
    if ( v151[0] )
      (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v151[0] + 16LL))(v151[0]);
    v142 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
    if ( v142 )
      v200 -= 16 * v142;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
    return v28;
  }
  v29 = v151[0];
  v30 = *(void (__fastcall **)(CRenderTargetBitmap *, enum DXGI_ALPHA_MODE))(*(_QWORD *)v151[0] + 96LL);
  if ( v30 == CRenderTargetBitmap::SetAlphaMode )
    CRenderTargetBitmap::SetAlphaMode(v151[0], DXGI_ALPHA_MODE_PREMULTIPLIED);
  else
    v30(v151[0], DXGI_ALPHA_MODE_PREMULTIPLIED);
  v168 = 0LL;
  v32 = (volatile signed __int32 *)((char *)v29 + 8);
  v170 = 0;
  if ( !v29 )
    v32 = 0LL;
  v169 = v32;
  if ( v32 )
  {
    v33 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v32 + 8LL);
    if ( v33 == CMILRefCountImpl::AddReference )
    {
      v34 = _InterlockedAdd(v32, 1u);
      if ( (v34 < 0) ^ __OFSUB__(v33, CMILRefCountImpl::AddReference) | (v34 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v150);
      v29 = v151[0];
      v32 = v169;
    }
    else if ( (char *)v33 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(v32, CDxHandleBitmapRealization::GetSize, v31);
    }
    else
    {
      ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(_QWORD, _QWORD)))v33)(
        v32,
        CDxHandleBitmapRealization::GetSize);
    }
    v35 = *(__int64 (__fastcall **)(volatile signed __int32 *, float **))(*(_QWORD *)v32 + 32LL);
    if ( (char *)v35 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (int *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v32, &v158);
    }
    else if ( (char *)v35 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (int *)CDxHandleBitmapRealization::GetSize(v32, &v158);
    }
    else
    {
      Size = (int *)v35(v32, &v158);
    }
    v37 = *Size;
  }
  else
  {
    v37 = 0;
  }
  v38 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v160 = 1.0 / (float)v37;
  if ( v32 )
  {
    v39 = *(__int64 (__fastcall **)(volatile signed __int32 *, __int64 *))(*(_QWORD *)v32 + 32LL);
    if ( (char *)v39 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      v40 = (_QWORD *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v32, &v155);
    }
    else if ( (char *)v39 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      v40 = (_QWORD *)CDxHandleBitmapRealization::GetSize(v32, &v155);
    }
    else
    {
      v40 = (_QWORD *)v39(v32, &v155);
    }
    v41 = HIDWORD(*v40);
  }
  else
  {
    LODWORD(v41) = 0;
  }
  v42 = *(float *)&v154;
  v43 = *((float *)&v154 + 1);
  v163[1] = v154;
  v163[0] = 0LL;
  v171 = 1.0 / (float)(int)v41;
  if ( v32 )
  {
    v44 = *(__int64 (__fastcall **)(volatile signed __int32 *, unsigned int *))(*(_QWORD *)v32 + 32LL);
    if ( (char *)v44 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      v45 = (unsigned __int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                  v32,
                                  &v162);
    }
    else if ( (char *)v44 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      v45 = (unsigned __int64 *)CDxHandleBitmapRealization::GetSize(v32, &v162);
    }
    else
    {
      v45 = (unsigned __int64 *)v44(v32, &v162);
    }
    v46 = *v45;
    v47 = HIDWORD(v46);
  }
  else
  {
    LODWORD(v46) = 0;
    LODWORD(v47) = 0;
  }
  memset((char *)&v185 + 4, 0, 12);
  v187 = 0.0;
  DWORD2(v188) = 1065353216;
  v48 = 1.0 / (float)(int)v46;
  *(float *)&v185 = v48;
  v49 = 1.0 / (float)(int)v47;
  v186 = v49;
  *(float *)&v188 = 0.0 - (float)(v48 * 0.0);
  *((float *)&v188 + 1) = 0.0 - (float)(v49 * 0.0);
  v50 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  if ( !v50 )
  {
    v52 = 0LL;
    goto LABEL_157;
  }
  LOWORD(v152[0]) = SamplerMode::k_ClampClampLinear;
  BYTE2(v152[0]) = 1;
  v51 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(
          (__int64)v50,
          (const struct CDrawListBitmap *)&v168,
          (__int64)v152,
          &v185,
          1);
  v52 = (CSurfaceDrawListBrush *)v51;
  if ( !v51 )
  {
LABEL_157:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)0x8007000ELL);
    if ( v52 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v147, v52);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
    CDrawingContext::PopLayer((CDrawingContext *)v7);
    if ( v29 )
      (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 16LL))(v29);
    v148 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
    if ( v148 )
      v200 -= 16 * v148;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
    return 2147942414LL;
  }
  v53 = *(_OWORD *)v163;
  *(_BYTE *)(v51 + 52) = 1;
  *(_DWORD *)(v51 + 48) = 50529027;
  *(_OWORD *)(v51 + 32) = v53;
  *(float *)(v51 + 120) = v48 * 0.0;
  *(float *)(v51 + 124) = v49 * 0.0;
  *(float *)(v51 + 128) = v48 * v42;
  *(float *)(v51 + 132) = v49 * v43;
  *(_QWORD *)&v166 = 1LL;
  v159 = (char *)v51;
  v155 = 0LL;
  *((_QWORD *)&v166 + 1) = &v159;
  v54 = CCommonRenderingEffectFactory::CreateRenderingEffect((__int64)v163, &v166, &v155);
  v56 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v54);
    std::default_delete<CSurfaceDrawListBrush>::operator()(v145, v52);
    if ( v155 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v155 + 8LL))(v155);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
    CDrawingContext::PopLayer((CDrawingContext *)v7);
    if ( v29 )
      (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 16LL))(v29);
    v146 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
    if ( v146 )
      v200 -= 16 * v146;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
    return v56;
  }
  else
  {
    CSurfaceDrawListBrush::`vector deleting destructor'(v52, 1, v55);
    v57 = CDrawingContext::ApplyRenderStateInternal((__m128 *)v7, 1);
    v58 = v57;
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v57);
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v155);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
      CDrawingContext::PopLayer((CDrawingContext *)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v151);
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(v199);
      return v58;
    }
    v59 = v157;
    v60 = 0;
    v61 = _xmm;
    v62 = v155;
    v152[0] = 0.0;
    v63 = (_QWORD *)*v157;
    v162 = 20;
    while ( 2 )
    {
      v63 = (_QWORD *)*v63;
LABEL_43:
      v64 = v63;
      v65 = *v174;
      if ( v60 < 0xAAAAAAAAAAAAAAABuLL * ((v174[1] - *v174) >> 2) )
      {
        v59 = (_QWORD *)*v59;
        if ( v63 != v59 )
        {
          v163[0] = v63;
          v66 = (float *)(v65 + 12LL * v60);
          v67 = v63;
          v158 = v66;
          while ( v63 != v59 && v66[2] > *((float *)v63 + 6) && *((float *)v63 + 7) > v66[1] )
            v63 = (_QWORD *)*v63;
          if ( v63 == v64 )
          {
            v59 = v157;
            continue;
          }
          v68 = (float *)(*(_QWORD *)v199 + 16LL * v60);
          v69 = v68[3];
          v70 = v68[1];
          v71 = v69 - v70;
          v72 = (float)(int)v60 + (float)(int)v60;
          v73 = v72 + v38;
          v74 = ceilf_0((float)(v69 - v70) * v23);
          v75 = *v68;
          v76 = 0;
          v195 = 0LL;
          v77 = v74;
          v194 = 0LL;
          if ( v75 == v72 && v70 == 0.0 && v68[2] == v73 )
            v76 = v69 == v74;
          if ( v76 )
          {
            LODWORD(v83) = _xmm;
            v89 = 0.0;
            LODWORD(v86) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
            LODWORD(v85) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
            v88 = 0.0;
            LODWORD(v84) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
          }
          else
          {
            v78 = v68[2] - v75;
            if ( v78 == 0.0 && v71 == 0.0 )
            {
              v88 = *((float *)&v195 + 1);
              v89 = *(float *)&v195;
              v86 = *((float *)&v194 + 3);
              v85 = *((float *)&v194 + 2);
              v84 = *((float *)&v194 + 1);
              LODWORD(v83) = v194;
            }
            else
            {
              v79 = LODWORD(v70) ^ v61;
              v80 = LODWORD(v75) ^ v61;
              v81 = (float)(v73 - v72) / v78;
              v82 = (float)(v77 - 0.0) / v71;
              v83 = v81 + 0.0;
              v84 = (float)(v82 * 0.0) + 0.0;
              v85 = (float)(v81 * 0.0) + 0.0;
              v86 = v82 + 0.0;
              v87 = *(float *)&v79 * 0.0;
              v88 = (float)((float)(*(float *)&v79 * v82) + (float)(*(float *)&v80 * 0.0)) + 0.0;
              v89 = (float)((float)(v81 * *(float *)&v80) + v87) + v72;
            }
          }
          v90 = (_QWORD *)v156;
          v159 = (char *)(v156 + 8);
          while ( 1 )
          {
            if ( v67 == v63 )
            {
              v109 = *v90;
              *(_QWORD *)&v166 = &v154;
              *((_QWORD *)&v177 + 1) = &v185;
              *(_QWORD *)&v177 = 1LL;
              v154 = 0LL;
              v191 = 1;
              v187 = 0.0;
              DWORD2(v188) = 1065353216;
              *(float *)&v185 = (float)(v83 * v160) + (float)(v84 * 0.0);
              *((_QWORD *)&v166 + 1) = 0LL;
              *(_QWORD *)((char *)&v185 + 4) = COERCE_UNSIGNED_INT((float)(v84 * v171) + (float)(v83 * 0.0));
              *((float *)&v185 + 3) = (float)(v85 * v160) + (float)(v86 * 0.0);
              v167 = 1;
              v186 = (float)(v86 * v171) + (float)(v85 * 0.0);
              *(float *)&v188 = (float)((float)(v89 * v160) + (float)(v88 * 0.0)) + (float)(0.0 - (float)(v160 * 0.0));
              *((float *)&v188 + 1) = (float)((float)(v88 * v171) + (float)(v89 * 0.0))
                                    + (float)(0.0 - (float)(v171 * 0.0));
              *(float *)&v189 = v171 * 0.5;
              *((float *)&v188 + 3) = (float)(v72 + 0.5) * v160;
              *((float *)&v189 + 1) = (float)(v73 - 0.5) * v160;
              v190 = (float)(v77 - 0.5) * v171;
              v194 = v177;
              CCpuClipAntialiasSink::CreateUVData(v109, 1, (_DWORD)v158, 2, 1, (__int64)&v194, (__int64)&v166 + 8);
              v110 = (char *)(v156 + 8);
              v153 = (char *)(v156 + 8);
              if ( v167 )
              {
                v111 = *(char **)v166;
                *(_QWORD *)v166 = *((_QWORD *)&v166 + 1);
                v153 = v159;
                v110 = v159;
                if ( v111 )
                {
                  std::unique_ptr<D2D_POINT_2F [0]>::~unique_ptr<D2D_POINT_2F [0]>(v111 + 16);
                  operator delete(v111, 0x18uLL);
                  v110 = (char *)(v156 + 8);
                  v153 = (char *)(v156 + 8);
                }
              }
              memset_0(&v178, 0, 0x58uLL);
              v179 = 4;
              v178 = v62;
              v184 = 1;
              v183 = *(_QWORD *)v154;
              v151[0] = 0LL;
              v180 = *(_QWORD *)v156;
              v112 = *((_DWORD *)v158 + 2);
              v181 = *(_QWORD *)v158;
              v182 = v112;
              v113 = CCpuClipAntialiasDrawListEntry::Create(&v178, &v154, v151);
              appended = v113;
              if ( v113 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1C9,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
                  (const char *)(unsigned int)v113);
                if ( v151[0] )
                  CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v151[0]);
                if ( v154 )
                  std::default_delete<CCpuClipAntialiasSink::UVData>::operator()();
                goto LABEL_114;
              }
              v114 = (CBatchCommand **)detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
                                         v110,
                                         0xCCCCCCCCCCCCCCCDuLL
                                       * ((__int64)(*((_QWORD *)v110 + 1) - *(_QWORD *)v110) >> 3),
                                         1LL);
              v115 = v151[0];
              v116 = v114;
              *v114 = v151[0];
              if ( v115 )
                CMILRefCountImpl::AddReference((CBatchCommand *)((char *)v115 + 8));
              v117 = v163[0];
              v118 = 0LL;
              v116[1] = (CBatchCommand *)1065353216;
              v116[2] = 0LL;
              v116[3] = 0LL;
              *((_WORD *)v116 + 16) = 1;
              v119 = (_QWORD *)v117[1];
              *v119 = v63;
              v63[1] = v119;
              do
              {
                v120 = (_QWORD *)*v117;
                operator delete(v117, 0x20uLL);
                v118 = (CBatchCommand *)((char *)v118 + 1);
                v117 = v120;
              }
              while ( v120 != v63 );
              v121 = v157;
              v151[0] = v118;
              v62 = v155;
              v157[1] -= v151[0];
              v122 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v153 + 1) - *(_QWORD *)v153) >> 3) - 1;
              if ( v121[1] == 0x7FFFFFFFFFFFFFFLL )
                std::_Xlength_error("list too long");
              v123 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
              v124 = v158;
              v59 = v157;
              v60 = LODWORD(v152[0]) + 1;
              *((_DWORD *)v123 + 4) = v122;
              *(_QWORD *)(v123 + 20) = *(_QWORD *)v124;
              *((float *)v123 + 7) = v124[2];
              ++v59[1];
              v125 = (_QWORD *)v63[1];
              *(_QWORD *)v123 = v63;
              *((_QWORD *)v123 + 1) = v125;
              v63[1] = v123;
              *v125 = v123;
              LODWORD(v152[0]) = v60;
              if ( v115 )
              {
                CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v115);
                v59 = v157;
                v60 = LODWORD(v152[0]);
              }
              v126 = v154;
              v23 = v161;
              v38 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              v61 = _xmm;
              if ( v154 )
              {
                std::unique_ptr<D2D_POINT_2F [0]>::~unique_ptr<D2D_POINT_2F [0]>((char *)v154 + 16);
                operator delete(v126, 0x18uLL);
                v59 = v157;
                v60 = LODWORD(v152[0]);
                v61 = _xmm;
              }
              goto LABEL_43;
            }
            v91 = *((unsigned int *)v67 + 4);
            v165 = v90[1];
            v159 = (char *)(v90 + 1);
            v173 = 5 * v91;
            *(_QWORD *)&v194 = *(_QWORD *)(v165 + 40 * v91);
            v92 = *(CCommonRenderingEffect **)(v194 + 24);
            v93 = *(__int64 (__fastcall **)(CBrushRenderingEffect *, struct CDrawingContext *))(*(_QWORD *)v92 + 48LL);
            if ( v93 == CCommonRenderingEffect::UpdateBitmaps )
              updated = CCommonRenderingEffect::UpdateBitmaps(v92, (struct CDrawingContext *)v7);
            else
              updated = v93 == CBrushRenderingEffect::UpdateBitmaps
                      ? CBrushRenderingEffect::UpdateBitmaps(v92, (struct CDrawingContext *)v7)
                      : v93(v92, (struct CDrawingContext *)v7);
            if ( updated >= 0 )
              break;
LABEL_74:
            v67 = (_QWORD *)*v67;
            v90 = (_QWORD *)v156;
          }
          v95 = 0LL;
          v96 = v164 + 64;
          v151[0] = 0LL;
          v172 = v164 + 64;
          LODWORD(v153) = 0;
          if ( *(_DWORD *)(v164 + 88) )
            goto LABEL_64;
          v138 = MIDL_user_allocate(0xB8uLL);
          *(_QWORD *)&v166 = v138;
          if ( v138 )
          {
            v139 = v172;
            *v138 = 0;
            v175 = v138;
            v140 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v139, &v175, 1LL);
            LODWORD(v153) = v140;
            if ( v140 >= 0 )
            {
              v96 = v172;
LABEL_64:
              v97 = *(_DWORD *)(v96 + 32);
              v98 = (unsigned int)(*(_DWORD *)(v96 + 24) - 1);
              if ( v97 >= (unsigned int)v98 )
                v97 = *(_DWORD *)(v96 + 24) - 1;
              v95 = *(CBatchCommand **)(*(_QWORD *)v96 + 8 * v98);
              *(_DWORD *)(v96 + 32) = v97;
              *(_DWORD *)(v96 + 24) = v98;
              goto LABEL_67;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v140, 0x160u, 0LL);
            std::default_delete<CBatchCommand>::operator()(v141, (CBatchCommand *)v166);
          }
          else
          {
            LODWORD(v153) = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15Eu, 0LL);
          }
LABEL_67:
          v99 = v151[0];
          v151[0] = v95;
          if ( v99 )
          {
            CBatchCommand::`scalar deleting destructor'(v99);
            v95 = v151[0];
          }
          if ( (int)v153 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x195,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
              (const char *)(unsigned int)v153);
            if ( v151[0] )
              std::default_delete<CBatchCommand>::operator()(v143, v151[0]);
            if ( v62 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
            CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
            CDrawingContext::PopLayer((CDrawingContext *)v7);
            if ( v29 )
              (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 16LL))(v29);
            v144 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
            if ( v144 )
              v200 -= 16 * v144;
            detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
            return (unsigned int)v153;
          }
          v193 = 0x28003F800000LL;
          v185 = __PAIR64__(LODWORD(v84), LODWORD(v83));
          v186 = v85;
          v187 = v86;
          v100 = *(float *)(v165 + 8 * v173 + 8);
          v101 = *(_DWORD *)(v165 + 8 * v173 + 12);
          v190 = v89;
          v191 = LODWORD(v88);
          v188 = 0LL;
          v189 = 1065353216LL;
          v192 = 0;
          BYTE4(v193) = 8;
          CBatchCommand::InitializeForRendering(
            (__int64)v95,
            (__int64 (__fastcall ***)(CMILRefCountImpl *))v194,
            v101,
            v100,
            (__int64)&v185,
            0);
          v102 = v151[0];
          v103 = v173;
          *((_DWORD *)v151[0] + 24) = 1;
          *(_QWORD *)((char *)v102 + 100) = *(_QWORD *)((char *)v67 + 20);
          *((_DWORD *)v102 + 27) = *((_DWORD *)v67 + 7);
          v104 = v176;
          *((_OWORD *)v102 + 7) = *v176;
          *((_OWORD *)v102 + 8) = v104[1];
          *((_OWORD *)v102 + 9) = v104[2];
          *((_OWORD *)v102 + 10) = v104[3];
          *((_DWORD *)v102 + 44) = *((_DWORD *)v104 + 16);
          v105 = *(struct CHwLightCollectionBuffer **)(v165 + 8 * v103 + 16);
          CD2DContext::EnsureBeginDraw((CD2DContext *)(v164 + 16), v106, v107);
          appended = CD2DContext::EnsureDrawListBatch((CD2DContext *)(v164 + 16), v105, 0LL);
          if ( appended < 0 )
          {
            v162 = 20;
            v135 = 519;
LABEL_108:
            MilInstrumentationCheckHR_MaybeFailFast(v162, 0LL, 0, appended, v135, 0LL);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A5,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
              (const char *)(unsigned int)appended);
            if ( v151[0] )
              std::default_delete<CBatchCommand>::operator()(v136, v151[0]);
LABEL_114:
            if ( v62 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
            CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
            CDrawingContext::PopLayer((CDrawingContext *)v7);
            if ( v29 )
              (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 16LL))(v29);
            v137 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
            if ( v137 )
              v200 -= 16 * v137;
            detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
            return (unsigned int)appended;
          }
          appended = CDrawListEntryBatch::AppendRenderCommand(*(_QWORD *)(v164 + 152), v151);
          if ( appended < 0 )
          {
            v135 = 522;
            goto LABEL_108;
          }
          if ( v151[0] )
            CBatchCommand::`scalar deleting destructor'(v151[0]);
          goto LABEL_74;
        }
      }
      break;
    }
    if ( v62 )
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v62 + 8LL))(v62, v59, v63);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v168);
    CDrawingContext::PopLayer((CDrawingContext *)v7);
    if ( g_LockAndReadCpuClipAntialiasSinkTexture )
    {
      v149 = (*(__int64 (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 144LL))(v29);
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v149 + 112LL))(v149, (_QWORD *)v7 + 3);
    }
    if ( v29 )
      (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v29 + 16LL))(v29);
    v127 = (__int64)&v200[-*(_QWORD *)v199] >> 4;
    if ( v127 )
      v200 -= 16 * v127;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v199);
    return 0LL;
  }
}
