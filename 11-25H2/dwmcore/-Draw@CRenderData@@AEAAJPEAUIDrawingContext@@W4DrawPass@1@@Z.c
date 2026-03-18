/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560
 * Callers:
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802007C0 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcBounds@CRenderData@@AEAAJXZ @ 0x180202024 (-CalcBounds@CRenderData@@AEAAJXZ.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020AA60 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18000CF80 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000DF90 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18000E28C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180012998 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800D3CA0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014B8B4 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801BE8D0 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z.c)
 *     ??$emplace_back@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXIIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801DA638 (--$emplace_back@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_faca.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x180206A20 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x180209490 (-PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18024CA20 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180298130 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct CDrawingContext *v23; // rbx
  CDrawListCache *v24; // rcx
  int v25; // r12d
  volatile signed __int32 *v26; // rdi
  __int64 *v27; // r13
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rbx
  struct _LIST_ENTRY *Blink; // rsi
  __int64 (*v31)(void); // rax
  struct CD3DDevice *Device; // rax
  __int64 v33; // rbx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r14d
  int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rax
  CVisual **v44; // rax
  CVisual *v45; // r13
  struct _LIST_ENTRY *v46; // rbx
  struct _LIST_ENTRY **p_Blink; // rdx
  int (*v48)(CRenderDataBounds *__hidden, struct CTransform *); // r8
  struct CTransform *v49; // rdx
  __int64 (__fastcall *v50)(COcclusionContext *__hidden); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  struct CDrawListCache *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int64 *v62; // rcx
  unsigned int v63; // eax
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+44h] [rbp-BCh]
  unsigned int v66; // [rsp+48h] [rbp-B8h] BYREF
  CDrawListCache *v67; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v68; // [rsp+58h] [rbp-A8h]
  struct CDrawListCache *v69; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h]
  struct _LIST_ENTRY **v72; // [rsp+70h] [rbp-90h]
  struct CDrawingContext *v73; // [rsp+78h] [rbp-88h]
  struct CDrawListCache *v74; // [rsp+80h] [rbp-80h] BYREF
  CRenderDataBounds *v75; // [rsp+88h] [rbp-78h]
  _QWORD *v76; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v77; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v78; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v79; // [rsp+A8h] [rbp-58h]
  unsigned int v80; // [rsp+B0h] [rbp-50h]
  CContent *v81; // [rsp+B8h] [rbp-48h]
  void *v82; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v83; // [rsp+D0h] [rbp-30h]
  struct _LIST_ENTRY *v84; // [rsp+E0h] [rbp-20h]
  CDrawListCache *v85; // [rsp+E8h] [rbp-18h] BYREF
  struct CDrawListCache *v86; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v89; // [rsp+108h] [rbp+8h]
  char v90; // [rsp+110h] [rbp+10h] BYREF
  struct D2D_SIZE_F v91; // [rsp+118h] [rbp+18h] BYREF
  __int128 v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v94[112]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1328h] [rbp+1228h]

  v81 = (CContent *)a1;
  v71 = a3;
  v75 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v94);
  v5 = (unsigned __int64 *)a1[13];
  v6 = a1 + 9;
  v7 = 0LL;
  v65 = 0;
  v8 = 0LL;
  v73 = 0LL;
  v72 = 0LL;
  v74 = 0LL;
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
  v10 = v71;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v78 = 0LL;
  v80 = 0;
  v79 = 0LL;
  v76 = a1 + 9;
  v77 = 0LL;
  v68 = 0;
  v66 = 0;
  v83 = 0uLL;
  if ( !v71 )
  {
    if ( v75 )
      v44 = (CVisual **)((char *)v75 - 16);
    else
      v44 = 0LL;
    v73 = (struct CDrawingContext *)v44;
    if ( *((_BYTE *)v44 + 7936) )
    {
      if ( *((_BYTE *)v44 + 7937) )
        v45 = v44[402];
      else
        v45 = v44[994];
    }
    else
    {
      v45 = 0LL;
    }
    v46 = (struct _LIST_ENTRY *)v44[993];
    v72 = 0LL;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v46->Flink[11].Blink)(v46) )
    {
      p_Blink = (struct _LIST_ENTRY **)((char *)v45 + 328);
LABEL_71:
      v72 = p_Blink;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v45);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          p_Blink = &i[-22].Blink;
          if ( i[2].Flink == v46 )
            goto LABEL_71;
        }
      }
      p_Blink = 0LL;
    }
    if ( !p_Blink )
    {
      v17 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xDBu, 0LL);
      v38 = 0;
      goto LABEL_44;
    }
    v10 = v71;
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
    v77 = (unsigned __int64 *)*v6;
    v17 = -2147467259;
    v78 = (unsigned __int64 *)(v14 + 24);
    v80 = v16;
    v79 = (unsigned int *)(v14 + 24);
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
            v66 = v11;
            v7 = 0LL;
            v79 = v13;
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
      *((_QWORD *)&v83 + 1) = 0LL;
      v12 = 0LL;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xE0u, 0LL);
        v38 = 0;
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
      v83 = v14;
    }
  }
  v18 = v73;
  while ( 1 )
  {
    v89 = v12;
    if ( v17 )
      goto LABEL_41;
    v19 = v83;
    if ( v8 || v10 )
    {
      if ( !v10 )
        goto LABEL_47;
      goto LABEL_48;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v74, *((_QWORD *)&v14 + 1), 0LL, v4);
    v23 = v73;
    v69 = 0LL;
    if ( !*((_BYTE *)v73 + 8067) )
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v69, v20, v21, v22);
      v53 = CDrawListCache::InternalCreate(1, &v69);
      v34 = v53;
      v17 = v53;
      if ( v53 >= 0 )
      {
        v8 = v69;
        v18 = v73;
        goto LABEL_39;
      }
      v25 = v53;
      v54 = 471;
      goto LABEL_102;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v69, v20, v21, v22);
    v24 = (CDrawListCache *)*((_QWORD *)v23 + 4);
    v25 = 0;
    v26 = 0LL;
    v27 = (__int64 *)(v72 + 2);
    v67 = v24;
    v69 = 0LL;
    v28 = v72[3];
    v29 = v72[2];
    v84 = v28;
    while ( v29 != v28 )
    {
      if ( LODWORD(v29->Flink) != 2 || HIDWORD(v29->Flink) != v68 )
        goto LABEL_138;
      Blink = v29->Blink;
      v31 = *(__int64 (**)(void))(*(_QWORD *)v24 + 40LL);
      if ( v31 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      {
        Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice();
LABEL_26:
        v24 = v67;
        goto LABEL_27;
      }
      if ( (char *)v31 == (char *)CD2DResource::GetDevice )
      {
        Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v24 + 5) + 24LL));
        goto LABEL_26;
      }
      if ( (char *)v31 != (char *)CD2DContext::GetDevice )
      {
        Device = (struct CD3DDevice *)v31();
        goto LABEL_26;
      }
      Device = (CDrawListCache *)((char *)v24 - 16);
LABEL_27:
      if ( !*((_QWORD *)Device + 72) || BYTE5(Blink[5].Flink) || !Blink[1].Blink )
      {
        v26 = (volatile signed __int32 *)v29->Blink;
        break;
      }
      v28 = v84;
LABEL_138:
      ++v29;
    }
    v67 = (CDrawListCache *)v26;
    if ( !v26 )
    {
      v67 = 0LL;
      v58 = CDrawListCache::InternalCreate(0, &v67);
      v25 = v58;
      v17 = v58;
      if ( v58 >= 0 )
      {
        v8 = v67;
        if ( !*((_BYTE *)v67 + 85) && *((_QWORD *)v67 + 3) )
        {
          v85 = v67;
          CMILRefCountImpl::AddReference((CDrawListCache *)((char *)v67 + 8));
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
            v27,
            2LL,
            v68,
            &v85);
        }
        else
        {
          CMILRefCountImpl::AddReference((CDrawListCache *)((char *)v67 + 8));
          v87 = *v27;
          v88 = 0LL;
          v86 = v8;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
            (_DWORD)v27,
            (unsigned int)&v90,
            (unsigned int)&v87,
            2,
            v68,
            (__int64)&v86);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v88);
        }
        goto LABEL_35;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1Cu, 0LL);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v67);
      v34 = v17;
LABEL_111:
      v54 = 461;
LABEL_102:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v54, 0LL);
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v69, v55, v56, v57);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xEEu, 0LL);
      v38 = v65;
      goto LABEL_44;
    }
    if ( _InterlockedAdd(v26 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v64);
    v13 = v79;
    v8 = v67;
LABEL_35:
    v33 = *v27;
    if ( (unsigned __int64)((v27[1] - *v27) >> 4) > 1 )
    {
      while ( v33 != v27[1] )
      {
        v59 = *(struct CDrawListCache **)(v33 + 8);
        if ( v59 == v8 )
          goto LABEL_127;
        v60 = 0LL;
        if ( g_pComposition )
          v60 = *((_QWORD *)g_pComposition + 111);
        if ( (unsigned __int64)(v60 - *((_QWORD *)v59 + 2)) <= 0x1E )
        {
LABEL_127:
          v33 += 16LL;
        }
        else
        {
          v61 = (v33 - *v27) >> 4;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
            v27,
            v61,
            1LL);
          v33 = *v27 + 16 * v61;
        }
      }
    }
    v67 = 0LL;
    v69 = v8;
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v67);
    v34 = v25;
    v17 = v25;
    if ( v25 < 0 )
      goto LABEL_111;
    v18 = v73;
    if ( CContent::IsDrawListCacheDirty(v81, v8, v73, &v91) )
      CDrawListCache::Invalidate(v8);
LABEL_39:
    v69 = 0LL;
    v74 = v8;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v69, v35, v36, v37);
    v11 = v66;
LABEL_47:
    v92 = v19;
    v64 = v11;
    v40 = CRenderData::TryDrawCommandAsDrawList(v81, v18, v8, v94);
    v17 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xFAu, 0LL);
      goto LABEL_90;
    }
LABEL_48:
    if ( v11 == 429 )
    {
      v48 = *(int (**)(CRenderDataBounds *__hidden, struct CTransform *))(*(_QWORD *)v75 + 104LL);
      v49 = *(struct CTransform **)(*((_QWORD *)v81 + 17) + 8LL * v12[1]);
      if ( (char *)v48 == (char *)CDrawingContext::PushTransform )
      {
        LODWORD(v14) = CDrawingContext::PushTransform(v75, v49);
      }
      else if ( v48 == CRenderDataBounds::PushTransform )
      {
        LODWORD(v14) = CRenderDataBounds::PushTransform(v75, v49);
      }
      else
      {
        LODWORD(v14) = (*(__int64 (__fastcall **)(CRenderDataBounds *, struct CTransform *))(*(_QWORD *)v75 + 104LL))(
                         v75,
                         v49);
      }
      v17 = v14;
      if ( (int)v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x11Au, 0LL);
        goto LABEL_90;
      }
      ++v65;
      goto LABEL_51;
    }
    if ( v11 != 428 )
      break;
    v38 = v65;
    if ( !v65 )
    {
      v17 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x12Au, 0LL);
      goto LABEL_44;
    }
    v50 = *(__int64 (__fastcall **)(COcclusionContext *__hidden))(*(_QWORD *)v75 + 96LL);
    if ( v50 == COcclusionContext::Pop )
      LODWORD(v14) = COcclusionContext::Pop(v75);
    else
      LODWORD(v14) = ((__int64 (__fastcall *)(CRenderDataBounds *, __int64 (__fastcall *)(COcclusionContext *__hidden), __int64, __int64))v50)(
                       v75,
                       COcclusionContext::Pop,
                       v7,
                       v4);
    v17 = v14;
    if ( (int)v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x124u, 0LL);
      goto LABEL_44;
    }
    --v65;
LABEL_51:
    if ( v17 == 1 )
    {
      v7 = 0LL;
LABEL_41:
      if ( v17 == 1 )
        v17 = 0;
LABEL_43:
      v38 = v65;
      goto LABEL_44;
    }
    v7 = 0LL;
    v82 = 0LL;
    v12 = 0LL;
    v70 = 0;
    v17 = -2147467259;
    v41 = (unsigned __int64)v78 + v80 - (_QWORD)v13;
    if ( v41 )
    {
      if ( v41 >= 8 )
      {
        v42 = *v13;
        if ( (unsigned int)v42 >= 8 && (v42 & 3) == 0 && v42 <= v41 )
        {
          v11 = v13[1];
          v12 = v13 + 1;
          v13 = (unsigned int *)((char *)v13 + v42);
          v66 = v11;
          v79 = v13;
          v82 = v12;
          v17 = 0;
          v70 = v42 - 4;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v17 = 1;
      v43 = (unsigned __int64 *)*v77;
      if ( (_QWORD *)*v77 != v76 )
      {
        v62 = v43 + 3;
        v77 = (unsigned __int64 *)*v77;
        v63 = *((_DWORD *)v43 + 5);
        v78 = v62;
        v79 = (unsigned int *)v62;
        v80 = v63;
        LODWORD(v14) = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v78, &v66, (const void **)&v82, &v70);
        v7 = 0LL;
        v17 = v14;
        if ( (_DWORD)v14 == 1 && (_QWORD *)*v77 != v76 )
        {
          v17 = -2147467259;
          LODWORD(v4) = -2147467259;
LABEL_139:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x13Eu, 0LL);
          goto LABEL_43;
        }
        v13 = v79;
        v12 = (unsigned int *)v82;
        v11 = v66;
      }
    }
    if ( v17 )
    {
      v12 = v89;
      v4 = (unsigned int)v17;
      *((_QWORD *)&v83 + 1) = v89;
      if ( v17 < 0 )
        goto LABEL_139;
      ++v68;
      v10 = v71;
    }
    else
    {
LABEL_60:
      if ( !v12 )
      {
        if ( v70 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
      }
      ++v68;
      v10 = v71;
      *(_QWORD *)&v83 = v70;
      *((_QWORD *)&v83 + 1) = v12;
    }
  }
  v93 = v19;
  LODWORD(v14) = CRenderData::DrawCommandAsLegacy((__int64)v81, (__int64 *)v75, v7, v11, (__int64)&v93);
  v17 = v14;
  if ( (int)v14 >= 0 )
    goto LABEL_51;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x12Fu, 0LL);
LABEL_90:
  v38 = v65;
LABEL_44:
  while ( v38 )
  {
    LODWORD(v14) = (*(__int64 (__fastcall **)(CRenderDataBounds *, _QWORD, __int64, __int64))(*(_QWORD *)v75 + 96LL))(
                     v75,
                     *((_QWORD *)&v14 + 1),
                     v7,
                     v4);
    v17 = v14;
    if ( (int)v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x156u, 0LL);
    else
      --v38;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v74, *((_QWORD *)&v14 + 1), v7, v4);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v94);
  return (unsigned int)v17;
}
