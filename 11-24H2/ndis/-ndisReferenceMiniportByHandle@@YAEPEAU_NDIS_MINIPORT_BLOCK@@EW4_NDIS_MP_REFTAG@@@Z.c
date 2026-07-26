/*
 * XREFs of ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14003B520
 * Callers:
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B1B0 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003C2E0 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x140153F70 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017F400 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14017F6D0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandle(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  char v4; // si
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // r14
  KIRQL v9; // r15
  KIRQL v10; // bp
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v13; // al
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  KIRQL v15; // bp
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v17; // al
  unsigned __int8 v18; // di
  char v20; // [rsp+68h] [rbp+20h]

  v20 = 0;
  v4 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  while ( v8 )
  {
    if ( !a2 )
      goto LABEL_7;
    v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
    if ( !v8->Ref.Closing )
    {
      ReferenceCount = v8->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->Ref.RefCountTracker;
        v8->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 6u);
        KeReleaseSpinLock(&v8->Ref.SpinLock, v10);
LABEL_7:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
        v13 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
        MiniportQueue = v8->MiniportQueue;
        v15 = v13;
        while ( MiniportQueue )
        {
          if ( MiniportQueue == a1 )
          {
            v4 = 1;
            if ( !a2 && (unsigned __int8)ndisReferenceMiniport(a1, a3) )
            {
              v18 = 1;
              KeReleaseSpinLock(&v8->Ref.SpinLock, v15);
              v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              goto LABEL_26;
            }
            if ( (a1->Flags & 0x80200020) != 0 )
              break;
            if ( (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && (unsigned __int8)ndisReferenceMiniport(a1, a3) )
            {
              v20 = 1;
              break;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
          if ( v4 )
            break;
        }
        KeReleaseSpinLock(&v8->Ref.SpinLock, v15);
        v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v8->NextDriver;
        v9 = v17;
        if ( a2 )
          ndisDereferenceDriver(v8, 1, 6u);
        goto LABEL_24;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    KeReleaseSpinLock(&v8->Ref.SpinLock, v10);
    NextDriver = v8->NextDriver;
LABEL_24:
    v8 = NextDriver;
    if ( v4 )
      break;
  }
  v18 = v20;
LABEL_26:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v18;
}
