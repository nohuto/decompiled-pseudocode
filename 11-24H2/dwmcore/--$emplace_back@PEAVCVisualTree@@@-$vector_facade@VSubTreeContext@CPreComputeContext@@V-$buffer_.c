/*
 * XREFs of ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x1801756FC
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801752D8 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x180175AB8 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x180175D0C (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@Z @ 0x180248250 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@.c)
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F908 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x18025D4E4 (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::emplace_back<CVisualTree *>(
        __int64 a1,
        __int64 a2)
{
  CBspPreComputeHelper *v2; // rbx
  unsigned __int64 v3; // r12
  LPVOID v4; // r13
  CBspPreComputeHelper *v5; // r15
  __int64 v6; // rdx
  CBspPreComputeHelper *v7; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  CBspPreComputeHelper *v17; // r15
  CBspPreComputeHelper *j; // rbx
  void *v19; // r12
  void *v20; // r12
  HANDLE ProcessHeap; // rax
  HANDLE v22; // rax
  __int64 v23; // rcx
  __int64 result; // rax
  char *v25; // rbx
  char *v26; // r12
  __int64 v27; // r15
  LPVOID v28; // rax
  CBspPreComputeHelper *v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  __int64 i; // r15
  __int64 v33; // rdx
  __int128 v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h]
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+A0h] [rbp+40h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(CBspPreComputeHelper **)a1;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0x2E8BA2E8BA2E8BA3LL * ((v6 - (__int64)v7) >> 5);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((v9 - v6) >> 5)) )
  {
    if ( v10 + 1 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_32;
    }
    v3 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0x2E8BA2E8BA2E8BA3LL * ((v9 - (__int64)v7) >> 5)),
           0x2E8BA2E8BA2E8BA3LL * ((v9 - (__int64)v7) >> 5),
           v10 + 1);
    v28 = operator new[](saturated_mul(v3, 0x160uLL));
    v5 = *(CBspPreComputeHelper **)(a1 + 8);
    v2 = *(CBspPreComputeHelper **)a1;
    v4 = v28;
    v35 = 0LL;
    *(_QWORD *)&v34 = v28;
    v37 = 0LL;
    *((_QWORD *)&v34 + 1) = v10;
    v36 = v34;
    v7 = (CBspPreComputeHelper *)(std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
                                    &v36,
                                    0x2E8BA2E8BA2E8BA3LL * ((v5 - v2) >> 5))
                                - (_QWORD)v2);
    while ( v2 != v5 )
    {
LABEL_32:
      CPreComputeContext::SubTreeContext::SubTreeContext((char *)v2 + (_QWORD)v7, v2);
      v2 = (CBspPreComputeHelper *)((char *)v2 + 352);
    }
    detail::destruct_range<CPreComputeContext::SubTreeContext>(
      *(CBspPreComputeHelper **)a1,
      *(CBspPreComputeHelper **)(a1 + 8));
    v29 = *(CBspPreComputeHelper **)a1;
    v30 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v4;
    if ( v30 )
      v29 = 0LL;
    operator delete(v29);
    v7 = *(CBspPreComputeHelper **)a1;
    v6 = *(_QWORD *)a1 + 352 * v10;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = (char *)v7 + 352 * v3;
  }
  v35 = 0LL;
  v11 = 0x2E8BA2E8BA2E8BA3LL * ((v6 - (__int64)v7) >> 5);
  v37 = 0LL;
  *((_QWORD *)&v34 + 1) = 1LL;
  v12 = 32 * ((v6 - (__int64)v7) >> 5);
  v13 = v11 - v10;
  v38 = v12;
  *(_QWORD *)&v34 = (char *)v7 + v12;
  if ( !(CBspPreComputeHelper *)((char *)v7 + v12) )
    goto LABEL_19;
  v37 = 1LL;
  v14 = 0x2E8BA2E8BA2E8BA3LL * ((v6 - (__int64)v7) >> 5) - v10;
  if ( v13 > 1 )
    v14 = 1LL;
  v15 = 352 * v14;
  v35 = 1LL;
  v16 = v6 - v15;
  if ( v6 != v6 - v15 )
  {
    v31 = v35;
    for ( i = 1LL; ; v31 = i )
    {
      v33 = v6 - 352;
      if ( !i )
        goto LABEL_19;
      i = v31 - 1;
      if ( (unsigned __int64)(v31 - 1) >= *((_QWORD *)&v34 + 1) )
        goto LABEL_19;
      CPreComputeContext::SubTreeContext::SubTreeContext(v34 + 352 * i, v33);
      if ( v6 == v16 )
        break;
    }
    v12 = v38;
  }
  if ( v13 > 1 )
  {
    if ( !v11 || v7 && v11 >= 0 )
    {
      *((_QWORD *)&v34 + 1) = v11;
      v35 = v11;
      v25 = (char *)v7 + v12 - 352;
      *(_QWORD *)&v34 = v7;
      v26 = (char *)v7 + 352 * v10;
      v27 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
              &v34,
              0xD1745D1745D1745DuLL * ((v25 - v26) >> 5))
          - (_QWORD)v25;
      while ( v26 != v25 )
      {
        v25 -= 352;
        CPreComputeContext::SubTreeContext::operator=(&v25[v27]);
      }
      goto LABEL_7;
    }
LABEL_19:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  v17 = (CBspPreComputeHelper *)((char *)v7 + 352 * v10 + 352);
  if ( (CBspPreComputeHelper *)((char *)v7 + v38) < v17 )
    v17 = (CBspPreComputeHelper *)((char *)v7 + v38);
  for ( j = (CBspPreComputeHelper *)((char *)v7 + 352 * v10); j != v17; j = (CBspPreComputeHelper *)((char *)j + 352) )
  {
    v19 = (void *)*((_QWORD *)j + 37);
    if ( v19 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v19);
    }
    v20 = (void *)*((_QWORD *)j + 34);
    if ( v20 )
    {
      v22 = GetProcessHeap();
      HeapFree(v22, 0, v20);
    }
    CBspPreComputeHelper::~CBspPreComputeHelper(j);
  }
  *(_QWORD *)(a1 + 8) += 352LL;
  CBspPreComputeHelper::CBspPreComputeHelper((CBspPreComputeHelper *)((char *)v7 + 352 * v10));
  *(_QWORD *)(v23 + 280) = 0LL;
  *(_QWORD *)(v23 + 288) = 0LL;
  *(_QWORD *)(v23 + 272) = 0LL;
  *(_QWORD *)(v23 + 304) = 0LL;
  *(_QWORD *)(v23 + 312) = 0LL;
  result = a2 + 112;
  *(_QWORD *)(v23 + 296) = 0LL;
  *(_QWORD *)(v23 + 336) = 0LL;
  *(_WORD *)(v23 + 344) = 0;
  *(_QWORD *)(v23 + 320) = a2 + 112;
  *(_QWORD *)(v23 + 328) = a2;
  return result;
}
