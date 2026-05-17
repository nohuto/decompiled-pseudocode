/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18014BD40
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x18011E918 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlStackDbContextCleanup @ 0x18011FA28 (RtlStackDbContextCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceDisable(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext, a2, a3);
  if ( (dword_1801CE8C8 & 1) != 0 )
  {
    dword_1801CE8C8 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup((__int64)&qword_1801CE8D0);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
