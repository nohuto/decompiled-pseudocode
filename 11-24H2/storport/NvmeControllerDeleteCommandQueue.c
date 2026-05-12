/*
 * XREFs of NvmeControllerDeleteCommandQueue @ 0x1400EC9A0
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerCreateCommandQueue @ 0x1400EBFF8 (NvmeControllerCreateCommandQueue.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerDeleteCommandQueue(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 && *(_QWORD *)(a1 + 1024) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)g_CpuInfo + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 64);
      if ( v3 )
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x4D4E6152u);
        v5 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 64) + 56LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4D4E6152u);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 1024) + 8 * i + 64), 0x4D4E6152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * i + 64) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1024), 0x4D4E6152u);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
}
