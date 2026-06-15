/*
 * XREFs of ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x180131B74
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x18013E164 (-_Add_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEAV-$_Node_class@GV-$regex_traits@.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Regex_traits<unsigned short>::isctype(__int64 a1, __int16 a2, unsigned __int16 a3)
{
  char v4; // al
  char v5; // cl

  if ( a3 != 0xFFFF )
    return std::ctype<unsigned short>::is(*(_QWORD *)(a1 + 8), a3);
  if ( a2 == 95 )
    return 1;
  v4 = std::ctype<unsigned short>::is(*(_QWORD *)(a1 + 8), 263LL);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
