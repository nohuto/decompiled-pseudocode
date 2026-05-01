/*
 * XREFs of ??$_Construct@$00PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXQEB_W_K@Z @ 0x18069C714
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18011E468 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18017BB88 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,wchar_t const *>(char **a1, __int64 a2, unsigned __int64 a3)
{
  size_t v5; // r15
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = (char *)7;
  v5 = 2 * a3;
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth((__int64)a1, a3);
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    a1[2] = (char *)a3;
    a1[3] = (char *)v7;
    v10 = v9;
    memcpy_0(v9, &pvData, v5);
    result = 0LL;
    *(_WORD *)&v10[v5] = 0;
  }
  else
  {
    a1[2] = (char *)a3;
    memcpy_0(a1, &pvData, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v5) = 0;
  }
  return result;
}
