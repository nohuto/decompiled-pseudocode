/*
 * XREFs of ?_Add_named_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXF_N@Z @ 0x18013E384
 * Callers:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x18013F024 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18013F900 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x18013E164 (-_Add_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEAV-$_Node_class@GV-$regex_traits@.c)
 */

char __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_named_class(
        __int64 a1,
        unsigned __int16 a2,
        char a3)
{
  __int64 v3; // rbx
  char result; // al

  v3 = *(_QWORD *)(a1 + 8);
  result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_elts(
             a1,
             v3,
             a2,
             a3);
  *(_WORD *)(v3 + 64) |= a2;
  return result;
}
