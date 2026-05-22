/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017E30
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017B20 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180017870 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018290 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 *TargetFromInputSite; // rax
  __int64 *v14; // rdx
  struct IInputTarget *v15; // rcx
  struct IInputTarget *v17; // [rsp+48h] [rbp-40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0LL;
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
    NtQueryCompositionInputSinkLuid(v8, &v18);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = *(_QWORD *)(a4 + 104);
  v10 = *(_QWORD *)(v9 - 24);
  v11 = *(_QWORD *)(v9 - 16);
  if ( v10 != v11 )
  {
    v12 = a5;
    do
    {
      TargetFromInputSite = (__int64 *)DWMInputRouter::GetTargetFromInputSite(a1, &v17, a4, (__int64)&v18, v12);
      v14 = *(__int64 **)(a2 + 8);
      if ( v14 == *(__int64 **)(a2 + 16) )
      {
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
          (__int64 **)a2,
          v14,
          TargetFromInputSite);
      }
      else
      {
        *v14 = 0LL;
        if ( v14 != TargetFromInputSite )
        {
          *v14 = *TargetFromInputSite;
          *TargetFromInputSite = 0LL;
        }
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      v15 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v10 += 8LL;
    }
    while ( v10 != v11 );
  }
  return a2;
}
