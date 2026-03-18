/*
 * XREFs of ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180096EA4 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180097C08 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x180097C40 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ??$max@M@@YAMMM@Z @ 0x180099630 (--$max@M@@YAMMM@Z.c)
 *     ??9?$basic_iterator@PEAVIVisualTreeClient@@@detail@@QEBA_NAEBV01@@Z @ 0x180099640 (--9-$basic_iterator@PEAVIVisualTreeClient@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x180099660 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x180099990 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180099E60 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18009A6D0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x18009B214 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18009B370 (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x1800C4D58 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800E3CEC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@2@V?$basic_iterator@QEAVCVisualTree@@@2@0@Z @ 0x1801ABDD4 (-erase_unchecked@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliber.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x1801FF67C (--A-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUnique.c)
 *     ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x180248344 (-ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180248868 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0 (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18024945C (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     std::remove_if_detail::basic_iterator_CVisualTree_____lambda_71e003bdfe7c152bc782aeb788c37967___ @ 0x180264A38 (std--remove_if_detail--basic_iterator_CVisualTree_____lambda_71e003bdfe7c152bc782aeb788c37967___.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180266804 (-clear@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_im.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x180272BFC (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::CleanTrees(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  CComposition *v4; // r14
  int v5; // r12d
  int v6; // esi
  CGlobalComposition *v7; // r10
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 j; // r9
  _DWORD *v13; // r8
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 k; // rcx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  CPreComputeContext *m; // r8
  __int64 n; // rdx
  __int64 v22; // rax
  void (__fastcall *v23)(CVisualTree *__hidden); // rax
  char v24; // r15
  __int64 v25; // rcx
  CLegacyRenderTarget *v26; // rsi
  __int64 (__fastcall *v27)(); // rax
  __int128 *v28; // rax
  int *v29; // rax
  float (__fastcall *v30)(CLegacyRenderTarget *__hidden); // rax
  float v31; // xmm0_4
  char v32; // cl
  __int64 v33; // rax
  struct ILiftedOverlayHost *(__fastcall *v34)(CDesktopTree *); // rax
  __int64 v35; // rcx
  struct ILiftedOverlayHost *(__fastcall *v36)(CDesktopTree *); // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // esi
  HANDLE CurrentThread; // rax
  BOOL v41; // eax
  CPreComputeContext *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct ILiftedOverlayHost *(__fastcall *v48)(CDesktopTree *); // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // edi
  void *v52; // rcx
  const char *v53; // r9
  CPreComputeContext *v54; // r14
  HANDLE ProcessHeap; // rax
  CPreComputeContext *v56; // rax
  CPreComputeContext *v57; // rsi
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r15d
  __int64 v64; // rdi
  __int64 v65; // r14
  _BYTE *v66; // rsi
  _OWORD *v67; // rax
  __int64 v68; // rdx
  unsigned int ii; // r8d
  unsigned int jj; // edx
  CPreComputeContext **v71; // rax
  int v72; // eax
  int v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v75; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 CycleTime; // [rsp+48h] [rbp-C0h] BYREF
  CLegacyRenderTarget **v77; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 i; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v80; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v81; // [rsp+70h] [rbp-98h] BYREF
  CPreComputeContext *v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp-80h] BYREF
  __int64 v85; // [rsp+90h] [rbp-78h] BYREF
  __int64 v86; // [rsp+98h] [rbp-70h]
  char v87[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-60h] BYREF
  char v89[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v90; // [rsp+C8h] [rbp-40h] BYREF
  int v91; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v92; // [rsp+D8h] [rbp-30h]
  __int64 v93; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *v94; // [rsp+E8h] [rbp-20h]
  __int64 v95; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *p_i; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+100h] [rbp-8h]
  CLegacyRenderTarget ***v98; // [rsp+108h] [rbp+0h]
  __int64 v99; // [rsp+110h] [rbp+8h]
  _BYTE *v100; // [rsp+118h] [rbp+10h]
  int v101; // [rsp+120h] [rbp+18h]
  int v102; // [rsp+124h] [rbp+1Ch]
  char v103[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v104[128]; // [rsp+138h] [rbp+30h] BYREF
  void *retaddr; // [rsp+210h] [rbp+108h]

  v3 = 0LL;
  CycleTime = (unsigned __int64)this;
  v4 = this;
  v5 = 0;
  LODWORD(v75) = 0;
  v80.QuadPart = 0LL;
  v6 = 0;
  PerformanceCount.QuadPart = 0LL;
  LODWORD(v74) = 0;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 4) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &CleanTrees_Start, a3, 1LL, v103);
    QueryPerformanceCounter(&v80);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)v4 + 9);
  if ( v80.QuadPart )
    QueryPerformanceCounter(&PerformanceCount);
  CPreWalkVisual::ProcessVisuals();
  v7 = g_pComposition;
  *((_BYTE *)v4 + 5664) = 1;
  v8 = (_QWORD *)*((_QWORD *)v4 + 51);
  v9 = (_QWORD *)*((_QWORD *)v4 + 50);
  for ( i = (unsigned __int64)v8; ; v8 = (_QWORD *)i )
  {
    v81 = v9;
    if ( v9 == v8 )
      break;
    v10 = *v9;
    v78 = v10;
    v11 = v10;
    for ( j = *(_QWORD *)(v10 + 72); j; j = *(_QWORD *)(j + 88) )
    {
      v13 = *(_DWORD **)(j + 232);
      if ( (*v13 & 0x8000000) != 0 )
      {
        v14 = (unsigned int)v13[1];
        v15 = v13 + 2;
        for ( k = 0LL; (unsigned int)k < (unsigned int)v14; ++v15 )
        {
          if ( *v15 == 5 )
            break;
          k = (unsigned int)(k + 1);
        }
        if ( (unsigned int)k >= (unsigned int)v14 )
          v17 = 0LL;
        else
          v17 = (__int64 *)((char *)v13 + 8 * k - (((_BYTE)v14 + 15) & 7) + v14 + 15);
        v18 = *v17;
        if ( v18 )
          v11 = v18;
      }
    }
    v19 = *(_QWORD *)(v11 + 72);
    if ( v19 && *(_BYTE *)(v19 + 96) )
      LODWORD(v74) = v6 + 1;
    m = (CPreComputeContext *)*((_QWORD *)v4 + 76);
    n = 0LL;
    if ( v7 )
      n = *((_QWORD *)v7 + 111);
    if ( *(_QWORD *)(v11 + 120) != n && v19 && *(_BYTE *)(v19 + 96) )
    {
      v54 = 0LL;
      if ( !m )
      {
        ProcessHeap = GetProcessHeap();
        v56 = (CPreComputeContext *)HeapAlloc(ProcessHeap, 0, 0x628uLL);
        v57 = v56;
        if ( !v56 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        memset_0(v56, 0, 0x628uLL);
        m = CPreComputeContext::CPreComputeContext(v57);
        v54 = m;
      }
      v58 = CPreComputeContext::PreCompute(m, (struct CVisualTree *)v11);
      v39 = v58;
      if ( v58 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x189,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
          (const char *)(unsigned int)v58,
          v73);
        if ( v54 )
        {
          operator delete(*((void **)v54 + 191));
          DynArrayImpl<0>::~DynArrayImpl<0>((char *)v54 + 1464);
          DynArrayImpl<0>::~DynArrayImpl<0>((char *)v54 + 1432);
          operator delete(*((void **)v54 + 176));
          CLightStack::~CLightStack((CPreComputeContext *)((char *)v54 + 1176));
          operator delete(*((void **)v54 + 144));
          operator delete(*((void **)v54 + 141));
          operator delete(*((void **)v54 + 138));
          operator delete(*((void **)v54 + 135));
          detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(v54);
          detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v54);
          operator delete(v54, 0x628uLL);
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xCBAu, 0LL);
        v7 = g_pComposition;
        goto LABEL_60;
      }
      if ( v54 )
      {
        operator delete(*((void **)v54 + 191));
        DynArrayImpl<0>::~DynArrayImpl<0>((char *)v54 + 1464);
        DynArrayImpl<0>::~DynArrayImpl<0>((char *)v54 + 1432);
        operator delete(*((void **)v54 + 176));
        CLightStack::~CLightStack((CPreComputeContext *)((char *)v54 + 1176));
        operator delete(*((void **)v54 + 144));
        operator delete(*((void **)v54 + 141));
        operator delete(*((void **)v54 + 138));
        operator delete(*((void **)v54 + 135));
        detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(v54);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v54);
        operator delete(v54, 0x628uLL);
      }
      v7 = g_pComposition;
    }
    v22 = 0LL;
    if ( v7 )
      v22 = *((_QWORD *)v7 + 111);
    if ( *(_QWORD *)(v11 + 120) != v22 )
    {
      if ( *(_BYTE *)(v11 + 2628) )
      {
        v23 = *(void (__fastcall **)(CVisualTree *__hidden))(*(_QWORD *)v11 + 224LL);
        if ( v23 == CVisualTree::UpdateClientBounds )
        {
          *(_QWORD *)(v11 + 2512) = 0LL;
          v24 = 0;
          *(_QWORD *)(v11 + 2504) = 0LL;
          **(_DWORD **)(v11 + 2520) = 0;
          *(_WORD *)(v11 + 2630) = 0;
          *(_DWORD *)(v11 + 2592) = 1065353216;
          v25 = *(_QWORD *)(v11 + 2456);
          n = *(_QWORD *)(v11 + 2448);
          if ( !((v25 - n) >> 3) )
            goto LABEL_36;
          v77 = *(CLegacyRenderTarget ***)(v11 + 2448);
          v83 = v25;
          if ( (unsigned __int8)detail::basic_iterator<IVisualTreeClient *>::operator!=(&v77, &v83) )
          {
            do
            {
              v26 = *v77;
              *(_BYTE *)(v11 + 2631) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)*v77 + 56LL))(*v77);
              v27 = *(__int64 (__fastcall **)())(*(_QWORD *)v26 + 32LL);
              if ( v27 == COffScreenRenderTarget::GetTreeBounds )
                v28 = (__int128 *)((char *)v26 + 196);
              else
                v28 = (__int128 *)((__int64 (__fastcall *)(CLegacyRenderTarget *))v27)(v26);
              v88 = *v28;
              if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v88) )
              {
                v24 = 1;
              }
              else
              {
                v91 = 0;
                v90 = &v91;
                v29 = (int *)PixelAlign(v89, &v88);
                FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v90, *v29, v29[1], v29[2], v29[3]);
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v11 + 2504, &v88);
                CRegion::Union((CRegion *)(v11 + 2520), (const struct CRegion *)&v90);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v90);
              }
              *(_BYTE *)(v11 + 2630) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v26 + 40LL))(v26);
              v30 = *(float (__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)v26 + 48LL);
              if ( v30 == CLegacyRenderTarget::GetInflationScale )
                CLegacyRenderTarget::GetInflationScale(v26);
              else
                v30(v26);
              v31 = max<float>();
              ++v77;
              *(float *)(v11 + 2592) = v31;
            }
            while ( (unsigned __int8)detail::basic_iterator<IVisualTreeClient *>::operator!=(&v77, &v83) );
            v9 = v81;
            if ( v24 )
LABEL_36:
              *(_OWORD *)(v11 + 2504) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          v10 = v78;
          v5 = v75;
        }
        else if ( v23 == CVisualTree::UpdateClientInfo )
        {
          CVisualTree::UpdateClientBounds((CVisualTree *)v11);
        }
        else
        {
          ((void (__fastcall *)(__int64, __int64, CPreComputeContext *))v23)(v11, n, m);
        }
        *(_BYTE *)(v11 + 2628) = 0;
      }
      v32 = *(_BYTE *)(v11 + 2631);
      *(_QWORD *)(v11 + 120) = 0LL;
      *(_BYTE *)(v11 + 2437) = 0;
      *(_WORD *)(v11 + 2439) = 0;
      *(_BYTE *)(v11 + 2436) = v32 == 0;
      *(_OWORD *)(v11 + 2420) = *(_OWORD *)(*(_QWORD *)(v11 + 112) + 2504LL);
      if ( v32 )
      {
        if ( *(_BYTE *)(v11 + 2438) )
          *(_BYTE *)(v11 + 2438) = 0;
        *(_DWORD *)(v11 + 128) = 0;
        *(_BYTE *)(v11 + 564) = 0;
        if ( !*(_BYTE *)(v11 + 2438) )
          CTreeDirty::ClearDirtyRectAnnotationLists((CTreeDirty *)(v11 + 112));
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, CPreComputeContext *))(*(_QWORD *)v11 + 184LL))(
             v11,
             n,
             m) )
      {
        v33 = (__int64)(*(_QWORD *)(v11 + 5232) - *(_QWORD *)(v11 + 5224)) >> 3;
        if ( v33 )
          *(_QWORD *)(v11 + 5232) -= 8 * v33;
      }
      v34 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *))(*(_QWORD *)v11 + 216LL);
      if ( v34 == CDesktopTree::GetLiftedOverlayHost )
        v35 = *(_QWORD *)(v11 + 4552);
      else
        v35 = (__int64)v34((CDesktopTree *)v11);
      if ( v35 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 24LL))(v35, v11);
      v36 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *))(*(_QWORD *)v11 + 216LL);
      if ( v36 == CDesktopTree::GetLiftedOverlayHost )
        v37 = *(_QWORD *)(v11 + 4552);
      else
        v37 = (__int64)v36((CDesktopTree *)v11);
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 184LL))(v11) )
      {
        n = *(_QWORD *)(v11 + 24);
        if ( *(_DWORD *)(n + 6400) && (*(_BYTE *)(n + 6493) || !CTreeDirty::IsEmpty((CTreeDirty *)(v11 + 112))) )
        {
          *(_BYTE *)(v11 + 2439) = 1;
          *(_BYTE *)(n + 6493) = 0;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 24) + 6408LL) )
          *(_BYTE *)(v11 + 2440) = 1;
      }
      if ( !*(_BYTE *)(v11 + 2436) )
      {
LABEL_115:
        CRectangleCollection<8>::EnsureWeights(v11 + 128);
        for ( m = (CPreComputeContext *)1;
              (unsigned int)m < *(_DWORD *)(v11 + 128);
              m = (CPreComputeContext *)(unsigned int)((_DWORD)m + 1) )
        {
          for ( n = 0LL; (unsigned int)n < (unsigned int)m; n = (unsigned int)(n + 1) )
          {
            if ( *(float *)(v11 + 8LL * ((unsigned int)n + ((unsigned int)((_DWORD)m * ((_DWORD)m - 1)) >> 1)) + 280) < 0.5 )
            {
              CTreeDirty::Merge((CTreeDirty *)(v11 + 112), n, (unsigned int)m);
              goto LABEL_115;
            }
          }
        }
        v10 = v78;
      }
      *(_BYTE *)(v11 + 2437) = 1;
      if ( *(_BYTE *)(v11 + 2439) )
      {
        CTreeDirty::SetRedrawRects((CTreeDirty *)(v11 + 112));
        CTreeDirty::SetFullDirty((CTreeDirty *)(v11 + 112));
        *(_WORD *)(v11 + 2439) = 0;
      }
      else if ( *(_BYTE *)(v11 + 2440) )
      {
        CTreeDirty::SetFullDirty((CTreeDirty *)(v11 + 112));
        *(_BYTE *)(v11 + 2440) = 0;
      }
      v7 = g_pComposition;
      v38 = 0LL;
      if ( g_pComposition )
        v38 = *((_QWORD *)g_pComposition + 111);
      *(_QWORD *)(v11 + 120) = v38;
    }
    v39 = 0;
LABEL_60:
    if ( !v5 || v5 >= 0 && v39 < 0 )
    {
      v5 = v39;
      LODWORD(v75) = v39;
    }
    v4 = (CComposition *)CycleTime;
    if ( v11 != v10 )
    {
      v43 = *(CPreComputeContext **)(CycleTime + 608);
      v44 = 0LL;
      if ( v7 )
        v44 = *((_QWORD *)v7 + 111);
      v45 = *(_QWORD *)(v10 + 120);
      if ( v45 != v44 && (v46 = *(_QWORD *)(v10 + 72)) != 0 && *(_BYTE *)(v46 + 96) )
      {
        v82 = 0LL;
        if ( !v43 )
        {
          v71 = (CPreComputeContext **)std::make_unique<CPreComputeContext,,0>(v87, n, m);
          v43 = *v71;
          v82 = *v71;
          *v71 = 0LL;
          std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>(v87);
        }
        v72 = CPreComputeContext::PreCompute(v43, (struct CVisualTree *)v10);
        v51 = v72;
        if ( v72 >= 0 )
        {
          std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>(&v82);
          v45 = *(_QWORD *)(v10 + 120);
          v7 = g_pComposition;
          goto LABEL_93;
        }
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x189,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
          (const char *)(unsigned int)v72,
          v73);
        std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>(&v82);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xCC2u, 0LL);
        v7 = g_pComposition;
      }
      else
      {
LABEL_93:
        v47 = 0LL;
        if ( v7 )
          v47 = *((_QWORD *)v7 + 111);
        if ( v45 != v47 )
        {
          CVisualTree::BeginPreCompute((CVisualTree *)v10);
          v48 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *))(*(_QWORD *)v10 + 216LL);
          if ( v48 == CDesktopTree::GetLiftedOverlayHost )
            v49 = *(_QWORD *)(v10 + 4552);
          else
            v49 = (__int64)v48((CDesktopTree *)v10);
          if ( v49 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 184LL))(v10) )
          {
            v68 = *(_QWORD *)(v10 + 24);
            if ( *(_DWORD *)(v68 + 6400) && (*(_BYTE *)(v68 + 6493) || !CTreeDirty::IsEmpty((CTreeDirty *)(v10 + 112))) )
            {
              *(_BYTE *)(v10 + 2439) = 1;
              *(_BYTE *)(v68 + 6493) = 0;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v10 + 24) + 6408LL) )
              *(_BYTE *)(v10 + 2440) = 1;
          }
          if ( !*(_BYTE *)(v10 + 2436) )
          {
LABEL_155:
            CRectangleCollection<8>::EnsureWeights(v10 + 128);
            for ( ii = 1; ii < *(_DWORD *)(v10 + 128); ++ii )
            {
              for ( jj = 0; jj < ii; ++jj )
              {
                if ( *(float *)(v10 + 8LL * (jj + ((ii * (ii - 1)) >> 1)) + 280) < 0.5 )
                {
                  CTreeDirty::Merge((CTreeDirty *)(v10 + 112), jj, ii);
                  goto LABEL_155;
                }
              }
            }
          }
          *(_BYTE *)(v10 + 2437) = 1;
          if ( *(_BYTE *)(v10 + 2439) )
          {
            CTreeDirty::SetRedrawRects((CTreeDirty *)(v10 + 112));
            CTreeDirty::SetFullDirty((CTreeDirty *)(v10 + 112));
            *(_WORD *)(v10 + 2439) = 0;
          }
          else if ( *(_BYTE *)(v10 + 2440) )
          {
            CTreeDirty::SetFullDirty((CTreeDirty *)(v10 + 112));
            *(_BYTE *)(v10 + 2440) = 0;
          }
          v7 = g_pComposition;
          v50 = 0LL;
          if ( g_pComposition )
            v50 = *((_QWORD *)g_pComposition + 111);
          *(_QWORD *)(v10 + 120) = v50;
        }
        v51 = 0;
      }
      if ( !v5 || v5 >= 0 && v51 < 0 )
      {
        v5 = v51;
        LODWORD(v75) = v51;
      }
    }
    v6 = v74;
    ++v9;
  }
  *((_BYTE *)v4 + 5664) = 0;
  if ( *((_QWORD *)v4 + 70) != *((_QWORD *)v4 + 69) )
  {
    i = *((_QWORD *)v4 + 51);
    v81 = (_QWORD *)*((_QWORD *)v4 + 50);
    std::remove_if_detail::basic_iterator_CVisualTree_____lambda_71e003bdfe7c152bc782aeb788c37967___(
      &CycleTime,
      &v81,
      &i,
      (char *)v4 + 552);
    v78 = *((_QWORD *)v4 + 51);
    v75 = CycleTime;
    detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::erase_unchecked(
      (char *)v4 + 400,
      &v85,
      &v75,
      &v78);
    detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear((char *)v4 + 552);
  }
  if ( *((_BYTE *)v4 + 6440) )
  {
    v52 = (void *)*((_QWORD *)v4 + 804);
    *((_BYTE *)v4 + 6440) = 0;
    if ( !SetEvent(v52) )
      wil::details::in1diag3::_FailFast_GetLastError(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x9C3,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v53);
  }
  if ( v4 != (CComposition *)-360LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4 + 9);
  if ( v80.QuadPart )
  {
    LODWORD(v59) = 0;
    memset_0(v104, 0, sizeof(v104));
    v61 = **((_QWORD **)v4 + 77);
    if ( !v61 )
      goto LABEL_138;
    v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 56LL))(v61);
    if ( !v62 )
      goto LABEL_138;
    if ( *(_BYTE *)(v62 + 2436) )
    {
      v63 = 1;
      v85 = 1LL;
      v86 = v62 + 2420;
      if ( v62 == -2420 )
        goto LABEL_170;
      LODWORD(v59) = 1;
    }
    else
    {
      v59 = *(unsigned int *)(v62 + 128);
      v86 = v62 + 132;
      v85 = v59;
      if ( v62 == -132 && v59 )
      {
LABEL_170:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v63 = v59;
      if ( !(_DWORD)v59 )
      {
LABEL_138:
        if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 4) != 0 )
        {
          LODWORD(v77) = v59;
          i = (unsigned __int64)(1000000 * (PerformanceCount.QuadPart - v80.QuadPart)) / g_qpcFrequency.QuadPart;
          v92 = &v74;
          v94 = &v75;
          p_i = &i;
          v98 = &v77;
          v100 = v104;
          LODWORD(v75) = v6;
          LODWORD(v74) = v5;
          v93 = 4LL;
          v95 = 4LL;
          v97 = 8LL;
          v99 = 4LL;
          v101 = 16 * v59;
          v102 = 0;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Compositor_Context,
            &CleanTrees_Stop,
            v60,
            6LL,
            &v90);
        }
        goto LABEL_76;
      }
    }
    v64 = 0LL;
    v65 = v63;
    v66 = v104;
    do
    {
      v67 = (_OWORD *)gsl::span<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> const,-1>::operator[](
                        &v85,
                        v64++);
      v66 += 16;
      *((_OWORD *)v66 - 1) = *v67;
      --v65;
    }
    while ( v65 );
    v6 = v74;
    goto LABEL_138;
  }
LABEL_76:
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v41 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v3 = CycleTime;
    if ( v41 )
      qword_180406828 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v3;
  return (unsigned int)v5;
}
