/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x140444A20
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  char *v3; // rbx
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 **v6; // r14
  unsigned __int64 *v7; // rcx

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  result = *a1;
  v5 = a1 + 1;
  v6 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v7 = (unsigned __int64 *)*a1;
LABEL_5:
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(v7, v3, (__int64)a1);
  }
  while ( v5 < v6 )
  {
    result = *v5;
    if ( _interlockedbittestandset64(*v5, 0LL) )
    {
      result = *--v6;
      if ( _interlockedbittestandset64(*v6, 0LL) )
      {
        v7 = (unsigned __int64 *)*v6;
        goto LABEL_5;
      }
    }
    else
    {
      ++v5;
    }
  }
  if ( v3 )
    v3[10] = 1;
  return result;
}
