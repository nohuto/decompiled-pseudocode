/*
 * XREFs of sub_180036D20 @ 0x180036D20
 * Callers:
 *     <none>
 * Callees:
 *     ?eq_int_type@?$_WChar_traits@_W@std@@SA_NGG@Z @ 0x18001E764 (-eq_int_type@-$_WChar_traits@_W@std@@SA_NGG@Z.c)
 *     ?not_eof@?$_WChar_traits@_W@std@@SAGG@Z @ 0x180036B38 (-not_eof@-$_WChar_traits@_W@std@@SAGG@Z.c)
 */

__int64 __fastcall sub_180036D20(__int64 a1, __int16 a2)
{
  unsigned __int64 v4; // rsi
  bool v5; // bp

  v4 = std::wstreambuf::gptr(a1);
  if ( !v4 )
    return 0xFFFFLL;
  if ( v4 <= std::wstreambuf::eback(a1) )
    return 0xFFFFLL;
  v5 = std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, a2);
  if ( !v5 && !std::_WChar_traits<wchar_t>::eq_int_type(a2, *(_WORD *)(v4 - 2)) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  std::wstreambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( !v5 )
    *(_WORD *)std::wstreambuf::gptr(a1) = a2;
  return std::_WChar_traits<wchar_t>::not_eof(a2);
}
