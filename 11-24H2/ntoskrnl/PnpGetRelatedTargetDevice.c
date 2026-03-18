/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x1403750B4
 * Callers:
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14085CBD4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     RawMountVolume @ 0x1409A3134 (RawMountVolume.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140A50700 (FsRtlNotifyVolumeEventEx.c)
 *     IoGetRelatedTargetDevice @ 0x140A561A8 (IoGetRelatedTargetDevice.c)
 *     NtGetDevicePowerState @ 0x140A83450 (NtGetDevicePowerState.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     PnpSetDeviceAffinityThread @ 0x1403751EC (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+27h] BYREF

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
