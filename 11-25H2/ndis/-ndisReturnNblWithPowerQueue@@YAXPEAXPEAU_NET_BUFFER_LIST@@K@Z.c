/*
 * XREFs of ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x14005FD30 (-NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // r14
  unsigned int v5; // r13d
  KIRQL v9; // r12
  KSPIN_LOCK *v10; // rcx
  char v11; // si
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // rsi
  int v15; // edi
  KIRQL v16; // al
  KIRQL v17; // bp
  struct _NET_BUFFER_LIST *i; // rax
  KSPIN_LOCK *v19; // rcx
  int v20; // esi
  KIRQL v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  KIRQL v25; // al
  struct _NET_BUFFER_LIST *NblInNblChain; // rax
  KSPIN_LOCK *v27; // rcx
  struct _LIST_ENTRY v28; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1[556];
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    goto LABEL_2;
  for ( i = a2; i; ++v5 )
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  if ( (*((_DWORD *)a1 + 30) & 0x80u) == 0 )
  {
    if ( !(unsigned __int8)ndisWdmSetBusyAsync(a1, v5, 54LL, a2, 0) )
      return;
    goto LABEL_37;
  }
  v19 = (KSPIN_LOCK *)a1[556];
  v28.Blink = &v28;
  v20 = 0;
  v28.Flink = &v28;
  v21 = KeAcquireSpinLockRaiseToDpc(v19);
  if ( (*(_DWORD *)(v3 + 512)
     || *(_DWORD *)(v3 + 516)
     || *(_DWORD *)(v3 + 528)
     || *(_DWORD *)(v3 + 532)
     || *(_DWORD *)(v3 + 520)
     || *(_DWORD *)(v3 + 524)
     || *(_DWORD *)(v3 + 576)
     || *(_DWORD *)(v3 + 508))
    && KeReadStateEvent((PRKEVENT)(v3 + 272)) )
  {
    v22 = *(_QWORD *)(v3 + 600);
    *(_DWORD *)(v3 + 144) = 0;
    *(_BYTE *)(v22 + 20) = 0;
    *(_BYTE *)(*(_QWORD *)(v3 + 600) + 44LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v3 + 600) + 68LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v3 + 600) + 92LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v3 + 600) + 116LL) = 0;
    *(_DWORD *)(v3 + 576) += v5;
    ndisSelectiveSuspendSetResumeBusyReason(v3, 0LL, 54LL, 0LL);
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v21);
LABEL_37:
    v4 = 1;
    goto LABEL_2;
  }
  if ( !*(_DWORD *)(v3 + 512)
    && !*(_DWORD *)(v3 + 516)
    && !*(_DWORD *)(v3 + 528)
    && !*(_DWORD *)(v3 + 532)
    && !*(_DWORD *)(v3 + 520)
    && !*(_DWORD *)(v3 + 524)
    && !*(_DWORD *)(v3 + 576)
    && !*(_DWORD *)(v3 + 508) )
  {
    v4 = 1;
    KeClearEvent((PRKEVENT)(v3 + 272));
    v20 = 54;
  }
  v23 = *(_QWORD *)(v3 + 600);
  *(_DWORD *)(v3 + 144) = 0;
  *(_BYTE *)(v23 + 20) = 0;
  *(_BYTE *)(*(_QWORD *)(v3 + 600) + 44LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v3 + 600) + 68LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v3 + 600) + 92LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v3 + 600) + 116LL) = 0;
  *(_DWORD *)(v3 + 576) += v5;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v21);
  if ( v4 )
    ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 0, 1u);
  if ( v28.Flink != &v28 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v28);
  if ( !v20 || (byte_140125101 & 8) == 0 )
    goto LABEL_37;
  McTemplateK0qq_EtwWriteTransfer(v24, &SSResumeRequested, a1 + 501, (a1[503] >> 24) & 0xFFFFFFLL);
  v4 = 1;
LABEL_2:
  if ( *((int *)a1 + 468) < 0 && ndisNoPauseOnSuspend )
  {
    v9 = 0;
    v10 = a1 + 484;
    if ( (a3 & 1) != 0 )
    {
      v11 = 1;
      KeAcquireSpinLockAtDpcLevel(v10);
    }
    else
    {
      v11 = 0;
      v9 = KeAcquireSpinLockRaiseToDpc(v10);
    }
    if ( (unsigned int)(*((_DWORD *)a1 + 970) - 2) > 2 || *((_BYTE *)a1 + 3900) )
    {
      ++*((_DWORD *)a1 + 974);
      v12 = a1 + 484;
      if ( v11 )
        KeReleaseSpinLockFromDpcLevel(v12);
      else
        KeReleaseSpinLock(v12, v9);
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
      v13 = a1 + 484;
      if ( v11 )
      {
        KeAcquireSpinLockAtDpcLevel(v13);
        --*((_DWORD *)a1 + 974);
        KeReleaseSpinLockFromDpcLevel(a1 + 484);
      }
      else
      {
        v25 = KeAcquireSpinLockRaiseToDpc(v13);
        --*((_DWORD *)a1 + 974);
        KeReleaseSpinLock(a1 + 484, v25);
      }
    }
    else
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[488], 1u, 1u);
      NblInNblChain = NdisLastNblInNblChain(a2);
      v27 = a1 + 484;
      NblInNblChain->Link.Alignment = a1[486];
      a1[486] = a2;
      if ( v11 )
        KeReleaseSpinLockFromDpcLevel(v27);
      else
        KeReleaseSpinLock(v27, v9);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
  }
  if ( v4 )
  {
    v14 = a1[556];
    v15 = *((_DWORD *)a1 + 30);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
    *(_DWORD *)(v14 + 576) -= v5;
    v17 = v16;
    if ( (v15 & 0x80u) != 0
      && !*(_DWORD *)(v14 + 512)
      && !*(_DWORD *)(v14 + 516)
      && !*(_DWORD *)(v14 + 528)
      && !*(_DWORD *)(v14 + 532)
      && !*(_DWORD *)(v14 + 520)
      && !*(_DWORD *)(v14 + 524)
      && !*(_DWORD *)(v14 + 576)
      && !*(_DWORD *)(v14 + 508) )
    {
      if ( (*((_DWORD *)a1 + 30) & 0x80u) == 0 )
        __int2c();
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1[470] + 360LL) + 48LL))(a1[3]);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v14, v17);
  }
}
