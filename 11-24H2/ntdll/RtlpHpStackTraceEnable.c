/*
 * XREFs of RtlpHpStackTraceEnable @ 0x18011DE14
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800A5060 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x18011CB48 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801CD8B8 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801CD8C0, 0, 0x48uLL);
    dword_1801CD8B8 = 3;
    qword_1801CD8C0 = 0LL;
    qword_1801CD8F0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801CD8F8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801CD8C8 = 0LL;
    qword_1801CD8D0 = 0LL;
    qword_1801CD8D8 = 0LL;
    qword_1801CD8E8 = 0LL;
    qword_1801CD8E0 = 0LL;
    qword_1801CD900 = 0LL;
    if ( NtCurrentPeb()->ProcessHeap )
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapEnable, 1LL, 0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
