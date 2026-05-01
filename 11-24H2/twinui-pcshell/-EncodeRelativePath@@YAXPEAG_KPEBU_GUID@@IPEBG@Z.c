/*
 * XREFs of ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x180402078
 * Callers:
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x180401FB0 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x180213464 (-ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z.c)
 */

void __fastcall EncodeRelativePath(
        unsigned __int16 *a1,
        WCHAR *a2,
        const struct _GUID *a3,
        __int64 a4,
        WCHAR *pszFile2)
{
  int v5; // r14d
  unsigned int i; // ebx
  int v9; // eax
  unsigned __int64 v10; // rsi
  PWSTR ppszPath; // [rsp+58h] [rbp+10h] BYREF

  ppszPath = a2;
  v5 = 0;
  for ( i = 0; i < 5; ++i )
  {
    ppszPath = 0LL;
    if ( SHGetKnownFolderPath(&a3[i], 0x5000u, 0LL, &ppszPath) >= 0 )
    {
      v9 = PathCommonPrefixW(ppszPath, pszFile2, 0LL);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 == lstrlenW(ppszPath) )
        {
          ReplaceInitialPathCharactersWithGuid(a1, 2084LL, pszFile2, &a3[i], v10);
          v5 = 1;
        }
      }
      CoTaskMemFree(ppszPath);
    }
    if ( v5 )
      return;
  }
  StringCchCopyW((char *)a1, 2084LL, (char *)pszFile2);
}
