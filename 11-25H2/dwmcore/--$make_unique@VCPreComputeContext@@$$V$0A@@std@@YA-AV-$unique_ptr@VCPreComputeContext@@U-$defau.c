/*
 * XREFs of ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18009B370
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x18009B214 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CPreComputeContext,,0>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  CPreComputeContext *v3; // rax
  CPreComputeContext *v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v3 = (CPreComputeContext *)HeapAlloc(ProcessHeap, 0, 0x628uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v3, 0, 0x628uLL);
  *a1 = CPreComputeContext::CPreComputeContext(v4);
  return a1;
}
