/*
 * XREFs of PspLockQuotaListShared @ 0x1404952E4
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140A30DE4 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  __int64 *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 484);
  v3 = KeAbPreAcquire((__int64)a2, 0LL);
  result = _InterlockedCompareExchange64(a2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a2, 0, v3, (unsigned __int64)a2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
