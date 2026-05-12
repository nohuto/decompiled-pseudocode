/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x14009E1F0
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x14009A210 (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x140188924 (RaUnitStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A07D8 (NvmeNativeDumpCreateDumpDiskInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1401BBFBC (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
