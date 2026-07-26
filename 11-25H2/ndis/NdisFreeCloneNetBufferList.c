/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x14001B0A0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     NdisFreeNetBuffer @ 0x14001B600 (NdisFreeNetBuffer.c)
 *     ndisFreeToLookasideList @ 0x14001B990 (ndisFreeToLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisPplLazyInitializeLookaside @ 0x14007A1D0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  ULONG v2; // r13d
  PNET_BUFFER_LIST v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // r12
  _SLIST_HEADER *Alignment; // rsi
  char v8; // r13
  unsigned __int64 Region; // rbx
  _BYTE *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rsi
  char v16; // r14
  struct _MDL *v17; // rcx
  struct _MDL *Next; // rbx
  ULONG_PTR v19; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rdx
  _DWORD *NdisPoolHandle; // rbx
  unsigned __int64 v22; // rax
  char *v23; // rsi
  volatile signed __int32 *v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // [rsp+30h] [rbp-50h]
  _QWORD v31[14]; // [rsp+80h] [rbp+0h] BYREF
  ULONG v33; // [rsp+108h] [rbp+88h]

  v2 = FreeCloneFlags & 2;
  *(_QWORD *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v3 = CloneNetBufferList;
  v33 = v2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    Alignment = (_SLIST_HEADER *)v3;
    v8 = 0;
    while ( 1 )
    {
      Region = Alignment[22].Region;
      while ( Alignment[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_64;
        }
        else if ( !Alignment[7].Region )
        {
          Alignment[7].Region = 0LL;
        }
        v10 = (_BYTE *)Alignment[7].Region;
        if ( v10 )
        {
          if ( (unsigned __int8)(*v10 - 17) <= 1u || *v10 == 5 )
          {
            if ( v10 != (_BYTE *)136 || Alignment[1].Region )
            {
              ++v4;
              v11 = 136LL;
            }
            else
            {
              ++v4;
              v11 = 24LL;
            }
            goto LABEL_13;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = (unsigned __int8)*v10;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)Alignment,
              v30);
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3,
            27,
            11,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)Alignment);
        }
LABEL_64:
        v11 = 140LL;
LABEL_13:
        Alignment[22].Region = v11;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        if ( !Alignment )
          break;
      }
      v12 = v5 - v4;
      if ( (Region & 1) == 0 || !v12 )
        goto LABEL_19;
      if ( v6 || v8 )
      {
        v13 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v6 )
          goto LABEL_46;
        goto LABEL_18;
      }
      v8 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v6 = 1;
        v13 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_18:
        v14 = (_QWORD *)(*(_QWORD *)v13 + (KeGetPcr()->Prcb.Number << 12));
        *v14 += v12;
        goto LABEL_19;
      }
      v6 = 0;
      v13 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_46:
      _InterlockedAdd64((volatile signed __int64 *)(v13 + 8), v12);
LABEL_19:
      v5 = v4;
      if ( !Alignment )
      {
        v3 = CloneNetBufferList;
        v2 = v33;
        break;
      }
    }
  }
  v15 = v3->Link.Region;
  v16 = *(_BYTE *)(*(_QWORD *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 44LL) & 1;
  if ( v15 )
  {
    do
    {
      if ( !v2 )
      {
        v17 = *(struct _MDL **)(v15 + 32);
        if ( v17 )
        {
          do
          {
            Next = v17->Next;
            IoFreeMdl(v17);
            v17 = Next;
          }
          while ( Next );
        }
      }
      v19 = *(_QWORD *)v15;
      if ( v15 == v3->Link.Region )
      {
        if ( !v16 )
        {
          v25 = *(_QWORD *)(v15 + 56);
          if ( (*(_DWORD *)(v25 + 80) & 1) != 0 )
          {
            v26 = *(_QWORD *)(v15 + 32);
            if ( (*(_BYTE *)(v26 + 10) & 0x20) != 0 )
              MmUnmapLockedPages(*(PVOID *)(v26 + 24), *(PMDL *)(v15 + 32));
          }
          if ( (*(_DWORD *)(v25 + 4) & 1) != 0 )
          {
            if ( v15 < 0x20 )
              ndisBugCheckEx(0x31uLL, 3uLL, v15, 0LL);
            ExFreePoolWithTag((PVOID)(v15 - 32), 0);
          }
          else
          {
            if ( ndisMaxNumberOfProcessors == 1 )
              goto LABEL_58;
            v27 = (unsigned __int64)*(unsigned int *)(v15 - 8) << 8;
            v28 = v25 + v27 + 384;
            if ( !*(_BYTE *)(v28 + 216) )
              ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)(v25 + v27 + 384));
            if ( !(unsigned __int8)ndisFreeToLookasideList(v28, v15) )
            {
LABEL_58:
              v29 = v25 + 128;
              _InterlockedIncrement((volatile signed __int32 *)(v29 + 28));
              if ( ExQueryDepthSList((PSLIST_HEADER)v29) >= *(_WORD *)(v29 + 16) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v29 + 32));
                (*(void (__fastcall **)(ULONG_PTR, __int64))(v29 + 56))(v15, v29);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v29, (PSLIST_ENTRY)v15);
              }
            }
          }
        }
      }
      else
      {
        NdisFreeNetBuffer((PNET_BUFFER)v15);
      }
      v15 = v19;
    }
    while ( v19 );
  }
  Context = v3->Context;
  NdisPoolHandle = v3->NdisPoolHandle;
  if ( Context && (v3->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(v3, Context->Size - Context->Offset);
  v3->Flags &= ~0x100u;
  if ( ((unsigned __int64)v3->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(Context) = 1;
    WfpNblInfoCleanup(v3, Context);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v3, 0LL, 4u, 0LL, 0);
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)v3 < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)v3, 0LL);
    ExFreePoolWithTag(&v3[-1].NetBufferListInfo[26], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_40;
    v22 = (unsigned __int64)LODWORD(v3[-1].NetBufferListInfo[29]) << 8;
    v23 = (char *)NdisPoolHandle + v22 + 384;
    if ( !v23[216] )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v22 + 384));
    if ( !(unsigned __int8)ndisFreeToLookasideList(v23, v3) )
    {
LABEL_40:
      v24 = NdisPoolHandle + 32;
      _InterlockedIncrement(v24 + 7);
      if ( ExQueryDepthSList((PSLIST_HEADER)v24) >= *((_WORD *)v24 + 8) )
      {
        _InterlockedIncrement(v24 + 8);
        (*((void (__fastcall **)(PNET_BUFFER_LIST, volatile signed __int32 *))v24 + 7))(v3, v24);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, (PSLIST_ENTRY)v3);
      }
    }
  }
}
