/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005C228
 * Callers:
 *     ?do_curr_symbol@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180018020 (-do_curr_symbol@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?do_negative_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800199C0 (-do_negative_sign@-$_Mpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?do_positive_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180019B70 (-do_positive_sign@-$_Mpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019BC0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18001A040 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18005C1F0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG_K@Z @ 0x18005FFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG_K@Z.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005B048 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_NPEB_W@Z @ 0x18005B67C (-_Inside@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_NPEB_W@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005C11C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005C494 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  if ( std::wstring::_Inside(a1, a2) )
  {
    if ( a1[3] < 8uLL )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    return std::wstring::assign(a1, a1, (__int64)(a2 - (_QWORD)v6) >> 1, a3);
  }
  else
  {
    if ( std::wstring::_Grow(a1, a3, 0) )
    {
      if ( a1[3] < 8uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      std::char_traits<wchar_t>::copy(v8, a2, a3);
      if ( a1[3] < 8uLL )
        v9 = a1;
      else
        v9 = (_QWORD *)*a1;
      a1[2] = a3;
      *((_WORD *)v9 + a3) = 0;
    }
    return a1;
  }
}
