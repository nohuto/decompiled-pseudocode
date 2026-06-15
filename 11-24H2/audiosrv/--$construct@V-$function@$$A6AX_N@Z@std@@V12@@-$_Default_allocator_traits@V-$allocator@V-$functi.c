/*
 * XREFs of ??$construct@V?$function@$$A6AX_N@Z@std@@V12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@$$QEAV31@@Z @ 0x1800DAB44
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800DA9AC (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::construct<std::function<void (bool)>,std::function<void (bool)>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)(a2 + 56) = 0LL;
  return std::_Func_class<void,>::_Reset_move(a2, a3);
}
