/*
 * XREFs of DeleteNVMePrpListBufferPool @ 0x140119E18
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 * Callees:
 *     NvmeFreeContiguousMemory @ 0x140087FC4 (NvmeFreeContiguousMemory.c)
 */

void __fastcall DeleteNVMePrpListBufferPool(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned int v3; // edi
  int i; // r14d
  __int64 j; // rbp
  PSLIST_ENTRY v6; // rax
  _QWORD *p_Next; // rsi

  v1 = *(_QWORD **)(a1 + 880);
  if ( v1 )
  {
    if ( *v1 )
    {
      v3 = 0;
      for ( i = g_RecommendedSharedDataAlignment
              * (((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 32)
               / (unsigned int)g_RecommendedSharedDataAlignment); v3 < g_MaximumProcessorCount; ++v3 )
      {
        for ( j = **(_QWORD **)(a1 + 880) + i * v3; ; --*(_DWORD *)(j + 16) )
        {
          v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)j);
          p_Next = &v6->Next;
          if ( !v6 )
            break;
          if ( v6[1].Next )
          {
            NvmeFreeContiguousMemory(*(_QWORD *)(a1 + 128));
            p_Next[2] = 0LL;
          }
          ExFreePoolWithTag(p_Next, 0x4D4E6152u);
        }
      }
      ExFreePoolWithTag(**(PVOID **)(a1 + 880), 0x4D4E6152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 880), 0x4D4E6152u);
    *(_QWORD *)(a1 + 880) = 0LL;
  }
}
