/*
 * XREFs of ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14003F1E0
 * Callers:
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003EFC0 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003EF70 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x14003FD30 (NdisAcquireRWLockWrite.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPostSetOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  int v4; // r15d
  _X_FILTER *v7; // r14
  _NDIS_OPEN_BLOCK *v8; // rdi
  unsigned int v9; // ebx
  _NDIS_OPEN_BLOCK *i; // rdx
  _NDIS_OPEN_BLOCK *j; // rdx
  unsigned int v12; // eax
  _NDIS_OPEN_BLOCK *FTypeOpenList; // rdx
  bool v14; // zf
  unsigned int v15; // eax
  UINT v16; // ecx
  _DWORD *InformationBuffer; // rbx
  KIRQL v18; // dl
  KIRQL v19; // r9
  UINT v20; // ecx
  unsigned int v21; // eax
  _NDIS_MEDIUM MediaType; // eax
  _X_FILTER *EthDB; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+18h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( a3 && a3 != -1073676268 && a3 != -1073676266 )
  {
    if ( (a1->PacketFilters | a1->OldPacketFilters) == a1->OldPacketFilters )
    {
      v4 = 0;
    }
    else
    {
      MediaType = MiniportHandle->MediaType;
      if ( MediaType )
      {
        if ( MediaType == NdisMediumNative802_11 && (a1->OpenFlags & 0x8000) == 0 )
          a1->PacketFilters = a1->OldPacketFilters;
      }
      else
      {
        EthDB = MiniportHandle->EthDB;
        if ( (a1->OpenFlags & 0x8000) == 0 )
        {
          a1->PacketFilters = a1->OldPacketFilters;
          EthDB->CombinedPacketFilter = EthDB->OldCombinedPacketFilter;
        }
      }
    }
  }
  if ( MiniportHandle->MediaType == NdisMedium802_3 )
  {
    v7 = MiniportHandle->EthDB;
    v8 = 0LL;
    v9 = 0;
    *(_WORD *)&LockState.OldIrql = 0;
    LockState.Flags = 0;
    NdisAcquireRWLockWrite(v7->BindListLock, &LockState, 0);
    for ( i = v7->OpenList; i; v9 = v21 )
    {
      if ( v9 > 1 )
        break;
      v21 = v9 + 1;
      if ( i->PacketFilters )
        v8 = i;
      else
        v21 = v9;
      i = i->FilterNextOpen;
    }
    for ( j = v7->NoFTypeOpenList; j; v9 = v12 )
    {
      if ( v9 > 1 )
        break;
      v12 = v9 + 1;
      if ( j->PacketFilters )
        v8 = j;
      else
        v12 = v9;
      j = j->FilterNextOpen;
    }
    FTypeOpenList = v7->FTypeOpenList;
    if ( FTypeOpenList )
    {
      while ( 1 )
      {
        v14 = v9 == 1;
        if ( v9 > 1 )
          break;
        v15 = v9 + 1;
        if ( FTypeOpenList->PacketFilters )
          v8 = FTypeOpenList;
        else
          v15 = v9;
        FTypeOpenList = FTypeOpenList->FilterNextOpen;
        v9 = v15;
        if ( !FTypeOpenList )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v14 = v9 == 1;
    }
    if ( !v14 )
      v8 = 0LL;
    v7->SingleActiveOpen = v8;
    v16 = *(_DWORD *)&a2->NdisReserved[88];
    if ( v16 )
    {
      a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = v16;
      *(_QWORD *)&a2->NdisReserved[80] = 0LL;
      *(_DWORD *)&a2->NdisReserved[88] = 0;
    }
    if ( v4 )
      goto LABEL_25;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v18 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
    if ( (*InformationBuffer & 0xA0) != 0 )
    {
      if ( (a1->OpenFlags & 4) != 0 )
        goto LABEL_24;
      a1->OpenFlags |= 4u;
      ++MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        ++MiniportHandle->PmodeOpen6;
    }
    else
    {
      if ( (a1->OpenFlags & 4) == 0 )
      {
LABEL_24:
        KeReleaseSpinLock(&a1->SpinLock, v18);
LABEL_25:
        ndisUpdateCheckForLoopbackFlag(MiniportHandle);
        NdisReleaseRWLock(v7->BindListLock, &LockState);
        KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
        MiniportHandle->MiniportThread = KeGetCurrentThread();
        ndisUpdateLoopbackOpens(MiniportHandle);
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLock(&MiniportHandle->Lock, v19);
        return;
      }
      a1->OpenFlags &= ~4u;
      --MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        --MiniportHandle->PmodeOpen6;
    }
    ndisUpdateCheckForLoopbackFlag(MiniportHandle);
    goto LABEL_24;
  }
  v20 = *(_DWORD *)&a2->NdisReserved[88];
  if ( v20 )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v20;
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
}
