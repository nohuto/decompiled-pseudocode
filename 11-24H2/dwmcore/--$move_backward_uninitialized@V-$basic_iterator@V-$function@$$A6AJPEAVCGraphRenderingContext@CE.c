/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@detail@@YAXV?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@Z @ 0x1800474A0
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x180047368 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 * Callees:
 *     ??$construct@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V12@@detail@@YAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@PEAV12@$$QEAV12@@Z @ 0x180047344 (--$construct@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V12@@det.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  bool v7; // zf
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx

  for ( result = *a2; *a2 != *a1; result = *a2 )
  {
    v7 = *a3 == 0LL;
    *a2 = result - 64;
    if ( v7 || (v8 = a3[2]) == 0 || (v9 = v8 - 1, a3[2] = v9, v9 >= a3[1]) )
      _invalid_parameter_noinfo_noreturn();
    detail::construct<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
      *a3 + (v9 << 6),
      result - 64);
  }
  return result;
}
