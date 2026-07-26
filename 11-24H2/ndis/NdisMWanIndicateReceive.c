/*
 * XREFs of NdisMWanIndicateReceive @ 0x1400A0270
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NdisMWanIndicateReceive(
        _DWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  _NDIS_OPEN_BLOCK *i; // rdi
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
  for ( i = a2->OpenQueue; ; i = i->MiniportNextOpen )
  {
    a2->MiniportThread = 0LL;
    p_Lock = &a2->Lock;
    if ( !i )
      break;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    *a1 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))i->ProtocolHandle->_NDIS_COMMON_OPEN_BLOCK::ReceiveHandler)(
            a3,
            a4,
            a5);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a2);
  }
  KeReleaseSpinLock(p_Lock, NewIrql);
}
