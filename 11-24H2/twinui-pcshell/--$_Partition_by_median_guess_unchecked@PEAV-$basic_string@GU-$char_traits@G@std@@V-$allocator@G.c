/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343E40
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?swap@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x18020FC48 (-swap@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEAV12@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180233FC8 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343AD0 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 */

unsigned __int16 **__fastcall std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(
        unsigned __int16 **a1,
        unsigned __int64 a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v6; // rbx
  unsigned __int16 *v7; // r11
  unsigned __int16 *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int16 *v13; // rdi
  __int128 *v14; // rsi
  __int128 *v15; // r15
  int v16; // eax
  int v17; // eax
  unsigned __int16 *v18; // rbp
  int v19; // eax
  int v20; // eax
  __int128 *v21; // rax
  unsigned __int16 **result; // rax

  v6 = (unsigned __int16 *)(a2 + 32 * ((__int64)((__int64)a3 - a2) >> 6));
  std::_Guess_median_unchecked<std::wstring *,std::less<void>>(a2, (__int64)v6, (__int64)(a3 - 16));
  v7 = v6 + 16;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v8 = v6 - 16;
      LOBYTE(v9) = std::wstring::compare((_QWORD *)v6 - 4, v6);
      if ( v9 < 0 )
        break;
      LOBYTE(v10) = std::wstring::compare(v6, v6 - 16);
      if ( v10 < 0 )
        break;
      v6 -= 16;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3 )
  {
    LOBYTE(v11) = std::wstring::compare(v7, v6);
    if ( v11 < 0 )
      break;
    LOBYTE(v12) = std::wstring::compare(v6, v7);
    if ( v12 < 0 )
      break;
    v7 += 16;
  }
  v13 = v7;
  v14 = (__int128 *)v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = (__int128 *)v13;
      if ( v13 >= a3 )
        break;
      LOBYTE(v16) = std::wstring::compare(v6, v13);
      if ( v16 < 0 )
        goto LABEL_17;
      LOBYTE(v17) = std::wstring::compare(v13, v6);
      if ( v17 < 0 )
        break;
      if ( v7 != v13 )
        std::wstring::swap((__int128 *)v7, (__int128 *)v13);
      v7 += 16;
LABEL_17:
      v13 += 16;
    }
    if ( a2 < (unsigned __int64)v14 )
    {
      v18 = (unsigned __int16 *)(v14 - 2);
      do
      {
        LOBYTE(v19) = std::wstring::compare(v18, v6);
        if ( v19 >= 0 )
        {
          LOBYTE(v20) = std::wstring::compare(v6, v18);
          if ( v20 < 0 )
            break;
          v6 -= 16;
          if ( v6 != v18 )
            std::wstring::swap((__int128 *)v6, (__int128 *)v18);
        }
        v14 -= 2;
        v18 -= 16;
      }
      while ( a2 < (unsigned __int64)v14 );
    }
    v21 = (__int128 *)v6;
    if ( v14 == (__int128 *)a2 )
      break;
    v14 -= 2;
    if ( v13 != a3 )
    {
      v21 = (__int128 *)v13;
      v15 = v14;
LABEL_35:
      v13 += 16;
      goto LABEL_36;
    }
    v6 -= 16;
    if ( v14 != (__int128 *)v6 )
      std::wstring::swap(v14, (__int128 *)v6);
    v21 = (__int128 *)v6;
    v15 = (__int128 *)(v7 - 16);
LABEL_36:
    std::wstring::swap(v21, v15);
  }
  if ( v13 != a3 )
  {
    if ( v7 != v13 )
      std::wstring::swap((__int128 *)v6, (__int128 *)v7);
    v6 += 16;
    goto LABEL_35;
  }
  *a1 = v6;
  result = a1;
  a1[1] = v7;
  return result;
}
