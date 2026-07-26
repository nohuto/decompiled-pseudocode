/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14009A4E0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400DA1A0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisMCoSendComplete @ 0x14008DE60 (NdisMCoSendComplete.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D9F74 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1270 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  _X_FILTER *EthDB; // rbx
  int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  struct _NDIS_PACKET **v11; // rcx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  struct _NDIS_PACKET *v13; // r10
  PNDIS_PACKET v14; // r10
  _MDL *Head; // rcx
  PVOID MappedSystemVa; // rax
  __int64 v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // rcx
  unsigned __int8 Priority; // [rsp+28h] [rbp-60h]
  _MDL *v20; // [rsp+30h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v21; // [rsp+38h] [rbp-50h] BYREF
  struct _NDIS_PACKET **v22; // [rsp+40h] [rbp-48h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  struct _LOCK_STATE_EX LockState; // [rsp+A0h] [rbp+18h] BYREF
  PNDIS_PACKET Packet; // [rsp+A8h] [rbp+20h]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v21 = 0LL;
  EthDB = v3->EthDB;
  NdisAcquireRWLockRead(EthDB->BindListLock, &LockState, 0);
  v8 = 0;
  v9 = 0;
  v23 = 0;
  v10 = 0;
  if ( !a3 )
    goto LABEL_20;
  v11 = a2;
  v22 = a2;
  do
  {
    v12 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
    v13 = *v11;
    Packet = *v11;
    if ( v12->PmodeOpens )
    {
      ndisCoIndicatePromiscPacket(a1, v12, v3->OpenQueue, v13, 0, Priority);
      v13 = Packet;
    }
    ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v13, &v21);
    if ( (v3->SendFlags & 2) == 0 )
    {
      Head = v14->Private.Head;
      v8 = 0;
      while ( 1 )
      {
        v20 = Head;
        if ( !Head )
          break;
        if ( (Head->MdlFlags & 5) != 0 )
        {
          MappedSystemVa = Head->MappedSystemVa;
        }
        else
        {
          MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
          Head = v20;
        }
        if ( !MappedSystemVa )
        {
          v14 = Packet;
          v8 = -1073741670;
          goto LABEL_14;
        }
        Head = Head->Next;
      }
      v14 = Packet;
LABEL_24:
      if ( (v3->Flags & 0x40) != 0 )
      {
        v18 = v21;
        *(_QWORD *)v21 = a1[10];
        *((_QWORD *)v18 + 1) = a1;
        ndisMAllocSGList(v3, v14);
      }
      else
      {
        ++v9;
      }
      v17 = v23;
      goto LABEL_17;
    }
    if ( !v8 )
      goto LABEL_24;
LABEL_14:
    NdisMCoSendComplete(-1073741670, a1, v14);
    if ( v9 )
    {
      ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v23], v9);
      v9 = 0;
    }
    v17 = v10 + 1;
    v23 = v10 + 1;
LABEL_17:
    ++v10;
    v11 = ++v22;
  }
  while ( v10 < a3 );
  if ( v9 )
    ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v17], v9);
LABEL_20:
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
}
