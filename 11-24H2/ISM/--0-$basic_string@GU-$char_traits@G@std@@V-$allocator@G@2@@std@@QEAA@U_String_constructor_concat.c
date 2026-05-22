/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1800B3220
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800B2AEC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180067B74 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

char *__fastcall std::wstring::wstring(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void *Src, __int64 a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  char *v10; // rsi
  char *result; // rax

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v8 = 7LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v9 = a5 + a7;
  v10 = a1;
  if ( (unsigned __int64)(a5 + a7) > 7 )
  {
    v8 = std::wstring::_Calculate_growth(a5 + a7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v8 + 1));
    *(_QWORD *)a1 = v10;
  }
  *((_QWORD *)a1 + 3) = v8;
  *((_QWORD *)a1 + 2) = v9;
  memcpy_0(v10, L",", 2 * a5);
  memcpy_0(&v10[2 * a5], Src, 2 * a7);
  result = a1;
  *(_WORD *)&v10[2 * v9] = 0;
  return result;
}
