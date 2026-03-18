/*
 * XREFs of ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18012D198
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18012D340 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@Z @ 0x180253440 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@.c)
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18025AE38 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v1; // r9
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  CBspPreComputeHelper *v6; // rdi
  CBspPreComputeHelper *v7; // rbx
  __int64 v8; // rsi
  CBspPreComputeHelper *i; // rbx
  void *v10; // rsi
  void *v11; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v13; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  v3 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1 - 352) >> 5);
  v4 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 5);
  v5 = v3 + 1;
  if ( v3 + 1 > v4 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18012D33ALL);
  }
  v6 = (CBspPreComputeHelper *)(v1 + 352 * v4);
  if ( v5 != v4 )
  {
    if ( v3 && (!v1 || v3 < 0 || v4 < v3) )
      _invalid_parameter_noinfo_noreturn();
    v14[2] = v3;
    v14[0] = v1;
    v7 = (CBspPreComputeHelper *)(v1 + 352 * v5);
    v14[1] = v4;
    v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
           v14,
           0x2E8BA2E8BA2E8BA3LL * ((v6 - v7) >> 5))
       - (_QWORD)v7;
    while ( v7 != v6 )
    {
      CPreComputeContext::SubTreeContext::operator=((char *)v7 + v8, v7);
      v7 = (CBspPreComputeHelper *)((char *)v7 + 352);
    }
  }
  for ( i = (CBspPreComputeHelper *)((char *)v6 - 352); i != v6; i = (CBspPreComputeHelper *)((char *)i + 352) )
  {
    v10 = (void *)*((_QWORD *)i + 37);
    if ( v10 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
    }
    v11 = (void *)*((_QWORD *)i + 34);
    if ( v11 )
    {
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v11);
    }
    CBspPreComputeHelper::~CBspPreComputeHelper(i);
  }
  a1[1] -= 352LL;
}
