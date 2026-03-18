/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760
 * Callers:
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180101210 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F40D0 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcBounds@CRenderData@@AEAAJXZ @ 0x1801F5DE4 (-CalcBounds@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180051250 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800D6ED0 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010FC74 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x180139610 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1801396B0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18013A190 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18013A48C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18013EB98 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801B0190 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z.c)
 *     ??$emplace_back@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXIIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801CC3A8 (--$emplace_back@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_faca.c)
 *     ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1801FCAC0 (-PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180243AE8 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18028CCC0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802CD9E0 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::Draw(unsigned __int64 *a1, CRenderDataBounds *a2, int a3)
{
  __int64 v4; // r9
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // r8
  struct CDrawListCache *v8; // rdi
  unsigned __int64 **v9; // rcx
  int v10; // r11d
  unsigned int v11; // r12d
  unsigned int *v12; // r14
  unsigned int *v13; // r15
  __int128 v14; // rax
  unsigned int v15; // r10d
  unsigned __int64 v16; // rcx
  int v17; // ebx
  struct CDrawingContext *v18; // rsi
  __int128 v19; // xmm6
  struct CDrawingContext *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  CDrawListCache *v23; // rcx
  int v24; // r12d
  volatile signed __int32 *v25; // rdi
  __int64 *v26; // r13
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v29; // rsi
  __int64 (*v30)(void); // rax
  struct CD3DDevice *Device; // rax
  __int64 v32; // rbx
  int v33; // esi
  int v34; // r14d
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 *v39; // rax
  CVisual **v40; // rax
  CVisual *v41; // r13
  struct _LIST_ENTRY *v42; // rbx
  struct _LIST_ENTRY *v43; // rdx
  int (*v44)(CRenderDataBounds *__hidden, struct CTransform *); // r8
  struct CTransform *v45; // rdx
  __int64 (__fastcall *v46)(COcclusionContext *); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  struct CDrawListCache *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int64 *v55; // rcx
  unsigned int v56; // eax
  int v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+44h] [rbp-BCh]
  unsigned int v59; // [rsp+48h] [rbp-B8h] BYREF
  CDrawListCache *v60; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-A8h]
  struct CDrawListCache *v62; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h]
  struct _LIST_ENTRY *v65; // [rsp+70h] [rbp-90h]
  struct CDrawingContext *v66; // [rsp+78h] [rbp-88h]
  struct CDrawListCache *v67; // [rsp+80h] [rbp-80h] BYREF
  CRenderDataBounds *v68; // [rsp+88h] [rbp-78h]
  _QWORD *v69; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v71; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v72; // [rsp+A8h] [rbp-58h]
  unsigned int v73; // [rsp+B0h] [rbp-50h]
  CContent *v74; // [rsp+B8h] [rbp-48h]
  void *v75; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h]
  struct _LIST_ENTRY *v77; // [rsp+E0h] [rbp-20h]
  CDrawListCache *v78; // [rsp+E8h] [rbp-18h] BYREF
  struct CDrawListCache *v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v81; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v82; // [rsp+108h] [rbp+8h]
  char v83; // [rsp+110h] [rbp+10h] BYREF
  struct D2D_SIZE_F v84; // [rsp+118h] [rbp+18h] BYREF
  __int128 v85; // [rsp+120h] [rbp+20h]
  __int128 v86; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v87[112]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1328h] [rbp+1228h]

  v74 = (CContent *)a1;
  v64 = a3;
  v68 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v87);
  v5 = (unsigned __int64 *)a1[13];
  v6 = a1 + 9;
  v7 = 0LL;
  v58 = 0;
  v8 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  if ( v5 )
  {
    v9 = (unsigned __int64 **)a1[10];
    if ( *v9 != v6 )
      __fastfail(3u);
    *v5 = (unsigned __int64)v6;
    v5[1] = (unsigned __int64)v9;
    *v9 = v5;
    a1[10] = (unsigned __int64)v5;
    a1[13] = 0LL;
  }
  v10 = v64;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v71 = 0LL;
  v73 = 0;
  v72 = 0LL;
  v69 = a1 + 9;
  v70 = 0LL;
  v61 = 0;
  v59 = 0;
  v76 = 0uLL;
  if ( !v64 )
  {
    if ( v68 )
      v40 = (CVisual **)((char *)v68 - 16);
    else
      v40 = 0LL;
    v66 = (struct CDrawingContext *)v40;
    if ( *((_BYTE *)v40 + 7936) )
    {
      if ( *((_BYTE *)v40 + 7937) )
        v41 = v40[402];
      else
        v41 = v40[994];
    }
    else
    {
      v41 = 0LL;
    }
    v42 = (struct _LIST_ENTRY *)v40[993];
    v65 = 0LL;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v42->Flink[11].Blink)(v42) )
    {
      v43 = (struct _LIST_ENTRY *)((char *)v41 + 328);
LABEL_71:
      v65 = v43;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v41);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          v43 = i - 22;
          if ( i[2].Flink == v42 )
            goto LABEL_71;
        }
      }
      v43 = 0LL;
    }
    if ( !v43 )
    {
      v17 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xDBu, 0LL);
      v34 = 0;
      goto LABEL_44;
    }
    v10 = v64;
    v7 = 0LL;
  }
  v14 = *v6;
  v15 = 0;
  if ( v6 == (unsigned __int64 *)*v6 )
  {
    v17 = 1;
  }
  else
  {
    v16 = *(unsigned int *)(v14 + 20);
    v13 = (unsigned int *)(v14 + 24);
    v70 = (unsigned __int64 *)*v6;
    v17 = -2147467259;
    v71 = (unsigned __int64 *)(v14 + 24);
    v73 = v16;
    v72 = (unsigned int *)(v14 + 24);
    if ( v16 )
    {
      if ( v16 >= 8 )
      {
        *(_QWORD *)&v14 = *v13;
        if ( (unsigned int)v14 >= 8 && (v14 & 3) == 0 )
        {
          if ( (unsigned __int64)v14 > v16 )
          {
            v7 = 0LL;
          }
          else
          {
            v11 = v13[1];
            *((_QWORD *)&v14 + 1) = v13 + 1;
            v13 = (unsigned int *)((char *)v13 + v14);
            v59 = v11;
            v7 = 0LL;
            v72 = v13;
            v17 = 0;
            v15 = v14 - 4;
          }
        }
      }
    }
    else
    {
      v17 = 1;
      if ( *(unsigned __int64 **)v14 != v6 )
        v17 = -2147467259;
    }
    v12 = (unsigned int *)*((_QWORD *)&v14 + 1);
    v4 = (unsigned int)v17;
    if ( v17 )
    {
      *((_QWORD *)&v76 + 1) = 0LL;
      v12 = 0LL;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xE0u, 0LL);
        v34 = 0;
        goto LABEL_44;
      }
    }
    else
    {
      *(_QWORD *)&v14 = v15;
      if ( !*((_QWORD *)&v14 + 1) && v15 )
      {
        ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
          v16,
          0LL,
          0LL,
          (unsigned int)v17);
        __debugbreak();
      }
      v76 = v14;
    }
  }
  v18 = v66;
  while ( 1 )
  {
    v82 = v12;
    if ( v17 )
      goto LABEL_41;
    v19 = v76;
    if ( v8 || v10 )
    {
      if ( !v10 )
        goto LABEL_47;
      goto LABEL_48;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v67);
    v20 = v66;
    v62 = 0LL;
    if ( !*((_BYTE *)v66 + 8067) )
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v62);
      v49 = CDrawListCache::InternalCreate(1, &v62);
      v33 = v49;
      v17 = v49;
      if ( v49 >= 0 )
      {
        v8 = v62;
        v18 = v66;
        goto LABEL_39;
      }
      v24 = v49;
      v50 = 471;
      goto LABEL_102;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v62);
    v23 = (CDrawListCache *)*((_QWORD *)v20 + 4);
    v24 = 0;
    v25 = 0LL;
    v26 = (__int64 *)&v65[1];
    v60 = v23;
    v62 = 0LL;
    Blink = v65[1].Blink;
    Flink = v65[1].Flink;
    v77 = Blink;
    while ( Flink != Blink )
    {
      if ( LODWORD(Flink->Flink) != 2 || HIDWORD(Flink->Flink) != v61 )
        goto LABEL_138;
      v29 = Flink->Blink;
      v30 = *(__int64 (**)(void))(*(_QWORD *)v23 + 40LL);
      if ( (char *)v30 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      {
        Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(
                                        v23,
                                        IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                        v21,
                                        v22);
LABEL_26:
        v23 = v60;
        goto LABEL_27;
      }
      if ( (char *)v30 == (char *)CD2DResource::GetDevice )
      {
        Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v23 + 5) + 24LL));
        goto LABEL_26;
      }
      if ( (char *)v30 != (char *)CD2DContext::GetDevice )
      {
        Device = (struct CD3DDevice *)v30();
        goto LABEL_26;
      }
      Device = (CDrawListCache *)((char *)v23 - 16);
LABEL_27:
      if ( !*((_QWORD *)Device + 72) || BYTE5(v29[5].Flink) || !v29[1].Blink )
      {
        v25 = (volatile signed __int32 *)Flink->Blink;
        break;
      }
      Blink = v77;
LABEL_138:
      ++Flink;
    }
    v60 = (CDrawListCache *)v25;
    if ( !v25 )
    {
      v60 = 0LL;
      v51 = CDrawListCache::InternalCreate(0, &v60);
      v24 = v51;
      v17 = v51;
      if ( v51 >= 0 )
      {
        v8 = v60;
        if ( !*((_BYTE *)v60 + 85) && *((_QWORD *)v60 + 3) )
        {
          v78 = v60;
          CMILRefCountImpl::AddReference((CDrawListCache *)((char *)v60 + 8));
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
            v26,
            2LL,
            v61,
            &v78);
        }
        else
        {
          CMILRefCountImpl::AddReference((CDrawListCache *)((char *)v60 + 8));
          v80 = *v26;
          v81 = 0LL;
          v79 = v8;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
            (_DWORD)v26,
            (unsigned int)&v83,
            (unsigned int)&v80,
            2,
            v61,
            (__int64)&v79);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v81);
        }
        goto LABEL_35;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x1Cu, 0LL);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v60);
      v33 = v17;
LABEL_111:
      v50 = 461;
LABEL_102:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, v50, 0LL);
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v62);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0xEEu, 0LL);
      v34 = v58;
      goto LABEL_44;
    }
    if ( _InterlockedAdd(v25 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v57);
    v13 = v72;
    v8 = v60;
LABEL_35:
    v32 = *v26;
    if ( (unsigned __int64)((v26[1] - *v26) >> 4) > 1 )
    {
      while ( v32 != v26[1] )
      {
        v52 = *(struct CDrawListCache **)(v32 + 8);
        if ( v52 == v8 )
          goto LABEL_127;
        v53 = 0LL;
        if ( g_pComposition )
          v53 = *((_QWORD *)g_pComposition + 111);
        if ( (unsigned __int64)(v53 - *((_QWORD *)v52 + 2)) <= 0x1E )
        {
LABEL_127:
          v32 += 16LL;
        }
        else
        {
          v54 = (v32 - *v26) >> 4;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
            v26,
            v54,
            1LL);
          v32 = *v26 + 16 * v54;
        }
      }
    }
    v60 = 0LL;
    v62 = v8;
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v60);
    v33 = v24;
    v17 = v24;
    if ( v24 < 0 )
      goto LABEL_111;
    v18 = v66;
    if ( CContent::IsDrawListCacheDirty(v74, v8, v66, &v84) )
      CDrawListCache::Invalidate(v8);
LABEL_39:
    v62 = 0LL;
    v67 = v8;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v62);
    v11 = v59;
LABEL_47:
    v85 = v19;
    v57 = v11;
    v36 = CRenderData::TryDrawCommandAsDrawList(v74, v18, v8, v87);
    v17 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0xFAu, 0LL);
      goto LABEL_90;
    }
LABEL_48:
    if ( v11 == 438 )
    {
      v44 = *(int (**)(CRenderDataBounds *__hidden, struct CTransform *))(*(_QWORD *)v68 + 104LL);
      v45 = *(struct CTransform **)(*((_QWORD *)v74 + 17) + 8LL * v12[1]);
      if ( (char *)v44 == (char *)CDrawingContext::PushTransform )
      {
        LODWORD(v14) = CDrawingContext::PushTransform((const void **)v68, v45);
      }
      else if ( v44 == CRenderDataBounds::PushTransform )
      {
        LODWORD(v14) = CRenderDataBounds::PushTransform(v68, v45);
      }
      else
      {
        LODWORD(v14) = (*(__int64 (__fastcall **)(CRenderDataBounds *, struct CTransform *))(*(_QWORD *)v68 + 104LL))(
                         v68,
                         v45);
      }
      v17 = v14;
      if ( (int)v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x11Au, 0LL);
        goto LABEL_90;
      }
      ++v58;
      goto LABEL_51;
    }
    if ( v11 != 437 )
      break;
    v34 = v58;
    if ( !v58 )
    {
      v17 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x12Au, 0LL);
      goto LABEL_44;
    }
    v46 = *(__int64 (__fastcall **)(COcclusionContext *))(*(_QWORD *)v68 + 96LL);
    if ( v46 == COcclusionContext::Pop )
      LODWORD(v14) = COcclusionContext::Pop(v68);
    else
      LODWORD(v14) = ((__int64 (__fastcall *)(CRenderDataBounds *, __int64 (__fastcall *)(COcclusionContext *), __int64, __int64))v46)(
                       v68,
                       COcclusionContext::Pop,
                       v7,
                       v4);
    v17 = v14;
    if ( (int)v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x124u, 0LL);
      goto LABEL_44;
    }
    --v58;
LABEL_51:
    if ( v17 == 1 )
    {
      v7 = 0LL;
LABEL_41:
      if ( v17 == 1 )
        v17 = 0;
LABEL_43:
      v34 = v58;
      goto LABEL_44;
    }
    v7 = 0LL;
    v75 = 0LL;
    v12 = 0LL;
    v63 = 0;
    v17 = -2147467259;
    v37 = (unsigned __int64)v71 + v73 - (_QWORD)v13;
    if ( v37 )
    {
      if ( v37 >= 8 )
      {
        v38 = *v13;
        if ( (unsigned int)v38 >= 8 && (v38 & 3) == 0 && v38 <= v37 )
        {
          v11 = v13[1];
          v12 = v13 + 1;
          v13 = (unsigned int *)((char *)v13 + v38);
          v59 = v11;
          v72 = v13;
          v75 = v12;
          v17 = 0;
          v63 = v38 - 4;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v17 = 1;
      v39 = (unsigned __int64 *)*v70;
      if ( (_QWORD *)*v70 != v69 )
      {
        v55 = v39 + 3;
        v70 = (unsigned __int64 *)*v70;
        v56 = *((_DWORD *)v39 + 5);
        v71 = v55;
        v72 = (unsigned int *)v55;
        v73 = v56;
        LODWORD(v14) = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v71, &v59, (const void **)&v75, &v63);
        v7 = 0LL;
        v17 = v14;
        if ( (_DWORD)v14 == 1 && (_QWORD *)*v70 != v69 )
        {
          v17 = -2147467259;
          LODWORD(v4) = -2147467259;
LABEL_139:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x13Eu, 0LL);
          goto LABEL_43;
        }
        v13 = v72;
        v12 = (unsigned int *)v75;
        v11 = v59;
      }
    }
    if ( v17 )
    {
      v12 = v82;
      v4 = (unsigned int)v17;
      *((_QWORD *)&v76 + 1) = v82;
      if ( v17 < 0 )
        goto LABEL_139;
      ++v61;
      v10 = v64;
    }
    else
    {
LABEL_60:
      if ( !v12 )
      {
        if ( v63 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
      }
      ++v61;
      v10 = v64;
      *(_QWORD *)&v76 = v63;
      *((_QWORD *)&v76 + 1) = v12;
    }
  }
  v86 = v19;
  LODWORD(v14) = CRenderData::DrawCommandAsLegacy((__int64)v74, (__int64 *)v68, v7, v11, (__int64)&v86);
  v17 = v14;
  if ( (int)v14 >= 0 )
    goto LABEL_51;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x12Fu, 0LL);
LABEL_90:
  v34 = v58;
LABEL_44:
  while ( v34 )
  {
    LODWORD(v14) = (*(__int64 (__fastcall **)(CRenderDataBounds *, _QWORD, __int64, __int64))(*(_QWORD *)v68 + 96LL))(
                     v68,
                     *((_QWORD *)&v14 + 1),
                     v7,
                     v4);
    v17 = v14;
    if ( (int)v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x156u, 0LL);
    else
      --v34;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v67);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v87);
  return (unsigned int)v17;
}
