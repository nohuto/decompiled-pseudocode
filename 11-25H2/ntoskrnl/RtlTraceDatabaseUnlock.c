/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1405E41D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x1405E44FC (RtlpTraceDatabaseReleaseLock.c)
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  return RtlpTraceDatabaseReleaseLock(a1);
}
