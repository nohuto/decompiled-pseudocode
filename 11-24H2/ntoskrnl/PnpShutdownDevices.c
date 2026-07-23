/*
 * XREFs of PnpShutdownDevices @ 0x140718630
 * Callers:
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1408B0638 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpCreateDeviceEventEntry @ 0x1408B1210 (PnpCreateDeviceEventEntry.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  volatile signed __int32 *DeviceEventEntry; // rdi
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  _QWORD *v6; // rax
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  __int64 v8; // [rsp+80h] [rbp-88h] BYREF
  __int64 v9; // [rsp+88h] [rbp-80h] BYREF
  char *v10; // [rsp+90h] [rbp-78h]
  char v11; // [rsp+98h] [rbp-70h] BYREF

  P = 0LL;
  HIDWORD(v9) = 0;
  LODWORD(v8) = 0;
  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( !PnpTearDownPnpStacksOnShutdown && (PopShutdownCleanly & 0x20) == 0 )
    return v0;
  DeviceEventEntry = (volatile signed __int32 *)PnpCreateDeviceEventEntry(401LL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  v3 = IopRootDeviceNode;
  v10 = &v11;
  LODWORD(v9) = 10485760;
  PipSetDevNodeUserFlags(IopRootDeviceNode, 16LL);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = (_QWORD *)v3[1];
    while ( v3 )
    {
      v5 = *((_DWORD *)v3 + 100);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          break;
        }
LABEL_10:
        v6 = (_QWORD *)*v3;
        if ( *v3 )
          goto LABEL_12;
        v3 = (_QWORD *)v3[2];
        PipSetDevNodeUserFlags(v3, 32LL);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
        {
          PipSetDevNodeUserFlags(v3, 32LL);
          goto LABEL_10;
        }
LABEL_12:
        v3 = v6;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v3 )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        (void *)DeviceEventEntry,
        0x191uLL,
        (PVOID)v3[4],
        1,
        0,
        0,
        46,
        0,
        0LL,
        0LL,
        (__int64)&v8,
        (__int64)&v9);
      P = (PVOID)DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject(&P);
      if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd(DeviceEventEntry + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)DeviceEventEntry, 0x4B706E50u);
  return v0;
}
