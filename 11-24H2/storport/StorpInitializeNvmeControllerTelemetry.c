/*
 * XREFs of StorpInitializeNvmeControllerTelemetry @ 0x1400AFA40
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpInitializeNvmeControllerTelemetry(__int64 a1)
{
  *(_DWORD *)(a1 + 936) &= 0xFFFFFFF8;
  *(_BYTE *)(a1 + 947) = 0;
}
