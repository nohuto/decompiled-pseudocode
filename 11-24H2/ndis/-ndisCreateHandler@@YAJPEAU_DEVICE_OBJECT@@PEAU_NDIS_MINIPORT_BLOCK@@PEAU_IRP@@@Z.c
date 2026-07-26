/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140053CF0
 * Callers:
 *     NdisWdfCreateIrpHandler @ 0x140053CA0 (NdisWdfCreateIrpHandler.c)
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140053CD0 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014E70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14002C0A0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004BA10 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  _QWORD *v3; // r13
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r12
  _UNKNOWN **v8; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _NDIS_IF_BLOCK *v11; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  bool v13; // si
  KIRQL v14; // bl
  KIRQL v15; // dl
  unsigned int NumUserOpens; // eax
  int v17; // esi
  KIRQL CurrentIrql; // al
  KIRQL v19; // al
  unsigned __int64 *p_Lock; // rcx
  __int64 Pool2; // rax
  __int64 v22; // rbx
  _OID_LIST *OidList; // rax
  unsigned __int64 BusInterface; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  KIRQL v28; // al
  bool v29; // zf
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v31; // rcx
  KIRQL v32; // al
  KIRQL v33; // al
  KIRQL v34; // al
  unsigned __int8 v35; // [rsp+40h] [rbp-78h]
  char v36; // [rsp+41h] [rbp-77h]
  char v37; // [rsp+45h] [rbp-73h]
  _IO_STACK_LOCATION *v38; // [rsp+48h] [rbp-70h]
  struct _DEVICE_OBJECT *v39; // [rsp+50h] [rbp-68h]
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v41[3]; // [rsp+60h] [rbp-58h] BYREF

  v3 = 0LL;
  v39 = a1;
  v4 = 0;
  v35 = 0;
  v36 = 0;
  v5 = 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      11,
      15,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a1,
      (char)a3);
    a1 = v39;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v38 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, &a2->Header, a3);
  v37 = ndisCheckAccess(a3, CurrentStackLocation, a2->SecurityDescriptor);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  memset(v41, 0, sizeof(v41));
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)v41);
  v11 = ndisMReferenceIfBlock(a2, 0x16u);
  if ( !v11
    || ((Compartment = v11->Compartment, HIDWORD(v41[0]) != *((_DWORD *)Compartment + 4))
      ? (*(_OWORD *)&v41[1] != *(_OWORD *)((char *)Compartment + 1684)
       ? ((*((_DWORD *)Compartment + 420) & 2) == 0
        ? (v13 = HIDWORD(v41[0]) == 1)
        : (v13 = 0))
       : (v13 = 1))
      : (v13 = 1),
        v14 = KeAcquireSpinLockRaiseToDpc(&SpinLock),
        IFBLOCK_DEREFERENCE_MINIPORT_LINK(a2->IfBlock, 0x16u),
        KeReleaseSpinLock(&SpinLock, v14),
        !v13) )
  {
    v17 = -1073741772;
    goto LABEL_45;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( v37 )
  {
    if ( a2->NumAdminOpens < 0x1000000 )
    {
      ++a2->NumAdminOpens;
      v4 = 1;
      goto LABEL_22;
    }
LABEL_20:
    v17 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
LABEL_45:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_46;
  }
  NumUserOpens = a2->NumUserOpens;
  if ( NumUserOpens >= 0x1000000 )
    goto LABEL_20;
  v5 = 1;
  a2->NumUserOpens = NumUserOpens + 1;
LABEL_22:
  KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v17 = -1073741823;
    goto LABEL_45;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
  v35 = ndisReferenceMiniport(a2, 0x56u);
  if ( !v35 )
  {
    v17 = -1073676282;
    goto LABEL_45;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v17 = 0;
  p_Lock = &a2->Lock;
  a2->MiniportThread = 0LL;
  if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
  {
    v17 = -1073676282;
    KeReleaseSpinLock(p_Lock, v19);
    goto LABEL_45;
  }
  ++a2->UserModeOpenReferences;
  KeReleaseSpinLock(p_Lock, v19);
  Pool2 = ExAllocatePool2(64LL, 96LL, 1668236366LL);
  v22 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = v39;
    *(_BYTE *)(Pool2 + 24) = v37;
    *(_QWORD *)(Pool2 + 8) = a2;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    if ( (unsigned int)((__int64 (*)(void))Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline)() )
    {
      *(_BYTE *)(v22 + 25) = (a2->Flags & 0x80) != 0;
      KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 32));
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v22 + 88));
      KeInitializeEvent((PRKEVENT)(v22 + 48), NotificationEvent, 0);
    }
    v38->FileObject->FsContext = (void *)v22;
    OidList = a2->OidList;
    if ( OidList )
    {
      *(_QWORD *)(v22 + 16) = OidList;
    }
    else if ( a3->RequestorMode == 1 )
    {
      v17 = -1073741823;
    }
  }
  else
  {
    v17 = -1073741670;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  v25 = v35;
  v3 = (_QWORD *)v22;
  v26 = v4;
  v36 = 1;
  v27 = v5;
  if ( v17 >= 0 )
  {
    v36 = 1;
    if ( (a2->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (unsigned __int64)a2->BusInterface;
      if ( BusInterface )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(BusInterface + 32))(
          *(_QWORD *)(BusInterface + 8),
          v35,
          v5,
          v4);
        BusInterface = v35;
      }
      else
      {
        v17 = -1073741823;
      }
      v36 = 1;
    }
  }
LABEL_46:
  if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline(BusInterface, v25, v27, v26) )
    goto LABEL_55;
  if ( v17 < 0 )
  {
LABEL_56:
    if ( v4 )
    {
      v32 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumAdminOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v32);
    }
    if ( v5 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumUserOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v33);
    }
    if ( v36 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v34 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v34);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    }
    if ( v35 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    goto LABEL_66;
  }
  if ( (a2->Flags & 0x80u) != 0 )
  {
    v28 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v29 = a2->PnPDeviceState == NdisPnPDeviceStarted;
    a2->MiniportThread = KeGetCurrentThread();
    if ( v29 )
    {
      Blink = a2->OpenFileHandles.Blink;
      v31 = (_LIST_ENTRY *)(v3 + 9);
      if ( Blink->Flink != &a2->OpenFileHandles )
        __fastfail(3u);
      v31->Flink = &a2->OpenFileHandles;
      v3[10] = Blink;
      Blink->Flink = v31;
      a2->OpenFileHandles.Blink = v31;
    }
    else
    {
      v17 = -1073676282;
    }
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v28);
LABEL_55:
    if ( v17 < 0 )
      goto LABEL_56;
  }
LABEL_66:
  a3->IoStatus.Status = v17;
  IofCompleteRequest(a3, 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v39,
      (char)a3,
      v17);
  return (unsigned int)v17;
}
