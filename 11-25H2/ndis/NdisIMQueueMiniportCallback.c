/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x140096C60
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1400A65D4 (-ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, void *),
        void *a3)
{
  KIRQL v6; // bp
  enum _NDIS_WORK_ITEM_TYPE v7; // edx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // edi

  v6 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
LABEL_5:
    v8 = 0;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_8;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  v9 = ndisMQueueNewWorkItem(a1, v7, a3, (void (*)(void *, void *))a2);
  a1->MiniportThread = 0LL;
  v10 = v9;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v8 = 259;
  if ( v10 )
    v8 = -1073741670;
LABEL_8:
  if ( v6 != 2 )
    KeLowerIrql(v6);
  return v8;
}
