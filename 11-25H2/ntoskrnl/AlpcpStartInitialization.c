/*
 * XREFs of AlpcpStartInitialization @ 0x1408AEDA8
 * Callers:
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall AlpcpStartInitialization(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = KeAbPreAcquire(a1 - 16, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  *(_BYTE *)(a1 - 32) |= 4u;
  return result;
}
