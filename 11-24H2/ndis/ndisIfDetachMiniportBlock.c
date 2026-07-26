/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x140072670
 * Callers:
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140166B00 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 * Callees:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisIfDetachMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rsi
  KIRQL v3; // al
  KIRQL v4; // al
  KIRQL v5; // bl
  struct NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // rcx
  KIRQL v7; // bl
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  IfBlock = a1->IfBlock;
  memset(&Event, 0, sizeof(Event));
  v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  IfBlock->MiniportAvailable = 0;
  a1->IfBlockAvailable = 0;
  KeReleaseSpinLock(&SpinLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a1->IfBlockPointerRefZeroEvent = &Event;
  ndisMDereferenceIfBlock(a1, 0xFFu);
  ndisWaitForKernelObject(&Event);
  a1->IfBlockPointerRefZeroEvent = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  a1->IfBlock = 0LL;
  v5 = v4;
  MpRefCountTracker = IfBlock->MpRefCountTracker;
  IfBlock->Miniport = 0LL;
  NdisFreeRefCount(MpRefCountTracker);
  IfBlock->MpRefCountTracker = 0LL;
  KeReleaseSpinLock(&SpinLock, v5);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  IFBLOCK_DECREMENT_REF(IfBlock, IFREF_MINIPORT);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v7);
}
