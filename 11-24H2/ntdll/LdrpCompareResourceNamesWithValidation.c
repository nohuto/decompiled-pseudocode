/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x1800D5450
 * Callers:
 *     LdrEnumResources @ 0x180134C10 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x180125B90 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  bool v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int16 *v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx

  v9 = a1 && a2;
  v10 = *a5;
  HIDWORD(v11) = HIDWORD(v10);
  *a6 = 1;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v10 >= 0 )
      return (unsigned int)((_DWORD)a3 - v10);
    return 1LL;
  }
  if ( (int)v10 >= 0 )
    return -1LL;
  if ( v9 )
  {
    v16 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( a4 + (v10 & 0xFFFFFFFF7FFFFFFFuLL) <= v16 + a2 )
    {
      v17 = v10 & 0x7FFFFFFF;
      LODWORD(v11) = v17;
      v13 = (unsigned __int16 *)(a4 + v11);
      v18 = v17 + 2 * *v13;
      if ( (unsigned int)v18 >= v17 && a4 + v18 <= v16 + a2 )
        goto LABEL_10;
    }
    *a6 = 0;
    return -1LL;
  }
  LODWORD(v11) = v10 & 0x7FFFFFFF;
  v13 = (unsigned __int16 *)(a4 + v11);
LABEL_10:
  v14 = wcsncmp(a3, v13 + 1, *v13);
  if ( !v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a3[v15] );
    if ( v15 != *v13 )
      return 1LL;
  }
  return v14;
}
