/*
 * XREFs of ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800937A4 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x180104610 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x180104A38 (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 *     IsUserAssignedAccessSingleApp @ 0x180104FBC (IsUserAssignedAccessSingleApp.c)
 *     ??R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z @ 0x18045D1FC (--R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z.c)
 */

bool IsStartScreenFilterEnabled(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  bool result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = 1;
  if ( !IsUserOOBEOrCredentialReset()
    && !(unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    && !(unsigned int)IsCurrentUserAssignedAccessSingleAppClassicApp() )
  {
    if ( !IsShellLauncherEnabledForCurrentUser(v0) )
      return 0;
    v3 = 0;
    if ( (int)_lambda_c3ba1681564c383c0b68f6e84a06906b_::operator()(v1, &v3) < 0 || !v3 )
      return 0;
  }
  return result;
}
