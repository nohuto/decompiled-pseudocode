/*
 * XREFs of ?reserve@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAX_K@Z @ 0x180014804
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015084 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B2F4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _o_ceilf_0 @ 0x18009D2F0 (_o_ceilf_0.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::reserve(
        __int64 a1,
        __int64 a2)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  float v8; // xmm0_4
  float v9; // xmm0_4
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rax

  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  v4 = o_ceilf_0(v3 / *(float *)a1);
  v5 = 0LL;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v5 + (unsigned int)(int)v4;
  if ( v6 < 0 )
  {
    v12 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v8 = (float)(int)v12 + (float)(int)v12;
  }
  else
  {
    v8 = (float)(int)v6;
  }
  v9 = o_ceilf_0(v8 / *(float *)a1);
  v10 = 0LL;
  if ( v9 >= 9.223372e18 )
  {
    v9 = v9 - 9.223372e18;
    if ( v9 < 9.223372e18 )
      v10 = 0x8000000000000000uLL;
  }
  result = v10 + (unsigned int)(int)v9;
  if ( result >= v7 )
    v7 = v10 + (unsigned int)(int)v9;
  if ( v7 > *(_QWORD *)(a1 + 56) )
    return std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
             a1,
             v7);
  return result;
}
