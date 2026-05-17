/*
 * XREFs of RtlpHpStackTraceEnable @ 0x18011FBE4
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800895A0 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x18011E918 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceEnable(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext, a2, a3);
  if ( (dword_1801CE8C8 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801CE8D0, 0, 0x48uLL);
    dword_1801CE8C8 = 3;
    qword_1801CE8D0 = 0LL;
    qword_1801CE900 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801CE908 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801CE8D8 = 0LL;
    qword_1801CE8E0 = 0LL;
    qword_1801CE8E8 = 0LL;
    qword_1801CE8F8 = 0LL;
    qword_1801CE8F0 = 0LL;
    qword_1801CE910 = 0LL;
    if ( NtCurrentPeb()->ProcessHeap )
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapEnable, 1LL, 0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
