/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x14085AC20
 * Callers:
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0 (PspChangeJobMemoryUsageByProcess.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  char *v4; // rax
  char *v5; // rbx

  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1264);
    v4 = (char *)KeAbPreAcquire(a1 + 1264, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
    if ( v5 )
      v5[10] = 1;
  }
}
