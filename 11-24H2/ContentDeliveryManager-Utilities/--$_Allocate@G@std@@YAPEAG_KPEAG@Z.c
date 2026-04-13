/*
 * XREFs of ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x180048BAC
 * Callers:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180059A38 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x18005B12C (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18005DEE0 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$1 @ 0x1800B8D3A (_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Co_ea_1800B8D3A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004768 (-_Xbad_alloc@std@@YAXXZ.c)
 */

void *__fastcall std::_Allocate<unsigned short>(unsigned __int64 a1)
{
  void *result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 > 0x7FFFFFFFFFFFFFFFLL || (result = operator new(2 * a1)) == 0LL )
      std::_Xbad_alloc();
  }
  return result;
}
