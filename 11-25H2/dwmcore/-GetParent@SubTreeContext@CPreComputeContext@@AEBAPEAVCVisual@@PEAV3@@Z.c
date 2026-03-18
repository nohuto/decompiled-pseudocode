/*
 * XREFs of ?GetParent@SubTreeContext@CPreComputeContext@@AEBAPEAVCVisual@@PEAV3@@Z @ 0x18012D660
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CPreComputeContext::SubTreeContext::GetParent(
        CPreComputeContext::SubTreeContext *this,
        struct CVisual *a2)
{
  if ( a2 == *(struct CVisual **)(*((_QWORD *)this + 41) + 72LL) )
    return 0LL;
  else
    return (struct CVisual *)*((_QWORD *)a2 + 11);
}
