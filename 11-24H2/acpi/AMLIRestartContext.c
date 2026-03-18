/*
 * XREFs of AMLIRestartContext @ 0x14004B0FC
 * Callers:
 *     AcpiNativeMethodEvalRequestCompletion @ 0x14004B0E0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPIFlushDeviceQueueCallback @ 0x14005A8C0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x14005A900 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x14005C810 (GenericDeviceFirmwareLockCompletion.c)
 *     ACPITableUnloadCallBack @ 0x140068510 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x14006AD6C (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x14006CAE0 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x14001384C (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
