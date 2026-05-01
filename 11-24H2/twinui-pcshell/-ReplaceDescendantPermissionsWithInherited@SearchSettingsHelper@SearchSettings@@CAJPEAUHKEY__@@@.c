/*
 * XREFs of ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1803BE460
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803B71EC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1803BFBAC (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited(HKEY a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _ACL pAcl; // [rsp+38h] [rbp+10h] BYREF

  pAcl = 0LL;
  if ( !InitializeAcl(&pAcl, 8u, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x387,
             (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             v2);
  SearchSettings::SearchSettingsHelper::SetUnprotectedDaclRecursive(a1, &pAcl);
  return 0LL;
}
