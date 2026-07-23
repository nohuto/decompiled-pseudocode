/*
 * XREFs of PiCreateDeviceInstanceKey @ 0x1409C3F58
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 */

__int64 __fastcall PiCreateDeviceInstanceKey(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int Device; // ebx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (int)a2;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  Device = CmCreateDevice(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 983103, v3, (__int64)&v9, 0);
  if ( Device >= 0 )
    *a3 = 2 - (v9 != 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return (unsigned int)Device;
}
