/*
 * XREFs of ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800720B8
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18006F32C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180071448 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180071698 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x180072028 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180072060 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ??4?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802E8538 (--4-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this @ 0x180072120 (std--_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEffectGraph--CG.c)
 *     std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this @ 0x180072140 (std--_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph--CG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, __int64); // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL);
    if ( (char *)v4 == (char *)std::_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this(
        v3,
        a2);
    }
    else if ( (char *)v4 == (char *)std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this(
        v3,
        a2);
    }
    else
    {
      v4(v3, a2);
    }
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
