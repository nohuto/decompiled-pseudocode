/*
 * XREFs of IopShutdownBaseFileSystems @ 0x140B539D0
 * Callers:
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A3CD90 (IoBuildSynchronousFsdRequest.c)
 */

LONG_PTR __fastcall IopShutdownBaseFileSystems(LONG_PTR **a1)
{
  LONG_PTR *v2; // rbx
  LONG_PTR result; // rax
  PDEVICE_OBJECT v4; // rsi
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v6; // rax
  LONG_PTR v7; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v2 = *a1;
  if ( (LONG_PTR **)(*a1)[1] != a1 || (result = *v2, *(LONG_PTR **)(*v2 + 8) != v2) )
LABEL_14:
    __fastfail(3u);
  *a1 = (LONG_PTR *)result;
  *(_QWORD *)(result + 8) = a1;
  while ( v2 != (LONG_PTR *)a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    PsReferenceSiloContext(v2 - 10);
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v6 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Object, &IoStatusBlock);
    if ( v6 && IofCallDriver(AttachedDevice, v6) == 259 )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v2 = *a1;
    if ( (LONG_PTR **)(*a1)[1] != a1 )
      goto LABEL_14;
    v7 = *v2;
    if ( *(LONG_PTR **)(*v2 + 8) != v2 )
      goto LABEL_14;
    *a1 = (LONG_PTR *)v7;
    *(_QWORD *)(v7 + 8) = a1;
    KeResetEvent(&Object);
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0);
    result = ObfDereferenceObject(v4);
  }
  return result;
}
