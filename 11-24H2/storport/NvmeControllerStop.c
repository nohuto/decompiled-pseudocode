/*
 * XREFs of NvmeControllerStop @ 0x1400F51D8
 * Callers:
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 * Callees:
 *     NvmeControllerAdminQueuesFreeResources @ 0x1400EA548 (NvmeControllerAdminQueuesFreeResources.c)
 *     NvmeControllerDeleteAsyncEventContext @ 0x1400EC958 (NvmeControllerDeleteAsyncEventContext.c)
 *     NvmeControllerIoQueuesDeletion @ 0x1400F1250 (NvmeControllerIoQueuesDeletion.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerPowerUninitialize @ 0x1400F2D00 (NvmeControllerPowerUninitialize.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400F8BE0 (NvmeFreeHostMemoryBuffer.c)
 */

__int64 __fastcall NvmeControllerStop(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rdx
  int v6; // r8d

  v2 = NvmeControllerIoQueuesDeletion(a1);
  NvmeControllerPowerUninitialize(a1, 1);
  if ( *(_QWORD *)(a1 + 1200) )
    NvmeFreeHostMemoryBuffer(a1);
  NvmeControllerIoQueuesFreeResources(a1, v3, v4);
  NvmeControllerAdminQueuesFreeResources(a1, v5, v6);
  NvmeControllerDeleteAsyncEventContext(a1);
  return v2;
}
