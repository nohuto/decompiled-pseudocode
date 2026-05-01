/*
 * XREFs of ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x180048800
 * Callers:
 *     _dynamic_initializer_for__error__ @ 0x180123D80 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180124BB0 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180124CD0 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x18015F520 (_dynamic_initializer_for__thinking__.c)
 *     _dynamic_initializer_for__listening__ @ 0x1801B5FB0 (_dynamic_initializer_for__listening__.c)
 * Callees:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180048948 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800489AC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x180048A00 (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 size_of; // rax
  __int64 v7; // rsi
  char *v8; // rdi
  signed __int64 v9; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a2) >> 3);
  if ( v5 )
  {
    if ( v5 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<24>(0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 3));
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = v7 + 24 * v5;
    while ( v4 != v3 )
    {
      *(_QWORD *)v7 = 0LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( (__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 2 )
      {
        std::vector<Windows::UI::Color>::_Buy_nonzero(v7);
        v8 = *(char **)v7;
        v9 = *(_QWORD *)(v4 + 8) - *(_QWORD *)v4;
        memmove_0(*(void **)v7, *(const void **)v4, v9);
        *(_QWORD *)(v7 + 8) = &v8[4 * (v9 >> 2)];
      }
      v7 += 24LL;
      v4 += 24LL;
    }
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(v7, v7);
    a1[1] = v7;
  }
  return a1;
}
