/*
 * XREFs of ACPIBuildCompleteCommon @ 0x14001E430
 * Callers:
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  ACPIBuildScheduleDpc();
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}
