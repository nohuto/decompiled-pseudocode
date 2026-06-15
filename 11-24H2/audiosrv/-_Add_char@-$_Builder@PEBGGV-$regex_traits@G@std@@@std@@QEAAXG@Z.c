/*
 * XREFs of ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x1801469CC
 * Callers:
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x180146F6C (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1801472AC (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147478 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x18013AE00 (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147254 (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
        __int64 a1,
        unsigned __int16 a2)
{
  __int64 v2; // rax
  unsigned __int16 v5; // ax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 8) != 6 || (*(_BYTE *)(v2 + 12) & 4) != 0 )
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_str_node();
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
  {
    v5 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
LABEL_8:
    a2 = v5;
    return std::_Buf<unsigned short>::_Insert(*(_QWORD *)(a1 + 8) + 32LL, a2);
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
  {
    v5 = std::_Regex_traits<unsigned short>::translate(*(__int64 **)(a1 + 24), a2);
    goto LABEL_8;
  }
  return std::_Buf<unsigned short>::_Insert(*(_QWORD *)(a1 + 8) + 32LL, a2);
}
