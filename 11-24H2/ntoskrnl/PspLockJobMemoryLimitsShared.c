/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1408ED4D8
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x1407772E0 (PsReportProcessMemoryLimitViolation.c)
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v2 = (volatile signed __int64 *)(a1 + 1264);
  v3 = KeAbPreAcquire(a1 + 1264, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (__int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
