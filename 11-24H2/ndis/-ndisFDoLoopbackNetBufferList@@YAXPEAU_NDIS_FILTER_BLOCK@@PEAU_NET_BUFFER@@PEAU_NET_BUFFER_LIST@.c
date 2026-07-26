/*
 * XREFs of ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140022930
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisFDoLoopbackNetBufferList(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // rbp
  SIZE_T v8; // rdi
  struct _MDL *Pool2; // rax
  struct _MDL *v10; // rbx
  unsigned __int64 v11; // r8
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v13; // rsi
  __int64 v14; // rax
  char *v15; // r15
  _MDL *CurrentMdl; // r14
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rdi
  ULONG v21; // ebp
  struct _MDL *Next; // r14
  char *i; // r15
  PVOID v24; // rax
  ULONG ByteCount; // ecx
  __int64 v26; // rdi
  unsigned int Flags; // ecx
  int v28; // ecx

  DataLength = a2->DataLength;
  v8 = (MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (v8 + DataLength) >> 32 )
    return;
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, (unsigned int)(v8 + DataLength), 1886143566LL);
  v10 = Pool2;
  if ( !Pool2 )
    return;
  v11 = (unsigned __int64)Pool2 + v8;
  if ( (struct _MDL *)((char *)Pool2 + v8) < Pool2 )
  {
LABEL_37:
    ExFreePoolWithTag(v10, 0);
    return;
  }
  Pool2->ByteCount = DataLength;
  Pool2->Next = 0LL;
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->Size = 8 * (((DataLength + (v11 & 0xFFF) + 4095) >> 12) + 6);
  Pool2->ByteOffset = ((_WORD)v8 + (_WORD)Pool2) & 0xFFF;
  MmBuildMdlForNonPagedPool(Pool2);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, v10, 0, DataLength);
  v13 = NetBufferAndNetBufferList;
  if ( !NetBufferAndNetBufferList )
  {
LABEL_35:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    goto LABEL_37;
  }
  v14 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
  if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
    v15 = *(char **)(v14 + 24);
  else
    v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !v15
    || ((CurrentMdl = a2->CurrentMdl, (CurrentMdl->MdlFlags & 5) == 0)
      ? (MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (MappedSystemVa = (char *)CurrentMdl->MappedSystemVa),
        !MappedSystemVa) )
  {
    NdisFreeNetBufferList(v13);
    goto LABEL_35;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v19 = DataLength;
  if ( CurrentMdl->ByteCount - (int)CurrentMdlOffset <= (unsigned int)DataLength )
    v19 = CurrentMdl->ByteCount - CurrentMdlOffset;
  v20 = v19;
  v21 = DataLength - v19;
  memmove(v15, &MappedSystemVa[CurrentMdlOffset], v19);
  Next = CurrentMdl->Next;
  for ( i = &v15[v20]; Next; i += v26 )
  {
    if ( !v21 )
      break;
    v24 = (Next->MdlFlags & 5) != 0
        ? Next->MappedSystemVa
        : MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v24 )
      break;
    ByteCount = v21;
    if ( v21 >= Next->ByteCount )
      ByteCount = Next->ByteCount;
    v26 = ByteCount;
    v21 -= ByteCount;
    memmove(i, v24, ByteCount);
    Next = Next->Next;
  }
  Flags = v13->Flags;
  v13->NblFlags |= 0x8000u;
  v28 = Flags | 0x80;
  v13->Flags = v28;
  v13->SourceHandle = a3->SourceHandle;
  if ( (a5 & 2) != 0 )
    v13->Flags = v28 | 0x200;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8, 0LL, 0x9Bu, 0);
  a1->FilterIndicateReceiveNetBufferListsHandler(a1, v13, a4, 1u, 2u);
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v13, 0LL, 0xA8uLL, 0x9Cu, 0);
  if ( (v10->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v10->MappedSystemVa, v10);
  ExFreePoolWithTag(v10, 0);
  NdisFreeNetBufferList(v13);
}
