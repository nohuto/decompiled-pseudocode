/*
 * XREFs of _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1806AD064
 * Callers:
 *     std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1806AB68C (std--tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--details--ha.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::_unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____ @ 0x1806AB6C0 (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1806AB6E4 (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resourc_ea_1806AB6E4.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1806ACB64 (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

int __fastcall anonymous_namespace_::DeleteAndCloseFileHandle(HANDLE hObject)
{
  char *v2; // rbx
  const char *v3; // r9
  const char *v4; // r9
  int result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)ReOpenFile(hObject, 0x10000u, 7u, 0x4000000u);
  if ( ((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x16,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v3);
  if ( !CloseHandle(hObject) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v4);
  result = (_DWORD)v2 - 1;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v2);
  return result;
}
