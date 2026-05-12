/*
 * XREFs of RaIsDeviceDFxPoweredDown @ 0x140045E40
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 *     RaDriverSystemControlIrp @ 0x1401B9D10 (RaDriverSystemControlIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaIsDeviceDFxPoweredDown(__int64 a1)
{
  int *v1; // rax
  int v2; // ecx
  bool v3; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(int **)(a1 + 64);
  v2 = *v1;
  if ( *v1 == 1094997074 )
  {
    v3 = (*((_BYTE *)v1 + 109) & 0x40) == 0;
    return !v3;
  }
  if ( v2 == 1431193940 )
  {
    v3 = (*((_BYTE *)v1 + 507) & 2) == 0;
    return !v3;
  }
  if ( v2 == 1314275652 )
  {
    v5 = *((_QWORD *)v1 + 20);
    if ( !v5 )
      return 0;
    v6 = *(_QWORD *)(v5 + 8);
    return v6 && *(_BYTE *)(v6 + 65);
  }
  if ( v2 != 1314278989 )
    return 0;
  v7 = *((_QWORD *)v1 + 16);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    return 0;
  return *(_BYTE *)(v8 + 41) != 0;
}
