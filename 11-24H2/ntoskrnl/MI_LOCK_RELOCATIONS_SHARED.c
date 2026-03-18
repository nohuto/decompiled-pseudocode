/*
 * XREFs of MI_LOCK_RELOCATIONS_SHARED @ 0x1402C936C
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int64 *)(a2 + 24);
  v3 = KeAbPreAcquire(a2 + 24, 0LL, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, 0LL, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
