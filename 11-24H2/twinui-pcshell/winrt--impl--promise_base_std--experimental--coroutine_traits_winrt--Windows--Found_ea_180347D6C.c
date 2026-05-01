/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_ @ 0x180347D6C
 * Callers:
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type::_promise_type @ 0x180348768 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncAction__lambda_da9f5ee43db.c)
 *     _lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1::operator() @ 0x180348E60 (_lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1--operator().c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator() @ 0x180349170 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1--operator().c)
 *     _lambda_2320bd44a73cf61b834c52aa86463e4d_$_ResumeCoro$1::operator() @ 0x180349730 (_lambda_2320bd44a73cf61b834c52aa86463e4d_$_ResumeCoro$1--operator().c)
 *     _lambda_40fb1581da804d2ea8e9861d525112d3_$_ResumeCoro$1::operator() @ 0x180349C00 (_lambda_40fb1581da804d2ea8e9861d525112d3_$_ResumeCoro$1--operator().c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1::operator() @ 0x18034A110 (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1--operator().c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator() @ 0x18034A460 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator().c)
 *     _lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1::operator() @ 0x18034A790 (_lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1--operator().c)
 *     _lambda_da9f5ee43db59325462f58bbda1cfc4c_$_ResumeCoro$1::operator() @ 0x18034AB60 (_lambda_da9f5ee43db59325462f58bbda1cfc4c_$_ResumeCoro$1--operator().c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_scalar_deleting_destructor_ @ 0x18034B440 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18034B440.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type::_promise_type @ 0x1805E3A4C (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_1805E3A4C.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 11));
  if ( a1[10] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1 + 10);
  __ExceptionPtrDestroy(a1 + 7);
  return winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::_root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_(a1);
}
