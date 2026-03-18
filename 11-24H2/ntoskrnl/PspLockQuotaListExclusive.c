/*
 * XREFs of PspLockQuotaListExclusive @ 0x1404CE718
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409D5BC0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140A36C94 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockQuotaListExclusive(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a1 + 484);
  result = (__int64)KeAbPreAcquire((__int64)a2, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a2, result, (__int64)a2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
