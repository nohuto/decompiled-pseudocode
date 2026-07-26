/*
 * XREFs of ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009CB74
 * Callers:
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1401383D0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __fastcall ndisMFlushInterfaceChanges(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  KIRQL v5; // dl
  KIRQL NewIrql[16]; // [rsp+20h] [rbp-69h] BYREF
  struct _NDIS_STATUS_INDICATION v7; // [rsp+30h] [rbp-59h] BYREF
  __int128 v8; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v9; // [rsp+B0h] [rbp+27h]
  int v10; // [rsp+C0h] [rbp+37h]

  while ( 1 )
  {
    NewIrql[0] = 0;
    v10 = 0;
    v2 = 0;
    v8 = 0LL;
    v9 = 0LL;
    memset(&v7, 0, sizeof(v7));
    v7.StatusCode = 0;
    v7.StatusBuffer = 0LL;
    v7.StatusBufferSize = 0;
    v7.SourceHandle = (void *)0x140000000LL;
    v7.Header = (_NDIS_OBJECT_HEADER)7340440;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    if ( a1->MacAddressUpdateQueued )
    {
      v3 = *(_OWORD *)&a1->PendingMacAddress.Length;
      LOWORD(v10) = *(_WORD *)&a1->PendingMacAddress.Address[30];
      v4 = *(_OWORD *)&a1->PendingMacAddress.Address[14];
      a1->MacAddressUpdateQueued = 0;
      v2 = 32;
      v7.StatusBuffer = &v8;
      v7.StatusCode = 1073873072;
      v8 = v3;
      v7.StatusBufferSize = 34;
      v9 = v4;
    }
    else if ( a1->MtuUpdateQueued )
    {
      a1->MtuUpdateQueued = 0;
      v2 = 64;
      LODWORD(v8) = a1->PendingMtuSize;
      v7.StatusCode = 1073873073;
      v7.StatusBuffer = &a1->PendingMtuSize;
      v7.StatusBufferSize = 4;
    }
    else
    {
      a1->InterfaceUpdateInProgress = 0;
    }
    v5 = NewIrql[0];
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    if ( !v7.StatusCode )
      break;
    ndisMApplyInterfaceChange(a1, v2, &v7);
  }
}
