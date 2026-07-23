/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405EDDEC
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405ED750 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405ED970 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405EDA30 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405EDAC0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405EDAE0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
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
