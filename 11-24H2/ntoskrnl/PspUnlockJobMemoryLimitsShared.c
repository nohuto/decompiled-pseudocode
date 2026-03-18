/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1408ED564
 * Callers:
 *     PsReportProcessMemoryLimitViolation @ 0x1407772E0 (PsReportProcessMemoryLimitViolation.c)
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

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
        return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5);
    }
  }
  return result;
}
