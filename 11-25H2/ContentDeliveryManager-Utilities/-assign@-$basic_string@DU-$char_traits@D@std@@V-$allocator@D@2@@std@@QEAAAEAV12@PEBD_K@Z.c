/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003DF2C
 * Callers:
 *     ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000A100 (-do_curr_symbol@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@.c)
 *     ?do_grouping@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000AF50 (-do_grouping@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 *     ?do_positive_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000BA50 (-do_positive_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001BD00 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?do_negative_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180020D00 (-do_negative_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180020D50 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x18003DEF4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800227D6 (memcpy_0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18003D7CC (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_NPEBD@Z @ 0x18003D848 (-_Inside@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_NPEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003DE28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, _BYTE *Src, size_t Size)
{
  _QWORD *v6; // rax
  void *v8; // rcx
  _QWORD *v9; // rax

  if ( std::string::_Inside(a1, (unsigned __int64)Src) )
  {
    if ( a1[3] < 0x10uLL )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    return std::string::assign(a1, a1, Src - (_BYTE *)v6, Size);
  }
  else
  {
    if ( std::string::_Grow((__int64)a1, Size, 0) )
    {
      if ( a1[3] < 0x10uLL )
        v8 = a1;
      else
        v8 = (void *)*a1;
      if ( Size )
        memcpy_0(v8, Src, Size);
      if ( a1[3] < 0x10uLL )
        v9 = a1;
      else
        v9 = (_QWORD *)*a1;
      a1[2] = Size;
      *((_BYTE *)v9 + Size) = 0;
    }
    return a1;
  }
}
