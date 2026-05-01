/*
 * XREFs of ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x18049B548
 * Callers:
 *     ??$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Z @ 0x18049B9FC (--$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@-.c)
 *     ?Append@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x18049D020 (-Append@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vecto.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CD8C4 (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D33BC (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 */

__int64 *__fastcall std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Emplace_reallocate<winrt::Windows::Internal::Shell::RegistrationData const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v10; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v11; // rdi
  __int64 *v12; // rsi
  __int64 *v13; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v14; // r8
  __int64 *v15; // rcx
  __int64 *result; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v17; // [rsp+28h] [rbp-40h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v6 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v19 = v7 + 1;
  v8 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         (_QWORD *)a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v10 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = v10;
  v17 = v10;
  v12 = (__int64 *)((char *)v10 + 8 * v6);
  try
  {
    *v12 = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v12);
    v18 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12;
    v13 = *(__int64 **)(a1 + 8);
    v14 = v11;
    v15 = *(__int64 **)a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v15, a2, v11);
      v18 = v11;
      v14 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v12 + 1);
      v13 = *(__int64 **)(a1 + 8);
      v15 = a2;
    }
    std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v15, v13, v14);
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
        *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1,
        *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = (char *)v11 + 8 * v19;
    *(_QWORD *)(a1 + 16) = (char *)v11 + 8 * v8;
    result = v12;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v18,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v12 + 1));
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
