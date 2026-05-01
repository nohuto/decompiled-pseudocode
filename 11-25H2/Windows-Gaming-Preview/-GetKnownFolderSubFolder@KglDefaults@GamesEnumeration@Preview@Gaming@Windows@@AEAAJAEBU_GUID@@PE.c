/*
 * XREFs of ?GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PEBG1PEAVString@Internal@5@@Z @ 0x18003ACA0
 * Callers:
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003AEA8 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        HSTRING *a5)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  HRESULT v9; // edi
  __int64 v10; // rdx
  HSTRING v12; // rcx
  PWSTR ppszPath; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+38h] [rbp-D0h]
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR pszPathOut[520]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+480h] [rbp+378h]

  ppszPath = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a5 )
  {
    v6 = -2147467261;
    v7 = 134LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v6);
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    return (unsigned int)v6;
  }
  v8 = -1LL;
  v14 = -1LL;
  v15 = -1LL;
  v9 = SHGetKnownFolderPath(&FOLDERID_LocalAppData, 0x8000u, 0LL, &ppszPath);
  if ( v9 < 0 )
  {
    v10 = 136LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v9);
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    return (unsigned int)v9;
  }
  v9 = PathCchCombine(pszPathOut, 0x208uLL, ppszPath, a3);
  if ( v9 < 0 )
  {
    v10 = 138LL;
    goto LABEL_5;
  }
  string = 0LL;
  do
    ++v8;
  while ( pszPathOut[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    goto LABEL_18;
  }
  v6 = WindowsCreateString(pszPathOut, v8, &string);
  if ( v6 < 0 )
  {
LABEL_18:
    v7 = 145LL;
    goto LABEL_19;
  }
  v12 = *a5;
  *a5 = string;
  WindowsDeleteString(v12);
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return 0LL;
}
