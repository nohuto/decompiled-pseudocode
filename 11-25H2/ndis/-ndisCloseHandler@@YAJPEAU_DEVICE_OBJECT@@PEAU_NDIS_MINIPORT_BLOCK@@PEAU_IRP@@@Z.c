/*
 * XREFs of ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14002A4D0
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x14007B470 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004AC40 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCloseHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdi
  KIRQL v9; // al
  KIRQL v10; // al
  void (__fastcall **BusInterface)(_QWORD); // rcx

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( a2->Header.Type == 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x19u,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( FsContext[24] )
      --a2->NumAdminOpens;
    else
      --a2->NumUserOpens;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v9);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v10 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    --a2->UserModeOpenReferences;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v10);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    ndisDereferenceMiniport(a2, 0x56u);
    if ( (a2->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))a2->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Au,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        a3);
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
        (char)a2,
        a3);
    return ndisDummyHandler(a1, &a2->Header, a3);
  }
}
