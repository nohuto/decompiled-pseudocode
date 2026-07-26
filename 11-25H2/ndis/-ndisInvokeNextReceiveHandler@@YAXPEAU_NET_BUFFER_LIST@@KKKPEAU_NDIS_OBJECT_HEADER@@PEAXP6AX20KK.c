/*
 * XREFs of ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0
 * Callers:
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140041E60 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B720 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        void (*a7)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))
{
  __int64 v7; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rbx
  __int64 v10; // r15
  struct _NET_BUFFER_LIST *v12; // rdi
  struct _NDIS_FILTER_BLOCK *v13; // r14
  __int64 v14; // rax
  struct _NDIS_RCV_TRACKER_ARRAY *v15; // r9
  struct _NDIS_FILTER_BLOCK **v16; // r8
  __int64 v17; // rdx
  __int64 Pool2; // rbx
  _QWORD *RcvLinkSpeedIndicateUp; // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v21; // rdx
  struct _NDIS_OPEN_BLOCK *v22; // rcx
  int v23; // r9d
  struct _NET_BUFFER_LIST **v24; // rax
  struct _NDIS_OPEN_BLOCK *v25; // rdx
  struct _NDIS_OPEN_BLOCK *v26; // rdx
  int v27; // esi
  unsigned __int64 v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  int v32; // edx
  __int64 *v33; // r14
  unsigned __int64 v34; // rcx
  void (*NextIndicateReceiveNetBufferListsHandler)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r10
  struct _NDIS_FILTER_BLOCK *NextIndicateReceiveNetBufferListsContext; // r11
  __int64 v37; // rdi
  struct _NDIS_FILTER_BLOCK *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // r14d
  unsigned int v43; // r15d
  unsigned int v44; // r12d
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v47; // r15d
  unsigned int v48; // r12d
  unsigned int v49; // r14d
  _PKTMON_COMPONENT_CONTEXT *v50; // rax
  struct _NDIS_OBJECT_HEADER v51; // r14d
  bool v52; // zf
  void *v53; // rdx
  _PKTMON_COMPONENT_CONTEXT *v54; // rax
  void *EdgeHandle; // rdx
  __int64 v56; // rsi
  int v57; // r15d
  unsigned int v58; // r12d
  _PKTMON_COMPONENT_CONTEXT *v59; // rax
  unsigned int v60; // r13d
  int v61; // ecx
  int v62; // r8d
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  void *v64; // rdx
  void *v65; // rcx
  void *v66; // rdx
  void *VerifierContext; // rcx
  _SLIST_HEADER *v68; // rax
  int v69; // [rsp+40h] [rbp-C0h]
  void (*v70)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // [rsp+40h] [rbp-C0h]
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  struct _NDIS_FILTER_BLOCK *v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+50h] [rbp-B0h]
  unsigned int PacketType; // [rsp+50h] [rbp-B0h]
  struct _NDIS_OPEN_BLOCK *v75; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  unsigned __int64 LowLimit; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 HighLimit; // [rsp+68h] [rbp-98h] BYREF
  __int128 v79; // [rsp+70h] [rbp-90h] BYREF
  __int128 v80; // [rsp+80h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int128 v82; // [rsp+98h] [rbp-68h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-48h]
  _QWORD Parameter[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v86; // [rsp+E0h] [rbp-20h]
  int v87; // [rsp+E4h] [rbp-1Ch]
  unsigned int v88; // [rsp+E8h] [rbp-18h]
  int v89; // [rsp+ECh] [rbp-14h]
  _QWORD v90[4]; // [rsp+F0h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+38h] BYREF
  char v92; // [rsp+160h] [rbp+60h]
  unsigned int v93; // [rsp+160h] [rbp+60h]
  unsigned int v94; // [rsp+160h] [rbp+60h]

  v8 = a5;
  v10 = (unsigned int)a3;
  v12 = a1;
  if ( a5->Header.Type == 17 )
  {
    if ( (char *)a7 != (char *)ndisMTopReceiveNetBufferLists )
    {
      ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))a7)(
        a6,
        a1,
        a2,
        (unsigned int)a3,
        a4);
      return;
    }
    if ( (a1->NblFlags & 0x8000) != 0 )
    {
      (*(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))&a6[1].PMCurrentParameters.Header.Type)(
        a6,
        a1,
        a2,
        (unsigned int)a3,
        a4);
      return;
    }
    v13 = a6;
    if ( !a6[1].ReceiveFilterHwCapabilities.Header.Revision )
    {
      ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))a6[1].PMProtocolOffloadList.Next)(
        a6,
        a1,
        a2,
        (unsigned int)a3,
        a4);
      return;
    }
    v14 = a4 & 1;
    v71 = 0;
    v73 = a4 & 1;
    v92 = 0;
    if ( ((a4 & 1) != 0 || KeGetCurrentIrql() == 2)
      && ndisPerProcRcvTrackers
      && (LODWORD(v14) = KeGetPcr()->Prcb.Number,
          v15 = ndisPerProcRcvTrackers,
          v16 = (struct _NDIS_FILTER_BLOCK **)(2096 * v14),
          v71 = v14,
          v17 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * v14),
          (unsigned int)v17 < 3) )
    {
      v92 = 1;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v16) = v17 + 1;
      Pool2 = (__int64)&v16[87 * v17 + 1] + (_QWORD)v15;
    }
    else
    {
      Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
      if ( !Pool2 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v32,
            4,
            11,
            (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
        }
        v27 = a4 & 2;
        goto LABEL_37;
      }
    }
    RcvLinkSpeedIndicateUp = (_QWORD *)a6->RcvLinkSpeedIndicateUp;
    *(_BYTE *)(Pool2 + 692) = 0;
    v69 = a4 & 2;
    Alignment = v12;
    if ( (a4 & 2) != 0 )
    {
      v21 = 0LL;
    }
    else
    {
      do
      {
        v21 = (__int64)Alignment;
        Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    v22 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
    v75 = v22;
    if ( v22 && v22->ProtocolHandle->MajorNdisVersion >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v22, v12, a2, v10, a4);
      v24 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      *(_DWORD *)(Pool2 + 80) = 0;
      *(_QWORD *)(Pool2 + 64) = 0LL;
    }
    else
    {
      *(_QWORD *)Pool2 = a6;
      *(_QWORD *)(Pool2 + 24) = v12;
      *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
      *(_DWORD *)(Pool2 + 16) = a4;
      *(_QWORD *)(Pool2 + 32) = v21;
      *(_DWORD *)(Pool2 + 40) = a2;
      *(_DWORD *)(Pool2 + 44) = v10;
      ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, v21, v16);
      if ( *(_QWORD *)(Pool2 + 64) || (v24 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
      {
        if ( !*RcvLinkSpeedIndicateUp || a2 )
          *(_BYTE *)(Pool2 + 692) = 1;
        else
          ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        v24 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
        if ( !v75 )
        {
          v25 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
          if ( v25 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v25);
          v26 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
          v27 = a4 & 2;
          if ( v26 )
          {
            if ( v69 )
              ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v26);
            else
              ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          }
          v24 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
          goto LABEL_23;
        }
      }
    }
    v27 = a4 & 2;
LABEL_23:
    if ( !*(_BYTE *)(Pool2 + 692) )
    {
LABEL_38:
      if ( v92 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v71);
      }
      else if ( Pool2 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      return;
    }
    v12 = *v24;
    v13 = a6;
LABEL_37:
    if ( v12 )
    {
      if ( byte_1401278B0 && ((__int64)v13[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
        PktMonClientNblDrop(
          (_DWORD)v13 + 5816,
          (_DWORD)v12,
          HIDWORD(v13[4].StackExpansionFallback.WorkItem.List.Blink),
          v23);
      if ( !v27 )
        ndisReturnNetBufferListsInternal(v13, v12, v73, 0LL);
    }
    goto LABEL_38;
  }
  if ( (a4 & 2) == 0 && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v33 = v90;
    v34 = v12->Link.Alignment;
    NextIndicateReceiveNetBufferListsHandler = a7;
    NextIndicateReceiveNetBufferListsContext = a6;
    v70 = a7;
    v72 = a6;
    v93 = v7;
    v90[2] = 0LL;
    v90[0] = v12;
    v90[1] = v12;
    v12->Scratch = 0LL;
    v12->ChildRefCount = a4;
    v12->Status = a2;
    if ( v34 )
      *(_QWORD *)(v34 + 112) = v10;
    while ( v8->Header.Type == 5 )
    {
      v37 = *v33;
      if ( !*v33 )
        break;
      v38 = v8;
      v39 = (__int64)&(*v8->IterativeDataPathTracker)[4 * v7 + 2];
      v76 = v39;
      if ( *(_BYTE *)(v39 + 16) )
      {
        *v33 = 0LL;
        do
        {
          v56 = *(_QWORD *)(v37 + 112);
          v57 = *(_DWORD *)(v37 + 132);
          v58 = *(_DWORD *)(v37 + 140);
          if ( *(_QWORD *)v37 )
            v94 = *(_DWORD *)(*(_QWORD *)v37 + 112LL);
          else
            v94 = 1;
          *(_DWORD *)(v37 + 132) = 0;
          if ( byte_1401278B0 )
          {
            if ( v8->Header.Type == 5 )
            {
              CompContext = v8->PktMonEdgeLower.CompContext;
              if ( CompContext )
              {
                if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(&v8->PktMonEdgeLower, v37, a3, 1LL);
                  NextIndicateReceiveNetBufferListsHandler = v70;
                  NextIndicateReceiveNetBufferListsContext = v72;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && v8->Header.Type == 5 && (VerifierContext = v8->VerifierContext) != 0LL )
            (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int, void *, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              NextIndicateReceiveNetBufferListsContext,
              v37,
              v58,
              v94,
              v57,
              VerifierContext,
              NextIndicateReceiveNetBufferListsHandler);
          else
            ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int))NextIndicateReceiveNetBufferListsHandler)(
              NextIndicateReceiveNetBufferListsContext,
              v37,
              v58,
              v94,
              v57);
          NextIndicateReceiveNetBufferListsHandler = v70;
          v37 = v56;
          NextIndicateReceiveNetBufferListsContext = v72;
        }
        while ( v56 );
        break;
      }
      *(_BYTE *)(v39 + 16) = 1;
      v40 = *v33;
      *v33 = 0LL;
      if ( v40 )
      {
        do
        {
          v41 = *(_QWORD *)(v40 + 112);
          v42 = *(_DWORD *)(v40 + 132);
          v43 = *(_DWORD *)(v40 + 140);
          if ( *(_QWORD *)v40 )
            v44 = *(_DWORD *)(*(_QWORD *)v40 + 112LL);
          else
            v44 = 1;
          *(_DWORD *)(v40 + 132) = 0;
          if ( byte_1401278B0 )
          {
            if ( v8->Header.Type == 5 )
            {
              v54 = v8->PktMonEdgeLower.CompContext;
              if ( v54 )
              {
                if ( (*((_DWORD *)v54 + 14) & 1) != 0 )
                {
                  PacketType = v8->PktMonEdgeLower.PacketType;
                  v52 = (*(_DWORD *)(v40 + 128) & 0x8000) == 0;
                  v79 = 0LL;
                  LODWORD(v81) = 0;
                  v80 = 0LL;
                  if ( v52 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                    {
                      EdgeHandle = v8->PktMonEdgeLower.EdgeHandle;
                      LOWORD(v79) = 40;
                      *(_QWORD *)((char *)&v80 + 4) = PacketType | 0x100000000LL;
                      *((_QWORD *)&v79 + 1) = v40;
                      LODWORD(v80) = 1;
                      v81 = 0LL;
                      (*(void (__fastcall **)(_QWORD, void *, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1)
                                                                                 + 40LL))(
                        xmmword_1401278D0,
                        EdgeHandle,
                        &v79,
                        0LL);
                      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                    }
                    NextIndicateReceiveNetBufferListsContext = v72;
                    NextIndicateReceiveNetBufferListsHandler = v70;
                  }
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && v8->Header.Type == 5 && (v65 = v8->VerifierContext) != 0LL )
            (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int, void *, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              NextIndicateReceiveNetBufferListsContext,
              v40,
              v43,
              v44,
              v42,
              v65,
              NextIndicateReceiveNetBufferListsHandler);
          else
            ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int))NextIndicateReceiveNetBufferListsHandler)(
              NextIndicateReceiveNetBufferListsContext,
              v40,
              v43,
              v44,
              v42);
          NextIndicateReceiveNetBufferListsHandler = v70;
          v40 = v41;
          NextIndicateReceiveNetBufferListsContext = v72;
        }
        while ( v41 );
        v39 = v76;
        v38 = v8;
      }
      *(_BYTE *)(v39 + 16) = 0;
      v33 = (__int64 *)v39;
      NextIndicateReceiveNetBufferListsHandler = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))v38->NextIndicateReceiveNetBufferListsHandler;
      NextIndicateReceiveNetBufferListsContext = (struct _NDIS_FILTER_BLOCK *)v38->NextIndicateReceiveNetBufferListsContext;
      v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
      v7 = v93;
      v70 = NextIndicateReceiveNetBufferListsHandler;
      v72 = NextIndicateReceiveNetBufferListsContext;
    }
    v45 = *v33;
    if ( *v33 )
    {
      *v33 = 0LL;
      do
      {
        v46 = *(_QWORD *)(v45 + 112);
        v47 = *(_DWORD *)(v45 + 132);
        v48 = *(_DWORD *)(v45 + 140);
        if ( *(_QWORD *)v45 )
          v49 = *(_DWORD *)(*(_QWORD *)v45 + 112LL);
        else
          v49 = 1;
        *(_DWORD *)(v45 + 132) = 0;
        if ( byte_1401278B0 )
        {
          if ( v8->Header.Type == 5 )
          {
            v59 = v8->PktMonEdgeLower.CompContext;
            if ( v59 )
            {
              if ( (*((_DWORD *)v59 + 14) & 1) != 0 )
                PktMonClientNblLogNdis(&v8->PktMonEdgeLower, v45, a3, 1LL);
            }
          }
        }
        if ( ndisVerifierNdisDispatch && v8->Header.Type == 5 && (v66 = v8->VerifierContext) != 0LL )
          (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int, void *, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 14))(
            v72,
            v45,
            v48,
            v49,
            v47,
            v66,
            v70);
        else
          ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, int))v70)(v72, v45, v48, v49, v47);
        v45 = v46;
      }
      while ( v46 );
    }
  }
  else
  {
    v28 = (unsigned int)Size;
    v29 = KeGetPcr()->Prcb.Number << 12;
    v30 = *(_QWORD *)(v29 + qword_1401270F8);
    LowLimit = v30;
    v31 = *(_QWORD *)(v29 + qword_1401270F0);
    HighLimit = v31;
    if ( v30 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v31 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v30 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v30 < v28 )
    {
      v60 = 0;
      Parameter[1] = a6;
      v61 = 24576;
      Parameter[2] = a7;
      v89 = 0;
      Parameter[0] = a5;
      Parameter[3] = v12;
      v87 = v10;
      v86 = a2;
      v88 = a4;
      if ( (unsigned int)Size > 0x6000 )
        v61 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
             Parameter,
             v61,
             0,
             0LL) < 0 )
      {
        if ( byte_1401278B0 && (*((_DWORD *)&a5->PktMonComp + 14) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)a5 + 784, (_DWORD)v12, v62, 1, -1073741670, -536866813);
        NdisSetStatusInNblChain(v12, -1073741670);
        v68 = (_SLIST_HEADER *)v12;
        if ( v12 )
        {
          do
          {
            v68 = (_SLIST_HEADER *)v68->Alignment;
            ++v60;
          }
          while ( v68 );
        }
        _InterlockedAdd(&a5->DroppedReceiveNbls, v60);
        if ( (a4 & 2) == 0 )
          ndisQueueStackExpansionFallbackNbls(a5, v12, 0);
      }
    }
    else
    {
      if ( byte_1401278B0 )
      {
        if ( a5->Header.Type == 5 )
        {
          v50 = a5->PktMonEdgeLower.CompContext;
          if ( v50 )
          {
            if ( (*((_DWORD *)v50 + 14) & 1) != 0 )
            {
              v51 = (struct _NDIS_OBJECT_HEADER)a5->PktMonEdgeLower.PacketType;
              v52 = (v12->NblFlags & 0x8000) == 0;
              v82 = 0LL;
              LODWORD(v84) = 0;
              v83 = 0LL;
              if ( v52 )
              {
                if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                {
                  v53 = a5->PktMonEdgeLower.EdgeHandle;
                  LOWORD(v82) = 40;
                  *((_QWORD *)&v82 + 1) = v12;
                  LODWORD(v83) = 1;
                  *(_QWORD *)((char *)&v83 + 4) = *(unsigned int *)&v51 | 0x100000000LL;
                  v84 = 0LL;
                  (*(void (__fastcall **)(_QWORD, void *, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
                    xmmword_1401278D0,
                    v53,
                    &v82,
                    0LL);
                  ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                }
              }
            }
          }
        }
      }
      if ( ndisVerifierNdisDispatch && a5->Header.Type == 5 && (v64 = a5->VerifierContext) != 0LL )
        (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, void *, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 14))(
          a6,
          v12,
          a2,
          (unsigned int)v10,
          a4,
          v64,
          a7);
      else
        ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))a7)(
          a6,
          v12,
          a2,
          (unsigned int)v10,
          a4);
    }
  }
}
