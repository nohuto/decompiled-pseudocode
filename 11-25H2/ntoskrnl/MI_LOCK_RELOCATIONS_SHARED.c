/*
 * XREFs of MI_LOCK_RELOCATIONS_SHARED @ 0x1403FFBAC
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall MI_LOCK_RELOCATIONS_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int64 *)(a2 + 24);
  v3 = KeAbPreAcquire(a2 + 24, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
