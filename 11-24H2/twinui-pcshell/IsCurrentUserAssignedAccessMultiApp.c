/*
 * XREFs of IsCurrentUserAssignedAccessMultiApp @ 0x1802B9A14
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18024E400 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     GetSidStringFromToken @ 0x180105044 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser @ 0x18010558C (GetAssignedAccessTypeForUser.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010686C (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 IsCurrentUserAssignedAccessMultiApp()
{
  unsigned int v0; // edi
  int AssignedAccessTypeForUser; // ebx
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  memset(hMem, 0, 24);
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, (LPWSTR *)hMem) >= 0 )
  {
    AssignedAccessTypeForUser = GetAssignedAccessTypeForUser((unsigned __int16 *)hMem[0]);
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)hMem);
    LOBYTE(v0) = AssignedAccessTypeForUser == 2;
  }
  else if ( hMem[0] )
  {
    LocalFree(hMem[0]);
  }
  return v0;
}
