/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEA_K@Z @ 0x1800E9F7C
 * Callers:
 *     ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x18014F3D0 (--$_Emplace_reallocate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800A23C4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

LPVOID __fastcall std::_Allocate_at_least_helper<std::allocator<std::wstring>>(__int64 a1, unsigned __int64 *a2)
{
  SIZE_T size_of; // rax

  size_of = std::_Get_size_of_n<32>(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
}
