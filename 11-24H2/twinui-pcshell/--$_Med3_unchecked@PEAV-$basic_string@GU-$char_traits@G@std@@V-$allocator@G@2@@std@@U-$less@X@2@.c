/*
 * XREFs of ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343D2C
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343AD0 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 * Callees:
 *     ?swap@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x18020FC48 (-swap@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEAV12@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180233FC8 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

void __fastcall std::_Med3_unchecked<std::wstring *,std::less<void>>(unsigned __int16 *a1, _QWORD *a2, __int128 *a3)
{
  int v5; // eax
  __int128 *v6; // r11
  int v7; // eax
  __int128 *v8; // r11
  _QWORD *v9; // r11
  int v10; // eax
  __int128 *v11; // r11

  LOBYTE(v5) = std::wstring::compare(a2, a1);
  if ( v5 < 0 )
    std::wstring::swap(v6, (__int128 *)a1);
  LOBYTE(v7) = std::wstring::compare(a3, (unsigned __int16 *)v6);
  if ( v7 < 0 )
  {
    std::wstring::swap(a3, v8);
    LOBYTE(v10) = std::wstring::compare(v9, a1);
    if ( v10 < 0 )
      std::wstring::swap(v11, (__int128 *)a1);
  }
}
