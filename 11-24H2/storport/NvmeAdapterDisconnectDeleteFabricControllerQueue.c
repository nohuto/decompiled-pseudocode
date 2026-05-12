/*
 * XREFs of NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E1C4C
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E05D4 (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     McTemplateK0qjzshh_EtwWriteTransfer @ 0x1400DDA3C (McTemplateK0qjzshh_EtwWriteTransfer.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterFreeControllerQueueResources @ 0x1400E2EAC (NvmeAdapterFreeControllerQueueResources.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400E5630 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 */

NTSTATUS __fastcall NvmeAdapterDisconnectDeleteFabricControllerQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(v3 + 128);
    if ( *(_WORD *)(a1 + 136) && *(_DWORD *)(a1 + 120) == 5 && (*(_DWORD *)(v3 + 136) & 0x4000LL) != 0 )
      NvmeAdapterNvmeDisconnectFabricControllerQueue();
    NvmeAdapterTransportDisconnectFabricControllerQueue(a1, a2, a3);
    NvmeAdapterFreeControllerQueueResources(a1);
    result = NvmeAdapterDeleteFabricControllerQueue(a1);
    if ( (byte_14017146A & 2) != 0 )
      return McTemplateK0qjzshh_EtwWriteTransfer(
               v5 + 1032,
               v7,
               v8,
               *(_DWORD *)(v5 + 56),
               v5 + 1032,
               *(const wchar_t **)(v5 + 1016),
               *(const char **)(v3 + 792),
               *(_WORD *)(v3 + 4),
               *(_WORD *)(a1 + 136));
  }
  return result;
}
