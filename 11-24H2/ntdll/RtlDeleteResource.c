/*
 * XREFs of RtlDeleteResource @ 0x18008FE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(void *a1)
{
  unsigned __int64 v2; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(*((HANDLE *)a1 + 5));
  NtClose(*((HANDLE *)a1 + 7));
  v2 = *((_QWORD *)a1 + 11);
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= v2 && v2 < (unsigned __int64)&RtlpForceCSToUseEvents )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v2);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((_QWORD *)a1 + 11));
  }
  return memset_thunk_772440563353939046(a1, 0, 0x60uLL);
}
