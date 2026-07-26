/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x14005A060
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x14005A8E0 (NdisCmOpenAddressFamilyComplete.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  _NDIS_OPEN_BLOCK *Open; // rbp
  char v6; // r13
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdx
  _NDIS_AF_LIST *CallMgrAfList; // r12
  __int64 Pool2; // rax
  KIRQL v12; // dl
  KSPIN_LOCK *p_Lock; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  KIRQL v26; // al
  int (__fastcall *CmOpenAfHandler)(void *, CO_ADDRESS_FAMILY *, void *, void **); // rax
  void *ProtocolBindingContext; // rcx
  NDIS_STATUS v29; // eax
  NDIS_STATUS v30; // r12d
  __int64 v31; // rdx
  KIRQL v32; // dl
  __int64 v34; // rdx
  __int64 v35; // rdx
  KIRQL v36; // dl
  KIRQL v37; // dl
  char v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  unsigned __int8 v40; // [rsp+90h] [rbp+8h] BYREF
  PCO_ADDRESS_FAMILY v41; // [rsp+98h] [rbp+10h]
  NDIS_HANDLE v42; // [rsp+A0h] [rbp+18h]
  char v43; // [rsp+A8h] [rbp+20h]

  v42 = ClientAfContext;
  v41 = AddressFamily;
  Open = 0LL;
  v6 = 0;
  *NdisAfHandle = 0LL;
  v7 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v8 = *((_QWORD *)NdisBindingHandle + 3);
  v43 = 0;
  v38 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) == 0 )
  {
    LOBYTE(v9) = 15;
    ndisMReferenceOpen(NdisBindingHandle, v9);
    _InterlockedIncrement((volatile signed __int32 *)NdisBindingHandle + 94);
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v40);
    if ( v7->MajorNdisVersion >= 5u
      && (v7->Flags & 0x20000) != 0
      && *(_BYTE *)(v8 + 56) >= 6u
      && (v39 = v8 + 472, *(_BYTE *)(v8 + 472) == 0xA6) )
    {
      v40 = KeAcquireSpinLockRaiseToDpc(&v7->Lock);
      CallMgrAfList = v7->CallMgrAfList;
      v7->MiniportThread = KeGetCurrentThread();
      while ( 1 )
      {
        if ( !CallMgrAfList )
        {
          v7->MiniportThread = 0LL;
          goto LABEL_23;
        }
        if ( CallMgrAfList->AddressFamily.AddressFamily == v41->AddressFamily )
          break;
        CallMgrAfList = CallMgrAfList->NextAf;
      }
      Open = CallMgrAfList->Open;
      if ( !Open )
      {
        if ( (v7->PnPFlags & 0x4000) == 0 )
        {
          ndisReferenceMiniportNoCheck(v7, 0x51u);
          v38 = 1;
          goto LABEL_12;
        }
        v7->MiniportThread = 0LL;
LABEL_23:
        KeReleaseSpinLock(&v7->Lock, v40);
        v30 = -1073741823;
        goto LABEL_24;
      }
      KeAcquireSpinLockAtDpcLevel(&Open->SpinLock);
      if ( (Open->OpenFlags & 0x18000) == 0 )
      {
        LOBYTE(v34) = 16;
        ndisMReferenceOpen(Open, v34);
        _InterlockedIncrement(&Open->AfReferences);
        v43 = 1;
        KeReleaseSpinLockFromDpcLevel(&Open->SpinLock);
LABEL_12:
        Pool2 = ExAllocatePool2(64LL, 600LL, 1868776526);
        v12 = v40;
        p_Lock = &v7->Lock;
        v14 = Pool2;
        if ( Pool2 )
        {
          Open = CallMgrAfList->Open;
          *(_DWORD *)(Pool2 + 12) = 1;
          *(_QWORD *)(Pool2 + 16) = v7;
          *(_QWORD *)(Pool2 + 368) = NdisBindingHandle;
          *(_QWORD *)(Pool2 + 40) = Open;
          *(_DWORD *)(Pool2 + 8) = Open == 0LL;
          *(_QWORD *)(Pool2 + 376) = v42;
          *(_DWORD *)(Pool2 + 392) = CallMgrAfList->NdisMajorVersion;
          v7->MiniportThread = 0LL;
          *(_DWORD *)(Pool2 + 396) = 6;
          KeReleaseSpinLock(p_Lock, v12);
          KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 384));
          if ( *(_DWORD *)(v14 + 392) >= 6u )
            *(_QWORD *)(v14 + 32) = &CallMgrAfList->CallMgrChars;
          else
            *(_QWORD *)(v14 + 24) = &CallMgrAfList->CmChars;
          v15 = *(_QWORD *)(v39 + 8);
          v16 = *(_OWORD *)(v39 + 16);
          *(_OWORD *)(v14 + 208) = *(_OWORD *)v39;
          v17 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)(v14 + 224) = v16;
          v18 = *(_OWORD *)(v39 + 48);
          *(_OWORD *)(v14 + 240) = v17;
          v19 = *(_OWORD *)(v39 + 64);
          *(_OWORD *)(v14 + 256) = v18;
          v20 = *(_OWORD *)(v39 + 80);
          *(_OWORD *)(v14 + 272) = v19;
          v21 = *(_OWORD *)(v39 + 96);
          *(_OWORD *)(v14 + 288) = v20;
          v22 = *(_OWORD *)(v39 + 128);
          *(_OWORD *)(v14 + 304) = v21;
          *(_OWORD *)(v14 + 320) = *(_OWORD *)(v39 + 112);
          v23 = *(_OWORD *)(v39 + 144);
          *((_QWORD *)NdisBindingHandle + 131) = v15;
          *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v39 + 16);
          v24 = *(_QWORD *)(v39 + 32);
          *(_OWORD *)(v14 + 336) = v22;
          *((_QWORD *)NdisBindingHandle + 144) = v24;
          v25 = *(_QWORD *)(v39 + 24);
          *(_OWORD *)(v14 + 352) = v23;
          *((_QWORD *)NdisBindingHandle + 145) = v25;
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 384));
          *(_DWORD *)(v14 + 8) |= 0x40000000u;
          v40 = v26;
          KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 384), v26);
          if ( CallMgrAfList->NdisMajorVersion >= 6 )
          {
            CmOpenAfHandler = CallMgrAfList->CallMgrChars.CmOpenAfHandler;
            if ( Open )
            {
              ProtocolBindingContext = Open->ProtocolBindingContext;
              goto LABEL_18;
            }
          }
          else
          {
            CmOpenAfHandler = CallMgrAfList->CmChars.CmOpenAfHandler;
            if ( Open )
            {
              ProtocolBindingContext = Open->ProtocolBindingContext;
              goto LABEL_18;
            }
          }
          ProtocolBindingContext = v7->MiniportAdapterContext;
LABEL_18:
          v29 = CmOpenAfHandler(ProtocolBindingContext, (CO_ADDRESS_FAMILY *)v41, (void *)v14, (void **)(v14 + 48));
          v30 = v29;
          if ( v29 != 259 )
          {
            NdisCmOpenAddressFamilyComplete(v29, (NDIS_HANDLE)v14, *(NDIS_HANDLE *)(v14 + 48));
            v30 = 259;
          }
          v43 = 0;
          goto LABEL_21;
        }
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v12);
        v30 = -1073741670;
        MmUnlockPagableImageSection(ImageSectionHandle);
        v6 = v38;
LABEL_25:
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &v40);
        _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
        LOBYTE(v31) = 15;
        ndisMDereferenceOpenLocked(NdisBindingHandle, v31);
        v32 = v40;
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v32);
        goto LABEL_26;
      }
      KeReleaseSpinLockFromDpcLevel(&Open->SpinLock);
      v37 = v40;
      v7->MiniportThread = 0LL;
      KeReleaseSpinLock(&v7->Lock, v37);
      v30 = -1073676286;
    }
    else
    {
      v30 = -1073676284;
    }
LABEL_24:
    MmUnlockPagableImageSection(ImageSectionHandle);
    goto LABEL_25;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v40);
  v30 = -1073676286;
LABEL_21:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
LABEL_26:
  if ( Open && v43 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &v40);
    _InterlockedDecrement(&Open->AfReferences);
    LOBYTE(v35) = 16;
    ndisMDereferenceOpenLocked(Open, v35);
    v36 = v40;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v36);
  }
  if ( v6 )
    ndisDereferenceMiniport(v7, 0x51u);
  return v30;
}
