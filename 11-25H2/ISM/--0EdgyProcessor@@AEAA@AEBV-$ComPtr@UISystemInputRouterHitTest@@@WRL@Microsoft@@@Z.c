/*
 * XREFs of ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x18015100C
 * Callers:
 *     ?Create@EdgyProcessor@@SA?AV?$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV?$ComPtr@UISystemInputRouterHitTest@@@34@@Z @ 0x180151918 (-Create@EdgyProcessor@@SA-AV-$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV-$ComPtr@UISystemInputR.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800221E0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E8D8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1801481FC (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??0?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180148228 (--0-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@1@@Z @ 0x180150F1C (--0-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@1@@Z @ 0x180150F94 (--0-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$ha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall EdgyProcessor::EdgyProcessor(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v6; // rax
  __int64 *v7; // r14
  int v8; // eax
  const char *v9; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v17 = a1;
  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
  *(_QWORD *)(a1 + 8) = &EdgyProcessor::`vftable'{for `RefCountedObject'};
  v4 = (_DWORD *)(a1 + 24);
  v18 = a1 + 24;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_QWORD *)(a1 + 80) = 8LL;
  *v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    a1 + 48,
    0x10uLL,
    *(_QWORD *)(a1 + 32));
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 88);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>(a1 + 152);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 216);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>(a1 + 280);
  v7 = (__int64 *)(a1 + 344);
  *(_QWORD *)(a1 + 344) = *a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1 + 344));
  HIDWORD(v18) = (unsigned __int64)(a1 + 352) >> 32;
  LODWORD(v18) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>(
    a1 + 352,
    &v18);
  HIDWORD(v18) = (unsigned __int64)(a1 + 416) >> 32;
  LODWORD(v18) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>(
    a1 + 416,
    &v18);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 480);
  *(_QWORD *)(a1 + 544) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 544));
  v8 = CoreUICreate(a1 + 544);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      (const char *)(unsigned int)v8,
      v15);
  if ( !*(_QWORD *)(a1 + 544) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      v9);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  if ( *(_QWORD *)(v11 + 72) != a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12 = *(_QWORD *)(v11 + 72);
    *(_QWORD *)(v11 + 72) = a1;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *v7;
  if ( *(_QWORD *)(v11 + 88) != *v7 )
  {
    v17 = *v7;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v17);
    v17 = *(_QWORD *)(v11 + 88);
    *(_QWORD *)(v11 + 88) = v13;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  return a1;
}
