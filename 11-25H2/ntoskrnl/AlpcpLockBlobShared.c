/*
 * XREFs of AlpcpLockBlobShared @ 0x1408AD220
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall AlpcpLockBlobShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 - 16);
  v2 = KeAbPreAcquire(a1 - 16, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (unsigned __int64)v1);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
