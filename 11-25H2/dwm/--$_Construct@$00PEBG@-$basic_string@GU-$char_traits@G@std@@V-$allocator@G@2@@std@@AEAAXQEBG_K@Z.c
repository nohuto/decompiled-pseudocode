/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000EB48
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000EA70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x140010054 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1400100E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x14001021C (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x140010BBC (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(_QWORD *a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r14
  _QWORD *v9; // rax
  size_t v10; // rbx
  _QWORD *v11; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = 7LL;
  if ( a3 > 7 )
  {
    v8 = std::wstring::_Calculate_growth(a1, a3);
    if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v8 + 1));
    a1[2] = a3;
    v10 = 2 * a3;
    *a1 = v9;
    a1[3] = v8;
    v11 = v9;
    memcpy_0(v9, a2, v10);
    result = 0LL;
    *(_WORD *)((char *)v11 + v10) = 0;
  }
  else
  {
    a1[2] = a3;
    v6 = 2 * a3;
    memcpy_0(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return result;
}
