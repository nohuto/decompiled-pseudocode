/*
 * XREFs of ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x1400461F0 (-NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r14
  unsigned int v4; // r13d
  KIRQL v8; // r12
  KSPIN_LOCK *v9; // rcx
  char v10; // si
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  KIRQL v14; // al
  struct _NET_BUFFER_LIST *NblInNblChain; // rax
  KSPIN_LOCK *v16; // rcx

  v3 = 0;
  v4 = 0;
  if ( !a1[556] )
    goto LABEL_2;
  for ( i = a2; i; ++v4 )
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54LL, a2, 0) )
  {
    v3 = 1;
LABEL_2:
    if ( *((int *)a1 + 468) < 0 && ndisNoPauseOnSuspend )
    {
      v8 = 0;
      v9 = a1 + 484;
      if ( (a3 & 1) != 0 )
      {
        v10 = 1;
        KeAcquireSpinLockAtDpcLevel(v9);
      }
      else
      {
        v10 = 0;
        v8 = KeAcquireSpinLockRaiseToDpc(v9);
      }
      if ( (unsigned int)(*((_DWORD *)a1 + 970) - 2) > 2 || *((_BYTE *)a1 + 3900) )
      {
        ++*((_DWORD *)a1 + 974);
        v11 = a1 + 484;
        if ( v10 )
          KeReleaseSpinLockFromDpcLevel(v11);
        else
          KeReleaseSpinLock(v11, v8);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
        v12 = a1 + 484;
        if ( v10 )
        {
          KeAcquireSpinLockAtDpcLevel(v12);
          --*((_DWORD *)a1 + 974);
          KeReleaseSpinLockFromDpcLevel(a1 + 484);
        }
        else
        {
          v14 = KeAcquireSpinLockRaiseToDpc(v12);
          --*((_DWORD *)a1 + 974);
          KeReleaseSpinLock(a1 + 484, v14);
        }
      }
      else
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[488], 1u, 1u);
        NblInNblChain = NdisLastNblInNblChain(a2);
        v16 = a1 + 484;
        NblInNblChain->Link.Alignment = a1[486];
        a1[486] = a2;
        if ( v10 )
          KeReleaseSpinLockFromDpcLevel(v16);
        else
          KeReleaseSpinLock(v16, v8);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
    }
    if ( v3 )
      ndisClearBusy(a1, v4, 54LL);
  }
}
