/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405E44FC
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405E3E60 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405E4080 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405E4140 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405E41D0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405E41F0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
