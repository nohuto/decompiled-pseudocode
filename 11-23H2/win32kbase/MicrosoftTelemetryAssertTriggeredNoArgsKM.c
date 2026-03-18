/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x1C007A3AC (ImpRpcQueryEnabledStateAsync.c)
 *     ImpCompleteRpc @ 0x1C007A548 (ImpCompleteRpc.c)
 *     ImpRpcAsyncResponseHandler @ 0x1C007AC8C (ImpRpcAsyncResponseHandler.c)
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpAllocate @ 0x1C007B048 (ImpAllocate.c)
 *     ImpWorkerRoutine @ 0x1C007B0F0 (ImpWorkerRoutine.c)
 *     ImpReleaseLock @ 0x1C007B85C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C007B8AC (ImpAcquireLock.c)
 *     ImSessionStop @ 0x1C007B908 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 *     ImpRpcConnect @ 0x1C00BB890 (ImpRpcConnect.c)
 *     ImpRpcDisconnect @ 0x1C00BF044 (ImpRpcDisconnect.c)
 *     ImpRpcAsyncUnInit @ 0x1C00BF1A8 (ImpRpcAsyncUnInit.c)
 *     ImpShutdownWorker @ 0x1C00C2890 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 *     ImpCleanupLock @ 0x1C00C2F1C (ImpCleanupLock.c)
 *     ImpInitializeLock @ 0x1C00C37F4 (ImpInitializeLock.c)
 *     ImpWaitForWorkerShutdown @ 0x1C00C4810 (ImpWaitForWorkerShutdown.c)
 *     ImpRpcAsyncInit @ 0x1C00CA1F0 (ImpRpcAsyncInit.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00DFF60 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C0151898 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154F90 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ImpRpcSendString @ 0x1C02359DC (ImpRpcSendString.c)
 *     ImpQueueCharacter @ 0x1C0235D58 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00ADFB8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, 0LL);
}
