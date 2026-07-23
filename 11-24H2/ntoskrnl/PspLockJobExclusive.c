/*
 * XREFs of PspLockJobExclusive @ 0x14085CC60
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x140777D38 (PspQuitNextJobProcess.c)
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x14085BCC0 (PspNotificationPacketCallback.c)
 *     PspLockRootJobFromProcess @ 0x14085CB34 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140860B78 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspJobNotificationWorker @ 0x140A3AAD0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
