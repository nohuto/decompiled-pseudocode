/*
 * XREFs of ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805FE4C0
 * Callers:
 *     ??$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@AEBUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805FEB2C (--$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocat.c)
 *     ?Append@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x180600440 (-Append@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@WindowsUd.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CD8C4 (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D33BC (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Change_array@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUMenuItem@UI@WindowsUdk@winrt@@_K1@Z @ 0x1801D4BDC (-_Change_array@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winr.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

__int64 *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v11; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v12; // rdi
  __int64 *v13; // rsi
  __int64 *v14; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v15; // r8
  __int64 *v16; // rcx
  __int64 *result; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v18; // [rsp+20h] [rbp-48h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v19; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (__int64 *)((char *)v11 + 8 * v6);
  try
  {
    *v13 = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v13);
    v19 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v16, a2, v12);
      v19 = v12;
      v15 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v13 + 1);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v16, v14, v15);
    std::vector<winrt::WindowsUdk::UI::MenuItem>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v19,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v13 + 1));
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(8 * v9));
    throw;
  }
  return result;
}
