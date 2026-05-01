/*
 * XREFs of ??$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEAXW4_SE_OBJECT_TYPE@@KPEAPEAX2PEAPEAU_ACL@@32@Z @ 0x1803AE9DC
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803B71EC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803B8168 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall SecurityHelper::GetSecurityInfoSafe<SecurityHelper::GetSecurityInfoSafeDefaultLogger>(
        HANDLE handle,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PACL *ppDacl,
        int a7,
        PSECURITY_DESCRIPTOR *ppSecurityDescriptor)
{
  DWORD result; // eax

  do
    result = GetSecurityInfo(handle, SE_REGISTRY_KEY, 4u, 0LL, 0LL, ppDacl, 0LL, ppSecurityDescriptor);
  while ( result == 122 );
  return result;
}
