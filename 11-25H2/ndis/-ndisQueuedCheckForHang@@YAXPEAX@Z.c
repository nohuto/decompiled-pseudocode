/*
 * XREFs of ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14003CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003D0B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIsOidTimedOut @ 0x14003DD40 (ndisMIsOidTimedOut.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x14003DEF0 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C250 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // di
  unsigned __int8 v3; // bp
  unsigned int v4; // esi
  KIRQL v5; // si
  bool v6; // sf
  KIRQL v7; // si

  v2 = 1;
  if ( !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync(a1, 1LL, 49LL, 0LL, 0) )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v7 = KfRaiseIrql(2u);
      v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
      if ( v7 != 2 )
        KeLowerIrql(v7);
    }
    else
    {
      v3 = ndisMInvokeCheckForHang(a1);
    }
    v4 = v3 != 0 ? 2 : 0;
    if ( a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 49);
    if ( !v3 )
    {
      if ( !(unsigned __int8)ndisMIsOidTimedOut((char)a1) )
        goto LABEL_8;
      v4 = 1;
    }
    ndisMResetMiniportInternal(a1, v4);
  }
  else
  {
    v2 = 0;
  }
LABEL_8:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v6 = (a1->Flags & 0x80000000) != 0;
    a1->MiniportThread = KeGetCurrentThread();
    if ( !v6 && (a1->PnPFlags & 0x20080000) == 0 )
      ndisSetWakeUpTimer(a1);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
  }
  ndisDereferenceMiniport(a1, 0x53u);
}
