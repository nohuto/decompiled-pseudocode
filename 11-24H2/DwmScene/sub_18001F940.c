/*
 * XREFs of sub_18001F940 @ 0x18001F940
 * Callers:
 *     <none>
 * Callees:
 *     ?eq@?$_Narrow_char_traits@DH@std@@SA_NDD@Z @ 0x18001D618 (-eq@-$_Narrow_char_traits@DH@std@@SA_NDD@Z.c)
 *     ?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NHH@Z @ 0x18001D628 (-eq_int_type@-$_Narrow_char_traits@DH@std@@SA_NHH@Z.c)
 *     ?not_eof@?$_Narrow_char_traits@DH@std@@SAHH@Z @ 0x18001D698 (-not_eof@-$_Narrow_char_traits@DH@std@@SAHH@Z.c)
 *     sub_18001D768 @ 0x18001D768 (sub_18001D768.c)
 */

__int64 __fastcall sub_18001F940(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rsi
  bool v5; // bp
  char v6; // al
  char *v7; // rbx

  v4 = std::streambuf::gptr(a1);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( v4 <= std::streambuf::eback(a1) )
    return 0xFFFFFFFFLL;
  v5 = std::_Narrow_char_traits<char,int>::eq_int_type(-1, a2);
  if ( !v5 )
  {
    v6 = sub_18001D768(a2);
    if ( !std::_Narrow_char_traits<char,int>::eq(v6, *(_BYTE *)(v4 - 1)) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
      return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( !v5 )
  {
    v7 = (char *)std::streambuf::gptr(a1);
    *v7 = sub_18001D768(a2);
  }
  return std::_Narrow_char_traits<char,int>::not_eof(a2);
}
