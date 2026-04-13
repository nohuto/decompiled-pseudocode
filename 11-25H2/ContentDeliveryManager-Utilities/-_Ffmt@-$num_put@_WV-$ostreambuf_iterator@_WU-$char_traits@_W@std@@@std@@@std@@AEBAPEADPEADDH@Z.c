/*
 * XREFs of ?_Ffmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z @ 0x180006D60
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x18000B1B0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B1B0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DO@Z @ 0x18000B370 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B370.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GN@Z @ 0x18001A630 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A630.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GO@Z @ 0x18001A7F0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A7F0.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WN@Z @ 0x18001AF90 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001AF90.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WO@Z @ 0x18001B150 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001B150.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ffmt(
        __int64 a1,
        _BYTE *a2,
        char a3,
        __int16 a4)
{
  _BYTE *v5; // r10
  char *v6; // r10
  int v7; // edx
  char v8; // al
  char v9; // cl
  char v10; // cl
  _BYTE *result; // rax

  *a2 = 37;
  v5 = a2 + 1;
  if ( (a4 & 0x20) != 0 )
  {
    *v5 = 43;
    v5 = a2 + 2;
  }
  if ( (a4 & 0x10) != 0 )
    *v5++ = 35;
  *(_WORD *)v5 = 10798;
  v6 = v5 + 2;
  if ( a3 )
    *v6++ = a3;
  v7 = a4 & 0x3000;
  if ( (a4 & 4) != 0 )
  {
    v8 = 71;
    if ( v7 == 4096 )
      v8 = 69;
    v9 = 65;
  }
  else
  {
    v8 = 103;
    if ( v7 == 4096 )
      v8 = 101;
    v9 = 97;
  }
  if ( v7 == 12288 )
    v8 = v9;
  v10 = v8;
  if ( v7 == 0x2000 )
    v10 = 102;
  result = a2;
  *v6 = v10;
  v6[1] = 0;
  return result;
}
