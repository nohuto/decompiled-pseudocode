/*
 * XREFs of EtwpUpdateLastBranchTracingEvents @ 0x1407B1EE8
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateLastBranchTracingHalState @ 0x14064FF24 (EtwpUpdateLastBranchTracingHalState.c)
 *     EtwpAllocateLbrData @ 0x1407B1C9C (EtwpAllocateLbrData.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingEvents(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 i; // r8
  signed __int32 v8[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !EtwpLastBranchSupportedOptions )
    return 3221225659LL;
  if ( a3 > 4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1072) || (result = EtwpAllocateLbrData(a1), (int)result >= 0) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v8[8] = i;
      if ( (unsigned int)i >= a3 )
        break;
      *(_WORD *)(*(_QWORD *)(a1 + 1072) + 2 * i + 12) = *(_WORD *)(a2 + 4 * i);
    }
    _InterlockedOr(v8, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 8LL) = a3;
    EtwpUpdateLastBranchTracingHalState(a1);
    return 0LL;
  }
  return result;
}
