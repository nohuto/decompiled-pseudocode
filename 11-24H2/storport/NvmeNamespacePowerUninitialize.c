/*
 * XREFs of NvmeNamespacePowerUninitialize @ 0x140134500
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespacePowerInitialize @ 0x140133D74 (NvmeNamespacePowerInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespacePowerUninitialize(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rcx
  struct _IO_WORKITEM *v4; // rcx
  __int64 i; // rdi
  void *v6; // rcx
  void *v7; // rcx

  if ( a1 )
  {
    v1 = g_CpuInfo;
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
    {
      v4 = *(struct _IO_WORKITEM **)(v3 + 144);
      if ( v4 )
      {
        IoFreeWorkItem(v4);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) = 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) )
      {
        for ( i = 0LL; (unsigned int)i < v1[2]; i = (unsigned int)(i + 1) )
        {
          v6 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8 * i);
          if ( v6 )
            ExFreePoolWithTag(v6, 0x4E506152u);
        }
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 128) + 24LL), 0x4E506152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = 0LL;
      }
      v7 = *(void **)(*(_QWORD *)(a1 + 128) + 32LL);
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x4E506152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) = 0LL;
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 128), 0x4E506152u);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
  }
}
