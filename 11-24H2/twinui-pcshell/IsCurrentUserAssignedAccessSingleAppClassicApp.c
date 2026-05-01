/*
 * XREFs of IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x180104A38
 * Callers:
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 * Callees:
 *     GetSidStringFromToken @ 0x180105044 (GetSidStringFromToken.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x180105188 (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010686C (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 IsCurrentUserAssignedAccessSingleAppClassicApp()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  memset(hMem, 0, 24);
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, (LPWSTR *)hMem) >= 0 )
  {
    v1 = IsUserSidAssignedAccessSingleAppClassicApp(hMem[0]);
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return v1;
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(hMem);
  }
  return v0;
}
