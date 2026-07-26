/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2CB0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D2B60 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D2934 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r13
  struct _NDIS_RW_LOCK_EX *BindListLock; // rsi
  _QWORD *v6; // rbx
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  struct _NDIS_PACKET **v10; // rbx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  struct _NDIS_PACKET *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  _MDL *Head; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _NDIS_PACKET **v20; // [rsp+30h] [rbp-58h]
  _X_FILTER *EthDB; // [rsp+38h] [rbp-50h]
  KIRQL v22; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  EthDB = v3->EthDB;
  BindListLock = EthDB->BindListLock;
  v22 = KfRaiseIrql(2u);
  v6 = (_QWORD *)(*((_QWORD *)BindListLock + 4) + (KeGetPcr()->Prcb.Number << 12));
  ++*v6;
  _InterlockedOr(v19, 0);
  if ( *((_QWORD *)BindListLock + 2) && *v6 <= 1uLL && *((struct _KTHREAD **)BindListLock + 3) != KeGetCurrentThread() )
  {
    *v6 = 0LL;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)BindListLock + 2);
    *v6 = 1LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)BindListLock + 2);
  }
  v7 = 0;
  v8 = 0;
  v25 = 0;
  v9 = 0;
  if ( a3 )
  {
    v10 = a2;
    v20 = a2;
    while ( 1 )
    {
      v11 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
      v12 = *v10;
      if ( v11->PmodeOpens )
        ndisCoIndicatePromiscPacket(a1, v11, v3->OpenQueue, *v10, 0);
      v13 = (unsigned int)++*(_DWORD *)&v12[-1].ProtocolReserved[4];
      if ( (unsigned int)v13 >= ndisPacketStackSize )
        v14 = 16LL;
      else
        v14 = (__int64)v12 + 48 * (v13 - ndisPacketStackSize);
      if ( (v3->SendFlags & 2) != 0 )
      {
        if ( v7 )
          goto LABEL_24;
      }
      else
      {
        Head = v12->Private.Head;
        v7 = 0;
        if ( Head )
        {
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_19;
          }
          v10 = v20;
          v7 = -1073741670;
LABEL_24:
          ((void (__fastcall *)(__int64, _QWORD *, struct _NDIS_PACKET *))a1[34])(3221225626LL, a1, v12);
          if ( v9 )
          {
            ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v25], v9);
            v9 = 0;
          }
          v17 = ++v8;
          v25 = v8;
          goto LABEL_27;
        }
LABEL_19:
        v10 = v20;
      }
      if ( (v3->Flags & 0x40) != 0 )
      {
        *(_QWORD *)v14 = a1[10];
        *(_QWORD *)(v14 + 8) = a1;
        ndisMAllocSGList(v3, v12);
        v17 = v25;
      }
      else
      {
        v17 = v25;
        ++v9;
      }
      ++v8;
LABEL_27:
      v20 = ++v10;
      if ( v8 >= a3 )
      {
        if ( v9 )
          ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v17], v9);
        break;
      }
    }
  }
  v18 = (_QWORD *)(*((_QWORD *)EthDB->BindListLock + 4) + (KeGetPcr()->Prcb.Number << 12));
  --*v18;
  if ( v22 != 2 )
    KeLowerIrql(v22);
}
