/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140A438E0
 * Callers:
 *     PpProcessClearProblem @ 0x14046D77C (PpProcessClearProblem.c)
 *     PpSystemHiveLimitCallback @ 0x140722E90 (PpSystemHiveLimitCallback.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072D3C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A43660 (PnpDiagRundownRegisterCallback.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140A438A0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpGetSystemPdoList @ 0x140AA8060 (PnpGetSystemPdoList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipForAllDeviceNodesCallback @ 0x140A439A0 (PipForAllDeviceNodesCallback.c)
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
