/*
 * XREFs of DeleteNVMeSplitIoContextPool @ 0x14011A024
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     CreateNVMeSplitIoContextPool @ 0x140119C4C (CreateNVMeSplitIoContextPool.c)
 * Callees:
 *     <none>
 */

void __fastcall DeleteNVMeSplitIoContextPool(__int64 a1)
{
  __int64 i; // rdi
  union _SLIST_HEADER *v3; // rcx
  PSLIST_ENTRY v4; // rax

  if ( a1 && *(_QWORD *)(a1 + 888) )
  {
    for ( i = 0LL; (unsigned int)i < g_MaximumProcessorCount; i = (unsigned int)(i + 1) )
    {
      v3 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 888) + 8 * i);
      if ( v3 )
      {
        while ( 1 )
        {
          v4 = ExpInterlockedPopEntrySList(v3);
          if ( !v4 )
            break;
          ExFreePoolWithTag(v4, 0x52436152u);
          v3 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 888) + 8 * i);
        }
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 888) + 8 * i), 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 888), 0x52436152u);
    *(_QWORD *)(a1 + 888) = 0LL;
  }
}
