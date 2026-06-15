/*
 * XREFs of ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1800DA6FC
 * Callers:
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV?$function@$$A6AX_N@Z@0@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@AEA_K@Z @ 0x1800DA278 (--$_Allocate_at_least_helper@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV-$functi.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x1800DA424 (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC20 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<64>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 6;
}
