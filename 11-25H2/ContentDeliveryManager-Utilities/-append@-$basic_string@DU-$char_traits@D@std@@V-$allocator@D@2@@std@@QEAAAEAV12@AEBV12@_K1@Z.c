/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069C10
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18000ACC0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000ACC0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180069CF4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     memcpy_0 @ 0x1800227D6 (memcpy_0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18003D7CC (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v7; // rdi
  __int64 v9; // rcx
  size_t v10; // rax
  size_t v11; // rbp
  _QWORD *v12; // rcx
  _QWORD *v13; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::_Xout_of_range("invalid string position");
  v9 = a1[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::_Xlength_error("string too long");
  if ( v5 )
  {
    v11 = v9 + v5;
    if ( std::string::_Grow((__int64)a1, v9 + v5, 0) )
    {
      if ( v7[3] >= 0x10uLL )
        v7 = (_QWORD *)*v7;
      if ( a1[3] < 0x10uLL )
        v12 = a1;
      else
        v12 = (_QWORD *)*a1;
      memcpy_0((char *)v12 + a1[2], (char *)v7 + a3, v5);
      if ( a1[3] < 0x10uLL )
        v13 = a1;
      else
        v13 = (_QWORD *)*a1;
      a1[2] = v11;
      *((_BYTE *)v13 + v11) = 0;
    }
  }
  return a1;
}
