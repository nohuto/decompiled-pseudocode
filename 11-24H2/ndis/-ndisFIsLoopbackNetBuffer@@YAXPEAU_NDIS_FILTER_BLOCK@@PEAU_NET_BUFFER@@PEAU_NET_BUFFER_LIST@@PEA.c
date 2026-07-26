/*
 * XREFs of ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140022210
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x14005BC30 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 */

void __fastcall ndisFIsLoopbackNetBuffer(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        bool *a4,
        unsigned __int8 *a5)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  bool v6; // bl
  _MDL *CurrentMdl; // rcx
  char v8; // bp
  char *MappedSystemVa; // rax
  unsigned __int8 *v13; // r15
  char *v14; // rdi
  _X_FILTER *EthDB; // rcx
  struct _NDIS_RW_LOCK_EX *BindListLock; // rbp
  _QWORD *v17; // rbx
  _X_FILTER *v18; // rsi
  char v19; // al
  unsigned int MiniportPacketFilter; // r14d
  struct _NDIS_RW_LOCK_EX *v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  Miniport = a1->Miniport;
  v6 = 0;
  CurrentMdl = a2->CurrentMdl;
  v8 = 0;
  LockState.Flags = 0;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v13 = a5;
  *a4 = 0;
  *v13 = 0;
  if ( MappedSystemVa )
  {
    v14 = &MappedSystemVa[a2->CurrentMdlOffset];
    if ( Miniport->MediaType == NdisMedium802_3 )
    {
      if ( (Miniport->Flags & 0x800000) != 0 )
      {
        if ( (*v14 & 1) == 0
          && (EthDB = Miniport->EthDB, *(_DWORD *)(v14 + 2) == *(_DWORD *)&EthDB->AdapterAddress[2])
          && *(_WORD *)v14 == *(_WORD *)EthDB->AdapterAddress )
        {
          v6 = 1;
          v8 = 1;
        }
        else
        {
          v6 = 1;
        }
        goto LABEL_34;
      }
      BindListLock = Miniport->EthDB->BindListLock;
      LockState.OldIrql = KfRaiseIrql(2u);
      v17 = (_QWORD *)(*((_QWORD *)BindListLock + 4) + (KeGetPcr()->Prcb.Number << 12));
      ++*v17;
      _InterlockedOr(v22, 0);
      if ( *((_QWORD *)BindListLock + 2)
        && *v17 <= 1uLL
        && *((struct _KTHREAD **)BindListLock + 3) != KeGetCurrentThread() )
      {
        *v17 = 0LL;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)BindListLock + 2);
        *v17 = 1LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)BindListLock + 2);
      }
      v18 = Miniport->EthDB;
      v6 = 0;
      v19 = *v14;
      v8 = 0;
      LockState.LockState = 3;
      MiniportPacketFilter = v18->MiniportPacketFilter;
      if ( (v19 & 1) != 0 )
      {
        if ( v19 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
        {
          v6 = (MiniportPacketFilter & 8) != 0;
        }
        else if ( (MiniportPacketFilter & 4) != 0
               || (MiniportPacketFilter & 2) != 0
               && ethFindMulticast(v18->NextNumAddresses, 0LL, v18->NextMCastAddressBuf, (unsigned __int8 *const)v14) )
        {
          v6 = 1;
        }
      }
      else if ( *(_DWORD *)(v14 + 2) == *(_DWORD *)&v18->AdapterAddress[2]
             && *(_WORD *)v14 == *(_WORD *)v18->AdapterAddress )
      {
        v6 = 1;
        v8 = 1;
      }
      v21 = v18->BindListLock;
      if ( (MiniportPacketFilter & 0xA0) != 0 )
      {
        v6 = 1;
        NdisReleaseRWLock(v21, &LockState);
        goto LABEL_34;
      }
      NdisReleaseRWLock(v21, &LockState);
      if ( v6 )
      {
LABEL_34:
        if ( (a3->Flags & 0x200) != 0 )
          v8 = 1;
LABEL_38:
        *a4 = v6;
        *v13 = v8;
        return;
      }
    }
    if ( (a3->Flags & 0x200) != 0 )
      v6 = 1;
    goto LABEL_38;
  }
}
