/*
 * XREFs of ??$construct@V?$function@$$A6AX_N@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@AEBV31@@Z @ 0x1800DAB30
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800DA534 (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800DF1FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::construct<std::function<void (bool)>,std::function<void (bool)> const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::function<void (bool)>::function<void (bool)>(a2, a3);
}
