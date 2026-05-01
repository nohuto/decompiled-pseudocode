/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@QEAA@XZ @ 0x180212D08
 * Callers:
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4 @ 0x1806CD961 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x1806D9F57 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_1806D9F57.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::dtor$1 @ 0x1806DC7FC (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--TriggerCompatBackupIfUserJs.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1806DC873 (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$1 @ 0x1806FFFF1 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_1806FFFF1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$7 @ 0x180700015 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_180700015.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$7 @ 0x18070011F (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_18070011F.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>::~unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
