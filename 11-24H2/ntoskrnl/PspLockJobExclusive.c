/*
 * XREFs of PspLockJobExclusive @ 0x1408EB430
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x140777B78 (PspQuitNextJobProcess.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1408EA490 (PspNotificationPacketCallback.c)
 *     PspLockRootJobFromProcess @ 0x1408EB304 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1408EB458 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408EF378 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 *     PspJobNotificationWorker @ 0x140A451A0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A73C18 (PspCreateSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
