/*
 * XREFs of ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012B790
 * Callers:
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180097C08 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18009A6D0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18012D340 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18025AE38 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CBspPreComputeHelper *v3; // rsi
  __int64 v4; // r11
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 *v10; // rcx
  CBspPreComputeHelper *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rbp
  CBspPreComputeHelper *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v21; // rax

  v4 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v8 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 5);
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v10 = a1 + 1;
    v3 = (CBspPreComputeHelper *)(v4 + 352 * v8);
    if ( v7 == v8 )
      goto LABEL_13;
    if ( v6 && (!v4 || v6 < 0 || v8 < v6) )
LABEL_21:
      _invalid_parameter_noinfo_noreturn();
    v11 = (CBspPreComputeHelper *)(v4 + 352 * v7);
    v12 = 0x2E8BA2E8BA2E8BA3LL * ((v3 - v11) >> 5);
    if ( v12 >= 0 )
    {
      if ( v12 > 0 && v8 - v6 < v12 )
        goto LABEL_21;
      goto LABEL_9;
    }
  }
  if ( v6 < (unsigned __int64)-v12 )
    goto LABEL_21;
LABEL_9:
  v13 = v4 + 352 * v6 - (_QWORD)v11;
  while ( v11 != v3 )
  {
    CPreComputeContext::SubTreeContext::operator=((char *)v11 + v13, v11);
    v11 = (CBspPreComputeHelper *)(v14 + 352);
  }
  v10 = a1 + 1;
LABEL_13:
  v15 = 352 * a3;
  v16 = (CBspPreComputeHelper *)((char *)v3 - 352 * a3);
  if ( v16 != v3 )
  {
    do
    {
      v17 = (void *)*((_QWORD *)v16 + 37);
      if ( v17 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v17);
      }
      v18 = (void *)*((_QWORD *)v16 + 34);
      if ( v18 )
      {
        v21 = GetProcessHeap();
        HeapFree(v21, 0, v18);
      }
      CBspPreComputeHelper::~CBspPreComputeHelper(v16);
      v16 = (CBspPreComputeHelper *)((char *)v16 + 352);
    }
    while ( v16 != v3 );
    v10 = a1 + 1;
  }
  result = a1[1] - v15;
  *v10 = result;
  return result;
}
