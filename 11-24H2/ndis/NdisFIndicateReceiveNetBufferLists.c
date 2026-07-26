/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x140025990
 * Callers:
 *     ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400A2790 (-IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001A6F0 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001A800 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001CCD0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001D7C0 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     PktMonClientNblLogNdis @ 0x1400206D0 (PktMonClientNblLogNdis.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140026980 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x140026CC0 (--$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0P.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140027A70 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031B90 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     NdisAllocateNetBufferListContext @ 0x1400433B0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140071670 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008ADA0 (NblContextVerifierBugcheckInternalError.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     TrackNblContextVerifierFailure @ 0x1400A2970 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  const struct _NDIS_FILTER_BLOCK *v6; // rcx
  unsigned int v7; // r13d
  ULONG v8; // r12d
  NDIS_PORT_NUMBER v9; // r15d
  int Type; // eax
  void (__fastcall *v12)(void *, struct _NET_BUFFER_LIST *, __int64, unsigned int, unsigned int); // rax
  __int64 v13; // r15
  __int64 v14; // r15
  void (__fastcall *v15)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r10
  struct _NDIS_FILTER_BLOCK *v16; // r11
  unsigned int Number; // r13d
  struct _NDIS_RCV_TRACKER_ARRAY *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 Pool2; // r15
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  PNET_BUFFER_LIST v23; // rcx
  unsigned __int64 v24; // rdx
  struct _NDIS_FILTER_BLOCK *v25; // rcx
  __int64 v26; // r9
  struct _NET_BUFFER_LIST **v27; // rcx
  struct _NDIS_OPEN_BLOCK *v28; // rdx
  struct _NDIS_OPEN_BLOCK *v29; // rdx
  struct _NET_BUFFER_LIST *v30; // r13
  ULONG v31; // ebx
  unsigned __int64 v32; // rcx
  const struct _NDIS_FILTER_BLOCK *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdi
  PNET_BUFFER_LIST j; // rbx
  unsigned __int64 v38; // r12
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  int v42; // eax
  struct _NET_BUFFER_LIST *v43; // r14
  __int64 v44; // r9
  struct _NET_BUFFER_LIST *v45; // r15
  PNET_BUFFER_LIST v46; // r12
  _SLIST_HEADER *Alignment; // rax
  int v48; // edx
  PNET_BUFFER_LIST v49; // rdx
  unsigned int v50; // ecx
  void *v51; // rax
  PNET_BUFFER_LIST v52; // r14
  char v53; // r12
  __int64 *v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rbx
  void (__fastcall *v60)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r14
  struct _NDIS_FILTER_BLOCK *v61; // r12
  __int64 v62; // rax
  unsigned int v63; // ecx
  unsigned int v64; // edx
  __int64 v65; // rdi
  __int64 v66; // rbx
  void (__fastcall *v67)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r14
  struct _NDIS_FILTER_BLOCK *v68; // r12
  __int64 v69; // rax
  unsigned int v70; // ecx
  unsigned int v71; // edx
  __int64 v72; // rdi
  unsigned int v73; // esi
  _QWORD *v74; // r9
  __int64 v75; // rax
  unsigned int CorrelationIds; // eax
  __int64 v77; // r9
  PNET_BUFFER_LIST v78; // rax
  ULONG v79; // edx
  PNET_BUFFER_LIST *p_Next; // rcx
  __int64 v81; // rax
  unsigned int v82; // r14d
  bool v83; // zf
  __int64 v84; // rdx
  struct _NDIS_FILTER_BLOCK *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // ecx
  int v90; // r8d
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // r8
  ULONG v94; // edx
  __int64 v95; // r8
  unsigned int Flags; // eax
  unsigned int v97; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r15
  PNET_BUFFER_LIST k; // rax
  PVOID Context; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v101; // [rsp+40h] [rbp-C0h]
  unsigned int v102; // [rsp+40h] [rbp-C0h]
  unsigned int v103; // [rsp+48h] [rbp-B8h]
  unsigned int v104; // [rsp+48h] [rbp-B8h]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-A8h] BYREF
  struct _NET_BUFFER_LIST *v107; // [rsp+60h] [rbp-A0h] BYREF
  PNET_BUFFER_LIST v108; // [rsp+68h] [rbp-98h]
  __int128 v109; // [rsp+70h] [rbp-90h] BYREF
  __int128 v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+90h] [rbp-70h]
  _QWORD Parameter[4]; // [rsp+98h] [rbp-68h] BYREF
  NDIS_PORT_NUMBER v113; // [rsp+B8h] [rbp-48h]
  ULONG v114; // [rsp+BCh] [rbp-44h]
  ULONG v115; // [rsp+C0h] [rbp-40h]
  int v116; // [rsp+C4h] [rbp-3Ch]
  _QWORD v117[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v118[54]; // [rsp+E0h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+298h] [rbp+198h] BYREF
  void (__fastcall *v120)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // [rsp+2A0h] [rbp+1A0h]
  char v121; // [rsp+2A0h] [rbp+1A0h]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v123; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v124; // [rsp+2A0h] [rbp+1A0h]
  ULONG v126; // [rsp+2B8h] [rbp+1B8h]

  v126 = NumberOfNetBufferLists;
  v6 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 65);
  v7 = 0;
  v8 = NumberOfNetBufferLists;
  v9 = PortNumber;
  Type = v6->Header.Type;
  if ( (_BYTE)Type != 17 && ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v6 )
  {
    if ( Type == 5 )
    {
      LOBYTE(v42) = FILTER_TEST_FLAG(v6, 1024);
    }
    else
    {
      if ( Type != 18 )
        goto LABEL_2;
      v42 = *(_DWORD *)&v6->StackExpansionFallback.WorkItemQueued >> 31;
    }
    if ( (_BYTE)v42 )
    {
      v122 = *((_QWORD *)NdisFilterHandle + 65);
      v107 = 0LL;
      v108 = (PNET_BUFFER_LIST)&v107;
      v43 = 0LL;
      memset(&v118[1], 0, 0x178uLL);
      v118[0] = NetBufferLists;
      v45 = NetBufferLists;
      v46 = (PNET_BUFFER_LIST)v118;
      if ( NetBufferLists )
      {
        do
        {
          if ( NdisAllocateNetBufferListContext(NetBufferLists, 8u, 0, 0x6376444Eu) )
          {
            TrackNblContextVerifierFailure(NetBufferLists, v122);
            v46->Link.Alignment = NetBufferLists->Link.Alignment;
            NetBufferLists->Link.Alignment = 0LL;
            v108->Link.Alignment = (unsigned __int64)NetBufferLists;
            v108 = NetBufferLists;
            NetBufferLists = (PNET_BUFFER_LIST)v46->Link.Alignment;
          }
          else
          {
            v46 = NetBufferLists;
            *(_QWORD *)&NetBufferLists->Context->ContextData[NetBufferLists->Context->Offset] = v122;
            NetBufferLists = (PNET_BUFFER_LIST)NetBufferLists->Link.Alignment;
          }
        }
        while ( NetBufferLists );
        v43 = v107;
        v45 = (struct _NET_BUFFER_LIST *)v118[0];
      }
      v126 = 0;
      Alignment = (_SLIST_HEADER *)v45;
      v8 = 0;
      if ( v45 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v8;
        }
        while ( Alignment );
        v126 = v8;
      }
      v107 = 0LL;
      v108 = (PNET_BUFFER_LIST)&v107;
      NetBufferLists = v45;
      if ( !v43 )
      {
LABEL_86:
        v9 = PortNumber;
        goto LABEL_2;
      }
      if ( byte_14011D800 && (*((_DWORD *)NdisFilterHandle + 210) & 2) != 0 )
        PktMonClientNblDrop(
          (__int64)NdisFilterHandle + 784,
          (__int64)v43,
          *((_DWORD *)NdisFilterHandle + 209),
          v44,
          (__int64)Context,
          1,
          3,
          -536866800);
      if ( (ReceiveFlags & 2) != 0 )
      {
LABEL_85:
        if ( !v45 )
          return;
        goto LABEL_86;
      }
      v94 = ReceiveFlags & 1;
      if ( *(_BYTE *)NdisFilterHandle == 5 )
      {
        v95 = *((_QWORD *)NdisFilterHandle + 65);
      }
      else
      {
        if ( *(_BYTE *)NdisFilterHandle != 17 )
          goto LABEL_201;
        v95 = *((_QWORD *)NdisFilterHandle + 314);
      }
      if ( v95 )
      {
        if ( *(_BYTE *)v95 == 5 )
        {
          ndisInvokeNextReceiveCompleteHandler(
            v43,
            v94,
            (struct _NDIS_OBJECT_HEADER *)v95,
            *(struct _NDIS_OBJECT_HEADER **)(v95 + 552),
            *(void **)(v95 + 536),
            *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v95 + 528));
          goto LABEL_85;
        }
        if ( *(_BYTE *)v95 == 17 )
        {
          ndisInvokeNextReceiveCompleteHandler(
            v43,
            v94,
            (struct _NDIS_OBJECT_HEADER *)v95,
            *(struct _NDIS_OBJECT_HEADER **)(v95 + 2544),
            *(void **)(v95 + 2528),
            *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v95 + 2640));
          goto LABEL_85;
        }
      }
LABEL_201:
      NblContextVerifierBugcheckInternalError((ULONG_PTR)NdisFilterHandle, (ULONG_PTR)v43);
    }
  }
LABEL_2:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 512) )
  {
    ndisNblVerifyRxIndication(
      NetBufferLists,
      v9,
      v8,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((enum _NDIS_MEDIUM *)NdisFilterHandle + 84));
    v52 = NetBufferLists;
    if ( NetBufferLists )
    {
      v53 = byte_14011CEC0;
      do
      {
        v52->Scratch = MmBadPointer;
        Flags = v52->Flags;
        v52->ChildRefCount = -892679478;
        if ( v53 )
        {
          v53 = 0;
          v97 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v53 = 1;
          v97 = Flags | 0xF0000;
        }
        byte_14011CEC0 = v53;
        v52->Flags = v97;
        for ( i = v52->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        v52 = (PNET_BUFFER_LIST)v52->Link.Alignment;
      }
      while ( v52 );
      v8 = v126;
      v9 = PortNumber;
    }
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v49 = NetBufferLists;
    if ( (__int64)NetBufferLists->NetBufferListInfo[13] > 0 )
    {
      v74 = (_QWORD *)NetBufferLists->Link.Alignment;
      if ( NetBufferLists->Link.Alignment )
      {
        do
        {
          v75 = v74[31];
          if ( !v75 || v75 < 0 )
          {
            CorrelationIds = ndisGenerateCorrelationIds(1u);
            v74[31] = CorrelationIds;
          }
          v74 = (_QWORD *)*v74;
        }
        while ( v74 );
      }
    }
    else
    {
      v50 = _InterlockedExchangeAdd(&dword_14011AF28, v8);
      if ( v50 + v8 < v50 )
        v50 = _InterlockedExchangeAdd(&dword_14011AF28, v8);
      do
      {
        if ( (__int64)v49->NetBufferListInfo[13] <= 0 )
        {
          v51 = (void *)v50++;
          v49->NetBufferListInfo[13] = v51;
        }
        v49 = (PNET_BUFFER_LIST)v49->Link.Alignment;
      }
      while ( v49 );
    }
  }
  if ( byte_14011D800 )
  {
    v81 = *((_QWORD *)NdisFilterHandle + 114);
    if ( v81 )
    {
      if ( (*(_DWORD *)(v81 + 56) & 1) != 0 )
      {
        v82 = *((_DWORD *)NdisFilterHandle + 230);
        v83 = (NetBufferLists->NblFlags & 0x8000) == 0;
        v109 = 0LL;
        LODWORD(v111) = 0;
        v110 = 0LL;
        if ( v83 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v84 = *((_QWORD *)NdisFilterHandle + 113);
            LOWORD(v109) = 40;
            *((_QWORD *)&v109 + 1) = NetBufferLists;
            LODWORD(v110) = 1;
            *(_QWORD *)((char *)&v110 + 4) = v82 | 0x100000000LL;
            v111 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1) + 40LL))(
              xmmword_14011D820,
              v84,
              &v109,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v12 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle + 79);
  if ( v12 != ndisFilterIndicateReceiveNetBufferLists )
  {
    v12(NdisFilterHandle, NetBufferLists, v9, v8, ReceiveFlags);
LABEL_42:
    if ( (ReceiveFlags & 2) == 0 )
      return;
LABEL_48:
    if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
    v33 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 65);
    v34 = v33->Header.Type;
    if ( (_BYTE)v34 != 17 && ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v33 )
    {
      if ( v34 == 5 )
      {
        LOBYTE(v35) = FILTER_TEST_FLAG(v33, 1024);
      }
      else
      {
        if ( v34 != 18 )
          return;
        v35 = *(_DWORD *)&v33->StackExpansionFallback.WorkItemQueued >> 31;
      }
      if ( (_BYTE)v35 )
      {
        v36 = *((_QWORD *)NdisFilterHandle + 65);
        for ( j = NetBufferLists; j; j = (PNET_BUFFER_LIST)j->Link.Alignment )
        {
          if ( *(_QWORD *)&j->Context->ContextData[j->Context->Offset] != v36 )
            NblContextVerifierBugcheckContextCorruption(j, NetBufferLists, v36);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
    }
    return;
  }
  LODWORD(v12) = KeGetPcr()->Prcb.Number;
  v13 = *((_QWORD *)NdisFilterHandle + 53) + 96LL * (_QWORD)v12;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferLists,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
      *((_QWORD *)NdisFilterHandle + 64),
      ((ReceiveFlags & 2) != 0) + 130,
      ReceiveFlags & 1);
  if ( (ReceiveFlags & 2) != 0 || (ReceiveFlags & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v13 + 64) )
  {
    v14 = *((_QWORD *)NdisFilterHandle + 65);
    v15 = (void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle + 62);
    v16 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 63);
    v120 = v15;
    v101 = v16;
    if ( *(_BYTE *)v14 == 17 )
    {
      if ( v15 != ndisMTopReceiveNetBufferLists )
      {
        v15(v16, NetBufferLists, PortNumber, v126, ReceiveFlags);
        goto LABEL_41;
      }
      if ( (NetBufferLists->NblFlags & 0x8000) != 0 )
      {
        ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v16[1].PMProtocolOffloadList.Next)(
          v16,
          NetBufferLists,
          PortNumber,
          v126,
          ReceiveFlags);
        goto LABEL_41;
      }
      if ( !BYTE1(v16[1].NicSwitchCurrentCapabilities.NumberOfIndirectionTableEntriesPerNonDefaultPFVPort) )
      {
        ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v16[1].WOLPatternList.Next)(
          v16,
          NetBufferLists,
          PortNumber,
          v126,
          ReceiveFlags);
        goto LABEL_41;
      }
      LowLimit = 0LL;
      v103 = 0;
      v121 = 0;
      if ( (ReceiveFlags & 1) == 0 )
      {
        if ( KeGetCurrentIrql() != 2 )
          goto LABEL_88;
        v16 = v101;
      }
      if ( ndisPerProcRcvTrackers )
      {
        Number = KeGetPcr()->Prcb.Number;
        v18 = ndisPerProcRcvTrackers;
        v19 = 2096LL * Number;
        v103 = Number;
        v20 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v19);
        if ( (unsigned int)v20 < 3 )
        {
          v121 = 1;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v19) = v20 + 1;
          Pool2 = (__int64)v18 + 696 * v20 + v19 + 8;
          goto LABEL_17;
        }
      }
LABEL_88:
      Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v48) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v48,
            4,
            11,
            (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
        }
        v30 = NetBufferLists;
        goto LABEL_93;
      }
      v16 = v101;
LABEL_17:
      RcvLinkSpeedIndicateUp = (_QWORD *)v16->RcvLinkSpeedIndicateUp;
      v23 = NetBufferLists;
      *(_BYTE *)(Pool2 + 692) = 0;
      if ( (ReceiveFlags & 2) != 0 )
      {
        v24 = LowLimit;
      }
      else
      {
        do
        {
          v24 = (unsigned __int64)v23;
          v23->Flags = v23->Flags & 0xFFFFFFF0 | 4;
          v23 = (PNET_BUFFER_LIST)v23->Link.Alignment;
        }
        while ( v23 );
      }
      v25 = (struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[41];
      LowLimit = (unsigned __int64)v25;
      if ( v25 && *((_BYTE *)v25->FilterModuleContext + 56) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v25, NetBufferLists, PortNumber, v126, ReceiveFlags);
        v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
        *(_QWORD *)(Pool2 + 64) = 0LL;
        *(_DWORD *)(Pool2 + 80) = 0;
        goto LABEL_32;
      }
      *(_QWORD *)(Pool2 + 32) = v24;
      *(_DWORD *)(Pool2 + 44) = v126;
      *(_QWORD *)(Pool2 + 24) = NetBufferLists;
      *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
      *(_DWORD *)(Pool2 + 16) = ReceiveFlags;
      *(_QWORD *)Pool2 = v16;
      *(_DWORD *)(Pool2 + 40) = PortNumber;
      ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v126, (char *)PortNumber);
      v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      if ( !*(_QWORD *)(Pool2 + 64) )
      {
        if ( !*(_DWORD *)(Pool2 + 688) )
        {
LABEL_32:
          if ( !*(_BYTE *)(Pool2 + 692) )
          {
LABEL_94:
            if ( v121 )
            {
              --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v103);
            }
            else if ( Pool2 )
            {
              ExFreePoolWithTag((PVOID)Pool2, 0);
            }
            goto LABEL_41;
          }
          v30 = *v27;
LABEL_93:
          if ( v30 )
          {
            v85 = v101;
            if ( byte_14011D800 && ((__int64)v101[4].PendingOidRequest & 2) != 0 )
            {
              PktMonClientNblDrop(
                (__int64)&v101[4].HigherFilter,
                (__int64)v30,
                HIDWORD(v101[4].OidRequestList.Blink),
                v26,
                (__int64)Context,
                1,
                204,
                -536866809);
              v85 = v101;
            }
            if ( (ReceiveFlags & 2) == 0 )
              ndisReturnNetBufferListsInternal(v85, v30, ReceiveFlags & 1, 0LL);
          }
          goto LABEL_94;
        }
        v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      }
      if ( !*RcvLinkSpeedIndicateUp || PortNumber )
      {
        *(_BYTE *)(Pool2 + 692) = 1;
      }
      else
      {
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      }
      if ( !LowLimit )
      {
        v28 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
        if ( v28 )
          ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v28);
        v29 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
        if ( v29 )
        {
          if ( (ReceiveFlags & 2) != 0 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v29);
          else
            ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        }
        v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      }
      goto LABEL_32;
    }
    if ( (ReceiveFlags & 2) == 0 )
    {
      if ( (ReceiveFlags & 1) == 0 )
      {
        if ( KeGetCurrentIrql() != 2 )
          goto LABEL_65;
        v15 = v120;
        v16 = v101;
      }
      LODWORD(v12) = KeGetPcr()->Prcb.Number;
      v54 = v117;
      v55 = NetBufferLists->Link.Alignment;
      v56 = PortNumber;
      v104 = (unsigned int)v12;
      v117[2] = 0LL;
      v117[0] = NetBufferLists;
      v117[1] = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = ReceiveFlags;
      NetBufferLists->Status = PortNumber;
      if ( v55 )
        *(_QWORD *)(v55 + 112) = v126;
      while ( *(_BYTE *)v14 == 5 && *v54 )
      {
        v57 = v14;
        v58 = *(_QWORD *)(v14 + 424) + 96LL * (_QWORD)v12;
        if ( *(_BYTE *)(v58 + 64) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
            v14,
            v15,
            v16,
            v54);
          break;
        }
        *(_BYTE *)(v58 + 64) = 1;
        v59 = *v54;
        *v54 = 0LL;
        if ( v59 )
        {
          v60 = v120;
          v61 = v101;
          do
          {
            v62 = *(_QWORD *)v59;
            v63 = *(_DWORD *)(v59 + 132);
            v64 = *(_DWORD *)(v59 + 140);
            v65 = *(_QWORD *)(v59 + 112);
            v102 = v63;
            LODWORD(LowLimit) = v64;
            if ( v62 )
              v123 = *(_DWORD *)(v62 + 112);
            else
              v123 = 1;
            *(_DWORD *)(v59 + 132) = 0;
            if ( byte_14011D800 )
            {
              if ( *(_BYTE *)v14 == 5 )
              {
                v87 = *(_QWORD *)(v14 + 872);
                if ( v87 )
                {
                  if ( (*(_DWORD *)(v87 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v14 + 848, v59, v56, 1);
                    v63 = v102;
                    v64 = LowLimit;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v91 = *(_QWORD *)(v14 + 776)) != 0 )
              (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v61,
                v59,
                v64,
                v123,
                v63,
                v91,
                v60);
            else
              v60(v61, (struct _NET_BUFFER_LIST *)v59, v64, v123, v63);
            v59 = v65;
          }
          while ( v65 );
          v57 = v14;
        }
        v12 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64, unsigned int, unsigned int))v104;
        v54 = (__int64 *)(v58 + 48);
        *(_BYTE *)(v58 + 64) = 0;
        v15 = *(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v57 + 496);
        v16 = *(struct _NDIS_FILTER_BLOCK **)(v57 + 504);
        v14 = *(_QWORD *)(v14 + 520);
        v120 = v15;
        v101 = v16;
      }
      v66 = *v54;
      if ( *v54 )
      {
        v67 = v120;
        v68 = v101;
        *v54 = 0LL;
        do
        {
          v69 = *(_QWORD *)v66;
          v70 = *(_DWORD *)(v66 + 132);
          v71 = *(_DWORD *)(v66 + 140);
          v72 = *(_QWORD *)(v66 + 112);
          v124 = v70;
          LODWORD(LowLimit) = v71;
          if ( v69 )
            v73 = *(_DWORD *)(v69 + 112);
          else
            v73 = 1;
          *(_DWORD *)(v66 + 132) = 0;
          if ( byte_14011D800 )
          {
            if ( *(_BYTE *)v14 == 5 )
            {
              v88 = *(_QWORD *)(v14 + 872);
              if ( v88 )
              {
                if ( (*(_DWORD *)(v88 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(v14 + 848, v66, v56, 1);
                  v70 = v124;
                  v71 = LowLimit;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v93 = *(_QWORD *)(v14 + 776)) != 0 )
          {
            (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v68,
              v66,
              v71,
              v73,
              v70,
              v93,
              v67);
          }
          else
          {
            v67(v101, (struct _NET_BUFFER_LIST *)v66, v71, v73, v70);
            v68 = v101;
          }
          v66 = v72;
        }
        while ( v72 );
      }
      return;
    }
LABEL_65:
    v38 = (unsigned int)Size;
    v39 = KeGetPcr()->Prcb.Number << 12;
    v40 = *(_QWORD *)(v39 + qword_14011D048);
    LowLimit = v40;
    v41 = *(_QWORD *)(v39 + qword_14011D040);
    HighLimit = v41;
    if ( v40 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v41 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v40 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v40 < v38 )
    {
      v89 = 24576;
      Parameter[1] = v101;
      v113 = PortNumber;
      v116 = 0;
      Parameter[0] = v14;
      Parameter[2] = v120;
      Parameter[3] = NetBufferLists;
      v114 = v126;
      v115 = ReceiveFlags;
      if ( (unsigned int)Size > 0x6000 )
        v89 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
             Parameter,
             v89,
             0,
             0LL) < 0 )
      {
        if ( byte_14011D800 && (*(_DWORD *)(v14 + 840) & 2) != 0 )
          PktMonClientNblDropNdis(v14 + 784, (_DWORD)NetBufferLists, v90, 1, -1073741670, -536866813);
        NdisSetStatusInNblChain(NetBufferLists, -1073741670);
        for ( k = NetBufferLists; k; ++v7 )
          k = (PNET_BUFFER_LIST)k->Link.Alignment;
        _InterlockedAdd((volatile signed __int32 *)(v14 + 292), v7);
        if ( (ReceiveFlags & 2) == 0 )
        {
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v14, NetBufferLists, 0);
          return;
        }
        goto LABEL_46;
      }
    }
    else
    {
      if ( byte_14011D800 )
      {
        if ( *(_BYTE *)v14 == 5 )
        {
          v86 = *(_QWORD *)(v14 + 872);
          if ( v86 )
          {
            if ( (*(_DWORD *)(v86 + 56) & 1) != 0 )
              PktMonClientNblLogNdis(v14 + 848, (__int64)NetBufferLists, v41, 1);
          }
        }
      }
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v92 = *(_QWORD *)(v14 + 776)) != 0 )
        (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 14))(
          v101,
          NetBufferLists,
          PortNumber,
          v126,
          ReceiveFlags,
          v92,
          v120);
      else
        v120(v101, NetBufferLists, PortNumber, v126, ReceiveFlags);
    }
LABEL_41:
    if ( (ReceiveFlags & 2) == 0 )
      goto LABEL_42;
LABEL_46:
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 64),
        *((_QWORD *)NdisFilterHandle + 81),
        0x8Cu,
        ReceiveFlags & 1);
    goto LABEL_48;
  }
  v31 = ReceiveFlags | 1;
  if ( !*(_QWORD *)(v13 + 48) )
  {
    *(_QWORD *)(v13 + 48) = NetBufferLists;
    goto LABEL_38;
  }
  v77 = *(_QWORD *)(v13 + 56);
  if ( PortNumber != *(_DWORD *)(v77 + 140) || v31 != *(_DWORD *)(v77 + 132) || (ReceiveFlags & 0xCB00) != 0 )
  {
    *(_QWORD *)(v77 + 112) = NetBufferLists;
LABEL_38:
    *(_QWORD *)(v13 + 56) = NetBufferLists;
    v32 = NetBufferLists->Link.Alignment;
    NetBufferLists->Scratch = 0LL;
    NetBufferLists->ChildRefCount = v31;
    NetBufferLists->Status = PortNumber;
    if ( v32 )
      *(_QWORD *)(v32 + 112) = v126;
    return;
  }
  v78 = *(PNET_BUFFER_LIST *)v77;
  if ( *(_QWORD *)v77 )
  {
    v79 = LODWORD(v78->Scratch) + v126;
    do
    {
      p_Next = &v78->Next;
      v78 = (PNET_BUFFER_LIST)v78->Link.Alignment;
    }
    while ( v78 );
  }
  else
  {
    v79 = v126 + 1;
    p_Next = *(PNET_BUFFER_LIST **)(v13 + 56);
  }
  *p_Next = NetBufferLists;
  if ( *(_QWORD *)v77 )
    *(_QWORD *)(*(_QWORD *)v77 + 112LL) = v79;
}
