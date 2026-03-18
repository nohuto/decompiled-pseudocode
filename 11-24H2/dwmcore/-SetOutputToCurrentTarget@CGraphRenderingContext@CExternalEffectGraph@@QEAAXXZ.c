/*
 * XREFs of ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x1800F9334
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F9300 (std--_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800DA770 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CExternalEffectGraph::CGraphRenderingContext::SetOutputToCurrentTarget(
        CExternalEffectGraph::CGraphRenderingContext *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx

  v4 = *((_QWORD *)this + 6) + 112LL * *((unsigned int *)this + 9);
  CDrawListBitmap::operator=(*((_QWORD *)this + 3), v4, a3);
  *(_DWORD *)(*((_QWORD *)this + 3) + 40LL) |= *(_DWORD *)(v4 + 40);
  *(_OWORD *)(*((_QWORD *)this + 3) + 84LL) = *(_OWORD *)(v4 + 84);
}
