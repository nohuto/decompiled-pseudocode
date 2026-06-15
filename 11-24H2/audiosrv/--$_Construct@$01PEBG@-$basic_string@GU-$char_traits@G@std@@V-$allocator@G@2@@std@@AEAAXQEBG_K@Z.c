/*
 * XREFs of ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800E9F9C
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000D870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18000F708 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005357C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180053E30 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C00BC (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::_Construct<2,unsigned short const *>(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  SIZE_T size_of; // rax
  void *v9; // rax

  result = 0x7FFFFFFFFFFFFFFELL;
  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = 7LL;
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth((__int64)a1, a3);
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    a1[2] = a3;
    a1[3] = v7;
    return (__int64)memcpy_0(v9, a2, 2 * a3 + 2);
  }
  else
  {
    a1[2] = a3;
    *(_OWORD *)a1 = *a2;
  }
  return result;
}
