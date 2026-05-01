/*
 * XREFs of ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343AD0
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343E40 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343D2C (--$_Med3_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 5;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 32 * v6;
    v6 <<= 6;
    v8 = v7 + a1;
    std::_Med3_unchecked<std::wstring *,std::less<void>>(a1, v7 + a1, v6 + a1);
    std::_Med3_unchecked<std::wstring *,std::less<void>>(v4 - v7, v4, v7 + v4);
    std::_Med3_unchecked<std::wstring *,std::less<void>>(v3 - v6, v3 - v7, v3);
    a3 = v3 - v7;
    a2 = v4;
    a1 = v8;
  }
  return std::_Med3_unchecked<std::wstring *,std::less<void>>(a1, a2, a3);
}
