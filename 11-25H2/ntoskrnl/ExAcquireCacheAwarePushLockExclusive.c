/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x14044F250
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusive(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rsi
  volatile signed __int32 **v5; // rbx
  volatile signed __int32 *v6; // rcx

  result = (volatile signed __int32 *)KeAbPreAcquire((__int64)a1, 0LL);
  v3 = a1 + 1;
  v4 = result;
  v5 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v6 = *a1;
LABEL_3:
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(
                                          (unsigned __int64 *)v6,
                                          (__int64 *)v4,
                                          (__int64)a1);
  }
  while ( v3 < v5 )
  {
    result = *v3;
    if ( _interlockedbittestandset64(*v3, 0LL) )
    {
      result = *--v5;
      if ( _interlockedbittestandset64(*v5, 0LL) )
      {
        v6 = *v5;
        goto LABEL_3;
      }
    }
    else
    {
      ++v3;
    }
  }
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
