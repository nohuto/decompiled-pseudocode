/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000D0EC
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x14000D234 (--$_Construct_n@$$V@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Allocate_at_least_helper<std::allocator<unsigned char>>(__int64 a1, size_t *a2)
{
  return std::_Allocate<16,std::_Default_allocate_traits,0>(*a2);
}
