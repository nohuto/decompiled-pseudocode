/*
 * XREFs of RaidAllocateNvmeSrb @ 0x14007AEA0
 * Callers:
 *     NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands @ 0x1400DE888 (NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E33A0 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E35FC (NvmeAdapterGetControllerLogPageSync.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E3AC4 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E3D90 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400E5630 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 *     NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400E7AC4 (NvmeAdapterSetFabricControllerKeepAliveTimeout.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400E7BA0 (NvmeAdapterSetFabricControllerProperty.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateNvmeSrb(__int64 a1, char a2)
{
  unsigned int v4; // esi
  __int64 result; // rax

  v4 = a2 != 0 ? 152 : 240;
  result = RaidAllocatePool(64LL, v4, 1918067026LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  if ( result )
  {
    *(_DWORD *)result = 2621448;
    *(_DWORD *)(result + 8) = 1397899864;
    *(_DWORD *)(result + 12) = 1;
    *(_DWORD *)(result + 16) = v4;
    *(_WORD *)(result + 36) = 2;
    *(_DWORD *)(result + 52) = 0;
    *(_QWORD *)(result + 56) = 1LL;
    *(_DWORD *)(result + 20) = a2 != 0 ? 44 : 10;
    *(_QWORD *)(result + 64) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 120) = 128;
    if ( a2 )
    {
      *(_DWORD *)(result + 128) = 68;
      *(_DWORD *)(result + 132) = 12;
      *(_WORD *)(result + 136) = 1;
    }
    else
    {
      *(_DWORD *)(result + 128) = 67;
      *(_DWORD *)(result + 132) = 100;
      *(_QWORD *)(result + 136) = *(_QWORD *)(a1 + 560);
    }
  }
  return result;
}
