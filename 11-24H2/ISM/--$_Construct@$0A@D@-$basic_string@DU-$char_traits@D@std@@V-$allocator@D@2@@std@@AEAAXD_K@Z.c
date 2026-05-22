/*
 * XREFs of ??$_Construct@$0A@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXD_K@Z @ 0x1800C4B8C
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800C62B4 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18009C2CC (-_Xlen_string@std@@YAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800C6268 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void *__fastcall std::string::_Construct<0,char>(_QWORD *a1, __int64 a2, size_t a3)
{
  void *result; // rax
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  a1[3] = 15LL;
  if ( a3 > 0xF )
  {
    v6 = std::string::_Calculate_growth(a3);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6 + 1);
    *a1 = v7;
    a1[2] = a3;
    a1[3] = v6;
    v8 = v7;
    result = memset_0(v7, 0, a3);
    v8[a3] = 0;
  }
  else
  {
    a1[2] = a3;
    result = memset_0(a1, 0, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
