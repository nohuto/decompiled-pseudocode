/*
 * XREFs of ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x14005AAB0
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140053740 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(
        struct _NDIS_IF_BLOCK *a1,
        unsigned __int8 *a2,
        int a3,
        int a4)
{
  __int64 Pool2; // rax
  struct _NDIS_WORK_ITEM *v9; // rbx
  KIRQL v10; // di

  Pool2 = ExAllocatePool2(64LL, 104LL, 1769423950);
  v9 = (struct _NDIS_WORK_ITEM *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 80) = a1;
  *(_QWORD *)(Pool2 + 8) = ndisNsiQueuedIfBlockRodChangeNotification;
  *(_QWORD *)(Pool2 + 88) = a2;
  *(_DWORD *)(Pool2 + 96) = a3;
  *(_DWORD *)(Pool2 + 100) = a4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->RefCountTracker, 0xAu);
  ++a1->Ref;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
  ndisScheduleWorkItemInternal(v9);
  return 0LL;
}
