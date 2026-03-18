/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2940 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180012998 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800263E4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002AA80 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18002AF80 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D720 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18007D940 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007DEF0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D23E0 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x1800D2520 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801069B0 (-IsOfType@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E300 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014B8B4 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18014C0DC (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18014C1CC (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18014C2BC (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x18014C318 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ??$emplace_back@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXIIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801DA638 (--$emplace_back@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_faca.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E0420 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x1801FBCC8 (-GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z.c)
 *     ??$?8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z @ 0x1802068E0 (--$-8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RenderContent(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CD3DDevice *(__fastcall *a3)(CD2DResource *this))
{
  bool v3; // sf
  CDrawingContext *v4; // rsi
  unsigned int v5; // r12d
  __int64 v7; // r13
  char v8; // al
  bool v9; // zf
  struct _LIST_ENTRY *v10; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v12; // rbx
  struct _LIST_ENTRY *v13; // rdi
  CVisual *v14; // r12
  CDrawListEntry *v15; // rbx
  struct _LIST_ENTRY *v16; // rdi
  int v17; // r15d
  struct _LIST_ENTRY **v18; // rax
  struct _LIST_ENTRY *v19; // rdi
  __int64 *v20; // r13
  CDrawListEntry *v21; // rax
  volatile signed __int32 *v22; // rsi
  struct CD3DDevice *(__fastcall *v23)(CD2DContext *__hidden); // r9
  struct _LIST_ENTRY *Blink; // r12
  struct CD3DDevice *(__fastcall *v25)(CD2DContext *__hidden); // rax
  struct CD3DDevice *Device; // rax
  __int64 v27; // rdi
  CDrawListEntry *v28; // rdi
  int v29; // esi
  int v30; // esi
  CDrawListEntry *v31; // rdi
  CDrawListCache *(__fastcall *v32)(CDrawListCache *, char); // rax
  __int64 v33; // rax
  __int64 (__fastcall *v34)(CBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *); // r10
  float v35; // xmm0_4
  char (__fastcall *v36)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  CEffectBrush *v37; // rdi
  char v38; // si
  char (__fastcall *v39)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char v40; // al
  __int64 v41; // rcx
  bool v42; // al
  int v43; // eax
  int v44; // edi
  int v45; // edi
  int v46; // edi
  CDrawListCache *(__fastcall *v47)(CDrawListCache *, char); // rax
  __int64 (__fastcall *v49)(struct CBrushRenderingGraph **, char); // rax
  int v50; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v53; // rax
  struct _LIST_ENTRY *v54; // r10
  struct _LIST_ENTRY *j; // rcx
  float v56; // xmm0_4
  float v57; // xmm1_4
  int v58; // eax
  bool (__fastcall *v59)(CVisual *); // rax
  char HasNonEmptyContent; // al
  __int64 v61; // r8
  const char *v62; // rdi
  bool (__fastcall *v63)(__int64, int); // rax
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // r8
  bool (__fastcall *v67)(__int64, int); // rax
  bool v68; // al
  __int64 v69; // rcx
  const char *v70; // rsi
  bool v71; // r15
  const char *v72; // rbx
  bool (__fastcall *v73)(__int64, int); // rax
  char v74; // al
  const struct D2D_SIZE_F *v75; // r8
  int v76; // eax
  __int64 v77; // rcx
  bool (__fastcall *v78)(__int64, int); // rax
  char v79; // al
  __int64 v80; // rcx
  bool (__fastcall *v81)(__int64, int); // rax
  char v82; // al
  __int64 v83; // rcx
  bool (__fastcall *v84)(__int64, int); // rax
  char v85; // al
  __int64 v86; // rcx
  bool (__fastcall *v87)(__int64, int); // rax
  char v88; // al
  __int64 v89; // rcx
  bool (__fastcall *v90)(__int64, int); // rax
  char v91; // al
  char IsReadyToDraw; // al
  __int64 v93; // rcx
  bool (__fastcall *v94)(__int64, int); // rax
  char v95; // al
  __int64 v96; // rcx
  bool (__fastcall *v97)(__int64, int); // rax
  char v98; // al
  __int64 v99; // r8
  int v100; // xmm0_4
  int v101; // xmm1_4
  int v102; // xmm0_4
  unsigned int v103; // xmm1_4
  __int64 v104; // rax
  CVisual *WindowBackgroundTreatmentVisual; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  int v107; // eax
  CDrawListEntry *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdi
  const char *v111; // rbx
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  DwmDbg::DbgString *v113; // rbx
  DwmDbg::DbgString *v114; // rax
  int v115; // [rsp+20h] [rbp-E0h]
  bool v116; // [rsp+30h] [rbp-D0h] BYREF
  bool v117; // [rsp+31h] [rbp-CFh] BYREF
  char v118; // [rsp+32h] [rbp-CEh] BYREF
  char v119[5]; // [rsp+33h] [rbp-CDh] BYREF
  unsigned int v120; // [rsp+38h] [rbp-C8h] BYREF
  CDrawListEntry *v121; // [rsp+40h] [rbp-C0h] BYREF
  CDrawingContext *v122; // [rsp+48h] [rbp-B8h] BYREF
  CDrawListEntry *v123; // [rsp+50h] [rbp-B0h] BYREF
  void *v124; // [rsp+58h] [rbp-A8h] BYREF
  CVisual *v125; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v126; // [rsp+68h] [rbp-98h] BYREF
  float v127; // [rsp+70h] [rbp-90h]
  float v128; // [rsp+74h] [rbp-8Ch]
  __int64 v129; // [rsp+78h] [rbp-88h] BYREF
  __int64 v130; // [rsp+80h] [rbp-80h] BYREF
  char *v131; // [rsp+88h] [rbp-78h] BYREF
  char *v132; // [rsp+90h] [rbp-70h] BYREF
  __int64 v133[3]; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+B0h] [rbp-50h] BYREF
  CVisual **v135; // [rsp+C0h] [rbp-40h]
  __int64 v136; // [rsp+C8h] [rbp-38h]
  unsigned int *v137; // [rsp+D0h] [rbp-30h]
  __int64 v138; // [rsp+D8h] [rbp-28h]
  CDrawListEntry **v139; // [rsp+E0h] [rbp-20h]
  __int64 v140; // [rsp+E8h] [rbp-18h]
  void **v141; // [rsp+F0h] [rbp-10h]
  __int64 v142; // [rsp+F8h] [rbp-8h]
  CDrawingContext **v143; // [rsp+100h] [rbp+0h]
  __int64 v144; // [rsp+108h] [rbp+8h]
  const char *v145; // [rsp+110h] [rbp+10h]
  int v146; // [rsp+118h] [rbp+18h]
  int v147; // [rsp+11Ch] [rbp+1Ch]
  const char *v148; // [rsp+120h] [rbp+20h]
  int v149; // [rsp+128h] [rbp+28h]
  int v150; // [rsp+12Ch] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = *((char *)this + 106) < 0;
  v4 = a2;
  v5 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v120 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v7 = -1LL;
  v122 = a2;
  if ( v3 )
  {
    if ( *((_BYTE *)g_pComposition + 6490) )
      *((_BYTE *)a2 + 7983) = 1;
    else
      *((_BYTE *)a2 + 7980) = 1;
    if ( *(_BYTE *)(*((_QWORD *)this + 3) + 6490LL) )
    {
      *(_BYTE *)a3 = 1;
      goto LABEL_89;
    }
  }
  if ( *((_QWORD *)this + 32) )
  {
    v8 = 0;
    v9 = (*((_BYTE *)this + 107) & 1) == 0;
    v118 = 0;
    if ( !v9 )
    {
      if ( dword_180404D50 )
      {
        v111 = *(const char **)CVisualTreePath::GetDebugString(*((_QWORD *)a2 + 996), &v124);
        BackdropVisualImage = CVisual::GetBackdropVisualImage(this, *((const struct CVisualTreePath **)v4 + 996));
        v113 = DwmDbg::DbgString::DbgString(&v131, "pBVI=0x%p, bviPath=[%s]", BackdropVisualImage, v111);
        v114 = DwmDbg::DbgString::DbgString(&v132, "Visual-HasBackdropInput-ValidateBVI");
        DwmDbg::Backdrops::LogBrushEtwEvent(v114, this, v113);
        if ( v124 )
          operator delete(v124);
      }
      v56 = *((float *)this + 36) + 0.0;
      v57 = *((float *)this + 37) + 0.0;
      v118 = 1;
      v126 = 0LL;
      v127 = v56;
      v128 = v57;
      v58 = CDrawingContext::ValidateBVIEffectInputForRender(
              (__int64)v4,
              (struct IRenderTargetBitmap *)&v126,
              (bool *)&v118);
      if ( v58 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x653,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          (const char *)(unsigned int)v58);
        goto LABEL_16;
      }
      v8 = v118;
    }
    if ( (*((_BYTE *)this + 107) & 4) != 0 )
    {
      WindowBackgroundTreatmentVisual = CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(this);
      if ( !WindowBackgroundTreatmentVisual
        || (WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(WindowBackgroundTreatmentVisual)) == 0LL )
      {
LABEL_6:
        v10 = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 993);
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *)))v10->Flink[11].Blink)(
               v10,
               a2,
               a3) )
        {
          p_Blink = (struct _LIST_ENTRY **)((char *)this + 328);
LABEL_8:
          if ( p_Blink )
          {
            v12 = p_Blink[2];
            v13 = p_Blink[3];
            while ( v12 != v13 )
            {
              if ( !LODWORD(v12->Flink) && !HIDWORD(v12->Flink) )
                CDrawListCache::Invalidate((CDrawListCache *)v12->Blink);
              ++v12;
            }
          }
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(this);
          if ( TreeDataListHead )
          {
            for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
            {
              p_Blink = &i[-22].Blink;
              if ( i[2].Flink == v10 )
                goto LABEL_8;
            }
          }
        }
LABEL_16:
        v14 = (CVisual *)*((_QWORD *)this + 32);
        v15 = 0LL;
        v125 = v14;
        if ( *((_BYTE *)v4 + 8067) )
        {
          v16 = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 993);
          v17 = -2003292412;
          v121 = (CDrawListEntry *)*((_QWORD *)v4 + 4);
          if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *)))v16->Flink[11].Blink)(
                 v16,
                 a2,
                 a3) )
          {
            v18 = (struct _LIST_ENTRY **)((char *)this + 328);
LABEL_19:
            if ( !v18 )
              goto LABEL_94;
            v19 = v18[2];
            v20 = (__int64 *)(v18 + 2);
            v21 = (CDrawListEntry *)v18[3];
            a2 = (struct CDrawingContext *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice;
            v17 = 0;
            v123 = v21;
            v22 = 0LL;
            a3 = CD2DResource::GetDevice;
            v23 = CD2DContext::GetDevice;
            while ( 1 )
            {
              if ( v19 == (struct _LIST_ENTRY *)v21 )
              {
LABEL_31:
                v121 = (CDrawListEntry *)v22;
                if ( v22 )
                {
                  if ( _InterlockedAdd(v22 + 2, 1u) <= 0 )
                    wil::details::in1diag3::Log_Hr(
                      retaddr,
                      (void *)0x18,
                      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                      (const char *)0x8007029CLL,
                      v115);
                  v15 = v121;
LABEL_35:
                  v27 = *v20;
                  if ( (unsigned __int64)((v20[1] - *v20) >> 4) > 1 )
                  {
LABEL_240:
                    a2 = g_pComposition;
                    while ( v27 != v20[1] )
                    {
                      v108 = *(CDrawListEntry **)(v27 + 8);
                      if ( v108 != v15 )
                      {
                        v109 = 0LL;
                        if ( g_pComposition )
                          v109 = *((_QWORD *)g_pComposition + 111);
                        if ( (unsigned __int64)(v109 - *((_QWORD *)v108 + 2)) > 0x1E )
                        {
                          v110 = (v27 - *v20) >> 4;
                          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
                            v20,
                            v110,
                            1LL);
                          v27 = *v20 + 16 * v110;
                          goto LABEL_240;
                        }
                      }
                      v27 += 16LL;
                    }
                  }
                  v28 = 0LL;
                  v121 = 0LL;
                }
                else
                {
                  v121 = 0LL;
                  v107 = CDrawListCache::InternalCreate(0, &v121);
                  v17 = v107;
                  if ( v107 >= 0 )
                  {
                    v15 = v121;
                    if ( !*((_BYTE *)v121 + 85) && *((_QWORD *)v121 + 3) )
                    {
                      v123 = v121;
                      CMILRefCountImpl::AddReference((CDrawListEntry *)((char *)v121 + 8));
                      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
                        v20,
                        0LL,
                        0LL,
                        &v123);
                    }
                    else
                    {
                      CMILRefCountImpl::AddReference((CDrawListEntry *)((char *)v121 + 8));
                      v129 = *v20;
                      v130 = 0LL;
                      v123 = v15;
                      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
                        (detail::liberal_expansion_policy *)v20,
                        v133,
                        &v129,
                        0,
                        0,
                        &v123);
                      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v130);
                    }
                    goto LABEL_35;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v107, 0x1Cu, 0LL);
                  v28 = v121;
                }
                v7 = -1LL;
                if ( v28 )
                {
                  v29 = _InterlockedDecrement((volatile signed __int32 *)v28 + 2);
                  if ( v29 < -1 )
                    wil::details::in1diag3::Log_Hr(
                      retaddr,
                      (void *)0x26,
                      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                      (const char *)0x8007029CLL,
                      v115);
                  if ( !v29 )
                  {
                    if ( _InterlockedAdd((volatile signed __int32 *)v28 + 2, 1u) <= 0 )
                      wil::details::in1diag3::Log_Hr(
                        retaddr,
                        (void *)0x18,
                        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                        (const char *)0x8007029CLL,
                        v115);
                    (*(void (__fastcall **)(CDrawListEntry *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *), struct CD3DDevice *(__fastcall *)(CD2DContext *__hidden)))(*(_QWORD *)v121 + 24LL))(
                      v121,
                      a2,
                      a3,
                      v23);
                    v30 = _InterlockedDecrement((volatile signed __int32 *)v28 + 2);
                    if ( v30 < -1 )
                      wil::details::in1diag3::Log_Hr(
                        retaddr,
                        (void *)0x26,
                        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                        (const char *)0x8007029CLL,
                        v115);
                    if ( !v30 )
                    {
                      if ( _InterlockedDecrement((volatile signed __int32 *)v28 + 2) < -1 )
                        wil::details::in1diag3::Log_Hr(
                          retaddr,
                          (void *)0x26,
                          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                          (const char *)0x8007029CLL,
                          v115);
                      v31 = v121;
                      v32 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v121 + 16LL);
                      if ( v32 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
                      {
                        CReconstructableDrawListEntry::~CReconstructableDrawListEntry(v121);
                        CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(v31);
                      }
                      else if ( v32 == CDrawListEntry::`scalar deleting destructor' )
                      {
                        CDrawListEntry::~CDrawListEntry(v121);
                        CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(v31);
                      }
                      else if ( v32 == CDrawListCache::`scalar deleting destructor' )
                      {
                        CDrawListCache::~CDrawListCache(v121);
                        CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(v31);
                      }
                      else
                      {
                        v32(v121, 1);
                      }
                    }
                  }
                }
                if ( v17 >= 0 )
                {
                  v14 = v125;
                  v4 = v122;
                  goto LABEL_94;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x71Au, 0LL);
LABEL_95:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v17, 0x1036u, 0LL);
LABEL_73:
                if ( v15 )
                {
                  v45 = _InterlockedDecrement((volatile signed __int32 *)v15 + 2);
                  if ( v45 < -1 )
                    wil::details::in1diag3::Log_Hr(
                      retaddr,
                      (void *)0x26,
                      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                      (const char *)0x8007029CLL,
                      v115);
                  if ( !v45 )
                  {
                    if ( _InterlockedAdd((volatile signed __int32 *)v15 + 2, 1u) <= 0 )
                      wil::details::in1diag3::Log_Hr(
                        retaddr,
                        (void *)0x18,
                        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                        (const char *)0x8007029CLL,
                        v115);
                    (*(void (__fastcall **)(CDrawListEntry *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *)))(*(_QWORD *)v15 + 24LL))(
                      v15,
                      a2,
                      a3);
                    v46 = _InterlockedDecrement((volatile signed __int32 *)v15 + 2);
                    if ( v46 < -1 )
                      wil::details::in1diag3::Log_Hr(
                        retaddr,
                        (void *)0x26,
                        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                        (const char *)0x8007029CLL,
                        v115);
                    if ( !v46 )
                    {
                      if ( _InterlockedDecrement((volatile signed __int32 *)v15 + 2) < -1 )
                        wil::details::in1diag3::Log_Hr(
                          retaddr,
                          (void *)0x26,
                          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                          (const char *)0x8007029CLL,
                          v115);
                      v47 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v15 + 16LL);
                      if ( v47 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
                      {
                        CReconstructableDrawListEntry::~CReconstructableDrawListEntry(v15);
                        CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(v15);
                      }
                      else if ( v47 == CDrawListEntry::`scalar deleting destructor' )
                      {
                        CDrawListEntry::~CDrawListEntry(v15);
                        CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(v15);
                      }
                      else if ( v47 == CDrawListCache::`scalar deleting destructor' )
                      {
                        CDrawListCache::~CDrawListCache(v15);
                        CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(v15);
                      }
                      else
                      {
                        v47(v15, 1);
                      }
                    }
                  }
                }
                v5 = v120;
                goto LABEL_89;
              }
              if ( !LODWORD(v19->Flink) && !HIDWORD(v19->Flink) )
                break;
LABEL_271:
              ++v19;
            }
            Blink = v19->Blink;
            v25 = *(struct CD3DDevice *(__fastcall **)(CD2DContext *__hidden))(*(_QWORD *)v121 + 40LL);
            if ( (char *)v25 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
            {
              Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(
                                              v121,
                                              IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                              CD2DResource::GetDevice,
                                              CD2DContext::GetDevice);
            }
            else if ( v25 == CD2DResource::GetDevice )
            {
              Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v121 + 5) + 24LL));
            }
            else
            {
              if ( v25 == CD2DContext::GetDevice )
              {
                Device = (CDrawListEntry *)((char *)v121 - 16);
LABEL_27:
                if ( !*((_QWORD *)Device + 72) || BYTE5(Blink[5].Flink) || !Blink[1].Blink )
                {
                  v22 = (volatile signed __int32 *)v19->Blink;
                  goto LABEL_31;
                }
                v21 = v123;
                goto LABEL_271;
              }
              Device = (struct CD3DDevice *)((__int64 (__fastcall *)(CDrawListEntry *, _QWORD, struct CD3DDevice *(__fastcall *)(CD2DResource *), struct CD3DDevice *(__fastcall *)(CD2DContext *__hidden)))v25)(
                                              v121,
                                              IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                              CD2DResource::GetDevice,
                                              CD2DContext::GetDevice);
            }
            a2 = (struct CDrawingContext *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice;
            a3 = CD2DResource::GetDevice;
            v23 = CD2DContext::GetDevice;
            goto LABEL_27;
          }
          v53 = CVisual::GetTreeDataListHead(this);
          v54 = v53;
          if ( v53 )
          {
            for ( j = v53->Flink; j != v54; j = j->Flink )
            {
              v18 = &j[-22].Blink;
              if ( j[2].Flink == v16 )
                goto LABEL_19;
            }
          }
LABEL_94:
          if ( v17 < 0 )
            goto LABEL_95;
        }
        v33 = *(_QWORD *)v14;
        v34 = *(__int64 (__fastcall **)(CBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v14 + 200LL);
        if ( v34 == CBrush::Draw )
        {
          v35 = *((float *)this + 36);
          v117 = 0;
          if ( v35 <= 0.0 || *((float *)this + 37) <= 0.0 )
            goto LABEL_70;
          v36 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(v33 + 312);
          if ( (char *)v36 != (char *)CMaskBrush::IsReadyToDraw )
          {
            if ( v36 == CEffectBrush::IsReadyToDraw )
            {
              IsReadyToDraw = CEffectBrush::IsReadyToDraw(v14, v4, &v117);
            }
            else
            {
              if ( v36 == CColorBrush::IsReadyToDraw )
              {
                v38 = CColorBrush::IsReadyToDraw(v14, v4, &v117);
                goto LABEL_66;
              }
              IsReadyToDraw = v36(v14, v4, &v117);
            }
            v38 = IsReadyToDraw;
LABEL_66:
            if ( v38 && !v117 )
            {
              if ( *((_BYTE *)v14 + 96)
                && (unsigned __int8)Microsoft::WRL::operator==<CBrushRenderingGraph>((char *)v14 + 80, 0LL, a3) )
              {
                v49 = *(__int64 (__fastcall **)(struct CBrushRenderingGraph **, char))(*(_QWORD *)v14 + 344LL);
                v50 = v49 == CEffectBrush::EnsureBrushGraph
                    ? CEffectBrush::EnsureBrushGraph((struct CBrushRenderingGraph **)v14, 0)
                    : v49((struct CBrushRenderingGraph **)v14, 0);
                v44 = v50;
                if ( v50 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v50, 0x7Au, 0LL);
                  goto LABEL_71;
                }
              }
              v43 = CContent::Draw(v14, v122, (const struct D2D_SIZE_F *)this + 18, v15);
              v44 = v43;
              if ( v43 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v43, 0x7Du, 0LL);
                goto LABEL_71;
              }
            }
LABEL_70:
            v44 = 0;
            goto LABEL_71;
          }
          v37 = (CEffectBrush *)*((_QWORD *)v14 + 15);
          v38 = 0;
          v116 = 0;
          v119[0] = 0;
          if ( !v37 )
            goto LABEL_64;
          v39 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v37 + 312LL);
          if ( (char *)v39 == (char *)CGradientBrush::IsReadyToDraw )
          {
            v116 = std::vector<CColorGradientStop *>::empty((_QWORD *)v37 + 21);
            v40 = !std::vector<CColorGradientStop *>::empty((_QWORD *)v37 + 21);
          }
          else
          {
            if ( v39 == CColorBrush::IsReadyToDraw )
            {
              v116 = IsCloseRealZero(*((float *)v37 + 29), 0.0000011920929);
LABEL_59:
              v41 = *((_QWORD *)v14 + 14);
              if ( !v41
                || (*(unsigned __int8 (__fastcall **)(__int64, CDrawingContext *, char *))(*(_QWORD *)v41 + 312LL))(
                     v41,
                     v122,
                     v119) )
              {
                v38 = 1;
              }
LABEL_62:
              if ( v116 || v119[0] )
              {
                v42 = 1;
                goto LABEL_65;
              }
LABEL_64:
              v42 = 0;
LABEL_65:
              v117 = v42;
              goto LABEL_66;
            }
            if ( v39 == CEffectBrush::IsReadyToDraw )
              v40 = CEffectBrush::IsReadyToDraw(v37, v122, &v116);
            else
              v40 = v39(v37, v122, &v116);
          }
          if ( !v40 )
            goto LABEL_62;
          goto LABEL_59;
        }
        v75 = (const struct D2D_SIZE_F *)((char *)this + 144);
        if ( v34 == CPrimitiveGroup::Draw )
        {
          v76 = CPrimitiveGroup::Draw(v14, v4, v75, v15);
        }
        else
        {
          if ( v34 == CSurfaceBrush::Draw )
          {
            v44 = CSurfaceBrush::Draw(v14, v4, v75, v15);
LABEL_71:
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v44, 0x103Bu, 0LL);
            goto LABEL_73;
          }
          v76 = (*(__int64 (__fastcall **)(CVisual *, CDrawingContext *, const struct D2D_SIZE_F *, CDrawListEntry *))(*(_QWORD *)v14 + 200LL))(
                  v14,
                  v4,
                  v75,
                  v15);
        }
        v44 = v76;
        goto LABEL_71;
      }
      v8 = *((_BYTE *)WindowBackgroundTreatmentInternal + 301);
      v118 = v8;
    }
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_6;
  }
LABEL_89:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    v59 = *(bool (__fastcall **)(CVisual *))(*(_QWORD *)this + 264LL);
    if ( v59 == CWindowNode::HasNonEmptyContent )
    {
      HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
    }
    else if ( (char *)v59 == (char *)CSpriteVisual::HasNonEmptyContent )
    {
      HasNonEmptyContent = CSpriteVisual::HasNonEmptyContent(this);
    }
    else
    {
      HasNonEmptyContent = v59 == CVisual::HasNonEmptyContent
                         ? CVisual::HasNonEmptyContent(this)
                         : ((__int64 (__fastcall *)(CVisual *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *)))v59)(
                             this,
                             a2,
                             a3);
    }
    if ( HasNonEmptyContent )
    {
      v62 = word_180336D88;
      v63 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 64LL);
      if ( v63 == CSpriteVisual::IsOfType )
      {
        v64 = CSpriteVisual::IsOfType((__int64)this, 190);
      }
      else if ( (char *)v63 == (char *)CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
      {
        v64 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(this, 190LL, v61);
      }
      else
      {
        v64 = v63((__int64)this, 190);
      }
      if ( v64 )
      {
        v72 = "Window";
      }
      else
      {
        v67 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 64LL);
        if ( v67 == CSpriteVisual::IsOfType )
          v68 = CSpriteVisual::IsOfType((__int64)this, 164);
        else
          v68 = v67((__int64)this, 164);
        v69 = *((_QWORD *)this + 32);
        v70 = "Sprite";
        v71 = v68;
        if ( !v68 )
          v70 = word_180336D88;
        v72 = v70;
        if ( !v69 )
          goto LABEL_178;
        if ( v5 == CCachedVisualImage::s_CVIEnsureBitmapCount )
        {
          v73 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v69 + 64LL);
          if ( (char *)v73 == (char *)CMaskBrush::IsOfType )
          {
            v74 = CMaskBrush::IsOfType(v69, 117LL);
          }
          else if ( v73 == CSurfaceBrush::IsOfType )
          {
            v74 = CSurfaceBrush::IsOfType(v69, 117);
          }
          else if ( (char *)v73 == (char *)CColorBrush::IsOfType )
          {
            v74 = CColorBrush::IsOfType(v69, 117LL);
          }
          else
          {
            v74 = v73(v69, 117);
          }
          if ( v74 )
          {
            v62 = "PG";
            goto LABEL_213;
          }
          v77 = *((_QWORD *)this + 32);
          v78 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v77 + 64LL);
          if ( (char *)v78 == (char *)CMaskBrush::IsOfType )
          {
            v79 = CMaskBrush::IsOfType(v77, 132LL);
          }
          else if ( v78 == CSurfaceBrush::IsOfType )
          {
            v79 = CSurfaceBrush::IsOfType(v77, 132);
          }
          else if ( (char *)v78 == (char *)CColorBrush::IsOfType )
          {
            v79 = CColorBrush::IsOfType(v77, 132LL);
          }
          else
          {
            v79 = v78(v77, 132);
          }
          if ( v79 )
          {
            v62 = "RD";
            goto LABEL_213;
          }
          v80 = *((_QWORD *)this + 32);
          v81 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v80 + 64LL);
          if ( (char *)v81 == (char *)CMaskBrush::IsOfType )
          {
            v82 = CMaskBrush::IsOfType(v80, 41LL);
          }
          else if ( (char *)v81 == (char *)CColorBrush::IsOfType )
          {
            v82 = CColorBrush::IsOfType(v80, 41LL);
          }
          else if ( v81 == CSurfaceBrush::IsOfType )
          {
            v82 = CSurfaceBrush::IsOfType(v80, 41);
          }
          else
          {
            v82 = v81(v80, 41);
          }
          if ( v82 )
          {
            v62 = "CS";
            goto LABEL_213;
          }
          v83 = *((_QWORD *)this + 32);
          v84 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v83 + 64LL);
          if ( (char *)v84 == (char *)CMaskBrush::IsOfType )
          {
            v85 = CMaskBrush::IsOfType(v83, 183LL);
          }
          else if ( (char *)v84 == (char *)CColorBrush::IsOfType )
          {
            v85 = CColorBrush::IsOfType(v83, 183LL);
          }
          else if ( v84 == CSurfaceBrush::IsOfType )
          {
            v85 = CSurfaceBrush::IsOfType(v83, 183);
          }
          else
          {
            v85 = v84(v83, 183);
          }
          if ( v85 )
          {
            v62 = "VisBmp";
            v72 = v70;
          }
          else
          {
            v86 = *((_QWORD *)this + 32);
            v87 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v86 + 64LL);
            if ( (char *)v87 == (char *)CColorBrush::IsOfType )
            {
              v88 = CColorBrush::IsOfType(v86, 191LL);
            }
            else if ( v87 == CSurfaceBrush::IsOfType )
            {
              v88 = CSurfaceBrush::IsOfType(v86, 191);
            }
            else if ( (char *)v87 == (char *)CMaskBrush::IsOfType )
            {
              v88 = CMaskBrush::IsOfType(v86, 191LL);
            }
            else
            {
              v88 = v87(v86, 191);
            }
            if ( v88 )
            {
              v62 = "YCbCr";
              v72 = v70;
            }
            else
            {
              v89 = *((_QWORD *)this + 32);
              v90 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v89 + 64LL);
              if ( (char *)v90 == (char *)CColorBrush::IsOfType )
              {
                v91 = CColorBrush::IsOfType(v89, 161LL);
              }
              else if ( v90 == CNineGridBrush::IsOfType )
              {
                v91 = CNineGridBrush::IsOfType(v89, 161);
              }
              else if ( v90 == CSurfaceBrush::IsOfType )
              {
                v91 = CSurfaceBrush::IsOfType(v89, 161);
              }
              else
              {
                v91 = v90(v89, 161);
              }
              if ( v91 )
              {
                v62 = "Snap";
                v72 = v70;
              }
              else
              {
                v93 = *((_QWORD *)this + 32);
                v94 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v93 + 64LL);
                if ( v94 == CSurfaceBrush::IsOfType )
                {
                  v95 = CSurfaceBrush::IsOfType(v93, 87);
                }
                else if ( (char *)v94 == (char *)CColorBrush::IsOfType )
                {
                  v95 = CColorBrush::IsOfType(v93, 87LL);
                }
                else if ( (char *)v94 == (char *)CMaskBrush::IsOfType )
                {
                  v95 = CMaskBrush::IsOfType(v93, 87LL);
                }
                else
                {
                  v95 = v94(v93, 87);
                }
                if ( v95 )
                {
                  v62 = "Ink";
                  v72 = v70;
                }
                else
                {
                  v96 = *((_QWORD *)this + 32);
                  v97 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v96 + 64LL);
                  if ( v97 == CSurfaceBrush::IsOfType )
                  {
                    v98 = CSurfaceBrush::IsOfType(v96, 65);
                  }
                  else if ( (char *)v97 == (char *)CColorBrush::IsOfType )
                  {
                    v98 = CColorBrush::IsOfType(v96, 65LL);
                  }
                  else if ( (char *)v97 == (char *)CMaskBrush::IsOfType )
                  {
                    v98 = CMaskBrush::IsOfType(v96, 65LL);
                  }
                  else
                  {
                    v98 = v97(v96, 65);
                  }
                  v72 = v70;
                  if ( !v98 )
                  {
                    if ( v71 )
                      goto LABEL_178;
LABEL_213:
                    v72 = v70;
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) == 0 )
                      return 0LL;
                    goto LABEL_178;
                  }
                  v62 = "GenInk";
                }
              }
            }
          }
        }
        else
        {
          v62 = "CVI";
        }
      }
LABEL_178:
      CDrawingContext::EtwLogCurrentState(v122, v65, v66);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      {
        v100 = *((_DWORD *)this + 47);
        v101 = *((_DWORD *)this + 46);
        v135 = &v125;
        v137 = &v120;
        v139 = &v123;
        v141 = &v124;
        LODWORD(v122) = v100;
        v102 = *((_DWORD *)this + 45);
        LODWORD(v124) = v101;
        v103 = *((_DWORD *)this + 44);
        v143 = &v122;
        v104 = -1LL;
        LODWORD(v123) = v102;
        v120 = v103;
        v125 = this;
        v136 = 8LL;
        v138 = 4LL;
        v140 = 4LL;
        v142 = 4LL;
        v144 = 4LL;
        do
          ++v104;
        while ( v72[v104] );
        v145 = v72;
        v146 = v104 + 1;
        v147 = 0;
        do
          ++v7;
        while ( v62[v7] );
        v148 = v62;
        v149 = v7 + 1;
        v150 = 0;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_VISUAL_RENDERCONTENT,
          v99,
          8u,
          &v134);
      }
    }
  }
  return 0LL;
}
