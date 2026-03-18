/*
 * XREFs of PspLockQuotaListShared @ 0x1404945CC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140A36C94 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 484);
  v3 = KeAbPreAcquire((__int64)a2, 0LL);
  result = _InterlockedCompareExchange64(a2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a2, 0, v3, (__int64)a2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
