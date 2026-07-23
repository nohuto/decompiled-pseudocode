/*
 * XREFs of RtlDeleteResource @ 0x180027580
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180027610 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)DebugInfo && DebugInfo < (PRTL_RESOURCE_DEBUG)&RtlpForceCSToUseEvents )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  memset_thunk_772440563353939046(Resource, 0, 0x60uLL);
}
