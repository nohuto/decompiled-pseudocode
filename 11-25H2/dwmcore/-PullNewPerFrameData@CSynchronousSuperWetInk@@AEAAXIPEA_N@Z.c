/*
 * XREFs of ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A921C
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A8F40 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A9990 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A8740 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x1801A94E4 (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801A957C (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x1801A98D0 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     memcpy_s_0 @ 0x1801A98EC (memcpy_s_0.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x1802A38A0 (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1802B0E9C (-clear@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     McTemplateU0pxttt_EventWriteTransfer @ 0x1802B0F64 (McTemplateU0pxttt_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::PullNewPerFrameData(CSynchronousSuperWetInk *this, int a2, bool *a3)
{
  __int64 v3; // r9
  __int64 *v4; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // edx
  int v13; // r13d
  _DWORD *v14; // rdi
  unsigned __int8 v15; // r15
  unsigned __int64 LatestLookupId; // rax
  bool v17; // cf
  rsize_t v18; // r14
  void *v19; // r12
  volatile signed __int32 *v20; // rax
  volatile signed __int32 *v21; // rbx
  char *v22; // rcx
  std::_Ref_count_base *v23; // rcx
  std::_Ref_count_base *v24; // rax
  char v25; // cl
  int v26; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-35h]
  _QWORD v28[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v31[80]; // [rsp+80h] [rbp+7h] BYREF
  bool v32; // [rsp+E0h] [rbp+67h]
  char v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 27);
  v4 = (__int64 *)((char *)this + 264);
  *a3 = 0;
  v35 = 0;
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12) * v6;
  v27 = v6;
  std::vector<unsigned char>::assign((char *)this + 264, v7, &v35);
  v8 = *v4;
  v9 = *((_QWORD *)this + 27);
  v10 = *((_QWORD *)this + 34) - v8;
  v11 = *((_DWORD *)this + 60);
  v26 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(&v30, v10);
  if ( v30 == -1 || !v8 && v30 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v28[0] = v30;
  v28[1] = v8;
  CSharedCircularQueue::PopAll(v9, (unsigned int)v28, v11, (unsigned int)&v26, (__int64)this + 240);
  v13 = v26;
  while ( --v13 >= 0 )
  {
    v14 = (_DWORD *)(*((_QWORD *)this + 33) + v6 * v13);
    if ( v14[4] > v6 - 24 )
    {
      v25 = 0;
      v15 = 0;
LABEL_34:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0pxttt_EventWriteTransfer(v15, v12, (_DWORD)this, *(_QWORD *)v14, 0, v15, v25);
      goto LABEL_26;
    }
    v15 = 0;
    if ( !*(_QWORD *)v14 )
    {
      v15 = 1;
      *((_BYTE *)this + 96) = 1;
    }
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    v17 = *(_QWORD *)v14 < LatestLookupId;
    if ( *(_QWORD *)v14 < LatestLookupId )
    {
      v25 = 1;
      if ( !v15 )
        goto LABEL_34;
      v17 = *(_QWORD *)v14 < LatestLookupId;
    }
    v32 = !v17;
    v18 = v6;
    v19 = operator new[](v6);
    v20 = (volatile signed __int32 *)operator new(0x18uLL);
    v21 = v20;
    if ( v20 )
    {
      *((_DWORD *)v20 + 2) = 1;
      *((_DWORD *)v20 + 3) = 1;
      *(_QWORD *)v20 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *((_QWORD *)v20 + 2) = v19;
    }
    v29[0] = v19;
    v29[1] = v20;
    memcpy_s_0(v19, v18, v14, v18);
    v22 = (char *)this + 224;
    if ( v15 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(v22);
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, v29);
    }
    else
    {
      v23 = *(std::_Ref_count_base **)std::map<unsigned __int64,std::shared_ptr<unsigned char [0]>>::_Try_emplace<unsigned __int64 const &,>(
                                        v22,
                                        v31,
                                        v14);
      if ( v21 )
        _InterlockedIncrement(v21 + 2);
      *((_QWORD *)v23 + 5) = v19;
      v24 = (std::_Ref_count_base *)*((_QWORD *)v23 + 6);
      *((_QWORD *)v23 + 6) = v21;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      if ( *(_QWORD *)v14 == a2 )
      {
        if ( v21 )
          _InterlockedIncrement(v21 + 2);
        *((_QWORD *)this + 31) = v19;
        v23 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
        *((_QWORD *)this + 32) = v21;
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        (__int64)v23,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_NEW_FROM_GUEST,
        this,
        *(_QWORD *)v14);
    *a3 = 1;
    if ( v21 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v21);
    if ( !v32 )
    {
      v25 = 1;
      if ( !v15 )
        goto LABEL_34;
    }
LABEL_26:
    v6 = v27;
  }
}
