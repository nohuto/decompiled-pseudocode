/*
 * XREFs of EtwpUpdateLastBranchTracingConfiguration @ 0x1407B1E3C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateLastBranchTracingHalState @ 0x14064FF24 (EtwpUpdateLastBranchTracingHalState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAllocateLbrData @ 0x1407B1C9C (EtwpAllocateLbrData.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingConfiguration(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // edi
  __int64 result; // rax
  volatile __int32 *v5; // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( !EtwpLastBranchSupportedOptions )
    return 3221225659LL;
  if ( (~EtwpLastBranchSupportedOptions & (unsigned int)a2) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1072) || (result = EtwpAllocateLbrData(a1), (int)result >= 0) )
  {
    v5 = *(volatile __int32 **)(a1 + 1072);
    v6 = *(unsigned int *)v5;
    if ( (_DWORD)v6 )
    {
      guard_dispatch_icall_no_overrides(v6, a2);
      **(_DWORD **)(a1 + 1072) = 0;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 1072) + 4LL), v2);
      return guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(a1 + 1072));
    }
    else
    {
      _InterlockedExchange(v5 + 1, v2);
      return EtwpUpdateLastBranchTracingHalState(a1);
    }
  }
  return result;
}
