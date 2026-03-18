/*
 * XREFs of MiReleaseNonPagedResourcesNotExposed @ 0x14038B398
 * Callers:
 *     MiFreeLargePageCharges @ 0x14038BC4C (MiFreeLargePageCharges.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiObtainMdlCharges @ 0x140415E40 (MiObtainMdlCharges.c)
 *     MiReturnMdlCharges @ 0x1404C47D4 (MiReturnMdlCharges.c)
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResourcesNotExposed(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2, 16);
  return MiReturnResident(a1, a2);
}
