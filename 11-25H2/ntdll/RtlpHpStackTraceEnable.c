/*
 * XREFs of RtlpHpStackTraceEnable @ 0x1801214B4
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B2530 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x1801201E8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801D0918 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801D0920, 0, 0x48uLL);
    dword_1801D0918 = 3;
    qword_1801D0920 = 0LL;
    qword_1801D0950 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801D0958 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801D0928 = 0LL;
    qword_1801D0930 = 0LL;
    qword_1801D0938 = 0LL;
    qword_1801D0948 = 0LL;
    qword_1801D0940 = 0LL;
    qword_1801D0960 = 0LL;
    if ( NtCurrentPeb()->ProcessHeap )
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapEnable, 1LL, 0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
