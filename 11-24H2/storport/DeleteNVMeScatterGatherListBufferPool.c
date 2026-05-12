/*
 * XREFs of DeleteNVMeScatterGatherListBufferPool @ 0x140119F40
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     CreateNVMeScatterGatherListBufferPool @ 0x140119A90 (CreateNVMeScatterGatherListBufferPool.c)
 * Callees:
 *     <none>
 */

void __fastcall DeleteNVMeScatterGatherListBufferPool(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  union _SLIST_HEADER *v4; // rcx
  PSLIST_ENTRY v5; // rax
  void *v6; // rcx

  v2 = g_CpuInfo;
  if ( *(_QWORD *)(a1 + 896) )
  {
    v3 = 0LL;
    if ( *((_DWORD *)g_CpuInfo + 2) )
    {
      do
      {
        v4 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 896) + 8 * v3);
        if ( v4 )
        {
          while ( 1 )
          {
            v5 = ExpInterlockedPopEntrySList(v4);
            if ( !v5 )
              break;
            ExFreePoolWithTag(v5, 0x52436152u);
            v4 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 896) + 8 * v3);
          }
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v2[2] );
    }
    v6 = **(void ***)(a1 + 896);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x52436152u);
      **(_QWORD **)(a1 + 896) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 896), 0x52436152u);
    *(_QWORD *)(a1 + 896) = 0LL;
  }
}
