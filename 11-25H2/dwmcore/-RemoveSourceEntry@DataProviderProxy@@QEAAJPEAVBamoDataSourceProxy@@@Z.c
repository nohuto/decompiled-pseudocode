/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x18027DF88
 * Callers:
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x18027DF50 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180077280 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1800C1200 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800F5C44 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1802686F4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x18027D354 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$ComPtr@VBamoDataS.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v6; // rdx
  const void **v7; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rax
  size_t v10; // rbx
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  SIZE_T size_of; // rax
  void *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  v3 = Unique;
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v17,
    &Unique);
  v4 = v17;
  if ( v17 == *((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v17 + 24) + 192LL) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>,0>(
      (_QWORD *)this + 10,
      &Unique,
      v4);
    v6 = (_QWORD *)*((_QWORD *)this + 19);
    v7 = (const void **)((char *)this + 144);
    for ( i = (_QWORD *)*((_QWORD *)this + 18); i != v6 && v3 != *i; ++i )
      ;
    if ( i != v6 )
    {
      for ( j = i + 1; j != v6; ++j )
      {
        if ( v3 != *j )
          *i++ = *j;
      }
      if ( i != v6 )
      {
        v10 = *((_QWORD *)this + 19) - (_QWORD)v6;
        memmove_0(i, v6, v10);
        *((_QWORD *)this + 19) = (char *)i + v10;
      }
    }
    v11 = (_BYTE *)*((_QWORD *)this + 19);
    if ( v11 != *((_BYTE **)this + 20) )
    {
      if ( *v7 == v11 )
      {
        std::vector<CDataSourceReader *>::_Tidy((__int64)this + 144);
      }
      else
      {
        v12 = (v11 - (_BYTE *)*v7) >> 3;
        size_of = std::_Get_size_of_n<8>(v12);
        v14 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        memmove_0(v14, *v7, *((_QWORD *)this + 19) - (_QWORD)*v7);
        std::vector<CVectorShape *>::_Change_array((__int64)this + 144, (__int64)v14, v12, v12);
      }
    }
    return 0LL;
  }
}
