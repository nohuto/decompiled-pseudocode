/*
 * XREFs of ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x18025D4E4
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x1801756FC (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x180175D0C (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F908 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall CPreComputeContext::SubTreeContext::SubTreeContext(CBspPreComputeHelper *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  CBspPreComputeHelper::CBspPreComputeHelper(a1);
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_WORD *)(v1 + 344) = 0;
  CPreComputeContext::SubTreeContext::operator=(v1, v2);
  return v3;
}
