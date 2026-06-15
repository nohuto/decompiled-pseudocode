/*
 * XREFs of ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NPEAV_Node_base@2@@Z @ 0x180147568
 * Callers:
 *     ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEBA_NXZ @ 0x180147588 (-_Beg_expr@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  bool result; // al

  v2 = *(_DWORD *)(a2 + 8);
  result = 0;
  if ( v2 <= 0x14 )
  {
    v3 = 1057024;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
