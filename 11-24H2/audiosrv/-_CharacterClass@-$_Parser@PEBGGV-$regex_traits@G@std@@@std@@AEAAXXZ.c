/*
 * XREFs of ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147A30
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1801472AC (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x180146B58 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x180146B74 (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClass(
        __int64 a1)
{
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class(a1 + 64);
  if ( *(_DWORD *)(a1 + 124) == 94 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) ^= 1u;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  }
  if ( (*(_DWORD *)(a1 + 128) & 0x20000000) != 0 && *(_DWORD *)(a1 + 124) == 93 )
  {
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
      a1 + 64,
      93LL);
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  }
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassRanges(a1);
}
