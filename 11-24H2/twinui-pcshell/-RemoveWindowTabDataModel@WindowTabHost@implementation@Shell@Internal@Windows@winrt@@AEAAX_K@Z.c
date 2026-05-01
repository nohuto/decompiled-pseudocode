/*
 * XREFs of ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801261FC
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002A330 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800C1890 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C0A78 (--1-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@s.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800C2584 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800C3FB0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800C3FB0.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x180126410 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180126548 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1802A1DC0 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // r15
  _QWORD *v11; // rax
  __int64 **v12; // rdi
  __int64 *v13; // rbx
  _OWORD *v14; // rsi
  char v15[16]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v16; // [rsp+38h] [rbp-29h] BYREF
  _OWORD *v17; // [rsp+48h] [rbp-19h]
  _QWORD v18[3]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v19; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  __int64 v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v23 = a2;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v23 + i) ^ (unsigned __int64)v4);
  v6 = 2 * (v4 & *((_QWORD *)this + 84));
  v7 = *((_QWORD *)this + 81);
  v8 = *(_QWORD *)(v7 + 8 * v6 + 8);
  v9 = *((_QWORD *)this + 79);
  if ( v8 == v9 )
  {
LABEL_7:
    v8 = 0LL;
  }
  else
  {
    while ( a2 != *(_QWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(v7 + 8 * v6) )
        goto LABEL_7;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  if ( !v8 )
    v8 = *((_QWORD *)this + 79);
  if ( v8 != v9 )
  {
    v16 = 0LL;
    v10 = 0LL;
    v17 = 0LL;
    v18[2] = 0LL;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v11 = v11;
    v11[1] = v11;
    v18[1] = v11;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 7LL;
    v22 = 8LL;
    LODWORD(v18[0]) = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
      (__int64)&v19,
      0x10uLL,
      (unsigned __int64)v11);
    v12 = (__int64 **)*((_QWORD *)this + 92);
    v13 = *v12;
    v14 = (_OWORD *)*((_QWORD *)&v16 + 1);
    while ( v13 != (__int64 *)v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 87)
                                 + 8
                                 * (((unsigned __int64)(v13[4] + *((_QWORD *)this + 89)) >> 1) & (*((_QWORD *)this + 88)
                                                                                                - 1LL)))
                     + 8LL * ((*((_DWORD *)v13 + 8) + *((_DWORD *)this + 178)) & 1)) == a2 )
      {
        if ( v14 == v10 )
        {
          std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(&v16);
          v10 = v17;
          v14 = (_OWORD *)*((_QWORD *)&v16 + 1);
        }
        else
        {
          *v14++ = *((_OWORD *)v13 + 1);
          *((_QWORD *)&v16 + 1) = v14;
        }
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          v18,
          v15);
      }
      v13 = (__int64 *)*v13;
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
      this,
      (__int64 *)&v16,
      v18);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Erase<unsigned __int64>(
      (char *)this + 624,
      &v23);
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>((__int64)v18);
    if ( (_QWORD)v16 )
      std::_Deallocate<16,0>(
        (void *)v16,
        (const struct std::nothrow_t *)(((unsigned __int64)v17 - v16) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
