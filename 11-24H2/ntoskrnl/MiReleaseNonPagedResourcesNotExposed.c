/*
 * XREFs of MiReleaseNonPagedResourcesNotExposed @ 0x14039895C
 * Callers:
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiObtainMdlCharges @ 0x140394D20 (MiObtainMdlCharges.c)
 *     MiReturnMdlCharges @ 0x140397B54 (MiReturnMdlCharges.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResourcesNotExposed(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2, 16);
  return MiReturnResident(a1, a2);
}
