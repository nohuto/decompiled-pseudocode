/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1408DE1F4
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x14076788C (PsReportProcessMemoryLimitViolation.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D8CC0 (PspApplyJobLimitsToProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  v2 = a1 + 1264;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1264), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1264));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
    {
      result = (_QWORD *)(a2 + 152);
      if ( (_QWORD *)*result != result )
        return (_QWORD *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
