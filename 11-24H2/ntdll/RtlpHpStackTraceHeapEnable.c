/*
 * XREFs of RtlpHpStackTraceHeapEnable @ 0x180101EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapEnable(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( !a2
      && ((RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext), (dword_1801CD8B8 & 1) == 0)
       || (dword_1801CD8B8 & 2) == 0)
      || (_InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u), !a2) )
    {
      RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
    }
  }
  return 0LL;
}
