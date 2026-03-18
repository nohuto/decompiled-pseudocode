/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2940 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180012998 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002AA80 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D23E0 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x1800D2520 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
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
 *     ??$?8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z @ 0x1802068E0 (--$-8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *this,
        CEffectBrush **a2,
        struct CD3DDevice *(__fastcall *a3)(CD2DResource *this),
        int a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  volatile signed __int32 *v6; // rbx
  struct CDrawingContext *v9; // r15
  struct _LIST_ENTRY *v10; // r14
  int v11; // r12d
  CGlobalComposition *v12; // rdx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct CDrawingContext *v14; // rax
  struct _LIST_ENTRY *v15; // rdi
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  CDrawListEntry *v17; // rax
  volatile signed __int32 *v18; // r14
  CDrawListEntry *Blink; // rcx
  struct CD3DDevice *(__fastcall *v20)(CD2DContext *); // rax
  struct CD3DDevice *Device; // rax
  __int64 *v22; // r14
  __int64 v23; // rdi
  CDrawListEntry *v24; // rdi
  int v25; // r14d
  int v26; // r14d
  CDrawListEntry *v27; // rdi
  CDrawListCache *(__fastcall *v28)(CDrawListCache *, char); // rax
  CEffectBrush *v29; // rax
  __int64 (__fastcall *v30)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *); // r10
  const struct D2D_SIZE_F *v31; // r12
  char (__fastcall *v32)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  CEffectBrush *v33; // rdi
  char v34; // r14
  bool (__fastcall *v35)(CGradientBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  CEffectBrush *v37; // rcx
  char v38; // al
  int v39; // eax
  int v40; // r14d
  int v41; // edi
  int v42; // edi
  CDrawListCache *(__fastcall *v43)(CDrawListCache *, char); // rax
  __int64 (__fastcall *v45)(struct CBrushRenderingGraph **, char); // rax
  int v46; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v49; // eax
  char v50; // al
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdi
  unsigned int v55; // [rsp+20h] [rbp-60h]
  char v56[8]; // [rsp+30h] [rbp-50h] BYREF
  CDrawListEntry *v57; // [rsp+38h] [rbp-48h] BYREF
  CGlobalComposition *v58; // [rsp+40h] [rbp-40h] BYREF
  CDrawListEntry *v59; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v60; // [rsp+50h] [rbp-30h] BYREF
  __int64 v61[3]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v63; // [rsp+C0h] [rbp+40h]
  int v64; // [rsp+C8h] [rbp+48h] BYREF

  v64 = a4;
  v63 = (unsigned int)a3;
  v6 = 0LL;
  v9 = a5;
  if ( !*((_BYTE *)a5 + 8067) )
    goto LABEL_36;
  v10 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 993);
  v11 = -2003292412;
  v58 = (CGlobalComposition *)*((_QWORD *)a5 + 4);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v10->Flink[11].Blink)(v10) )
  {
    p_Blink = (struct _LIST_ENTRY **)((char *)this + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( !TreeDataListHead )
      goto LABEL_76;
    for ( i = TreeDataListHead->Flink; ; i = i->Flink )
    {
      if ( i == TreeDataListHead )
        goto LABEL_76;
      p_Blink = &i[-22].Blink;
      if ( i[2].Flink == v10 )
        break;
    }
  }
  if ( !p_Blink )
    goto LABEL_76;
  v14 = (struct CDrawingContext *)(p_Blink + 2);
  v11 = 0;
  v15 = p_Blink[2];
  v16 = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice;
  a5 = v14;
  a3 = CD2DResource::GetDevice;
  v17 = (CDrawListEntry *)*((_QWORD *)v14 + 1);
  v59 = v17;
  v18 = 0LL;
  while ( v15 != (struct _LIST_ENTRY *)v17 )
  {
    if ( LODWORD(v15->Flink) != v63 || HIDWORD(v15->Flink) )
      goto LABEL_103;
    v12 = v58;
    Blink = (CDrawListEntry *)v15->Blink;
    v57 = Blink;
    v20 = *(struct CD3DDevice *(__fastcall **)(CD2DContext *))(*(_QWORD *)v58 + 40LL);
    if ( (char *)v20 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
    {
      Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(
                                      v58,
                                      v58,
                                      CD2DResource::GetDevice,
                                      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice);
    }
    else if ( v20 == CD2DResource::GetDevice )
    {
      Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v58 + 5) + 24LL));
    }
    else
    {
      if ( v20 == CD2DContext::GetDevice )
      {
        Device = (CGlobalComposition *)((char *)v58 - 16);
        goto LABEL_12;
      }
      Device = v20(v58);
    }
    Blink = v57;
    a3 = CD2DResource::GetDevice;
    v16 = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice;
LABEL_12:
    if ( !*((_QWORD *)Device + 72) || *((_BYTE *)Blink + 85) || !*((_QWORD *)Blink + 3) )
    {
      v18 = (volatile signed __int32 *)v15->Blink;
      break;
    }
LABEL_103:
    v17 = v59;
    ++v15;
  }
  v57 = (CDrawListEntry *)v18;
  if ( v18 )
  {
    if ( _InterlockedAdd(v18 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v55);
    v6 = (volatile signed __int32 *)v57;
    v22 = (__int64 *)a5;
LABEL_20:
    v23 = *v22;
    if ( (unsigned __int64)((v22[1] - *v22) >> 4) > 1 )
    {
LABEL_120:
      v12 = g_pComposition;
      while ( v23 != v22[1] )
      {
        v52 = *(_QWORD *)(v23 + 8);
        if ( (volatile signed __int32 *)v52 != v6 )
        {
          v53 = 0LL;
          if ( g_pComposition )
            v53 = *((_QWORD *)g_pComposition + 111);
          if ( (unsigned __int64)(v53 - *(_QWORD *)(v52 + 16)) > 0x1E )
          {
            v54 = (v23 - *v22) >> 4;
            detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
              v22,
              v54,
              1LL);
            v23 = *v22 + 16 * v54;
            goto LABEL_120;
          }
        }
        v23 += 16LL;
      }
    }
    v24 = 0LL;
    v57 = 0LL;
  }
  else
  {
    v57 = 0LL;
    v51 = CDrawListCache::InternalCreate(0, &v57);
    v11 = v51;
    if ( v51 >= 0 )
    {
      v6 = (volatile signed __int32 *)v57;
      if ( !*((_BYTE *)v57 + 85) && *((_QWORD *)v57 + 3) )
      {
        v59 = v57;
        CMILRefCountImpl::AddReference((CDrawListEntry *)((char *)v57 + 8));
        v22 = (__int64 *)a5;
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
          a5,
          v63,
          0LL,
          &v59);
      }
      else
      {
        CMILRefCountImpl::AddReference((CDrawListEntry *)((char *)v57 + 8));
        v22 = (__int64 *)a5;
        v60 = 0LL;
        v59 = (CDrawListEntry *)v6;
        v58 = *(CGlobalComposition **)a5;
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
          a5,
          v61,
          &v58,
          v63,
          0,
          &v59);
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v60);
      }
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x1Cu, 0LL);
    v24 = v57;
  }
  if ( v24 )
  {
    v25 = _InterlockedDecrement((volatile signed __int32 *)v24 + 2);
    if ( v25 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v55);
    if ( !v25 )
    {
      if ( _InterlockedAdd((volatile signed __int32 *)v24 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v55);
      (*(void (__fastcall **)(CDrawListEntry *, CGlobalComposition *, struct CD3DDevice *(__fastcall *)(CD2DResource *), __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*(_QWORD *)v57 + 24LL))(
        v57,
        v12,
        a3,
        v16);
      v26 = _InterlockedDecrement((volatile signed __int32 *)v24 + 2);
      if ( v26 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v55);
      if ( !v26 )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)v24 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v55);
        v27 = v57;
        v28 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v57 + 16LL);
        if ( v28 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
        {
          CReconstructableDrawListEntry::~CReconstructableDrawListEntry(v57);
          CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(v27);
        }
        else if ( v28 == CDrawListEntry::`scalar deleting destructor' )
        {
          CDrawListEntry::~CDrawListEntry(v57);
          CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(v27);
        }
        else if ( v28 == CDrawListCache::`scalar deleting destructor' )
        {
          CDrawListCache::~CDrawListCache(v57);
          CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(v27);
        }
        else
        {
          v28(v57, 1);
        }
      }
    }
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x71Au, 0LL);
    v40 = v11;
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031E8C0, 3u, v11, 0x1036u, 0LL);
  }
  else
  {
LABEL_76:
    v40 = v11;
    if ( v11 < 0 )
      goto LABEL_77;
LABEL_36:
    v29 = *a2;
    v30 = (__int64 (__fastcall *)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))*((_QWORD *)*a2 + 25);
    if ( (char *)v30 == (char *)CBrush::Draw )
    {
      v31 = a6;
      LOBYTE(a5) = 0;
      if ( a6->width <= 0.0 || a6->height <= 0.0 )
        goto LABEL_55;
      v32 = (char (__fastcall *)(CColorBrush *, struct CDrawingContext *, bool *))*((_QWORD *)v29 + 39);
      if ( (char *)v32 == (char *)CMaskBrush::IsReadyToDraw )
      {
        v33 = a2[15];
        v34 = 0;
        LOBYTE(v64) = 0;
        v56[0] = 0;
        if ( !v33 )
          goto LABEL_49;
        v35 = *(bool (__fastcall **)(CGradientBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v33 + 312LL);
        if ( v35 == CGradientBrush::IsReadyToDraw )
        {
          LOBYTE(v64) = std::vector<CColorGradientStop *>::empty((_QWORD *)v33 + 21);
          IsReadyToDraw = !std::vector<CColorGradientStop *>::empty((_QWORD *)v33 + 21);
          goto LABEL_43;
        }
        if ( (char *)v35 == (char *)CColorBrush::IsReadyToDraw )
        {
          LOBYTE(v64) = IsCloseRealZero(*((float *)v33 + 29), 0.0000011920929);
          goto LABEL_44;
        }
        if ( (char *)v35 == (char *)CEffectBrush::IsReadyToDraw )
          IsReadyToDraw = CEffectBrush::IsReadyToDraw(v33, v9, (bool *)&v64);
        else
          IsReadyToDraw = v35(v33, v9, (bool *)&v64);
LABEL_43:
        if ( IsReadyToDraw )
        {
LABEL_44:
          v37 = a2[14];
          if ( !v37
            || (*(unsigned __int8 (__fastcall **)(CEffectBrush *, struct CDrawingContext *, char *))(*(_QWORD *)v37 + 312LL))(
                 v37,
                 v9,
                 v56) )
          {
            v34 = 1;
          }
        }
        if ( (_BYTE)v64 || v56[0] )
          v38 = 1;
        else
LABEL_49:
          v38 = 0;
        LOBYTE(a5) = v38;
      }
      else
      {
        if ( v32 == CEffectBrush::IsReadyToDraw )
        {
          v50 = CEffectBrush::IsReadyToDraw((CEffectBrush *)a2, v9, (bool *)&a5);
        }
        else
        {
          if ( v32 == CColorBrush::IsReadyToDraw )
          {
            v34 = CColorBrush::IsReadyToDraw((CColorBrush *)a2, v9, (bool *)&a5);
            goto LABEL_51;
          }
          v50 = v32((CColorBrush *)a2, v9, (bool *)&a5);
        }
        v34 = v50;
      }
LABEL_51:
      if ( !v34 || (_BYTE)a5 )
        goto LABEL_55;
      if ( *((_BYTE *)a2 + 96) && (unsigned __int8)Microsoft::WRL::operator==<CBrushRenderingGraph>(a2 + 10, 0LL, a3) )
      {
        v45 = (__int64 (__fastcall *)(struct CBrushRenderingGraph **, char))*((_QWORD *)*a2 + 43);
        v46 = v45 == CEffectBrush::EnsureBrushGraph ? CEffectBrush::EnsureBrushGraph(a2, 0) : v45(a2, 0);
        v40 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031E8C0, 3u, v46, 0x7Au, 0LL);
          goto LABEL_56;
        }
      }
      v39 = CContent::Draw((CContent *)a2, (const void **)v9, v31, (struct CDrawListCache *)v6);
      v40 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031E8C0, 3u, v39, 0x7Du, 0LL);
      else
LABEL_55:
        v40 = 0;
    }
    else
    {
      if ( v30 == CPrimitiveGroup::Draw )
      {
        v49 = CPrimitiveGroup::Draw((CPrimitiveGroup *)a2, v9, a6, (struct CDrawListCache *)v6);
      }
      else
      {
        if ( v30 == CSurfaceBrush::Draw )
        {
          v40 = CSurfaceBrush::Draw((CSurfaceBrush *)a2, v9, a6, (struct CDrawListCache *)v6);
          goto LABEL_56;
        }
        v49 = (*((__int64 (__fastcall **)(CEffectBrush **, struct CDrawingContext *, const struct D2D_SIZE_F *, volatile signed __int32 *))*a2
               + 25))(
                a2,
                v9,
                a6,
                v6);
      }
      v40 = v49;
    }
LABEL_56:
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031E8C0, 3u, v40, 0x103Bu, 0LL);
  }
  if ( v6 )
  {
    v41 = _InterlockedDecrement(v6 + 2);
    if ( v41 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v55);
    if ( !v41 )
    {
      if ( _InterlockedAdd(v6 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v55);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
      v42 = _InterlockedDecrement(v6 + 2);
      if ( v42 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v55);
      if ( !v42 )
      {
        if ( _InterlockedDecrement(v6 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v55);
        v43 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v6 + 16LL);
        if ( v43 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
        {
          CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)v6);
          CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(v6);
        }
        else if ( v43 == CDrawListEntry::`scalar deleting destructor' )
        {
          CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v6);
          CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(v6);
        }
        else if ( v43 == CDrawListCache::`scalar deleting destructor' )
        {
          CDrawListCache::~CDrawListCache((CDrawListCache *)v6);
          CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(v6);
        }
        else
        {
          v43((CDrawListCache *)v6, 1);
        }
      }
    }
  }
  return (unsigned int)v40;
}
