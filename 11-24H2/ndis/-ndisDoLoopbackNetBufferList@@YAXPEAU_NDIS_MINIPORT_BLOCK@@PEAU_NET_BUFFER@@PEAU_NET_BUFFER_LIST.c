/*
 * XREFs of ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004D370
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // r15
  SIZE_T v7; // rdi
  struct _MDL *Pool2; // rax
  struct _MDL *v9; // rbx
  unsigned __int64 v10; // r8
  NDIS_HANDLE v11; // r14
  PSLIST_ENTRY v12; // rax
  struct _NET_BUFFER_LIST *v13; // rsi
  PSLIST_ENTRY v14; // rdi
  unsigned int v15; // ecx
  struct _MDL *v16; // rax
  ULONG ByteCount; // edx
  __int64 v18; // rcx
  char *v19; // r12
  _MDL *CurrentMdl; // r14
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rdi
  ULONG v25; // r15d
  struct _MDL *Next; // r14
  char *i; // r12
  unsigned int Flags; // ecx
  int v29; // ecx
  bool v30; // zf
  struct _NET_BUFFER_LIST *v31; // rdx
  PVOID v32; // rax
  ULONG v33; // ecx
  __int64 v34; // rdi
  int v36; // [rsp+88h] [rbp+10h] BYREF
  struct _NET_BUFFER_LIST *v37; // [rsp+90h] [rbp+18h]
  unsigned int v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  DataLength = a2->DataLength;
  v7 = (MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (v7 + DataLength) >> 32 )
    return;
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, (unsigned int)(v7 + DataLength), 1886143566LL);
  v9 = Pool2;
  if ( !Pool2 )
    return;
  v10 = (unsigned __int64)Pool2 + v7;
  if ( (struct _MDL *)((char *)Pool2 + v7) < Pool2 )
  {
LABEL_49:
    ExFreePoolWithTag(v9, 0);
    return;
  }
  Pool2->ByteCount = DataLength;
  Pool2->Next = 0LL;
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->Size = 8 * (((DataLength + (v10 & 0xFFF) + 4095) >> 12) + 6);
  Pool2->ByteOffset = ((_WORD)v7 + (_WORD)Pool2) & 0xFFF;
  MmBuildMdlForNonPagedPool(Pool2);
  v11 = ndisNetBufferListPool;
  v36 = 0;
  if ( !ndisNetBufferListPool )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    goto LABEL_47;
  }
  if ( (*((_DWORD *)ndisNetBufferListPool + 11) & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", ndisNetBufferListPool);
    goto LABEL_47;
  }
  v12 = ndisAllocateNetBufferListInternal((__int64)ndisNetBufferListPool, 0, 0, &v36);
  v13 = (struct _NET_BUFFER_LIST *)v12;
  if ( v12 )
  {
    v14 = v12 + 24;
    memset(&v12[24], 0, 0xB0uLL);
    v15 = 0;
    v14[2].Next = (_SLIST_ENTRY *)v9;
    v16 = v9;
    *((_DWORD *)&v14[2].Next + 2) = 0;
    *((_DWORD *)&v14[1].Next + 2) = DataLength;
    *((_QWORD *)&v14[3].Next + 1) = v11;
    do
    {
      ByteCount = v16->ByteCount;
      if ( v15 < ByteCount )
        break;
      v16 = v16->Next;
      v15 -= ByteCount;
    }
    while ( v16 );
    *((_QWORD *)&v14->Next + 1) = v16;
    LODWORD(v14[1].Next) = v15;
    v13->Link.Region = (unsigned __int64)v14;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v13, 0LL, 3u, 0LL, 0);
  }
  if ( !v13 )
    goto LABEL_47;
  v18 = *(_QWORD *)(v13->Link.Region + 32);
  if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
    v19 = *(char **)(v18 + 24);
  else
    v19 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !v19
    || ((CurrentMdl = a2->CurrentMdl, (CurrentMdl->MdlFlags & 5) == 0)
      ? (MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (MappedSystemVa = (char *)CurrentMdl->MappedSystemVa),
        !MappedSystemVa) )
  {
    NdisFreeNetBufferList(v13);
LABEL_47:
    if ( (v9->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v9->MappedSystemVa, v9);
    goto LABEL_49;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v23 = DataLength;
  if ( CurrentMdl->ByteCount - (int)CurrentMdlOffset <= (unsigned int)DataLength )
    v23 = CurrentMdl->ByteCount - CurrentMdlOffset;
  v24 = v23;
  v25 = DataLength - v23;
  memmove(v19, &MappedSystemVa[CurrentMdlOffset], v23);
  Next = CurrentMdl->Next;
  for ( i = &v19[v24]; Next; i += v34 )
  {
    if ( !v25 )
      break;
    v32 = (Next->MdlFlags & 5) != 0
        ? Next->MappedSystemVa
        : MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v32 )
      break;
    v33 = v25;
    if ( v25 >= Next->ByteCount )
      v33 = Next->ByteCount;
    v34 = v33;
    v25 -= v33;
    memmove(i, v32, v33);
    Next = Next->Next;
  }
  Flags = v13->Flags;
  v13->NblFlags |= 0x8000u;
  v29 = Flags | 0x80;
  v30 = (a5 & 2) == 0;
  v31 = v37;
  v13->Flags = v29;
  v13->SourceHandle = v31->SourceHandle;
  v13->NetBufferListInfo[5] = v31->SourceHandle;
  if ( !v30 )
    v13->Flags = v29 | 0x200;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8, 0LL, 0x9Bu, 0);
  ndisInvokeNextReceiveHandler(
    v13,
    v38,
    1LL,
    2u,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsObject,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsContext,
    (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a1->Next.IndicateNetBufferListsHandler);
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, 0LL, 0xA8uLL, 0x9Cu, 0);
  if ( (v9->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v9->MappedSystemVa, v9);
  ExFreePoolWithTag(v9, 0);
  NdisFreeNetBufferList(v13);
}
