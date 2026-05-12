/*
 * XREFs of NvmeAdapterSetControllerArbitrationBurst @ 0x1400E7684
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterSetControllerArbitrationBurst(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al

  v4 = 7;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 592) + 72LL) < 7u )
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 72LL);
  return NvmeAdapterSetFabricControllerFeature(a1, 0, 1, a4, v4 & 7);
}
