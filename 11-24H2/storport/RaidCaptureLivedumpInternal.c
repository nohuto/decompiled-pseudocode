/*
 * XREFs of RaidCaptureLivedumpInternal @ 0x14008B878
 * Callers:
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400D9840 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400E4AA0 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeAdapterNvmeControllerTransportErrorWork @ 0x1400E5430 (NvmeAdapterNvmeControllerTransportErrorWork.c)
 *     NvmeAdapterRemoveFabricControllerNamespaces @ 0x1400E70E0 (NvmeAdapterRemoveFabricControllerNamespaces.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidCaptureLivedumpInternal(int a1, __int64 a2, __int64 a3)
{
  return DbgkWerCaptureLiveKernelDump(L"Storport", 519LL, a1, a2, a3, 0LL, 0LL, 0LL, 8);
}
