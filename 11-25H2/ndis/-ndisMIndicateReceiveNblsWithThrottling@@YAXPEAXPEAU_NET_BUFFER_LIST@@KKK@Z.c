/*
 * XREFs of ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140043FA0 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1400446C0 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x140045160 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisMPeriodicReceivesResources @ 0x1400452C0 (ndisMPeriodicReceivesResources.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int MaxNblCount; // eax
  struct _NET_BUFFER_LIST *v12; // rdx
  unsigned int v13; // ebx
  struct _NET_BUFFER_LIST *v14; // r12
  __int64 v15; // rax
  int v16; // edx
  __int64 Pool2; // rdi
  struct _NDIS_FILTER_BLOCK **v18; // r8
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int v20; // r12d
  struct _NET_BUFFER_LIST *v21; // r14
  KIRQL v22; // r12
  KSPIN_LOCK *p_MediaConnectState; // rcx
  char v24; // di
  char v25; // bp
  unsigned __int64 *p_RcvLinkSpeed; // r8
  unsigned int v27; // r9d
  unsigned __int64 v28; // rcx
  _QWORD *p_XState; // rcx
  _QWORD *v30; // rax
  struct _NET_BUFFER_LIST *v31; // rax
  KSPIN_LOCK *v32; // rcx
  struct _NDIS_RCV_TRACKER_ARRAY *v33; // r9
  __int64 v34; // rdx
  unsigned __int64 RcvLinkSpeedIndicateUp; // rdx
  struct _NET_BUFFER_LIST *v36; // rcx
  const struct _NDIS_FILTER_BLOCK *v37; // r14
  _QWORD *v38; // r9
  const struct _NDIS_FILTER_BLOCK *v39; // r14
  unsigned int v40; // r12d
  unsigned int v41; // ebp
  unsigned int v42; // ebx
  __int64 v43; // rcx
  struct _NET_BUFFER_LIST *v44; // rdx
  struct _NDIS_OPEN_BLOCK *v45; // rdx
  struct _NET_BUFFER_LIST *v46; // rcx
  unsigned int v47; // [rsp+34h] [rbp-64h]
  unsigned int v48; // [rsp+3Ch] [rbp-5Ch]
  struct _NET_BUFFER_LIST *v49; // [rsp+40h] [rbp-58h]
  _QWORD *v50; // [rsp+48h] [rbp-50h]
  struct _NET_BUFFER_LIST *v51; // [rsp+50h] [rbp-48h]
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // [rsp+58h] [rbp-40h]
  char v53; // [rsp+A0h] [rbp+8h]

  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
LABEL_20:
    v21 = 0LL;
    if ( (a5 & 2) != 0 )
    {
      v24 = ndisMPeriodicReceivesResources((_DWORD)a1, (_DWORD)Alignment, v6, v7, a5);
LABEL_35:
      if ( v24 )
      {
        ndisQueuePeriodicReceivesWorkItem((char)a1);
        ndisQueuePeriodicReceivesTimer();
      }
      if ( v21 )
        ndisReturnNetBufferListsInternal(a1, v21, v8, 0LL);
      return;
    }
    v22 = 0;
    p_MediaConnectState = (KSPIN_LOCK *)&a1[2].MediaConnectState;
    v24 = 0;
    if ( (a5 & 1) != 0 )
    {
      v25 = 1;
      KeAcquireSpinLockAtDpcLevel(p_MediaConnectState);
    }
    else
    {
      v25 = 0;
      v22 = KeAcquireSpinLockRaiseToDpc(p_MediaConnectState);
    }
    a1[2].XmitLinkSpeed = (unsigned __int64)KeGetCurrentThread();
    p_RcvLinkSpeed = &a1[2].RcvLinkSpeed;
    v27 = v7 + LODWORD(a1[2].RcvLinkSpeed);
    v28 = (unsigned __int64)(v7 + SLODWORD(a1[2].RcvLinkSpeed)) >> 32;
    if ( a1[2].MediaType == NdisMedium802_5 )
    {
      if ( !(_DWORD)v28 )
      {
        if ( v27 < 0x3E8 )
        {
          a1[2].PauseFunctionsIndicateUp += v7;
          p_XState = &a1[2].XState;
          v30 = *(_QWORD **)&a1[2].XState;
          v24 = 1;
          if ( v30 )
            *v30 = Alignment;
          else
            *(_QWORD *)&a1[2].PauseFunctions = Alignment;
          v31 = Alignment;
          if ( Alignment )
          {
            do
            {
              v31 = Alignment;
              LODWORD(Alignment->ProtocolReserved[0]) = a3;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
            p_XState = &a1[2].XState;
            p_RcvLinkSpeed = &a1[2].RcvLinkSpeed;
          }
          HIDWORD(a1[2].XmitLinkSpeedIndicateUp) += v7;
          *(_DWORD *)p_RcvLinkSpeed += v7;
          *p_XState = v31;
          goto LABEL_32;
        }
        goto LABEL_86;
      }
    }
    else if ( !(_DWORD)v28 )
    {
LABEL_86:
      v24 = v27 >= 0x3E8;
    }
    v21 = Alignment;
LABEL_32:
    a1[2].XmitLinkSpeed = 0LL;
    v32 = (KSPIN_LOCK *)&a1[2].MediaConnectState;
    if ( v25 )
      KeReleaseSpinLockFromDpcLevel(v32);
    else
      KeReleaseSpinLock(v32, v22);
    v8 = a5 & 1;
    goto LABEL_35;
  }
  if ( KeGetCurrentIrql() )
  {
    v6 = a3;
    goto LABEL_20;
  }
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount((struct _NDIS_MINIPORT_BLOCK *)a1);
  v48 = MaxNblCount;
  v12 = 0LL;
  v49 = 0LL;
  while ( Alignment )
  {
    v51 = Alignment;
    v13 = 0;
    if ( MaxNblCount )
    {
      do
      {
        if ( !Alignment )
          break;
        ++v13;
        v12 = Alignment;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( v13 < MaxNblCount );
      v49 = v12;
    }
    v12->Link.Alignment = 0LL;
    v14 = 0LL;
    v47 = 0;
    v53 = 0;
    if ( KeGetCurrentIrql() == 2
      && ndisPerProcRcvTrackers
      && (LODWORD(v15) = KeGetPcr()->Prcb.Number,
          v33 = ndisPerProcRcvTrackers,
          v18 = (struct _NDIS_FILTER_BLOCK **)(2096 * v15),
          v47 = v15,
          v34 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * v15),
          (unsigned int)v34 < 3) )
    {
      v53 = 1;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v18) = v34 + 1;
      Pool2 = (__int64)&v18[87 * v34 + 1] + (_QWORD)v33;
    }
    else
    {
      Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
      if ( !Pool2 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v16,
            4,
            11,
            (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
        }
        v19 = v51;
        goto LABEL_13;
      }
    }
    RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
    v50 = (_QWORD *)RcvLinkSpeedIndicateUp;
    v36 = v51;
    *(_BYTE *)(Pool2 + 692) = 0;
    if ( (a5 & 2) == 0 )
    {
      do
      {
        v14 = v36;
        v36->Flags = v36->Flags & 0xFFFFFFF0 | 4;
        v36 = (struct _NET_BUFFER_LIST *)v36->Link.Alignment;
      }
      while ( v36 );
    }
    v37 = *(const struct _NDIS_FILTER_BLOCK **)(RcvLinkSpeedIndicateUp + 328);
    if ( v37 && *((_BYTE *)v37->FilterModuleContext + 56) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v37, v51, a3, v13, v5);
      *(_QWORD *)(Pool2 + 64) = 0LL;
      *(_DWORD *)(Pool2 + 80) = 0;
    }
    else
    {
      *(_QWORD *)(Pool2 + 32) = v14;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 24) = v51;
      *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
      *(_DWORD *)(Pool2 + 16) = v5;
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 44) = v13;
      ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, RcvLinkSpeedIndicateUp, v18);
      if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
      {
        v38 = v50;
        if ( !*v50 || a3 )
        {
          *(_BYTE *)(Pool2 + 692) = 1;
        }
        else
        {
          ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          v38 = v50;
        }
        if ( !v37 )
        {
          v39 = (const struct _NDIS_FILTER_BLOCK *)v38[1];
          if ( v39 )
          {
            v40 = *(_DWORD *)(Pool2 + 688);
            v41 = *(_DWORD *)(Pool2 + 16) | 2;
            do
            {
              v42 = 0;
              IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)v39->IterativeDataPathTracker;
              do
              {
                v43 = v42++;
                v44 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v43 + 64);
                if ( v44 )
                  ndisMIndicateNetBufferListsToOpen(
                    v39,
                    v44,
                    *(_DWORD *)(Pool2 + 40),
                    *(_DWORD *)(Pool2 + 40 * v43 + 80),
                    v41);
              }
              while ( v42 <= v40 );
              LODWORD(v18) = (_DWORD)IterativeDataPathTracker;
              v39 = (const struct _NDIS_FILTER_BLOCK *)IterativeDataPathTracker;
            }
            while ( IterativeDataPathTracker );
            v8 = a5 & 1;
            v5 = a5;
            v38 = v50;
          }
          v45 = (struct _NDIS_OPEN_BLOCK *)v38[2];
          if ( v45 )
          {
            if ( (a5 & 2) != 0 )
              ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v45);
            else
              ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          }
        }
      }
    }
    if ( !*(_BYTE *)(Pool2 + 692) )
      goto LABEL_14;
    v19 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
LABEL_13:
    if ( v19 )
    {
      if ( byte_1401278B0 && ((__int64)a1[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5816, (_DWORD)v19, (_DWORD)v18, 1, -1073676270, -536866809);
      v20 = a5 & 2;
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(a1, v19, v8, 0LL);
      goto LABEL_15;
    }
LABEL_14:
    v20 = a5 & 2;
LABEL_15:
    if ( v53 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v47);
    }
    else if ( Pool2 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    v12 = v49;
    if ( v20 )
    {
      if ( v49->Link.Alignment )
      {
        v12 = v51;
        v49 = v51;
        v46 = (struct _NET_BUFFER_LIST *)v51->Link.Alignment;
        if ( v51->Link.Alignment )
        {
          do
          {
            v12 = v46;
            v49 = v46;
            v46 = (struct _NET_BUFFER_LIST *)v46->Link.Alignment;
          }
          while ( v46 );
        }
      }
      v12->Link.Alignment = (unsigned __int64)Alignment;
    }
    MaxNblCount = v48;
  }
}
