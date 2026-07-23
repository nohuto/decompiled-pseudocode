/*
 * XREFs of _CmGetDeclarativeFilterList @ 0x14081EC9C
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _CmAppendDeclarativeDefaultFilters @ 0x14081E4DC (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081E5C4 (_CmAppendDeclarativeFilterLevel.c)
 */

__int64 __fastcall CmGetDeclarativeFilterList(
        __int64 a1,
        __int64 a2,
        wchar_t *Str1,
        wchar_t *Str2,
        __int64 a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8)
{
  const wchar_t *v9; // r14
  int v11; // ebx
  wchar_t *pszDest; // rdi
  unsigned int v13; // esi
  int v14; // ebp
  int v15; // eax
  __int64 v16; // r9
  int appended; // ecx
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // esi
  unsigned int v23[4]; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *v24; // [rsp+98h] [rbp+20h]

  v24 = Str2;
  v9 = Str1;
  v23[0] = 0;
  v11 = 0;
  pszDest = 0LL;
  v13 = 0;
  v14 = 0;
  if ( a6 )
  {
    if ( a7 < 2 )
      return (unsigned int)-1073741811;
    v14 = a7;
    pszDest = a6;
    *a6 = 0;
  }
  if ( Str1 )
  {
    while ( *v9 )
    {
      if ( !wcsicmp(v9, Str2) )
      {
        appended = CmAppendDeclarativeDefaultFilters(a1, a2, a5, v16, pszDest, v14, v23);
        if ( appended == -1073741789 )
        {
          v11 = -1073741789;
        }
        else if ( appended < 0 )
        {
          goto LABEL_25;
        }
        v18 = 0LL;
        if ( appended != -1073741789 )
          v18 = pszDest;
        pszDest = v18;
        v13 += v23[0];
        if ( v18 )
        {
          v14 -= v23[0];
          pszDest = &v18[(unsigned __int64)v23[0] >> 1];
        }
      }
      v19 = CmAppendDeclarativeFilterLevel(a1, a2, (int)v9, pszDest, v14, v23);
      appended = v19;
      if ( v19 == -1073741789 )
      {
        v11 = -1073741789;
        v13 += v23[0];
        pszDest = 0LL;
      }
      else
      {
        if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741772 )
        {
LABEL_25:
          v11 = appended;
          break;
        }
        v13 += v23[0];
        if ( pszDest )
        {
          v14 -= v23[0];
          pszDest += (unsigned __int64)v23[0] >> 1;
        }
      }
      v20 = -1LL;
      do
        ++v20;
      while ( v9[v20] );
      Str2 = v24;
      v9 += v20 + 1;
    }
  }
  else
  {
    v15 = CmAppendDeclarativeDefaultFilters(a1, a2, a5, (__int64)Str2, pszDest, v14, v23);
    v13 = v23[0];
    v11 = v15;
  }
  v21 = v13 + 2;
  *a8 = v21;
  if ( v11 >= 0 && v21 > a7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v11;
}
