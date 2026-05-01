/*
 * XREFs of ?TryGetWin32Version@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBV78@PEBG@Z @ 0x180054548
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800534A0 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180053D00 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$AccessRegKey_Error@AEAY0DH@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBGAEAPEBGAEAJ@Z @ 0x18060F400 (--$AccessRegKey_Error@AEAY0DH@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBGAEAP.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

char **__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::TryGetWin32Version(
        __int64 a1,
        char **a2,
        HKEY *a3,
        __int64 a4,
        const WCHAR *lpSubKey)
{
  HKEY v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  size_t v10; // rbx
  size_t size_of; // rax
  char *v13; // rax
  size_t v14; // rbx
  char *v15; // rdi
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  LSTATUS v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-B0h] BYREF
  _WORD Src[256]; // [rsp+70h] [rbp-90h] BYREF

  v18 = lpSubKey;
  memset_0(Src, 0, sizeof(Src));
  v7 = *a3;
  pcbData = 512;
  v17[0] = RegGetValueW(v7, lpSubKey, L"DisplayVersion", 2u, 0LL, Src, &pcbData);
  if ( (v17[0] & 0xFFFFFFFD) != 0 )
    CAppBackupListenerTelemetry::AccessRegKey_Error<unsigned short const (&)[55],unsigned short const * &,long &>(
      L"Unable to get win32 app display version for key map at",
      &v18,
      v17);
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v8 = -1LL;
  a2[3] = 0LL;
  do
    ++v8;
  while ( Src[v8] );
  v9 = 0x7FFFFFFFFFFFFFFELL;
  if ( v8 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a2[3] = (char *)7;
  if ( v8 > 7 )
  {
    if ( (v8 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v9 = 10LL;
      if ( (v8 | 7) >= 0xA )
        v9 = v8 | 7;
    }
    size_of = std::_Get_size_of_n<2>(v9 + 1);
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    a2[2] = (char *)v8;
    v14 = 2 * v8;
    *a2 = v13;
    a2[3] = (char *)v9;
    v15 = v13;
    memcpy_0(v13, Src, v14);
    *(_WORD *)&v15[v14] = 0;
  }
  else
  {
    a2[2] = (char *)v8;
    v10 = 2 * v8;
    memcpy_0(a2, Src, v10);
    *(_WORD *)((char *)a2 + v10) = 0;
  }
  return a2;
}
