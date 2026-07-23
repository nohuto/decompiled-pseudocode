/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18014A0F0
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x18011CB48 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlStackDbContextCleanup @ 0x18011DC58 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801CD8B8 & 1) != 0 )
  {
    dword_1801CD8B8 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup((__int64)&qword_1801CD8C0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
