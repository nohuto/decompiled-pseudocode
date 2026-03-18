/*
 * XREFs of PpDeviceRegistration @ 0x140A46B4C
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PiDeviceRegistration @ 0x140A46BD8 (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v8 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v8;
}
