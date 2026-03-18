/*
 * XREFs of EtwpUpdateProcessorTraceConfiguration @ 0x1407B1CAC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpConstructIptData @ 0x1407B1B38 (EtwpConstructIptData.c)
 */

__int64 __fastcall EtwpUpdateProcessorTraceConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000000) != 0 )
    return 3221226243LL;
  if ( *(_QWORD *)(a1 + 1080) || (result = EtwpConstructIptData(a1), (int)result >= 0) )
  {
    if ( !**(_QWORD **)(a1 + 1080) )
    {
      _interlockedbittestandset(&KiCpuTracingFlags, 2u);
      result = guard_dispatch_icall_no_overrides(v5, *(_QWORD *)(a1 + 1080), a3, a4);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 8LL) = v5;
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x4000000u);
        return 0LL;
      }
      else
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        **(_QWORD **)(a1 + 1080) = 0LL;
      }
      return result;
    }
    return 3221226243LL;
  }
  return result;
}
