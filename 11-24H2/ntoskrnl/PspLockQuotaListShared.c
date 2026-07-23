/*
 * XREFs of PspLockQuotaListShared @ 0x14048F05C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140A2BAE4 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  char *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 484);
  v3 = (char *)KeAbPreAcquire((__int64)a2, 0LL);
  result = _InterlockedCompareExchange64(a2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a2, 0, v3, (__int64)a2);
  if ( v3 )
    v3[10] = 1;
  return result;
}
