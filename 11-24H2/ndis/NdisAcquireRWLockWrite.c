/*
 * XREFs of NdisAcquireRWLockWrite @ 0x14003FD30
 * Callers:
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14003F1E0 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003F4C0 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003FB00 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x14005B860 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008D3A0 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C2570 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ndisUnloadPeriodicReceives @ 0x14018DAAC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockWrite(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  struct _KTHREAD *CurrentThread; // rsi
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Lock + 3) == CurrentThread )
  {
    LockState->LockState = 2;
  }
  else
  {
    v6 = (KSPIN_LOCK *)((char *)Lock + 16);
    if ( (Flags & 1) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel(v6);
      v7 = 2;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    LockState->OldIrql = v7;
    v8 = (_QWORD *)*((_QWORD *)Lock + 4);
    v9 = v8;
    v10 = &v8[512 * ndisMaxNumberOfProcessors];
    if ( v8 != v10 )
    {
      do
      {
        if ( *v9 && v9 != (_QWORD *)((char *)v8 + (KeGetPcr()->Prcb.Number << 12)) && *v9 )
        {
          do
            _mm_pause();
          while ( *v9 );
        }
        v9 += 512;
      }
      while ( v9 != v10 );
    }
    *((_QWORD *)Lock + 3) = CurrentThread;
    LockState->LockState = 4;
  }
}
