/*
 * XREFs of IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x18074AA84
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F034C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     GetSidStringFromToken @ 0x1800F199C (GetSidStringFromToken.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1801AA024 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

_BOOL8 IsCurrentUserAssignedAccessSingleAppClassicApp()
{
  BOOL v0; // ebx
  LPWSTR v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  memset(v2, 0, 24);
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, v2) >= 0 )
    v0 = IsUserSidAssignedAccessSingleAppClassicApp(v2[0]);
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)v2);
  return v0;
}
