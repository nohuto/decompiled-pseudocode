/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805FE684
 * Callers:
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FED8C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800486E0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1802C33C0 (-_Calculate_growth@-$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  size_t size_of; // rax
  char *v7; // r14

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
         a1,
         a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(
           (__int64)a1,
           (__int64)v7,
           a2,
           v5);
}
