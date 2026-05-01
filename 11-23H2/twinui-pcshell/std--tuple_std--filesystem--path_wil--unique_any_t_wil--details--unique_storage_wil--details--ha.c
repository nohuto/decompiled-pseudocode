/*
 * XREFs of std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1806AB68C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x180253E50 (_RequestNotificationPinConsentAsync$_ResumeCoro$1_--_1_--dtor$3.c)
 *     __anonymous_namespace_::CreateTemporaryLogoFile_::_1_::dtor$0 @ 0x1806ACF97 (__anonymous_namespace_--CreateTemporaryLogoFile_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1806AD064 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

unsigned __int64 __fastcall std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______(
        HANDLE *a1)
{
  unsigned __int64 result; // rax

  std::wstring::_Tidy_deallocate((__int64)(a1 + 1));
  result = (unsigned __int64)*a1 - 1;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
    return anonymous_namespace_::DeleteAndCloseFileHandle(*a1);
  return result;
}
