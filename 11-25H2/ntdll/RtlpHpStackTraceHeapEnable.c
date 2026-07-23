/*
 * XREFs of RtlpHpStackTraceHeapEnable @ 0x180109880
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapEnable(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( !a2
      && ((RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext), (dword_1801D0918 & 1) == 0)
       || (dword_1801D0918 & 2) == 0)
      || (_InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u), !a2) )
    {
      RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
    }
  }
  return 0LL;
}
