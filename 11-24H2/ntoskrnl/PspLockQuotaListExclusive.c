/*
 * XREFs of PspLockQuotaListExclusive @ 0x1404C78E4
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409C59F0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140A2BAE4 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockQuotaListExclusive(__int64 a1, unsigned __int64 *a2)
{
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a1 + 484);
  result = (char *)KeAbPreAcquire((__int64)a2, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(a2, result, (__int64)a2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
