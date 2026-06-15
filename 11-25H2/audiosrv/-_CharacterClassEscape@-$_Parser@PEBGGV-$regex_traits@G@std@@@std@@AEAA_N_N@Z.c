/*
 * XREFs of ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18013F024
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013EA00 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x18013F34C (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 * Callees:
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x18013ACE8 (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x18013E0FC (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Add_named_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXF_N@Z @ 0x18013E384 (-_Add_named_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXF_N@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
        __int64 a1,
        char a2)
{
  unsigned __int16 v4; // bp
  char v5; // al

  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 16) )
    return 0;
  v4 = std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
         *(_QWORD *)(a1 + 104),
         *(unsigned __int16 **)a1,
         (unsigned __int16 *)(*(_QWORD *)a1 + 2LL),
         BYTE1(*(_DWORD *)(a1 + 112)) & 1);
  if ( !v4 )
    return 0;
  if ( a2 )
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class(a1 + 64);
  v5 = std::ctype<unsigned short>::is(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL), 1LL);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_named_class(
    a1 + 64,
    v4,
    v5);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  return 1;
}
