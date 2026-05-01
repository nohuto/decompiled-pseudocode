/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180314DF4
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180314FA4 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x180315084 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180319A04 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::string::string(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  void *v6; // rax

  v2 = (_OWORD *)a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) > 0xFuLL )
    v2 = *(_OWORD **)a2;
  if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  *(_QWORD *)(a1 + 24) = 15LL;
  if ( v4 > 0xF )
  {
    v5 = std::string::_Calculate_growth(a1, v4);
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v5;
    memcpy_0(v6, v2, v4 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = *v2;
  }
  return a1;
}
