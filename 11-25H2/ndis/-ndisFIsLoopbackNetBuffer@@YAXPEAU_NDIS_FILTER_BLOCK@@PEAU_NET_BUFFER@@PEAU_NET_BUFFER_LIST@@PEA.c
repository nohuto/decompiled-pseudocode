/*
 * XREFs of ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140044000
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14001F9A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140044230 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x140045550 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 */

void __fastcall ndisFIsLoopbackNetBuffer(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  _MDL *CurrentMdl; // rcx
  char v7; // bp
  unsigned __int8 v8; // bl
  char *MappedSystemVa; // rax
  unsigned __int8 *v13; // r14
  char *v14; // rdi
  _X_FILTER *v15; // rsi
  unsigned int MiniportPacketFilter; // r12d
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  _X_FILTER *EthDB; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  Miniport = a1->Miniport;
  CurrentMdl = a2->CurrentMdl;
  v7 = 0;
  v8 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
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
          v8 = 1;
          v7 = 1;
        }
        else
        {
          v8 = 1;
        }
        goto LABEL_11;
      }
      NdisAcquireRWLockRead(Miniport->EthDB->BindListLock, &LockState, 0);
      v15 = Miniport->EthDB;
      MiniportPacketFilter = v15->MiniportPacketFilter;
      if ( (*v14 & 1) != 0 )
      {
        if ( *v14 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
        {
          if ( (MiniportPacketFilter & 8) != 0 )
            v8 = 1;
        }
        else if ( (MiniportPacketFilter & 4) != 0
               || (MiniportPacketFilter & 2) != 0
               && ethFindMulticast(v15->NextNumAddresses, 0LL, v15->NextMCastAddressBuf, (unsigned __int8 *const)v14) )
        {
          v8 = 1;
        }
      }
      else if ( *(_DWORD *)(v14 + 2) == *(_DWORD *)&v15->AdapterAddress[2]
             && *(_WORD *)v14 == *(_WORD *)v15->AdapterAddress )
      {
        v8 = 1;
        v7 = 1;
      }
      BindListLock = v15->BindListLock;
      if ( (MiniportPacketFilter & 0xA0) != 0 )
      {
        v8 = 1;
        NdisReleaseRWLock(BindListLock, &LockState);
        goto LABEL_11;
      }
      NdisReleaseRWLock(BindListLock, &LockState);
      if ( v8 )
      {
LABEL_11:
        if ( (a3->Flags & 0x200) != 0 )
          v7 = 1;
LABEL_13:
        *a4 = v8;
        *v13 = v7;
        return;
      }
    }
    if ( (a3->Flags & 0x200) != 0 )
      v8 = 1;
    goto LABEL_13;
  }
}
