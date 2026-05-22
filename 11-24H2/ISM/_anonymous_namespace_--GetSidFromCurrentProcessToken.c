/*
 * XREFs of _anonymous_namespace_::GetSidFromCurrentProcessToken @ 0x18010F344
 * Callers:
 *     ?InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ @ 0x18010F508 (-InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ.c)
 * Callees:
 *     SipcFailFast @ 0x1801108AC (SipcFailFast.c)
 */

__int64 __fastcall anonymous_namespace_::GetSidFromCurrentProcessToken(
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        _QWORD *a2,
        DWORD a3,
        void *a4,
        __int64 a5)
{
  BOOL TokenInformation; // esi
  signed int LastError; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  TokenInformation = GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenInformationClass, a4, a3, v11);
  if ( TokenInformation )
  {
    if ( *a2 == a5 )
      return 0LL;
    if ( *a2 )
    {
      SipcFailFast(2147549183LL);
      __debugbreak();
    }
  }
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v10 = (unsigned __int16)LastError | 0xC0070000;
  else
    v10 = LastError;
  if ( TokenInformation || v10 == -1073741700 )
  {
    *(_QWORD *)a5 = 257LL;
    *(_DWORD *)(a5 + 8) = 0;
    return 1LL;
  }
  else
  {
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    return v9;
  }
}
