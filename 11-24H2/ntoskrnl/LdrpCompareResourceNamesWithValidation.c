/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x14046EA24
 * Callers:
 *     LdrEnumResources @ 0x14077E2A0 (LdrEnumResources.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v7; // rbx
  unsigned __int16 *v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx

  *a6 = 1;
  v7 = *a5;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v7 >= 0 )
      return (unsigned int)((_DWORD)a3 - v7);
    return 1LL;
  }
  if ( (int)v7 >= 0 )
    return -1LL;
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v9 = (unsigned __int16 *)(a4 + v7);
  v10 = wcsncmp(a3, v9 + 1, *v9);
  if ( !v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a3[v11] );
    if ( v11 != *v9 )
      return 1LL;
  }
  return v10;
}
