/*
 * XREFs of ??$_Is_word@G@std@@YA_NG@Z @ 0x180126F88
 * Callers:
 *     ?_Is_wbound@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEBA_NXZ @ 0x180131144 (-_Is_wbound@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Is_word<unsigned short>(unsigned __int16 a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 <= 0x7Au )
    return `std::_Is_word'::`2'::_Is_word_table[(unsigned __int8)a1] != 0;
  return v1;
}
