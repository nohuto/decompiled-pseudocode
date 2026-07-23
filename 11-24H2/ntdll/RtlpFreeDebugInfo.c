/*
 * XREFs of RtlpFreeDebugInfo @ 0x1800F07C0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180027610 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
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
