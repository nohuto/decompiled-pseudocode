/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x14035E4A8
 * Callers:
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140968340 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     RawMountVolume @ 0x14099E244 (RawMountVolume.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140A4D210 (FsRtlNotifyVolumeEventEx.c)
 *     IoGetRelatedTargetDevice @ 0x140A51834 (IoGetRelatedTargetDevice.c)
 *     NtGetDevicePowerState @ 0x140A7FFA0 (NtGetDevicePowerState.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     PnpSetDeviceAffinityThread @ 0x14035E9C0 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRelatedTargetDevice(PFILE_OBJECT FileObject, _QWORD *a2)
{
  KIRQL v4; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  PVOID P; // [rsp+30h] [rbp-29h] BYREF
  __int16 v12; // [rsp+38h] [rbp-21h] BYREF
  int v13; // [rsp+40h] [rbp-19h]
  PDEVICE_OBJECT v14; // [rsp+60h] [rbp+7h]
  PFILE_OBJECT v15; // [rsp+68h] [rbp+Fh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+27h] BYREF

  P = 0LL;
  *a2 = 0LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( RelatedDeviceObject )
  {
    memset_0(&v12, 0, 0x48uLL);
    v12 = 1819;
    v13 = 4;
    v14 = RelatedDeviceObject;
    PreviousAffinity = 0LL;
    v15 = FileObject;
    v6 = PnpSetDeviceAffinityThread(RelatedDeviceObject, &PreviousAffinity);
    v7 = IopSynchronousCall((_DWORD)RelatedDeviceObject, (unsigned int)&v12, -1073741637, 0, (__int64)&P);
    if ( v6 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( P )
    {
      v8 = *(_DWORD *)P == 1 ? *((_QWORD *)P + 1) : 0LL;
      ExFreePoolWithTag(P, 0);
      if ( v8 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
        if ( v9 )
        {
          *a2 = v9;
          return (unsigned int)v7;
        }
      }
    }
  }
  return 3221225486LL;
}
