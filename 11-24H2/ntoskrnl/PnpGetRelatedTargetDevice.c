/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x14025D974
 * Callers:
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140858944 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140A474B0 (FsRtlNotifyVolumeEventEx.c)
 *     IoGetRelatedTargetDevice @ 0x140A4E0F8 (IoGetRelatedTargetDevice.c)
 *     NtGetDevicePowerState @ 0x140A7DF70 (NtGetDevicePowerState.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     PnpSetDeviceAffinityThread @ 0x14025DAAC (PnpSetDeviceAffinityThread.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
