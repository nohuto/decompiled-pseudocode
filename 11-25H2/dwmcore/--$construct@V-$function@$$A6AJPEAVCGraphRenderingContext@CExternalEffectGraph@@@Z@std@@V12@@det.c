/*
 * XREFs of ??$construct@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V12@@detail@@YAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@PEAV12@$$QEAV12@@Z @ 0x180071DE0
 * Callers:
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@detail@@YAXV?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@Z @ 0x180071F3C (--$move_backward_uninitialized@V-$basic_iterator@V-$function@$$A6AJPEAVCGraphRenderingContext@CE.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180072060 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 */

__int64 __fastcall detail::construct<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(a1, a2);
  return a1;
}
