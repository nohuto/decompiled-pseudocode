/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18024953C
 * Callers:
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x1801A2F74 (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  v3 = a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(a1);
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v5;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < v3 )
      v2 = v3;
  }
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return std::vector<unsigned char>::_Buy_raw(a1, v2, v3);
}
