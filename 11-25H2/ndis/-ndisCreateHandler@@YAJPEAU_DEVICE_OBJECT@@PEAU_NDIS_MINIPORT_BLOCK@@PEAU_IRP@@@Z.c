/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004A030
 * Callers:
 *     NdisWdfCreateIrpHandler @ 0x140049FE0 (NdisWdfCreateIrpHandler.c)
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14004A010 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004A7A0 (-ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004AC40 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  char v6; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *SecurityDescriptor; // r12
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v10; // rdi
  KPROCESSOR_MODE RequestorMode; // r15
  GENERIC_MAPPING *v12; // rax
  BOOLEAN v13; // r15
  unsigned int *p_NumAdminOpens; // r12
  KIRQL v15; // dl
  unsigned int NumUserOpens; // eax
  char v17; // al
  KIRQL CurrentIrql; // al
  KIRQL v19; // si
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v22; // al
  unsigned __int64 *p_Lock; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v25; // rcx
  int v26; // esi
  _FILE_OBJECT *FileObject; // rax
  _OID_LIST *OidList; // rax
  char v29; // al
  char v30; // r15
  void *v31; // r14
  KIRQL v32; // al
  KIRQL v33; // al
  KIRQL v34; // al
  void (__fastcall **BusInterface)(_QWORD); // rcx
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-88h]
  __int64 AccessMode; // [rsp+38h] [rbp-80h]
  char v39; // [rsp+50h] [rbp-68h]
  char v40; // [rsp+52h] [rbp-66h]
  PVOID P; // [rsp+58h] [rbp-60h]
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-58h] BYREF
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-54h] BYREF
  NTSTATUS AccessStatus; // [rsp+68h] [rbp-50h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp-40h] BYREF
  char v48; // [rsp+D0h] [rbp+18h]
  char v49; // [rsp+D8h] [rbp+20h]

  v3 = a1;
  v6 = 0;
  P = 0LL;
  v49 = 0;
  v48 = 0;
  v39 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a3);
    v3 = a1;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(v3, &a2->Header, a3);
  SecurityDescriptor = a2->SecurityDescriptor;
  AccessStatus = 0;
  Privileges = 0LL;
  GrantedAccess = 0;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v10 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
  SeLockSubjectContext(&v10->SubjectSecurityContext);
  RequestorMode = 1;
  if ( (CurrentStackLocation->Flags & 1) == 0 )
    RequestorMode = a3->RequestorMode;
  v12 = IoGetFileObjectGenericMapping();
  v13 = SeAccessCheck(
          SecurityDescriptor,
          &v10->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          v12,
          RequestorMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(v10, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v13 )
  {
    v10->PreviouslyGrantedAccess |= GrantedAccess;
    v10->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v10->SubjectSecurityContext);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( !ndisMIsCompartmentAccessibleByClient(a2) )
  {
    v26 = -1073741772;
LABEL_51:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v31 = 0LL;
    v30 = 0;
LABEL_35:
    if ( v6 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumUserOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v33);
    }
    if ( v30 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v34 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v34);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    }
    if ( v48 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    goto LABEL_44;
  }
  p_NumAdminOpens = &a2->NumAdminOpens;
  v15 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( !v13 )
  {
    NumUserOpens = a2->NumUserOpens;
    if ( NumUserOpens < 0x1000000 )
    {
      v6 = 1;
      a2->NumUserOpens = NumUserOpens + 1;
      v17 = 0;
      v49 = 1;
      goto LABEL_17;
    }
    goto LABEL_59;
  }
  if ( *p_NumAdminOpens >= 0x1000000 )
  {
LABEL_59:
    v26 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
    goto LABEL_51;
  }
  ++*p_NumAdminOpens;
  v17 = 1;
  v39 = 1;
LABEL_17:
  v40 = v17;
  KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v26 = -1073741823;
    goto LABEL_48;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
  v48 = 1;
  v19 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
  {
    v48 = 0;
  }
  else
  {
    RefCountTracker = a2->RefCountTracker;
    if ( RefCountTracker )
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x56u);
    ReferenceCount = a2->Ref.ReferenceCount;
    a2->Ref.ReferenceCount = ReferenceCount + 1;
    if ( ReferenceCount == -1 )
    {
      a2->Ref.ReferenceCount = -1;
      v48 = 0;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(GenericMapping) = a2->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xCu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a2,
      GenericMapping);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v19);
  if ( !v48 )
  {
    v26 = -1073676282;
    goto LABEL_48;
  }
  v22 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = 0LL;
  p_Lock = &a2->Lock;
  if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
  {
    v26 = -1073676282;
    KeReleaseSpinLock(p_Lock, v22);
LABEL_48:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v29 = v39;
    v30 = 0;
    v6 = v49;
LABEL_33:
    v31 = P;
    if ( v29 )
    {
      v32 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --*p_NumAdminOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v32);
    }
    goto LABEL_35;
  }
  ++a2->UserModeOpenReferences;
  KeReleaseSpinLock(p_Lock, v22);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1668236366);
  P = Pool2;
  v25 = Pool2;
  if ( Pool2 )
  {
    v26 = 0;
    *Pool2 = a1;
    FileObject = CurrentStackLocation->FileObject;
    v25[1] = a2;
    v25[2] = 0LL;
    *((_BYTE *)v25 + 24) = v13;
    FileObject->FsContext = v25;
    OidList = a2->OidList;
    if ( OidList )
    {
      v25[2] = OidList;
    }
    else if ( a3->RequestorMode == 1 )
    {
      v26 = -1073741823;
    }
  }
  else
  {
    v26 = -1073741670;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  v29 = v40;
  if ( v26 < 0 )
    goto LABEL_32;
  if ( (a2->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a2->BusInterface;
    if ( !BusInterface )
    {
      v26 = -1073741823;
LABEL_32:
      v30 = 1;
      goto LABEL_33;
    }
    BusInterface[4](BusInterface[1]);
  }
LABEL_44:
  a3->IoStatus.Status = v26;
  IofCompleteRequest(a3, 2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(AccessMode) = v26;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      (char)a3,
      AccessMode);
  }
  return (unsigned int)v26;
}
