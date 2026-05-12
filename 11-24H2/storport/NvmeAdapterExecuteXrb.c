/*
 * XREFs of NvmeAdapterExecuteXrb @ 0x1400CFAA4
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     NvmeAdapterPostScatterGatherExecute @ 0x1400D4F00 (NvmeAdapterPostScatterGatherExecute.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterExecuteXrb(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // r9
  bool v8; // bl
  int *v9; // rax
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD, __int64); // rax

  v3 = a2;
  if ( (a1[36] & 0x1000LL) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 168);
    if ( *(_BYTE *)(v5 + 2) == 40 )
      v6 = *(_DWORD *)(v5 + 24);
    else
      v6 = *(_DWORD *)(v5 + 12);
    v7 = *(_QWORD *)(a2 + 104);
    v8 = (v6 & 0x40) != 0;
    if ( v7 )
    {
      v9 = a1 + 286;
      if ( a1 != (_DWORD *)-1144LL )
      {
        v10 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          a3 = *(_QWORD *)(v10 + 8);
          if ( a3 )
          {
            if ( v9[7] >= 3 && (v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(a3 + 240)) != 0LL )
            {
              LOBYTE(a3) = v8;
              v11(v10, *(_QWORD *)(a2 + 104), a3);
            }
            else
            {
              LOBYTE(a3) = 1;
              LOBYTE(a2) = v8;
              KeFlushIoBuffers(v7, a2, a3);
            }
          }
        }
      }
    }
    v12 = *(_QWORD *)(v3 + 136);
    if ( v12 )
    {
      v13 = (__int64 *)(a1 + 286);
      if ( a1 != (_DWORD *)-1144LL )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( (int)a1[293] >= 3 && (v16 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v15 + 240)) != 0LL )
            {
              LOBYTE(a3) = v8;
              v16(v14, *(_QWORD *)(v3 + 136), a3);
            }
            else
            {
              LOBYTE(a3) = 1;
              LOBYTE(v15) = v8;
              KeFlushIoBuffers(v12, v15, a3);
            }
          }
        }
      }
    }
  }
  return NvmeAdapterPostScatterGatherExecute(a1, v3);
}
