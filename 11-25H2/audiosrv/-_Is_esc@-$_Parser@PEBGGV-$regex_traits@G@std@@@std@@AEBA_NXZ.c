/*
 * XREFs of ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180140174
 * Callers:
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x1801407A0 (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(
        __int64 a1)
{
  _WORD *v1; // rdx
  int v2; // r8d
  char v3; // cl

  v1 = (_WORD *)(*(_QWORD *)a1 + 2LL);
  if ( v1 == *(_WORD **)(a1 + 16) )
    return 0;
  v2 = *(_DWORD *)(a1 + 128);
  v3 = 1;
  if ( ((v2 & 8) != 0 || (unsigned __int16)(*v1 - 40) > 1u) && ((v2 & 0x10) != 0 || ((*v1 - 123) & 0xFFFD) != 0) )
    return 0;
  return v3;
}
