/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1408DE168
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14076788C (PsReportProcessMemoryLimitViolation.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D8CC0 (PspApplyJobLimitsToProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v2 = (volatile signed __int64 *)(a1 + 1264);
  v3 = KeAbPreAcquire(a1 + 1264, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
