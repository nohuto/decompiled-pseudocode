/*
 * XREFs of ?c_str@locale@std@@QEBAPEBDXZ @ 0x18005C364
 * Callers:
 *     ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180059E1C (-_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180059EC8 (-_Getcat@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@l.c)
 *     ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180059F74 (-_Getcat@-$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180069DF0 (-_Getcat@-$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18009E430 (-_Getcat@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVface.c)
 *     ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B3628 (-_Getcat@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfac.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall std::locale::c_str(std::locale *this)
{
  __int64 v1; // rdx
  const wchar_t *result; // rax

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return &word_1800E78B8;
  result = *(const wchar_t **)(v1 + 40);
  if ( !result )
    return (const wchar_t *)(v1 + 48);
  return result;
}
