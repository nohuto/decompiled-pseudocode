/*
 * XREFs of ??$emplace@Uguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@4@@Z @ 0x1800C0C2C
 * Callers:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800C0E64 (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x1801B0F80 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@impl.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180223670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1805804B0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::emplace<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // rdx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 0x10 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = a1 + 8;
  v13 = *(_QWORD **)(a1 + 8);
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      v14 = *a3 - v11[2];
      if ( *a3 == v11[2] )
        v14 = a3[1] - v11[3];
      if ( !v14 )
      {
        v13 = (_QWORD *)*v11;
        goto LABEL_8;
      }
      if ( v11 == *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
        break;
      v11 = (_QWORD *)v11[1];
    }
    v13 = v11;
    v11 = 0LL;
LABEL_8:
    if ( v11 )
    {
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
    std::_Xlength_error("unordered_map/set too long");
  v27[0] = v12;
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v27[1] = v15;
  *((_OWORD *)v15 + 1) = *(_OWORD *)a3;
  *((_QWORD *)v15 + 4) = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v15 + 4);
  v16 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v16 < 0 )
    v17 = (float)(v16 & 1 | (unsigned int)((unsigned __int64)v16 >> 1))
        + (float)(v16 & 1 | (unsigned int)((unsigned __int64)v16 >> 1));
  else
    v17 = (float)(int)v16;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 < 0 )
  {
    v25 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v18 >> 1);
    v19 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v19 = (float)(int)v18;
  }
  if ( (float)(v17 / v19) > *(float *)a1 )
  {
    v26 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Forced_rehash(
      a1,
      v26);
    v13 = *(_QWORD **)((__int64 (__fastcall *)(__int64, _QWORD *, char *, __int64))std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Find_last<winrt::guid>)(
                        a1,
                        v27,
                        v15 + 16,
                        v9);
  }
  v20 = (_QWORD *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v15 = v13;
  *((_QWORD *)v15 + 1) = v20;
  *v20 = v15;
  v13[1] = v15;
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 2 * (v9 & *(_QWORD *)(a1 + 48));
  v23 = *(_QWORD **)(v21 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
  if ( v23 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v21 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v15;
LABEL_26:
    *(_QWORD *)(v21 + 8 * v22 + 8) = v15;
    goto LABEL_20;
  }
  if ( v23 == v13 )
  {
    *(_QWORD *)(v21 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v15;
    goto LABEL_20;
  }
  if ( *(_QWORD **)(v21 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) == v20 )
    goto LABEL_26;
LABEL_20:
  *(_QWORD *)a2 = v15;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
