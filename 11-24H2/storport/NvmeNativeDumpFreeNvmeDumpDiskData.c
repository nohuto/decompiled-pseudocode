/*
 * XREFs of NvmeNativeDumpFreeNvmeDumpDiskData @ 0x14019F81C
 * Callers:
 *     NvmeDumpCreateDumpDiskInfo @ 0x14019F410 (NvmeDumpCreateDumpDiskInfo.c)
 *     NvmeNativeDumpFreeDumpDiskInfo @ 0x14019F868 (NvmeNativeDumpFreeDumpDiskInfo.c)
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A07D8 (NvmeNativeDumpCreateDumpDiskInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNativeDumpFreeNvmeDumpDiskData(PVOID *a1)
{
  void *v2; // rcx

  v2 = *(void **)(*((_QWORD *)*a1 + 2) + 8LL);
  if ( v2 )
    ObfDereferenceObject(v2);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
