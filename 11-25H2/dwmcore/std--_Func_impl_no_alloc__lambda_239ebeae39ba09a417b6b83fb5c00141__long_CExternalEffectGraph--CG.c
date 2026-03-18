/*
 * XREFs of std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180084B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x180084BB4 (-SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        CExternalEffectGraph::CGraphRenderingContext **a2)
{
  CExternalEffectGraph::CGraphRenderingContext *v2; // rbx
  int v3; // eax
  CDrawingContext *v4; // rcx

  v2 = *a2;
  CExternalEffectGraph::CGraphRenderingContext::SetOutputToCurrentTarget(*a2);
  v3 = *((_DWORD *)v2 + 9);
  v4 = *(CDrawingContext **)v2;
  *((_DWORD *)v2 + 9) = -1;
  *((_DWORD *)v2 + 8) = v3;
  CDrawingContext::PopLayer(v4);
  return 0LL;
}
