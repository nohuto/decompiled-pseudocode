/*
 * XREFs of ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801752D8
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x1801756FC (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_.c)
 * Callees:
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x180175AB8 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CPreComputeContext::SubTreeContext>(
        CBspPreComputeHelper *this,
        CBspPreComputeHelper *a2)
{
  CBspPreComputeHelper *v3; // rbx
  void *v4; // rsi
  void *v5; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v7; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      v4 = (void *)*((_QWORD *)v3 + 37);
      if ( v4 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      v5 = (void *)*((_QWORD *)v3 + 34);
      if ( v5 )
      {
        v7 = GetProcessHeap();
        HeapFree(v7, 0, v5);
      }
      CBspPreComputeHelper::~CBspPreComputeHelper(v3);
      v3 = (CBspPreComputeHelper *)((char *)v3 + 352);
    }
    while ( v3 != a2 );
  }
}
