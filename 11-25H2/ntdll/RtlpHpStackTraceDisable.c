/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18014D2F0
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x1801201E8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x1801212F8 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801D0918 & 1) != 0 )
  {
    dword_1801D0918 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup((__int64)&qword_1801D0920);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
