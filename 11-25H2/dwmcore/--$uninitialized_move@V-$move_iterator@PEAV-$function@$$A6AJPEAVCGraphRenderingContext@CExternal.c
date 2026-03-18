/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802E8498
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180071FB8 (-ensure_extra_capacity@-$buffer_impl@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180072060 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@_J@Z @ 0x1800721E0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *> &,__int64>(
         a4,
         (a3 - a2) >> 6);
  while ( v4 != a3 )
  {
    *(_QWORD *)(v8 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v8, v4);
    v8 += 64LL;
    v4 += 64LL;
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 6;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
