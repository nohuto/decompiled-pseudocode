/*
 * XREFs of ?_HexDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXH@Z @ 0x180148A2C
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180147B48 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHHW4error_type@regex_constants@2@@Z @ 0x1801482A8 (-_Do_digits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAHHHW4error_type@regex_constants@2@@Z.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x1801486C4 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_HexDigits(
        __int64 a1,
        unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
             a1,
             16,
             a2,
             2u);
  if ( (_DWORD)result )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v3, 2u);
    JUMPOUT(0x180148A56LL);
  }
  return result;
}
