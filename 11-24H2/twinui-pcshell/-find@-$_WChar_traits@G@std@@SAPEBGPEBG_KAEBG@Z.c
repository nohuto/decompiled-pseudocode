/*
 * XREFs of ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801E0C40
 * Callers:
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x180339D30 (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$_Traits_find_first_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x18061D70C (--$_Traits_find_first_of@U-$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<unsigned short>::find(_WORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *result; // rax

  result = 0LL;
  if ( a2 )
  {
    while ( *a1 != *a3 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
