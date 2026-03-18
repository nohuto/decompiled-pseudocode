/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405F080C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405F0170 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405F0390 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405F0450 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405F04E0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405F0500 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 56), *(_BYTE *)(a1 + 40));
  else
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  return 1;
}
