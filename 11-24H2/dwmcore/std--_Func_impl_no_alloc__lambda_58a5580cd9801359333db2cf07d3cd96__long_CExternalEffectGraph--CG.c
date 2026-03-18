/*
 * XREFs of std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180138CF0
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180018AE4 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        CExternalEffectGraph::CGraphRenderingContext **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(*a2, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v2);
  else
    return 0;
  return v3;
}
