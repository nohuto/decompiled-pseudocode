/*
 * XREFs of ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180139A10
 * Callers:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801889C0 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBatchManager::ReturnBatchCommand(__int64 a1, int **a2)
{
  int *v2; // rbx
  int v5; // edx
  __int64 *v6; // rcx
  int *v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 result; // rax
  _DWORD *v12; // r14
  int *v13; // r15
  __int64 v14; // rcx
  HANDLE ProcessHeap; // rax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // eax
  int v21; // r9d
  void *retaddr; // [rsp+48h] [rbp+0h]
  int *v23; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( v5 )
  {
    if ( v5 == 4 )
    {
      v12 = v2 + 26;
      v13 = (int *)*((_QWORD *)v2 + 12);
      if ( v2 + 26 != v13 )
      {
        if ( v13 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v13);
        }
        *((_QWORD *)v2 + 12) = v12;
        *v12 = 0;
      }
      v14 = *((_QWORD *)v2 + 1);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
    else
    {
      v16 = v5 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 != 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
          }
        }
      }
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)v2 + 1);
    }
  }
  *v2 = 0;
  v6 = (__int64 *)(a1 + 40);
  v7 = *a2;
  *a2 = 0LL;
  v8 = *(_DWORD *)(a1 + 64);
  v23 = v7;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v19 = -2147024362;
    v20 = 181;
    v21 = -2147024362;
    goto LABEL_20;
  }
  if ( v9 <= *(_DWORD *)(a1 + 60) )
  {
    v10 = v8;
    result = *v6;
    *(_QWORD *)(*v6 + 8 * v10) = v7;
    *(_DWORD *)(a1 + 64) = v9;
    return result;
  }
  result = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 8, 1, &v23);
  v19 = result;
  v21 = result;
  if ( (int)result < 0 )
  {
    v20 = 192;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v20, 0LL);
    ModuleFailFastForHRESULT(v19, retaddr);
  }
  return result;
}
