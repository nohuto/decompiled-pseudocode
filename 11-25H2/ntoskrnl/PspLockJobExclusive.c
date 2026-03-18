/*
 * XREFs of PspLockJobExclusive @ 0x1408DC060
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x140768098 (PspQuitNextJobProcess.c)
 *     PspJobClose @ 0x1408DA090 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1408DB0C0 (PspNotificationPacketCallback.c)
 *     PspLockRootJobFromProcess @ 0x1408DBF30 (PspLockRootJobFromProcess.c)
 *     PspGetNextJobProcess @ 0x1408DC088 (PspGetNextJobProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408DFF78 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 *     PspJobNotificationWorker @ 0x140A416F0 (PspJobNotificationWorker.c)
 *     PspCreateSilo @ 0x140A7183C (PspCreateSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
