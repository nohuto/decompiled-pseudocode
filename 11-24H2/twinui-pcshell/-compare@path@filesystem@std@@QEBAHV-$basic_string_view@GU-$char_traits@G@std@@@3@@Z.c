/*
 * XREFs of ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800BBA80
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BAF60 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filesystem::path::compare(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // r8
  __int64 v3; // r9
  _WORD *v4; // rbp
  __int64 v5; // r9
  _WORD *i; // r9
  unsigned __int16 *v7; // rcx
  __int64 v8; // r10
  unsigned __int16 *j; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // rbx
  signed __int64 v13; // r8
  unsigned __int16 v14; // di
  __int64 result; // rax
  _WORD *k; // rdx
  unsigned __int16 *m; // r8
  unsigned int v18; // ecx
  bool v19; // r9
  BOOL v20; // ecx

  v2 = a1;
  if ( a1[3] > 7uLL )
    v2 = (_WORD *)*a1;
  v3 = a1[2];
  v4 = &v2[v3];
  v5 = (v3 * 2) >> 1;
  if ( v5 < 2 )
    goto LABEL_55;
  if ( (*(_DWORD *)v2 & 0xFFFFFFDF) - 3801153 < 0x1A )
  {
    i = v2 + 2;
    goto LABEL_6;
  }
  if ( *v2 != 92 && *v2 != 47 )
    goto LABEL_55;
  if ( v5 >= 4 )
  {
    if ( (v2[3] == 92 || v2[3] == 47)
      && (v5 == 4 || v2[4] != 92 && v2[4] != 47)
      && ((v2[1] == 92 || v2[1] == 47) && (v2[2] == 63 || v2[2] == 46) || v2[1] == 63 && v2[2] == 63) )
    {
      i = v2 + 3;
      goto LABEL_6;
    }
  }
  else if ( (unsigned __int64)(v4 - v2) < 3 )
  {
LABEL_55:
    i = v2;
    goto LABEL_6;
  }
  if ( v2[1] != 92 && v2[1] != 47 || v2[2] == 92 || v2[2] == 47 )
    goto LABEL_55;
  for ( i = v2 + 3; i != v4 && *i != 92 && *i != 47; ++i )
    ;
LABEL_6:
  v7 = *(unsigned __int16 **)a2;
  v8 = 2LL * *(_QWORD *)(a2 + 8) + *(_QWORD *)a2;
  if ( 2LL * *(_QWORD *)(a2 + 8) < 4 )
    goto LABEL_65;
  if ( (*(_DWORD *)v7 & 0xFFFFFFDF) - 3801153 >= 0x1A )
  {
    if ( *v7 != 92 && *v7 != 47 )
      goto LABEL_65;
    if ( (unsigned __int64)((v8 - (__int64)v7) >> 1) >= 4 )
    {
      if ( (v7[3] == 92 || v7[3] == 47)
        && (v8 - (_QWORD)v7 == 8 || v7[4] != 92 && v7[4] != 47)
        && ((v7[1] == 92 || v7[1] == 47) && (v7[2] == 63 || v7[2] == 46) || v7[1] == 63 && v7[2] == 63) )
      {
        j = v7 + 3;
        goto LABEL_9;
      }
      goto LABEL_68;
    }
    if ( (unsigned __int64)((v8 - (__int64)v7) >> 1) >= 3 )
    {
LABEL_68:
      if ( (v7[1] == 92 || v7[1] == 47) && v7[2] != 92 && v7[2] != 47 )
      {
        for ( j = v7 + 3; j != (unsigned __int16 *)v8 && *j != 92 && *j != 47; ++j )
          ;
        goto LABEL_9;
      }
    }
LABEL_65:
    j = *(unsigned __int16 **)a2;
    goto LABEL_9;
  }
  j = v7 + 2;
LABEL_9:
  v10 = j - v7;
  v11 = i - v2;
  v12 = v10;
  if ( v10 >= v11 )
    v12 = i - v2;
  v13 = (char *)v2 - (char *)v7;
  while ( v12 )
  {
    v14 = *(unsigned __int16 *)((char *)v7 + v13);
    if ( v14 != *v7 )
      return v14 < *v7 ? -1 : 1;
    --v12;
    ++v7;
  }
  if ( v11 < v10 )
    return 0xFFFFFFFFLL;
  if ( v11 > v10 )
    return 1LL;
  for ( k = i; k != v4; ++k )
  {
    if ( *k != 92 && *k != 47 )
      break;
  }
  for ( m = j; m != (unsigned __int16 *)v8; ++m )
  {
    if ( *m != 92 && *m != 47 )
      break;
  }
  result = (i != k) - (unsigned int)(j != m);
  if ( !(_DWORD)result )
  {
    while ( 1 )
    {
      v18 = (m == (unsigned __int16 *)v8) - (k == v4);
      if ( k == v4 || v18 )
        break;
      v19 = *k == 92 || *k == 47;
      v20 = *m == 92 || *m == 47;
      v18 = v20 - v19;
      if ( v18 )
        break;
      if ( v19 )
      {
        do
          ++k;
        while ( k != v4 && (*k == 92 || *k == 47) );
        do
          ++m;
        while ( m != (unsigned __int16 *)v8 && (*m == 92 || *m == 47) );
      }
      else
      {
        v18 = (unsigned __int16)*k - *m;
        if ( v18 )
          return v18;
        ++k;
        ++m;
      }
    }
    return v18;
  }
  return result;
}
