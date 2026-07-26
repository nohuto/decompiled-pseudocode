/*
 * XREFs of NdisCmCloseAddressFamilyComplete @ 0x14005B4D0
 * Callers:
 *     NdisClCloseAddressFamily @ 0x140088440 (NdisClCloseAddressFamily.c)
 * Callees:
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F380 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140053640 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmCloseAddressFamilyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rdx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rcx
  _QWORD *i; // rcx

  v4 = *((_QWORD *)NdisAfHandle + 47);
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 13))(Status, v4);
  else
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 32))(Status, v4);
  if ( !Status )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisAfHandle + 2);
    v6 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
    v5->MiniportThread = KeGetCurrentThread();
    v7 = *((_QWORD *)NdisAfHandle + 5);
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 376));
      ndisMDereferenceOpenLocked(*((struct _NDIS_OPEN_BLOCK **)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniportRef(v5, 0x51u);
    }
    for ( i = (_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 1024LL); *i; i = (_QWORD *)*i )
    {
      if ( (NDIS_HANDLE)*i == NdisAfHandle )
      {
        *i = *(_QWORD *)NdisAfHandle;
        break;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)NdisAfHandle + 46) + 376LL));
    ndisMDereferenceOpenLocked(*((struct _NDIS_OPEN_BLOCK **)NdisAfHandle + 46), 0xFu);
    v5->MiniportThread = 0LL;
    KeReleaseSpinLock(&v5->Lock, v6);
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
  }
}
