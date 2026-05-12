/*
 * XREFs of StorFreeContiguousMemory @ 0x140184F04
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x140075D68 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1400A1EC8 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeDumpFreeDumpAdapterInfo @ 0x14019F718 (NvmeDumpFreeDumpAdapterInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorFreeContiguousMemory(_QWORD *a1, __int64 a2)
{
  char v3; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*a1 + 8LL) + 24LL))(
      *a1,
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)a2,
      v3);
  }
  else
  {
    MmFreeContiguousMemory(*(PVOID *)a2);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
}
