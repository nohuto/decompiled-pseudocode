/*
 * XREFs of NvmeControllerReleaseInternalDbgLog @ 0x1400F3D30
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerReleaseInternalDbgLog(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 1368) )
  {
    *(_DWORD *)(a1 + 1408) = -1;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1340); i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 1368) + 8 * i);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1368), 0x52436152u);
    *(_QWORD *)(a1 + 1368) = 0LL;
  }
}
