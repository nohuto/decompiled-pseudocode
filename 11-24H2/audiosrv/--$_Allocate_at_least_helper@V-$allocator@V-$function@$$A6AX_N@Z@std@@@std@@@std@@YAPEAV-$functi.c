/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV?$function@$$A6AX_N@Z@0@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@AEA_K@Z @ 0x1800DA278
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800DA534 (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1800DA6FC (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 */

LPVOID __fastcall std::_Allocate_at_least_helper<std::allocator<std::function<void (bool)>>>(__int64 a1, _QWORD *a2)
{
  SIZE_T size_of; // rax

  size_of = std::_Get_size_of_n<64>(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
}
