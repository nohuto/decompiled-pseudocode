/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV?$function@$$A6AX_N@Z@0@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@AEA_K@Z @ 0x1800D2CF4
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800D2E78 (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009F330 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

LPVOID __fastcall std::_Allocate_at_least_helper<std::allocator<std::function<void (bool)>>>(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x3FFFFFFFFFFFFFFuLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(*a2 << 6);
}
