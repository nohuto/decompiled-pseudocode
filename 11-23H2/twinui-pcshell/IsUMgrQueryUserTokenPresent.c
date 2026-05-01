/*
 * XREFs of IsUMgrQueryUserTokenPresent @ 0x1801CC418
 * Callers:
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x180467F88 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x180712ACC (-GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z @ 0x180714240 (-IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801CE030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsUMgrQueryUserTokenPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18098CDF0 == 1 )
    return 1;
  if ( dword_18098CDF0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_18098CDF0 = 2 - (v1 != 0);
  return result;
}
