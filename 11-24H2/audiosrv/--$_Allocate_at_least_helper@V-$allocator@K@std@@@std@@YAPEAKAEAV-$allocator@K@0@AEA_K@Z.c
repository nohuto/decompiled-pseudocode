/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x18014F138
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x18014F190 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18012EDB0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

LPVOID __fastcall std::_Allocate_at_least_helper<std::allocator<unsigned long>>(__int64 a1, unsigned __int64 *a2)
{
  SIZE_T size_of; // rax

  size_of = std::_Get_size_of_n<4>(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
}
