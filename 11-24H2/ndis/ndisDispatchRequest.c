/*
 * XREFs of ndisDispatchRequest @ 0x14002CA40
 * Callers:
 *     ndisDriverDispatch @ 0x14002D8E0 (ndisDriverDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x140006710 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14002C0A0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140037220 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x14003BD90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x140073DE0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ndisDriverSystemDispatch @ 0x1400A2E28 (ndisDriverSystemDispatch.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r13d
  _OWORD *Pool2; // rax
  _BYTE *v7; // rdi
  void *v8; // r8
  _QWORD *v9; // r14
  __int64 v10; // rbx
  char v11; // si
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *v13; // rbp
  KIRQL v14; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  KIRQL v16; // r12
  void *v17; // rcx
  __int64 v18; // rbx
  char v19; // si
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *v21; // rbp
  KIRQL v22; // al
  _NDIS_MINIPORT_BLOCK *v23; // rdi
  KIRQL v24; // r14
  KIRQL v25; // al
  __int64 v26; // rdi
  KIRQL v27; // al
  KIRQL v28; // si
  _QWORD **v29; // rdx
  void **v30; // rcx
  int v31; // edx
  __int64 v32; // rcx
  KIRQL v33; // al
  __int64 v34; // rdi
  KIRQL v35; // bp
  int v36; // eax
  bool v37; // r14
  unsigned __int8 v38; // r8
  __int64 v39; // rdx
  unsigned __int8 v40; // cl
  char v41; // cl
  unsigned __int8 v42; // cl
  char v43; // r9
  __int64 v44; // rax
  unsigned __int8 v45; // dl
  __int16 v46; // r8
  __int64 v47; // rax
  void (__fastcall *v48)(_QWORD, _QWORD); // r8
  char v49; // al
  _FILE_OBJECT *FileObject; // rax
  void *FsContext; // rcx
  unsigned int v52; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0u:
      Pool2 = (_OWORD *)ExAllocatePool2(64LL, 64LL, 1668236366LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ndisSecurityDescriptor;
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        *(_BYTE *)Pool2 = ndisCheckAccess(a2, CurrentStackLocation, v8);
        v7[1] = ndisCheckAccess(a2, CurrentStackLocation, &unk_1400FB8C0);
        v7[2] = ndisCheckAccess(a2, CurrentStackLocation, &unk_14011C8C0);
        CurrentStackLocation->FileObject->FsContext = v7;
        _InterlockedIncrement(&dword_14011CF30);
      }
      else
      {
        v4 = -1073741670;
      }
      goto LABEL_101;
    case 2u:
      FileObject = CurrentStackLocation->FileObject;
      FsContext = FileObject->FsContext;
      FileObject->FsContext = 0LL;
      if ( FsContext )
        ExFreePoolWithTag(FsContext, 0);
      _InterlockedDecrement(&dword_14011CF30);
      goto LABEL_101;
    case 0xEu:
      v52 = ndisHandlePnPRequest(a2);
      goto LABEL_98;
    case 0xFu:
      goto LABEL_101;
    case 0x12u:
      v9 = CurrentStackLocation->FileObject->FsContext;
      v10 = v9[4];
      if ( !*((_DWORD *)v9 + 6) || !v10 )
        goto LABEL_21;
      v11 = 0;
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v13 = ndisMiniDriverList;
      break;
    case 0x17u:
      v52 = ndisDriverSystemDispatch(a1, a2);
LABEL_98:
      v4 = v52;
      if ( v52 != 259 )
        goto LABEL_101;
      goto LABEL_102;
    default:
      v4 = -1073741822;
      goto LABEL_101;
  }
  while ( 2 )
  {
    if ( v13 )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
      v14 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
      MiniportQueue = v13->MiniportQueue;
      v16 = v14;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v10 )
        {
          v11 = 1;
          if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, 3u) )
            goto LABEL_39;
          if ( (*(_DWORD *)(v10 + 120) & 0x80200020) != 0 )
          {
            KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
            v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            goto LABEL_20;
          }
          if ( (*(_DWORD *)(v10 + 124) & 0x1084110) == 0
            && *(_DWORD *)(v10 + 1520) == 1
            && *(_DWORD *)(v10 + 3868) == 1
            && (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, 3u) )
          {
LABEL_39:
            KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
            v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
            v26 = *(_QWORD *)(v10 + 4456);
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26);
            v28 = v27;
            if ( v9[4] )
            {
              v29 = (_QWORD **)v9[1];
              if ( v29[1] != v9 + 1 || (v30 = (void **)v9[2], *v30 != v9 + 1) )
                __fastfail(3u);
              *v30 = v29;
              v29[1] = v30;
              --*(_DWORD *)(v26 + 24);
              if ( *((int *)v9 + 7) > 0 )
              {
                ndisAoAcActiveRefSubtract(v26, *((unsigned int *)v9 + 6));
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qDL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v31,
                    0xEu,
                    0x28u,
                    (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
                    v10,
                    *((_DWORD *)v9 + 6),
                    *(_DWORD *)(v26 + 52));
                if ( (byte_14011B103 & 4) != 0 )
                  McTemplateK0xqqq_EtwWriteTransfer(
                    v32,
                    &NicActiveReleased,
                    v10 + 4008,
                    *(_QWORD *)(v10 + 4024),
                    *((_DWORD *)v9 + 6),
                    0,
                    *(_DWORD *)(v26 + 52));
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v26, v28);
              ndisNicQuietCheckRef((struct _NDIS_MINIPORT_BLOCK *)v10);
              ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, 3u);
            }
            else
            {
              KeReleaseSpinLock((PKSPIN_LOCK)v26, v27);
              ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, 3u);
            }
            goto LABEL_21;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v11 );
      KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v13 = v13->NextDriver;
      if ( !v11 )
        continue;
    }
    break;
  }
LABEL_20:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
LABEL_21:
  v17 = (void *)v9[6];
  if ( v17 )
  {
    ndisIfDereferenceCompartmentForUser(v17);
    v9[6] = 0LL;
  }
  v18 = v9[4];
  if ( !v18 )
    goto LABEL_101;
  v19 = 0;
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v21 = ndisMiniDriverList;
LABEL_25:
  if ( !v21 )
  {
LABEL_51:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
    goto LABEL_101;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
  v22 = KeAcquireSpinLockRaiseToDpc(&v21->Ref.SpinLock);
  v23 = v21->MiniportQueue;
  v24 = v22;
  while ( 1 )
  {
    if ( !v23 )
    {
LABEL_36:
      KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
      v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v21 = v21->NextDriver;
      if ( !v19 )
        goto LABEL_25;
      goto LABEL_51;
    }
    if ( v23 == (_NDIS_MINIPORT_BLOCK *)v18 )
    {
      v19 = 1;
      if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, 3u) )
        break;
      if ( (*(_DWORD *)(v18 + 120) & 0x80200020) != 0 )
      {
        KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
        v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        goto LABEL_51;
      }
      if ( (*(_DWORD *)(v18 + 124) & 0x1084110) == 0
        && *(_DWORD *)(v18 + 1520) == 1
        && *(_DWORD *)(v18 + 3868) == 1
        && (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, 3u) )
      {
        break;
      }
    }
    v23 = v23->NextMiniport;
    if ( v19 )
      goto LABEL_36;
  }
  KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
  if ( (*(_DWORD *)(v18 + 120) & 0x80u) == 0 || (*(_DWORD *)(v18 + 120) & 0x100) != 0 )
    goto LABEL_92;
  v34 = **(_QWORD **)(v18 + 6088);
  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 1000));
  *(_BYTE *)(v34 + 1009) = v35;
  v36 = *(_DWORD *)(v34 + 992);
  if ( v36 != 5 )
  {
    v37 = v36 == 1;
LABEL_61:
    switch ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 18LL) )
    {
      case 1:
        v44 = *(unsigned __int8 *)(v34 + 979);
        v41 = (v44 + 1) & 0xF;
        if ( v41 == *(_BYTE *)(v34 + 978) )
          goto LABEL_89;
        break;
      case 2:
        v42 = *(_BYTE *)(v34 + 978);
        v43 = 0;
        LOBYTE(v44) = *(_BYTE *)(v34 + 979);
        v45 = v42;
        if ( v42 != (_BYTE)v44 )
        {
          do
          {
            v46 = *(_WORD *)(v34 + 2LL * v42 + 832);
            if ( v46 == 4 )
            {
              v43 = 1;
            }
            else
            {
              v47 = v45;
              v45 = (v45 + 1) & 0xF;
              *(_WORD *)(v34 + 2 * v47 + 832) = v46;
            }
            LOBYTE(v44) = *(_BYTE *)(v34 + 979);
            v42 = (v42 + 1) & 0xF;
          }
          while ( v42 != (_BYTE)v44 );
          if ( v43 )
          {
            *(_WORD *)(v34 + 2LL * (((_BYTE)v44 - 1) & 0xF) + 832) = 4;
            goto LABEL_77;
          }
        }
        v41 = (v44 + 1) & 0xF;
        if ( v41 == *(_BYTE *)(v34 + 978) )
          goto LABEL_89;
        v44 = (unsigned __int8)v44;
        break;
      case 3:
        v38 = *(_BYTE *)(v34 + 978);
        v39 = *(unsigned __int8 *)(v34 + 979);
        v40 = v38;
        if ( v38 != (_BYTE)v39 )
        {
          while ( *(_WORD *)(v34 + 2LL * v40 + 832) != 4 )
          {
            v40 = (v40 + 1) & 0xF;
            if ( v40 == (_BYTE)v39 )
              goto LABEL_68;
          }
          goto LABEL_77;
        }
LABEL_68:
        v41 = (v39 + 1) & 0xF;
        if ( v41 != v38 )
        {
          *(_WORD *)(v34 + 2 * v39 + 832) = 4;
LABEL_81:
          v48 = *(void (__fastcall **)(_QWORD, _QWORD))(v34 + 928);
          *(_BYTE *)(v34 + 979) = v41;
          if ( v48 )
            v48(*(_QWORD *)(v34 + 896), *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 16LL));
          v49 = 1;
          goto LABEL_84;
        }
LABEL_89:
        SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
          (SmFx::StateMachineEngine::StateMachineEngineImpl *)v34,
          RequiresDedicatedThread,
          4u,
          0);
        v49 = 0;
LABEL_84:
        if ( !v49 )
          goto LABEL_92;
        if ( v37 )
          goto LABEL_86;
LABEL_77:
        KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 1000), *(_BYTE *)(v34 + 1009));
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, 3u);
        goto LABEL_101;
      default:
        KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 1000), v35);
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, 3u);
        goto LABEL_101;
    }
    *(_WORD *)(v34 + 2 * v44 + 832) = 4;
    goto LABEL_81;
  }
  if ( *(_WORD *)(v34 + 880) != 4 )
  {
    v37 = 0;
    goto LABEL_61;
  }
  if ( *(_QWORD *)(v34 + 928) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 928))(
      *(_QWORD *)(v34 + 896),
      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 16LL));
  *(_WORD *)(v34 + 880) = 0;
LABEL_86:
  *(_BYTE *)(v34 + 983) = v35;
  *(_BYTE *)(v34 + 982) = 0;
  if ( v35 >= 2u )
    *(_DWORD *)(v34 + 984) = KeGetPcr()->Prcb.Number;
  else
    *(_QWORD *)(v34 + 984) = KeGetCurrentThread();
  SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue((SmFx::StateMachineEngine::StateMachineEngineImpl *)v34);
LABEL_92:
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, 3u);
LABEL_101:
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 2);
LABEL_102:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
