/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x1408E93F0
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1264);
    v4 = KeAbPreAcquire(a1 + 1264, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, (__int64)v4, (__int64)v3);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
  }
}
