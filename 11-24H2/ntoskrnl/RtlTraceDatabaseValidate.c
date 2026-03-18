/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1405F0500
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405F0528 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405F080C (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlpTraceDatabaseAcquireLock();
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}
