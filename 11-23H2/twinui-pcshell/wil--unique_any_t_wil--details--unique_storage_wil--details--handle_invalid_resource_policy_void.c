/*
 * XREFs of wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::_unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____ @ 0x1806AB6C0
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180253E24 (_RequestNotificationPinConsentAsync$_ResumeCoro$1_--_1_--dtor$2.c)
 *     __anonymous_namespace_::CreateTemporaryFile_::_1_::dtor$6 @ 0x1806ACB52 (__anonymous_namespace_--CreateTemporaryFile_--_1_--dtor$6.c)
 * Callees:
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1806AD064 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

__int64 __fastcall wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____::_unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____(
        void **a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = (char *)*a1;
  result = (__int64)(v1 - 1);
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return anonymous_namespace_::DeleteAndCloseFileHandle(v1);
  return result;
}
