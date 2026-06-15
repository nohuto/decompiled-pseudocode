/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18012EDB0
 * Callers:
 *     ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x18012F49C (--$_Resize_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBI@Z.c)
 *     ?_Buy_raw@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180139484 (-_Buy_raw@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x18014F138 (--$_Allocate_at_least_helper@V-$allocator@K@std@@@std@@YAPEAKAEAV-$allocator@K@0@AEA_K@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC20 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
