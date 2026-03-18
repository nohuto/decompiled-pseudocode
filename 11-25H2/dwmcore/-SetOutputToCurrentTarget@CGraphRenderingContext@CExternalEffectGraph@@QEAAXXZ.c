/*
 * XREFs of ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x180084BB4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180084B80 (std--_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180110030 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CExternalEffectGraph::CGraphRenderingContext::SetOutputToCurrentTarget(
        CExternalEffectGraph::CGraphRenderingContext *this)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 6) + 112LL * *((unsigned int *)this + 9);
  CDrawListBitmap::operator=(*((_QWORD *)this + 3), v2);
  *(_DWORD *)(*((_QWORD *)this + 3) + 40LL) |= *(_DWORD *)(v2 + 40);
  *(_OWORD *)(*((_QWORD *)this + 3) + 84LL) = *(_OWORD *)(v2 + 84);
}
