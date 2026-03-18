/*
 * XREFs of ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1801CBAC0
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18003EBA0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CVisualTreePath *__fastcall CVisualTreePath::CVisualTreePath(CVisualTreePath *this, const struct CVisualTree *a2)
{
  CVisualTreePath *result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&v3 = 0LL;
  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 56;
  *((_QWORD *)&v3 + 1) = a2;
  if ( this == (CVisualTreePath *)-24LL )
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)this + 1) += 16LL;
  result = this;
  *(_OWORD *)((char *)this + 24) = v3;
  return result;
}
