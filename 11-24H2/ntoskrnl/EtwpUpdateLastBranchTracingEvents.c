/*
 * XREFs of EtwpUpdateLastBranchTracingEvents @ 0x1407B1A98
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateLastBranchTracingHalState @ 0x140651824 (EtwpUpdateLastBranchTracingHalState.c)
 *     EtwpAllocateLbrData @ 0x1407B184C (EtwpAllocateLbrData.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingEvents(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 i; // r8
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !EtwpLastBranchSupportedOptions )
    return 3221225659LL;
  if ( a3 > 4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1072) || (result = EtwpAllocateLbrData(a1), (int)result >= 0) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v9[8] = i;
      if ( (unsigned int)i >= a3 )
        break;
      *(_WORD *)(*(_QWORD *)(a1 + 1072) + 2 * i + 12) = *(_WORD *)(a2 + 4 * i);
    }
    _InterlockedOr(v9, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 8LL) = a3;
    EtwpUpdateLastBranchTracingHalState(a1, a2, i, a4);
    return 0LL;
  }
  return result;
}
