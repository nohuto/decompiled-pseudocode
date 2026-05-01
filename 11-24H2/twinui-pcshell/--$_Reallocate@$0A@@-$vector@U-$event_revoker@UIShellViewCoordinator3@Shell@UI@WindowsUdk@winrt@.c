/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x18058C4D0
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800D2F8C (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@YAPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU123@0PEAU123@AEAV?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@0@@Z @ 0x18058C540 (--$_Uninitialized_move@PEAU-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$M.c)
 */

__int64 __fastcall ____Reallocate__0A____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAXAEA_K_Z(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdi
  size_t size_of; // rax
  void *v9; // rsi

  v7 = (__int64)(a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  ____Uninitialized_move_PEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__YAPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU123_0PEAU123_AEAV__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___0__Z(
    *a1,
    a1[1],
    v9);
  return __Change_array___vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAXQEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___K1_Z(
           a1,
           v9,
           v7,
           *a2,
           a5);
}
