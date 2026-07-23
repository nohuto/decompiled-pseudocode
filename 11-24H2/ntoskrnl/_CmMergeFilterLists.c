/*
 * XREFs of _CmMergeFilterLists @ 0x1409AADB4
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _CmFindFilterListInflectionPoint @ 0x1409AACFC (_CmFindFilterListInflectionPoint.c)
 *     _PnpMultiSzAppend @ 0x1409AAF98 (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmMergeFilterLists(
        wchar_t *Str2,
        wchar_t *Str1,
        wchar_t *a3,
        wchar_t *a4,
        unsigned int a5,
        unsigned int *a6)
{
  wchar_t *v6; // rax
  wchar_t *v7; // r15
  unsigned int v8; // r12d
  wchar_t *v9; // rbx
  int v10; // r14d
  unsigned int v11; // r13d
  wchar_t *FilterListInflectionPoint; // rsi
  const wchar_t *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v18; // rax
  const wchar_t *i; // rdi
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edi
  wchar_t *v29; // [rsp+20h] [rbp-18h]
  wchar_t *v30; // [rsp+28h] [rbp-10h]
  wchar_t *Str1a; // [rsp+80h] [rbp+48h]
  wchar_t *v32; // [rsp+88h] [rbp+50h]
  wchar_t *Str2a; // [rsp+90h] [rbp+58h]

  Str2a = a3;
  v32 = Str1;
  Str1a = Str2;
  v6 = Str2;
  v7 = Str1;
  v29 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( a4 && a5 >= 2 )
  {
    v11 = a5;
    v9 = a4;
    v29 = a4;
    *a4 = 0;
  }
  while ( 1 )
  {
    FilterListInflectionPoint = CmFindFilterListInflectionPoint(v6, v7, a3);
    v30 = FilterListInflectionPoint;
    v13 = Str1a;
    if ( *Str1a )
    {
      do
      {
        if ( FilterListInflectionPoint && !wcsicmp(v13, FilterListInflectionPoint) )
          break;
        if ( wcsicmp(v13, Str2a) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          v10 += 2 * v14 + 2;
          v15 = 2 * v14 + 2;
          if ( v9 )
          {
            if ( (unsigned __int8)PnpMultiSzAppend(v9) )
            {
              v9 = v29;
            }
            else
            {
              v9 = 0LL;
              v29 = 0LL;
              v8 = -1073741789;
            }
            v11 -= v15;
          }
          FilterListInflectionPoint = v30;
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v13[v16] );
        v13 += v16 + 1;
      }
      while ( *v13 );
      v7 = v32;
    }
    Str1a = (wchar_t *)v13;
    if ( *v13 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v13[v18] );
      Str1a = (wchar_t *)&v13[v18 + 1];
    }
    if ( v7 )
    {
      for ( i = v7; *i; i += v26 + 1 )
      {
        if ( FilterListInflectionPoint && !wcsicmp(i, FilterListInflectionPoint) )
          break;
        v24 = -1LL;
        do
          ++v24;
        while ( i[v24] );
        v10 += 2 * v24 + 2;
        v25 = 2 * v24 + 2;
        if ( v9 )
        {
          if ( (unsigned __int8)PnpMultiSzAppend(v9) )
          {
            v9 = v29;
          }
          else
          {
            v9 = 0LL;
            v29 = 0LL;
            v8 = -1073741789;
          }
          v11 -= v25;
        }
        v26 = -1LL;
        do
          ++v26;
        while ( i[v26] );
        FilterListInflectionPoint = v30;
      }
      v7 = (wchar_t *)i;
      v32 = (wchar_t *)i;
      if ( *i )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( i[v27] );
        v7 = (wchar_t *)&i[v27 + 1];
        v32 = v7;
      }
    }
    if ( !FilterListInflectionPoint )
      break;
    v20 = wcsicmp(FilterListInflectionPoint, Str2a);
    a3 = Str2a;
    v21 = v20 == 0;
    v6 = Str1a;
    if ( !v21 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( FilterListInflectionPoint[v22] );
      a3 = Str2a;
      v10 += 2 * v22 + 2;
      v28 = 2 * v22 + 2;
      v6 = Str1a;
      if ( v9 )
      {
        if ( (unsigned __int8)PnpMultiSzAppend(v9) )
        {
          v9 = v29;
        }
        else
        {
          v9 = 0LL;
          v8 = -1073741789;
          v29 = 0LL;
        }
        v6 = Str1a;
        v11 -= v28;
        a3 = Str2a;
      }
    }
  }
  if ( v10 )
  {
    v23 = v10 + 2;
    *a6 = v23;
    if ( !v9 || a5 < v23 )
      return (unsigned int)-1073741789;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v8;
}
