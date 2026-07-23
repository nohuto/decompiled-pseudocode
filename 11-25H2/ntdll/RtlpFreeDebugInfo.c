/*
 * XREFs of RtlpFreeDebugInfo @ 0x1800F7DE0
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeDebugInfo(char *a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)a1 && a1 < &RtlpForceCSToUseEvents )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
