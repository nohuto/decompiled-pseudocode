/*
 * XREFs of ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x18029C398
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x180064ECC (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1801FE4D4 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18029C068 (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x18064B124 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x180221BB4 (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@Utoke.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(void **a1, __int64 a2)
{
  int token_information; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  token_information = wil::get_token_information_nothrow<_TOKEN_USER,0>(a1, a2);
  if ( token_information < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)token_information,
      1);
  return a1;
}
