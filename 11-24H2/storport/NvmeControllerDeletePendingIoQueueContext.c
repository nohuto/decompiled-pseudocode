/*
 * XREFs of NvmeControllerDeletePendingIoQueueContext @ 0x1400ECB00
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeControllerCreatePendingIoQueueContext @ 0x1400EC5E0 (NvmeControllerCreatePendingIoQueueContext.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerDeletePendingIoQueueContext(__int64 a1)
{
  _DWORD *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct _KTIMER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = g_CpuInfo;
  if ( *(_QWORD *)(a1 + 1104) )
  {
    v3 = 0LL;
    if ( *((_DWORD *)g_CpuInfo + 2) )
    {
      do
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3);
        if ( v4 )
        {
          v5 = *(struct _KTIMER **)(v4 + 16);
          if ( v5 )
          {
            KeCancelTimer(v5);
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 16LL), 0x54496152u);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 16LL) = 0LL;
          }
          v6 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 8LL);
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0x54496152u);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 8LL) = 0LL;
          }
          v7 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 24LL);
          if ( v7 )
          {
            ExFreePoolWithTag(v7, 0x54496152u);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) + 24LL) = 0LL;
          }
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 1104) + 8 * v3), 0x54496152u);
          *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v3) = 0LL;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v2[2] );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1104), 0x54496152u);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
}
