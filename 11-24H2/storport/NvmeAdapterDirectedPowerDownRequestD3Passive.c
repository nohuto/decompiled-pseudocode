/*
 * XREFs of NvmeAdapterDirectedPowerDownRequestD3Passive @ 0x14012E390
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterDirectedPowerDownRequestD3 @ 0x14012E190 (NvmeAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeAdapterDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[20] + 232LL), 0);
  NvmeAdapterDirectedPowerDownRequestD3(Context);
}
