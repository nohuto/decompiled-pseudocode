/*
 * XREFs of ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x18013E0FC
 * Callers:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013EFB8 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18013F024 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class(
        __int64 a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x50uLL);
  if ( v2 )
  {
    v2[1] = 7LL;
    *v2 = &std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::`vftable';
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v2[5] = 0LL;
    v2[6] = 0LL;
    v2[7] = 0LL;
    *((_WORD *)v2 + 32) = 0;
    v2[9] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v2);
}
