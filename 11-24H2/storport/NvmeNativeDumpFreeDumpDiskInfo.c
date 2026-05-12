/*
 * XREFs of NvmeNativeDumpFreeDumpDiskInfo @ 0x14019F868
 * Callers:
 *     NvmeDumpCreateDumpDiskInfo @ 0x14019F410 (NvmeDumpCreateDumpDiskInfo.c)
 *     NvmeDumpFreeStorageDumpInfo @ 0x14019F97C (NvmeDumpFreeStorageDumpInfo.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x14019FE00 (NvmeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpFreeStorageDumpInfo @ 0x1401A0C44 (NvmeNativeDumpFreeStorageDumpInfo.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A0D80 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x14019F81C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 */

void __fastcall NvmeNativeDumpFreeDumpDiskInfo(PVOID *a1)
{
  PVOID *v2; // rcx

  v2 = (PVOID *)((char *)*a1 + 48);
  if ( *v2 )
    NvmeNativeDumpFreeNvmeDumpDiskData(v2);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
