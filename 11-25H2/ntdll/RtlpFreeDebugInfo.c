/*
 * XREFs of RtlpFreeDebugInfo @ 0x1800F7DE0
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= a1 && a1 < (unsigned __int64)&RtlpForceCSToUseEvents )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, a4);
  }
}
