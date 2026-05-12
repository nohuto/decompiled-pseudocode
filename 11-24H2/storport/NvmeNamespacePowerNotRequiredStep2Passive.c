/*
 * XREFs of NvmeNamespacePowerNotRequiredStep2Passive @ 0x140134230
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespacePowerNotRequiredStep2 @ 0x140133FFC (NvmeNamespacePowerNotRequiredStep2.c)
 */

void __fastcall NvmeNamespacePowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[16] + 160LL), 0);
  NvmeNamespacePowerNotRequiredStep2(Context);
}
