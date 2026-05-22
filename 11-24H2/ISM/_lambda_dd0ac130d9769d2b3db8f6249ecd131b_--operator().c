/*
 * XREFs of _lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator() @ 0x18007CA4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputProviderBase___::_Do_call @ 0x180092900 (std--_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputProviderBase___.c)
 * Callees:
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800143FC (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800B94D0 (--$_Emplace_one_at_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator()(_QWORD *a1, struct IMPCInputProviderBase *a2)
{
  MPCHolographicInputManager *v4; // rcx
  __int64 v5; // rbp
  __int64 i; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx

  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
    a2,
    *a1,
    *a1 + 3720LL);
  v5 = *(_QWORD *)(*a1 + 3728LL);
  for ( i = *(_QWORD *)(*a1 + 3720LL); i != v5; i += 184LL )
  {
    if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v4, a2) )
      v7 = 1;
    else
      v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
    v8 = *a1 + 3696LL;
    *(_DWORD *)(i + 176) = v7;
    std::vector<PointData3D>::_Emplace_one_at_back<PointData3D const &>(v8, i);
  }
  result = *a1;
  v10 = *(_QWORD *)(*a1 + 3720LL);
  if ( v10 != *(_QWORD *)(*a1 + 3728LL) )
    *(_QWORD *)(result + 3728) = v10;
  return result;
}
