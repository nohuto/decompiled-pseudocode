/*
 * XREFs of EtwpUpdateLastBranchTracingConfiguration @ 0x1407B19EC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateLastBranchTracingHalState @ 0x140651824 (EtwpUpdateLastBranchTracingHalState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAllocateLbrData @ 0x1407B184C (EtwpAllocateLbrData.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v4; // edi
  __int64 result; // rax
  volatile __int32 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = a2;
  if ( !EtwpLastBranchSupportedOptions )
    return 3221225659LL;
  if ( (~EtwpLastBranchSupportedOptions & (unsigned int)a2) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1072) || (result = EtwpAllocateLbrData(a1), (int)result >= 0) )
  {
    v7 = *(volatile __int32 **)(a1 + 1072);
    v8 = *(unsigned int *)v7;
    if ( (_DWORD)v8 )
    {
      guard_dispatch_icall_no_overrides(v8, a2, a3, a4);
      **(_DWORD **)(a1 + 1072) = 0;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 1072) + 4LL), v4);
      return guard_dispatch_icall_no_overrides(v4, *(_QWORD *)(a1 + 1072), v9, v10);
    }
    else
    {
      _InterlockedExchange(v7 + 1, v4);
      return EtwpUpdateLastBranchTracingHalState(a1, a2, a3, a4);
    }
  }
  return result;
}
