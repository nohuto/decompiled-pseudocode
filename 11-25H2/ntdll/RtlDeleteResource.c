/*
 * XREFs of RtlDeleteResource @ 0x1800B91B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(void *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(*((HANDLE *)a1 + 5));
  NtClose(*((HANDLE *)a1 + 7));
  v4 = *((_QWORD *)a1 + 11);
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= v4 && v4 < (unsigned __int64)&RtlpForceCSToUseEvents )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v4, v2, v3);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((_QWORD *)a1 + 11), v3);
  }
  return memset_thunk_772440563353939046(a1, 0, 0x60uLL);
}
