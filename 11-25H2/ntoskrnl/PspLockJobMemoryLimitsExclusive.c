/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x1408DA020
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1408DA090 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rdi

  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1264);
    v4 = KeAbPreAcquire(a1 + 1264, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
  }
}
