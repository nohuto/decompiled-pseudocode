/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x180253394
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@_J@Z @ 0x180253440 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@.c)
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x180267454 (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *> &,__int64>(
         a4,
         0x2E8BA2E8BA2E8BA3LL * ((a3 - a2) >> 5));
  while ( v4 != a3 )
  {
    CPreComputeContext::SubTreeContext::SubTreeContext(v8, v4);
    v8 = v9 + 352;
    v4 += 352LL;
  }
  result = a1;
  a4[2] = 0x2E8BA2E8BA2E8BA3LL * ((v8 - *a4) >> 5);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
