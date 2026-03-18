/*
 * XREFs of IoShutdownSystem @ 0x140B5374C
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IopInterlockedRemoveHeadList @ 0x1404AB360 (IopInterlockedRemoveHeadList.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     IoNotifyDump @ 0x140591C60 (IoNotifyDump.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1406A9B90 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A3CD90 (IoBuildSynchronousFsdRequest.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140B8278C (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _DEVICE_OBJECT *v5; // rdi
  IRP *v6; // rax
  PVOID *v7; // rax
  __int64 v8; // rdx
  PVOID *v9; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v11; // rax
  PVOID *v12; // rax
  PVOID *v13; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v12 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v13 = v12;
        if ( !v12 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v12[2]);
        v11 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v11 && IofCallDriver(AttachedDeviceReference, v11) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v13[2]);
        ExFreePoolWithTag(v13, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    v16 = 0;
    if ( (int)ZwQuerySystemInformation(151LL, (__int64)&v16) >= 0 && (v16 & 0x20) != 0 )
    {
      guard_dispatch_icall_no_overrides(0LL, v2, v3, v4);
      v16 = 0;
      ZwSetSystemInformation(151LL, (__int64)&v16);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v7 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v9 = v7;
      if ( !v7 )
        break;
      v5 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v7[2]);
      v6 = IoBuildSynchronousFsdRequest(0x10u, v5, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v6 && IofCallDriver(v5, v6) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v5);
      ObfDereferenceObject(v9[2]);
      ExFreePoolWithTag(v9, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    if ( (v16 & 0x10) != 0 )
      IoNotifyDump(5LL, v8);
    v16 = 2;
    ZwSetSystemInformation(151LL, (__int64)&v16);
  }
}
