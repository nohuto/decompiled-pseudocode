/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140A39170
 * Callers:
 *     PpProcessClearProblem @ 0x14046831C (PpProcessClearProblem.c)
 *     PpSystemHiveLimitCallback @ 0x140720A20 (PpSystemHiveLimitCallback.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072B3D0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A38EF0 (PnpDiagRundownRegisterCallback.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140A39130 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpGetSystemPdoList @ 0x140AA3160 (PnpGetSystemPdoList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PipForAllDeviceNodesCallback @ 0x140A39230 (PipForAllDeviceNodesCallback.c)
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
