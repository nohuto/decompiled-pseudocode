/*
 * XREFs of ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x18013EC74
 * Callers:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F6AC (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1801401C4 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 */

_DWORD *__fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_if(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rdx

  v4 = operator new(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    v4[2] = 17;
    *(_QWORD *)v4 = &std::_Node_endif::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v5);
  v6 = operator new(0x30uLL);
  if ( v6 )
  {
    v6[3] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *(_QWORD *)v6 = &std::_Node_if::`vftable';
    v6[2] = 16;
    *((_QWORD *)v6 + 4) = v5;
  }
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL) = v6;
  *((_QWORD *)v6 + 3) = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v6;
  *((_QWORD *)v6 + 2) = v7;
  return v5;
}
