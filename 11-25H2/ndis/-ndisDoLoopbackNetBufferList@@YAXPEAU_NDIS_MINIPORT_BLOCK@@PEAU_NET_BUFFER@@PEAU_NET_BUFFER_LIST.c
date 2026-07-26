/*
 * XREFs of ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140041E60
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x140010D30 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x14001E020 (ndisAllocateNetBufferListInternal.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140033770 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // rsi
  SIZE_T v7; // rbx
  __int64 Pool2; // rax
  struct _MDL *v9; // r15
  SIZE_T v10; // rax
  NDIS_HANDLE v11; // r13
  PSLIST_ENTRY v12; // rax
  struct _NET_BUFFER_LIST *v13; // r14
  PSLIST_ENTRY v14; // rbx
  ULONG v15; // ecx
  struct _MDL *v16; // rax
  ULONG ByteCount; // edx
  __int64 v18; // rcx
  char *v19; // r13
  _MDL *CurrentMdl; // r12
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rcx
  char *v23; // rdx
  unsigned int v24; // eax
  ULONG v25; // esi
  __int64 v26; // rbx
  struct _MDL *Next; // r12
  char *i; // r13
  unsigned int Flags; // ecx
  int v30; // ecx
  __int64 v31; // r13
  __int64 v32; // r12
  char v33; // r15
  struct _NET_BUFFER_LIST *Alignment; // rsi
  char v35; // r14
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // r13
  __int64 v42; // r12
  char v43; // r15
  struct _NET_BUFFER_LIST *v44; // rsi
  char v45; // r14
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rcx
  PVOID v51; // rax
  ULONG v52; // ecx
  __int64 v53; // rbx
  int v54; // [rsp+40h] [rbp-58h] BYREF
  struct _NET_BUFFER_LIST *v55; // [rsp+48h] [rbp-50h]
  struct _MDL *v56; // [rsp+50h] [rbp-48h]

  DataLength = a2->DataLength;
  v7 = (MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (DataLength + v7) >> 32 )
    return;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(DataLength + v7), 1886143566);
  v56 = (struct _MDL *)Pool2;
  v9 = (struct _MDL *)Pool2;
  if ( !Pool2 )
    return;
  v10 = v7 + Pool2;
  if ( v10 < (unsigned __int64)v9 )
  {
LABEL_103:
    ExFreePoolWithTag(v9, 0);
    return;
  }
  v9->ByteCount = DataLength;
  v9->Next = 0LL;
  v9->MdlFlags = 0;
  v9->StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
  v9->Size = 8 * (((DataLength + (v10 & 0xFFF) + 4095) >> 12) + 6);
  v9->ByteOffset = v10 & 0xFFF;
  MmBuildMdlForNonPagedPool(v9);
  v11 = ndisNetBufferListPool;
  v54 = 0;
  if ( !ndisNetBufferListPool )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    goto LABEL_101;
  }
  if ( (*((_DWORD *)ndisNetBufferListPool + 11) & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", ndisNetBufferListPool);
    goto LABEL_101;
  }
  v12 = ndisAllocateNetBufferListInternal((__int64)ndisNetBufferListPool, 0, 0, &v54);
  v55 = (struct _NET_BUFFER_LIST *)v12;
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
    goto LABEL_101;
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
LABEL_101:
    if ( (v9->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v9->MappedSystemVa, v9);
    goto LABEL_103;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v23 = &MappedSystemVa[CurrentMdlOffset];
  v24 = CurrentMdl->ByteCount - CurrentMdlOffset;
  if ( v24 > (unsigned int)DataLength )
    v24 = DataLength;
  v25 = DataLength - v24;
  v26 = v24;
  memmove(v19, v23, v24);
  Next = CurrentMdl->Next;
  for ( i = &v19[v26]; Next; i += v53 )
  {
    if ( !v25 )
      break;
    v51 = (Next->MdlFlags & 5) != 0
        ? Next->MappedSystemVa
        : MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v51 )
      break;
    v52 = Next->ByteCount;
    if ( v25 < v52 )
      v52 = v25;
    v25 -= v52;
    v53 = v52;
    memmove(i, v51, v52);
    Next = Next->Next;
  }
  Flags = v13->Flags;
  v13->NblFlags |= 0x8000u;
  v30 = Flags | 0x80;
  v13->Flags = v30;
  v13->SourceHandle = a3->SourceHandle;
  v13->NetBufferListInfo[5] = a3->SourceHandle;
  if ( (a5 & 2) != 0 )
    v13->Flags = v30 | 0x200;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v31 = 0LL;
    v32 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v13, 0xA8uLL, 0x9Bu, 0LL, 0);
    v33 = 0;
    Alignment = v13;
    v35 = 0;
    while ( 1 )
    {
      v36 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v36 )
      {
        if ( v36 )
        {
          if ( (v36 & 4) != 0 )
            goto LABEL_92;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(168LL);
        }
        if ( ndisNblTrackerCanNblBeTracked(Alignment) )
        {
          if ( Alignment->SourceHandle || Alignment->ParentNetBufferList )
          {
            ++v31;
            v37 = 0LL;
          }
          else
          {
            ++v31;
            v37 = 24LL;
          }
          goto LABEL_34;
        }
LABEL_92:
        v37 = 4LL;
LABEL_34:
        Alignment->NetBufferListInfo[27] = (void *)v37;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v38 = v32 - v31;
      if ( (v36 & 1) == 0 || !v38 )
        goto LABEL_40;
      if ( v33 || v35 )
      {
        v39 = 16 * ((v36 >> 1) & 1) + (v36 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v33 )
          goto LABEL_69;
        goto LABEL_39;
      }
      v35 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v33 = 1;
        v39 = 16 * ((v36 >> 1) & 1) + (v36 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_39:
        v40 = (_QWORD *)(*(_QWORD *)v39 + (KeGetPcr()->Prcb.Number << 12));
        *v40 += v38;
        goto LABEL_40;
      }
      v33 = 0;
      v39 = 16 * ((v36 >> 1) & 1) + (v36 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_69:
      _InterlockedAdd64((volatile signed __int64 *)(v39 + 8), v38);
LABEL_40:
      v32 = v31;
      if ( !Alignment )
      {
        v13 = v55;
        v9 = v56;
        break;
      }
    }
  }
  ndisInvokeNextReceiveHandler(
    v13,
    a4,
    1LL,
    2u,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsObject,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsContext,
    (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a1->Next.IndicateNetBufferListsHandler);
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_61;
  v41 = 0LL;
  v42 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)v13, 0LL, 0x9Cu, (void *)0xA8, 0);
  v43 = 0;
  v44 = v13;
  v45 = 0;
  do
  {
    v46 = (unsigned __int64)v44->NetBufferListInfo[27];
    while ( v44->NetBufferListInfo[27] == (void *)v46 )
    {
      if ( v46 )
      {
        if ( (v46 & 4) != 0 )
          goto LABEL_93;
      }
      else if ( !v44->SourceHandle )
      {
        v44->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
      }
      if ( ndisNblTrackerCanNblBeTracked(v44) )
      {
        if ( v44->SourceHandle != (void *)168 || v44->ParentNetBufferList )
        {
          ++v41;
          v47 = 168LL;
        }
        else
        {
          ++v41;
          v47 = 24LL;
        }
        goto LABEL_53;
      }
LABEL_93:
      v47 = 172LL;
LABEL_53:
      v44->NetBufferListInfo[27] = (void *)v47;
      v44 = (struct _NET_BUFFER_LIST *)v44->Link.Alignment;
      if ( !v44 )
        break;
    }
    v48 = v42 - v41;
    if ( (v46 & 1) == 0 || !v48 )
      goto LABEL_59;
    if ( v43 || v45 )
    {
      v49 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v43 )
        goto LABEL_73;
      goto LABEL_58;
    }
    v45 = 1;
    if ( KeGetCurrentIrql() == 2 )
    {
      v43 = 1;
      v49 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_58:
      v50 = (_QWORD *)(*(_QWORD *)v49 + (KeGetPcr()->Prcb.Number << 12));
      *v50 += v48;
      goto LABEL_59;
    }
    v43 = 0;
    v49 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_73:
    _InterlockedAdd64((volatile signed __int64 *)(v49 + 8), v48);
LABEL_59:
    v42 = v41;
  }
  while ( v44 );
  v13 = v55;
  v9 = v56;
LABEL_61:
  if ( (v9->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v9->MappedSystemVa, v9);
  ExFreePoolWithTag(v9, 0);
  NdisFreeNetBufferList(v13);
}
