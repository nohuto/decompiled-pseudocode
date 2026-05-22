/*
 * XREFs of ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x18002245C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180021B78 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x180021E4C (-_Check_max_size@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@KU.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18009B218 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long,Microsoft::WRL::ComPtr<IInputTarget> &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  unsigned __int64 i; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  char *v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // r8
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = a1[3];
  v11 = *(__int64 **)(v10 + 16 * (v8 & a1[6]) + 8);
  v12 = (__int64 *)a1[1];
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      if ( *a3 == *((_DWORD *)v11 + 4) )
      {
        v12 = (__int64 *)*v11;
        goto LABEL_6;
      }
      if ( v11 == *(__int64 **)(v10 + 16 * (v8 & a1[6])) )
        break;
      v11 = (__int64 *)v11[1];
    }
    v12 = v11;
    v11 = 0LL;
LABEL_6:
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v11 + 3, a4);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Check_max_size((__int64)a1);
  v19[0] = a1 + 1;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v19[1] = v13;
  *((_DWORD *)v13 + 4) = *a3;
  *((_QWORD *)v13 + 3) = *a4;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v13 + 3);
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Rehash_for_1(a1);
    v12 = *(__int64 **)((__int64 (__fastcall *)(_QWORD *, _QWORD *, char *, __int64))std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>)(
                         a1,
                         v19,
                         v13 + 16,
                         v8);
  }
  v14 = (_QWORD *)v12[1];
  ++a1[2];
  *(_QWORD *)v13 = v12;
  *((_QWORD *)v13 + 1) = v14;
  *v14 = v13;
  v12[1] = (__int64)v13;
  v15 = a1[3];
  v16 = 2 * (v8 & a1[6]);
  v17 = *(__int64 **)(v15 + 16 * (v8 & a1[6]));
  if ( v17 == (__int64 *)a1[1] )
  {
    *(_QWORD *)(v15 + 16 * (v8 & a1[6])) = v13;
LABEL_18:
    *(_QWORD *)(v15 + 8 * v16 + 8) = v13;
    goto LABEL_12;
  }
  if ( v17 == v12 )
  {
    *(_QWORD *)(v15 + 16 * (v8 & a1[6])) = v13;
    goto LABEL_12;
  }
  if ( *(_QWORD **)(v15 + 16 * (v8 & a1[6]) + 8) == v14 )
    goto LABEL_18;
LABEL_12:
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
