/*
 * XREFs of RtlpHpStackTraceHeapEnable @ 0x180106F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapEnable(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( !a2
      && ((RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpStackTrackingContext, 0LL, a3),
           (dword_1801CE8C8 & 1) == 0)
       || (dword_1801CE8C8 & 2) == 0)
      || (_InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u), !a2) )
    {
      RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
    }
  }
  return 0LL;
}
