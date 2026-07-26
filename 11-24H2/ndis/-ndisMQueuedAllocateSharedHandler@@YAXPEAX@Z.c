/*
 * XREFs of ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x140092560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     NdisMAllocateSharedMemory @ 0x140077540 (NdisMAllocateSharedMemory.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMQueuedAllocateSharedHandler(char *P)
{
  char v1; // bp
  __int64 v2; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  void (__fastcall *v5)(void *, _QWORD, char *, _QWORD, _QWORD); // rsi
  char *v6; // r14
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  v1 = 0;
  v2 = *((_QWORD *)P + 4);
  if ( *(_BYTE *)v2 == 17 )
  {
    v1 = 1;
    v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 4);
    if ( *(_BYTE *)(v2 + 32) < 6u )
    {
      v5 = *(void (__fastcall **)(void *, _QWORD, char *, _QWORD, _QWORD))(*(_QWORD *)(v2 + 3760) + 240LL);
      goto LABEL_7;
    }
    v2 = *(_QWORD *)(v2 + 504);
  }
  else
  {
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v2 + 8);
  }
  v5 = *(void (__fastcall **)(void *, _QWORD, char *, _QWORD, _QWORD))(v2 + 56);
LABEL_7:
  v6 = P + 64;
  NdisMAllocateSharedMemory(v4, *((_DWORD *)P + 10), P[44], (PVOID *)P + 6, (PNDIS_PHYSICAL_ADDRESS)P + 8);
  if ( v1 )
  {
    if ( (v4->Flags & 0x40000) != 0 )
      NewIrql = KfRaiseIrql(2u);
    else
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
  }
  v5(v4->MiniportAdapterContext, *((_QWORD *)P + 6), v6, *((unsigned int *)P + 10), *((_QWORD *)P + 7));
  if ( v1 )
  {
    if ( (v4->Flags & 0x40000) != 0 )
    {
      KeLowerIrql(NewIrql);
    }
    else
    {
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, NewIrql);
    }
  }
  ndisDereferenceDmaAdapter(v4->MiniportSGDmaBlock);
  ndisDereferenceMiniport(v4, 0x41u);
  ExFreePoolWithTag(P, 0);
}
