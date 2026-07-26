/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x140088D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x14005F930 (NdisCmOpenAddressFamilyComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  struct _NDIS_OPEN_BLOCK *Open; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rbp
  KIRQL v7; // al
  NDIS_STATUS v8; // esi
  KIRQL v9; // bl
  bool v10; // zf
  KIRQL v11; // di
  _NDIS_AF_LIST *CallMgrAfList; // rbx
  __int64 Pool2; // rax
  KSPIN_LOCK *p_Lock; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  KIRQL v26; // al
  int (__fastcall *CmOpenAfHandler)(void *, CO_ADDRESS_FAMILY *, void *, void **); // rax
  void *ProtocolBindingContext; // rcx
  NDIS_STATUS v29; // eax
  KIRQL v30; // al
  KIRQL v31; // bl
  KIRQL v32; // al
  KIRQL v33; // bl
  KIRQL v35; // [rsp+30h] [rbp-58h]
  KIRQL v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  char v39; // [rsp+90h] [rbp+8h]
  char v42; // [rsp+A8h] [rbp+20h]

  Open = 0LL;
  *NdisAfHandle = 0LL;
  v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v37 = *((_QWORD *)NdisBindingHandle + 3);
  v39 = 0;
  v42 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  v35 = v7;
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) == 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 75);
    NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)NdisBindingHandle + 74), 0xFu);
    ++*((_DWORD *)NdisBindingHandle + 57);
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 75, v9);
    _InterlockedIncrement((volatile signed __int32 *)NdisBindingHandle + 94);
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v35);
    if ( v6->MajorNdisVersion < 5u
      || (v6->Flags & 0x20000) == 0
      || *(_BYTE *)(v37 + 56) < 6u
      || (v10 = *(_BYTE *)(v37 + 472) == 0xA6, v38 = v37 + 472, !v10) )
    {
      v8 = -1073676284;
      goto LABEL_35;
    }
    v11 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
    CallMgrAfList = v6->CallMgrAfList;
    v36 = v11;
    v6->MiniportThread = KeGetCurrentThread();
    if ( CallMgrAfList )
    {
      while ( CallMgrAfList->AddressFamily.AddressFamily != AddressFamily->AddressFamily )
      {
        CallMgrAfList = CallMgrAfList->NextAf;
        if ( !CallMgrAfList )
          goto LABEL_10;
      }
      Open = CallMgrAfList->Open;
      if ( Open )
      {
        KeAcquireSpinLockAtDpcLevel(&Open->SpinLock);
        if ( (Open->OpenFlags & 0x18000) != 0 )
        {
          KeReleaseSpinLockFromDpcLevel(&Open->SpinLock);
          v6->MiniportThread = 0LL;
          KeReleaseSpinLock(&v6->Lock, v11);
          v8 = -1073676286;
LABEL_35:
          MmUnlockPagableImageSection(ImageSectionHandle);
          _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
          v30 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
          v6->MiniportThread = KeGetCurrentThread();
          v31 = v30;
          _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
          ndisMDereferenceOpenLocked((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, 0xFu);
          v6->MiniportThread = 0LL;
          KeReleaseSpinLock(&v6->Lock, v31);
          goto LABEL_36;
        }
        ndisMReferenceOpen((__int64)Open, 0x10u);
        _InterlockedIncrement(&Open->AfReferences);
        v39 = 1;
        KeReleaseSpinLockFromDpcLevel(&Open->SpinLock);
LABEL_19:
        Pool2 = ExAllocatePool2(64LL, 600LL, 1868776526LL);
        p_Lock = &v6->Lock;
        v15 = Pool2;
        if ( !Pool2 )
        {
          v6->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v36);
          v8 = -1073741670;
          goto LABEL_35;
        }
        Open = CallMgrAfList->Open;
        *(_DWORD *)(Pool2 + 12) = 1;
        *(_QWORD *)(Pool2 + 16) = v6;
        *(_QWORD *)(Pool2 + 368) = NdisBindingHandle;
        *(_QWORD *)(Pool2 + 40) = Open;
        *(_DWORD *)(Pool2 + 8) = Open == 0LL;
        *(_QWORD *)(Pool2 + 376) = ClientAfContext;
        *(_DWORD *)(Pool2 + 392) = CallMgrAfList->NdisMajorVersion;
        v6->MiniportThread = 0LL;
        *(_DWORD *)(Pool2 + 396) = 6;
        KeReleaseSpinLock(p_Lock, v36);
        KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 384));
        if ( *(_DWORD *)(v15 + 392) >= 6u )
          *(_QWORD *)(v15 + 32) = &CallMgrAfList->CallMgrChars;
        else
          *(_QWORD *)(v15 + 24) = &CallMgrAfList->CmChars;
        v16 = *(_QWORD *)(v38 + 8);
        v17 = *(_OWORD *)(v38 + 16);
        *(_OWORD *)(v15 + 208) = *(_OWORD *)v38;
        v18 = *(_OWORD *)(v38 + 32);
        *(_OWORD *)(v15 + 224) = v17;
        v19 = *(_OWORD *)(v38 + 48);
        *(_OWORD *)(v15 + 240) = v18;
        v20 = *(_OWORD *)(v38 + 64);
        *(_OWORD *)(v15 + 256) = v19;
        v21 = *(_OWORD *)(v38 + 80);
        *(_OWORD *)(v15 + 272) = v20;
        v22 = *(_OWORD *)(v38 + 96);
        *(_OWORD *)(v15 + 288) = v21;
        v23 = *(_OWORD *)(v38 + 128);
        *(_OWORD *)(v15 + 304) = v22;
        *(_OWORD *)(v15 + 320) = *(_OWORD *)(v38 + 112);
        v24 = *(_OWORD *)(v38 + 144);
        *((_QWORD *)NdisBindingHandle + 132) = v16;
        *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v38 + 16);
        *((_QWORD *)NdisBindingHandle + 145) = *(_QWORD *)(v38 + 32);
        v25 = *(_QWORD *)(v38 + 24);
        *(_OWORD *)(v15 + 336) = v23;
        *((_QWORD *)NdisBindingHandle + 146) = v25;
        *(_OWORD *)(v15 + 352) = v24;
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 384));
        *(_DWORD *)(v15 + 8) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 384), v26);
        if ( CallMgrAfList->NdisMajorVersion >= 6 )
        {
          CmOpenAfHandler = CallMgrAfList->CallMgrChars.CmOpenAfHandler;
          if ( Open )
          {
            ProtocolBindingContext = Open->ProtocolBindingContext;
            goto LABEL_30;
          }
        }
        else
        {
          CmOpenAfHandler = CallMgrAfList->CmChars.CmOpenAfHandler;
          if ( Open )
          {
            ProtocolBindingContext = Open->ProtocolBindingContext;
LABEL_30:
            v29 = CmOpenAfHandler(
                    ProtocolBindingContext,
                    (CO_ADDRESS_FAMILY *)AddressFamily,
                    (void *)v15,
                    (void **)(v15 + 48));
            v8 = v29;
            if ( v29 != 259 )
            {
              NdisCmOpenAddressFamilyComplete(v29, (NDIS_HANDLE)v15, *(NDIS_HANDLE *)(v15 + 48));
              v8 = 259;
            }
            v42 = 0;
            v39 = 0;
            goto LABEL_33;
          }
        }
        ProtocolBindingContext = v6->MiniportAdapterContext;
        goto LABEL_30;
      }
      if ( (v6->PnPFlags & 0x4000) == 0 )
      {
        ndisReferenceMiniportNoCheck(v6, 0x51u);
        v42 = 1;
        goto LABEL_19;
      }
      v6->MiniportThread = 0LL;
    }
    else
    {
LABEL_10:
      v6->MiniportThread = 0LL;
    }
    KeReleaseSpinLock(&v6->Lock, v11);
    v8 = -1073741823;
    goto LABEL_35;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v7);
  v8 = -1073676286;
LABEL_33:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
LABEL_36:
  if ( Open && v39 )
  {
    v32 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
    v6->MiniportThread = KeGetCurrentThread();
    v33 = v32;
    _InterlockedDecrement(&Open->AfReferences);
    ndisMDereferenceOpenLocked(Open, 0x10u);
    v6->MiniportThread = 0LL;
    KeReleaseSpinLock(&v6->Lock, v33);
  }
  if ( v42 )
    ndisDereferenceMiniport(v6, 0x51u);
  return v8;
}
