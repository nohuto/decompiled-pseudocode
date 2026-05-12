/*
 * XREFs of NvmeNativeDumpFreeDumpAdapterInfo @ 0x1401A0B9C
 * Callers:
 *     NvmeNativeDumpFreeStorageDumpInfo @ 0x1401A0C44 (NvmeNativeDumpFreeStorageDumpInfo.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A0D80 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNativeDumpFreeDumpAdapterInfo(PVOID *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rdi
  void *v4; // rcx

  v1 = 0LL;
  v3 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v3 )
  {
    v4 = (void *)v3[40];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x44436152u);
      v3[40] = 0LL;
    }
    v1 = v3[2];
    ObfDereferenceObject(*(PVOID *)(v1 + 8));
    ExFreePoolWithTag(v3, 0x44436152u);
  }
  ObfDereferenceObject(*(PVOID *)(v1 + 8));
  ExFreePoolWithTag(*a1, 0x44436152u);
}
