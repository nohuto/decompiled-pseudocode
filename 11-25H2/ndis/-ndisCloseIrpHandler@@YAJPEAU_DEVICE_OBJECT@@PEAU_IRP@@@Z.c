/*
 * XREFs of ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14002A710
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004AC40 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCloseIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdi
  KIRQL v8; // al
  KIRQL v9; // al
  void (__fastcall **BusInterface)(_QWORD); // rcx

  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( DeviceExtension->Header.Type == 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x19u,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)DeviceExtension,
        a2);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(&DeviceExtension->Ref.SpinLock);
    if ( FsContext[24] )
      --DeviceExtension->NumAdminOpens;
    else
      --DeviceExtension->NumUserOpens;
    KeReleaseSpinLock(&DeviceExtension->Ref.SpinLock, v8);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v9 = KeAcquireSpinLockRaiseToDpc(&DeviceExtension->Lock);
    --DeviceExtension->UserModeOpenReferences;
    DeviceExtension->MiniportThread = 0LL;
    KeReleaseSpinLock(&DeviceExtension->Lock, v9);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    ndisDereferenceMiniport(DeviceExtension, 0x56u);
    if ( (DeviceExtension->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))DeviceExtension->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 2);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Au,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)DeviceExtension,
        a2);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x18u,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)DeviceExtension,
        a2);
    return ndisDummyHandler(a1, &DeviceExtension->Header, a2);
  }
}
