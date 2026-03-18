/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140A3E3F0
 * Callers:
 *     PpProcessClearProblem @ 0x14046EF4C (PpProcessClearProblem.c)
 *     PpSystemHiveLimitCallback @ 0x140716D90 (PpSystemHiveLimitCallback.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140721440 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A3E170 (PnpDiagRundownRegisterCallback.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140A3E3B0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpGetSystemPdoList @ 0x140AA3050 (PnpGetSystemPdoList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PipForAllDeviceNodesCallback @ 0x140A3E4B0 (PipForAllDeviceNodesCallback.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  int i; // edi
  _QWORD *v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v5 = *(_QWORD **)(a1 + 8);
  for ( i = 0; v5 && i >= 0; i = PipForAllDeviceNodesCallback(v7, v9) )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return (unsigned int)i;
}
