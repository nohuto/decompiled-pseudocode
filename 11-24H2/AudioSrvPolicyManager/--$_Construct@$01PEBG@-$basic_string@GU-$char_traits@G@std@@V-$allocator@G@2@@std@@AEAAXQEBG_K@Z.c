/*
 * XREFs of ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18002B87C
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18002C0E4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180018AF0 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18001F754 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18002B1C0 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180048BAC (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<2,unsigned short const *>(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rax

  result = 0x7FFFFFFFFFFFFFFELL;
  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = 7LL;
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth((__int64)a1, a3);
    if ( v7 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v7 + 1));
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v7;
    return (__int64)memcpy_0(v8, a2, 2 * a3 + 2);
  }
  else
  {
    a1[2] = a3;
    *(_OWORD *)a1 = *a2;
  }
  return result;
}
