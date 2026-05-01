/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805C3B80
 * Callers:
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805C4BB0 (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800486E0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAHV?$allocator@H@std@@@std@@YAPEAHQEAH0PEAHAEAV?$allocator@H@0@@Z @ 0x1802A64B8 (--$_Uninitialized_move@PEAHV-$allocator@H@std@@@std@@YAPEAHQEAH0PEAHAEAV-$allocator@H@0@@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1802C33C0 (-_Calculate_growth@-$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall std::vector<int>::_Resize_reallocate<std::_Value_init_tag>(void **a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  size_t size_of; // rax
  char *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
         a1,
         a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
    std::_Uninitialized_move<int *>(*a1, (__int64)a1[1], v7);
    v8 = v5;
    v9 = a2;
    v10 = (__int64)v7;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(4 * v5));
    throw;
  }
  return std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(
           v11,
           v10,
           v9,
           v8);
}
