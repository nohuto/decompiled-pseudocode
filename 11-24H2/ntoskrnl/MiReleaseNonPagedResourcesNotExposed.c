/*
 * XREFs of MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC
 * Callers:
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x1403A8ECC (MiReturnMdlCharges.c)
 *     MiFreeLargePageCharges @ 0x1403A9C50 (MiFreeLargePageCharges.c)
 *     MiObtainMdlCharges @ 0x1404128E0 (MiObtainMdlCharges.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResourcesNotExposed(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2, 16);
  return MiReturnResident(a1, a2);
}
