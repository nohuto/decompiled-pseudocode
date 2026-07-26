/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x140033A40
 * Callers:
 *     ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400AA940 (-IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x140010D30 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x14001A140 (NdisFreeNetBufferListContext.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140032C90 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140033770 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x140033790 (--$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0P.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140035040 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ndisGenerateCorrelationIds @ 0x1400352E0 (ndisGenerateCorrelationIds.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14004C7D0 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     NdisAllocateNetBufferListContext @ 0x14005F890 (NdisAllocateNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x140096000 (NblContextVerifierBugcheckInternalError.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400AA9A8 (NblContextVerifierBugcheckContextCorruption.c)
 *     TrackNblContextVerifierFailure @ 0x1400AAB20 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  ULONG v5; // r12d
  __int64 v6; // r14
  NDIS_HANDLE v7; // rsi
  const struct _NDIS_FILTER_BLOCK *v8; // rcx
  ULONG v9; // r15d
  NDIS_PORT_NUMBER v10; // edi
  int Type; // eax
  void (*v13)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r15
  ULONG v21; // r9d
  __int64 v22; // r10
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r8
  PNET_BUFFER_LIST v25; // r15
  unsigned __int64 v26; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  void (__fastcall *v32)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r14
  __int64 v33; // r15
  unsigned int Number; // r14d
  struct _NDIS_RCV_TRACKER_ARRAY *v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 Pool2; // rdi
  _QWORD *v39; // r14
  PNET_BUFFER_LIST v40; // rcx
  PNET_BUFFER_LIST v41; // rdx
  struct _NDIS_OPEN_BLOCK *v42; // rcx
  int v43; // r9d
  struct _NET_BUFFER_LIST **v44; // rax
  struct _NET_BUFFER_LIST **v45; // rcx
  struct _NDIS_OPEN_BLOCK *v46; // rdx
  struct _NDIS_OPEN_BLOCK *v47; // rdx
  struct _NET_BUFFER_LIST *v48; // r14
  int v49; // r12d
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  __int64 v54; // r8
  KIRQL CurrentIrql; // al
  int v56; // eax
  __int64 v57; // r15
  struct _NET_BUFFER_LIST *v58; // rbx
  int v59; // r9d
  struct _NET_BUFFER_LIST *v60; // rdi
  PNET_BUFFER_LIST v61; // r14
  _SLIST_HEADER *Alignment; // rax
  unsigned __int64 v63; // rax
  int v64; // edx
  PNET_BUFFER_LIST v65; // rdx
  unsigned int v66; // ecx
  void *v67; // rax
  PNET_BUFFER_LIST v68; // rbx
  char v69; // r14
  __int64 *v70; // rsi
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // rbx
  int v76; // ecx
  unsigned int v77; // edx
  __int64 v78; // rsi
  __int64 v79; // rbx
  unsigned int v80; // ecx
  __int64 v81; // rsi
  unsigned int v82; // r13d
  unsigned int v83; // r12d
  _QWORD *v84; // r9
  __int64 v85; // rax
  unsigned int CorrelationIds; // eax
  __int64 v87; // rdx
  PNET_BUFFER_LIST v88; // rax
  ULONG v89; // r8d
  PNET_BUFFER_LIST *p_Next; // rcx
  __int64 v91; // rax
  unsigned int v92; // ebx
  bool v93; // zf
  __int64 v94; // rdx
  unsigned int v95; // r12d
  unsigned __int64 v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // r14
  unsigned __int64 v99; // rbx
  PNET_BUFFER_LIST v100; // r14
  unsigned __int64 v101; // rdi
  __int64 v102; // r12
  __int64 v103; // rax
  unsigned __int64 v104; // r15
  unsigned __int64 v105; // rdx
  _QWORD *v106; // rcx
  unsigned __int64 v107; // r8
  KIRQL v108; // al
  unsigned __int64 v109; // rdx
  _QWORD *v110; // rcx
  const struct _NDIS_FILTER_BLOCK *v111; // rcx
  int v112; // eax
  int v113; // eax
  __int64 v114; // rdi
  PNET_BUFFER_LIST k; // rbx
  KIRQL v116; // al
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // ecx
  int v121; // r8d
  __int64 v122; // r8
  __int64 v123; // rcx
  __int64 v124; // rdx
  ULONG v125; // edx
  __int64 v126; // r8
  unsigned int Flags; // eax
  unsigned int v128; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rdi
  PNET_BUFFER_LIST v130; // rax
  unsigned int j; // ecx
  int v132; // [rsp+28h] [rbp-D8h]
  char v133[8]; // [rsp+30h] [rbp-D0h]
  int v134; // [rsp+38h] [rbp-C8h]
  char v135; // [rsp+40h] [rbp-C0h]
  char v136; // [rsp+40h] [rbp-C0h]
  char v137; // [rsp+40h] [rbp-C0h]
  char v138; // [rsp+44h] [rbp-BCh]
  unsigned int v139; // [rsp+44h] [rbp-BCh]
  unsigned int v140; // [rsp+44h] [rbp-BCh]
  __int64 v141; // [rsp+48h] [rbp-B8h]
  struct _NDIS_OPEN_BLOCK *v142; // [rsp+48h] [rbp-B8h]
  __int64 v143; // [rsp+48h] [rbp-B8h]
  __int64 v144; // [rsp+50h] [rbp-B0h]
  unsigned int v145; // [rsp+50h] [rbp-B0h]
  unsigned int v146; // [rsp+50h] [rbp-B0h]
  __int64 v147; // [rsp+50h] [rbp-B0h]
  __int64 v148; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v149; // [rsp+58h] [rbp-A8h]
  unsigned int v150[2]; // [rsp+60h] [rbp-A0h]
  unsigned int v151[2]; // [rsp+60h] [rbp-A0h]
  int v152; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v153; // [rsp+68h] [rbp-98h]
  __int64 v154; // [rsp+68h] [rbp-98h]
  unsigned __int64 v155; // [rsp+70h] [rbp-90h]
  unsigned __int64 v156; // [rsp+70h] [rbp-90h]
  struct _NET_BUFFER_LIST *v157; // [rsp+78h] [rbp-88h] BYREF
  PNET_BUFFER_LIST v158; // [rsp+80h] [rbp-80h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-70h] BYREF
  __int128 v161; // [rsp+98h] [rbp-68h] BYREF
  __int128 v162; // [rsp+A8h] [rbp-58h]
  __int64 v163; // [rsp+B8h] [rbp-48h]
  _QWORD Parameter[4]; // [rsp+C0h] [rbp-40h] BYREF
  NDIS_PORT_NUMBER v165; // [rsp+E0h] [rbp-20h]
  ULONG v166; // [rsp+E4h] [rbp-1Ch]
  ULONG v167; // [rsp+E8h] [rbp-18h]
  int v168; // [rsp+ECh] [rbp-14h]
  _QWORD v169[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v170[54]; // [rsp+110h] [rbp+10h] BYREF
  _UNKNOWN *retaddr; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v173; // [rsp+2D0h] [rbp+1D0h]
  unsigned int v174; // [rsp+2D0h] [rbp+1D0h]
  ULONG v176; // [rsp+2E8h] [rbp+1E8h]
  ULONG ReceiveFlagsa; // [rsp+2F0h] [rbp+1F0h]

  v176 = NumberOfNetBufferLists;
  v5 = ReceiveFlags;
  v6 = 0LL;
  v7 = NdisFilterHandle;
  v148 = 0LL;
  v8 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 65);
  v9 = NumberOfNetBufferLists;
  v10 = PortNumber;
  Type = v8->Header.Type;
  if ( (_BYTE)Type != 17 && ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v8 )
  {
    if ( Type == 5 )
    {
      LOBYTE(v56) = FILTER_TEST_FLAG(v8, 1024);
    }
    else
    {
      if ( Type != 18 )
        goto LABEL_2;
      v56 = *(_DWORD *)&v8->StackExpansionFallback.WorkItemQueued >> 31;
    }
    if ( (_BYTE)v56 )
    {
      v57 = *((_QWORD *)v7 + 65);
      v58 = 0LL;
      v158 = (PNET_BUFFER_LIST)&v157;
      v157 = 0LL;
      memset(&v170[1], 0, 0x178uLL);
      v170[0] = NetBufferLists;
      v60 = NetBufferLists;
      v61 = (PNET_BUFFER_LIST)v170;
      if ( NetBufferLists )
      {
        do
        {
          if ( NdisAllocateNetBufferListContext(NetBufferLists, 8u, 0, 0x6376444Eu) )
          {
            TrackNblContextVerifierFailure(NetBufferLists, v57);
            v61->Link.Alignment = NetBufferLists->Link.Alignment;
            NetBufferLists->Link.Alignment = 0LL;
            v158->Link.Alignment = (unsigned __int64)NetBufferLists;
            v158 = NetBufferLists;
            NetBufferLists = (PNET_BUFFER_LIST)v61->Link.Alignment;
          }
          else
          {
            v61 = NetBufferLists;
            *(_QWORD *)&NetBufferLists->Context->ContextData[NetBufferLists->Context->Offset] = v57;
            NetBufferLists = (PNET_BUFFER_LIST)NetBufferLists->Link.Alignment;
          }
        }
        while ( NetBufferLists );
        v58 = v157;
        v60 = (struct _NET_BUFFER_LIST *)v170[0];
      }
      v6 = 0LL;
      Alignment = (_SLIST_HEADER *)v60;
      v176 = 0;
      v9 = 0;
      if ( v60 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v9;
        }
        while ( Alignment );
        v176 = v9;
      }
      v157 = 0LL;
      v158 = (PNET_BUFFER_LIST)&v157;
      NetBufferLists = v60;
      if ( !v58 )
      {
LABEL_107:
        v10 = PortNumber;
        goto LABEL_2;
      }
      if ( byte_1401278B0 && (*((_DWORD *)v7 + 210) & 2) != 0 )
      {
        v134 = -536866800;
        *(_DWORD *)v133 = 3;
        v132 = 1;
        PktMonClientNblDrop((_DWORD)v7 + 784, (_DWORD)v58, *((_DWORD *)v7 + 209), v59);
      }
      if ( (ReceiveFlags & 2) != 0 )
      {
LABEL_106:
        if ( !v60 )
          return;
        goto LABEL_107;
      }
      v125 = ReceiveFlags & 1;
      if ( *(_BYTE *)v7 == 5 )
      {
        v126 = *((_QWORD *)v7 + 65);
      }
      else
      {
        if ( *(_BYTE *)v7 != 17 )
          goto LABEL_287;
        v126 = *((_QWORD *)v7 + 314);
      }
      if ( v126 )
      {
        if ( *(_BYTE *)v126 == 5 )
        {
          ndisInvokeNextReceiveCompleteHandler(
            v58,
            v125,
            (struct _NDIS_OBJECT_HEADER *)v126,
            *(struct _NDIS_OBJECT_HEADER **)(v126 + 552),
            *(void **)(v126 + 536),
            *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v126 + 528));
          goto LABEL_106;
        }
        if ( *(_BYTE *)v126 == 17 )
        {
          ndisInvokeNextReceiveCompleteHandler(
            v58,
            v125,
            (struct _NDIS_OBJECT_HEADER *)v126,
            *(struct _NDIS_OBJECT_HEADER **)(v126 + 2544),
            *(void **)(v126 + 2528),
            *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v126 + 2640));
          goto LABEL_106;
        }
      }
LABEL_287:
      NblContextVerifierBugcheckInternalError((ULONG_PTR)v7, (ULONG_PTR)v58);
    }
  }
LABEL_2:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v7, 512) )
  {
    ndisNblVerifyRxIndication(
      NetBufferLists,
      v10,
      v9,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)v7,
      *((enum _NDIS_MEDIUM *)v7 + 84));
    v68 = NetBufferLists;
    if ( NetBufferLists )
    {
      v69 = byte_140126F70;
      do
      {
        v68->Scratch = MmBadPointer;
        Flags = v68->Flags;
        v68->ChildRefCount = -892679478;
        if ( v69 )
        {
          v69 = 0;
          v128 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v69 = 1;
          v128 = Flags | 0xF0000;
        }
        byte_140126F70 = v69;
        v68->Flags = v128;
        for ( i = v68->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        v68 = (PNET_BUFFER_LIST)v68->Link.Alignment;
      }
      while ( v68 );
      v10 = PortNumber;
      v6 = 0LL;
    }
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v65 = NetBufferLists;
    if ( (__int64)NetBufferLists->NetBufferListInfo[13] > 0 )
    {
      v84 = (_QWORD *)NetBufferLists->Link.Alignment;
      if ( NetBufferLists->Link.Alignment )
      {
        do
        {
          v85 = v84[31];
          if ( !v85 || v85 < 0 )
          {
            CorrelationIds = ndisGenerateCorrelationIds(1LL, v65);
            v84[31] = CorrelationIds;
          }
          v84 = (_QWORD *)*v84;
        }
        while ( v84 );
      }
    }
    else
    {
      v66 = _InterlockedExchangeAdd(&dword_140124F28, v9);
      if ( v66 + v9 < v66 )
        v66 = _InterlockedExchangeAdd(&dword_140124F28, v9);
      do
      {
        if ( (__int64)v65->NetBufferListInfo[13] <= 0 )
        {
          v67 = (void *)v66++;
          v65->NetBufferListInfo[13] = v67;
        }
        v65 = (PNET_BUFFER_LIST)v65->Link.Alignment;
      }
      while ( v65 );
    }
  }
  if ( byte_1401278B0 )
  {
    v91 = *((_QWORD *)v7 + 114);
    if ( v91 )
    {
      if ( (*(_DWORD *)(v91 + 56) & 1) != 0 )
      {
        v92 = *((_DWORD *)v7 + 230);
        v93 = (NetBufferLists->NblFlags & 0x8000) == 0;
        v161 = 0LL;
        LODWORD(v163) = 0;
        v162 = 0LL;
        if ( v93 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v94 = *((_QWORD *)v7 + 113);
            LOWORD(v161) = 40;
            *((_QWORD *)&v161 + 1) = NetBufferLists;
            LODWORD(v162) = 1;
            *(_QWORD *)((char *)&v162 + 4) = v92 | 0x100000000LL;
            v163 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
              xmmword_1401278D0,
              v94,
              &v161,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v13 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)v7 + 79);
  if ( v13 != ndisFilterIndicateReceiveNetBufferLists )
  {
    ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, int, _DWORD, int))v13)(
      v7,
      NetBufferLists,
      v10,
      v9,
      ReceiveFlags,
      v132,
      *(_DWORD *)v133,
      v134);
    if ( (ReceiveFlags & 2) == 0 )
      return;
    goto LABEL_224;
  }
  LODWORD(v13) = KeGetPcr()->Prcb.Number;
  v14 = 3LL * (_QWORD)v13;
  v15 = *(unsigned int *)ndisNblTrackerMode;
  v16 = 32 * v14 + *((_QWORD *)v7 + 53) + 48LL;
  v141 = v16;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v17 = *((_QWORD *)v7 + 81);
    LODWORD(v18) = 0;
    v19 = *((_QWORD *)v7 + 64);
    v20 = ndisNblTrackerEpoch;
    v155 = v17;
    v21 = ReceiveFlags & 1;
    *(_QWORD *)v150 = 0LL;
    v138 = ReceiveFlags & 1;
    v22 = 0LL;
    v144 = 0LL;
    v135 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        (unsigned __int64)NetBufferLists,
        v17,
        (ReceiveFlags & 2 | 0x104) >> 1,
        (void *)v19,
        v21);
      LOBYTE(v21) = ReceiveFlags & 1;
      v22 = 0LL;
      v17 = v155;
    }
    v23 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      v15 = 2 * v20;
      v24 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v23 = (2 * v20) ^ (v19 ^ (2 * v20)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v24 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v153 = v24;
    v25 = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v26 = (unsigned __int64)v25->NetBufferListInfo[27];
        while ( v25->NetBufferListInfo[27] == (void *)v26 )
        {
          if ( v26 )
          {
            if ( (v26 & 4) != 0 )
              goto LABEL_130;
          }
          else if ( !v25->SourceHandle )
          {
            v63 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v17 & 1) != 0 )
              v63 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v25->SourceHandle = (void *)v63;
          }
          SourceHandle = (unsigned __int8 *)v25->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(v18) = *SourceHandle;
            if ( (unsigned __int8)(v18 - 17) <= 1u || (_BYTE)v18 == 5 )
            {
              if ( SourceHandle != (unsigned __int8 *)v24 || v25->ParentNetBufferList )
              {
                ++v6;
                v15 = v23;
              }
              else
              {
                ++v22;
                v15 = 24LL;
                v144 = v22;
                ++v6;
              }
              goto LABEL_20;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v133 = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v25,
                *(_QWORD *)v133);
LABEL_313:
              v24 = v153;
              v22 = v144;
              v17 = v155;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v25);
            goto LABEL_313;
          }
LABEL_130:
          v15 = v23 | 4;
LABEL_20:
          v25->NetBufferListInfo[27] = (void *)v15;
          v25 = (PNET_BUFFER_LIST)v25->Link.Alignment;
          if ( !v25 )
            break;
        }
        v28 = *(_QWORD *)v150 - v6;
        LOBYTE(v21) = v138;
        *(_QWORD *)v151 = *(_QWORD *)v150 - v6;
        if ( (v26 & 1) == 0 || !v28 )
          goto LABEL_26;
        if ( v138 || v135 )
        {
          v15 = 16 * ((v26 >> 1) & 1);
          v18 = v15 + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v138 )
            goto LABEL_84;
          goto LABEL_25;
        }
        v135 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v28 = *(_QWORD *)v151;
        if ( CurrentIrql == 2 )
        {
          LOBYTE(v21) = 1;
          v138 = 1;
          v18 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_25:
          v15 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)v18 + (unsigned int)v15) += v28;
          goto LABEL_26;
        }
        LOBYTE(v21) = 0;
        v15 = 16 * ((v26 >> 1) & 1);
        v138 = 0;
        v18 = v15 + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_84:
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 8), v28);
LABEL_26:
        v24 = v153;
        v22 = v144;
        v17 = v155;
        *(_QWORD *)v150 = v6;
        if ( !v25 )
        {
          v7 = NdisFilterHandle;
          v5 = ReceiveFlags;
          break;
        }
      }
    }
    v29 = v6 - v22;
    if ( (v23 & 1) == 0 || !v29 )
      goto LABEL_33;
    if ( (_BYTE)v21 || v135 )
    {
      v15 = 16 * ((v23 >> 1) & 1);
      v30 = v15 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v21 )
      {
LABEL_63:
        _InterlockedAdd64((volatile signed __int64 *)(v30 + 8), v29);
        goto LABEL_33;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v15 = 16 * ((v23 >> 1) & 1);
        v30 = v15 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_63;
      }
      v30 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v15 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*(_QWORD *)v30 + (unsigned int)v15) += v29;
LABEL_33:
    v16 = v141;
  }
  if ( (v5 & 2) != 0 || (v5 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v16 + 16) )
  {
    v31 = *((_QWORD *)v7 + 65);
    v32 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)v7 + 62);
    v33 = *((_QWORD *)v7 + 63);
    if ( *(_BYTE *)v31 == 17 )
    {
      if ( v32 == ndisMTopReceiveNetBufferLists )
      {
        if ( (NetBufferLists->NblFlags & 0x8000) != 0 )
        {
          (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, int, _DWORD, int))(v33 + 2144))(
            v33,
            NetBufferLists,
            PortNumber,
            v176,
            v5,
            v132,
            *(_DWORD *)v133,
            v134);
          goto LABEL_79;
        }
        if ( !*(_BYTE *)(v33 + 2665) )
        {
          (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, int, _DWORD, int))(v33 + 2136))(
            v33,
            NetBufferLists,
            PortNumber,
            v176,
            v5,
            v132,
            *(_DWORD *)v133,
            v134);
          goto LABEL_79;
        }
        v139 = 0;
        v136 = 0;
        if ( ((v5 & 1) != 0 || KeGetCurrentIrql() == 2)
          && ndisPerProcRcvTrackers
          && (Number = KeGetPcr()->Prcb.Number,
              v35 = ndisPerProcRcvTrackers,
              v36 = 2096LL * Number,
              v139 = Number,
              v37 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v36),
              (unsigned int)v37 < 3) )
        {
          v136 = 1;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v36) = v37 + 1;
          Pool2 = (__int64)v35 + 696 * v37 + v36 + 8;
        }
        else
        {
          Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
          if ( !Pool2 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v64) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v64,
                4,
                11,
                (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
            }
            v48 = NetBufferLists;
            goto LABEL_118;
          }
        }
        v39 = *(_QWORD **)(v33 + 400);
        v40 = NetBufferLists;
        *(_BYTE *)(Pool2 + 692) = 0;
        if ( (v5 & 2) != 0 )
        {
          v41 = 0LL;
        }
        else
        {
          do
          {
            v41 = v40;
            v40->Flags = v40->Flags & 0xFFFFFFF0 | 4;
            v40 = (PNET_BUFFER_LIST)v40->Link.Alignment;
          }
          while ( v40 );
        }
        v42 = (struct _NDIS_OPEN_BLOCK *)v39[41];
        v142 = v42;
        if ( v42 && v42->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v42, NetBufferLists, PortNumber, v176, v5);
          v45 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
          *(_QWORD *)(Pool2 + 64) = 0LL;
          *(_DWORD *)(Pool2 + 80) = 0;
        }
        else
        {
          *(_DWORD *)(Pool2 + 40) = PortNumber;
          *(_DWORD *)(Pool2 + 44) = v176;
          *(_QWORD *)(Pool2 + 24) = NetBufferLists;
          *(_QWORD *)(Pool2 + 8) = v39;
          *(_DWORD *)(Pool2 + 16) = v5;
          *(_QWORD *)Pool2 = v33;
          *(_QWORD *)(Pool2 + 32) = v41;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
          if ( *(_QWORD *)(Pool2 + 64) || (v45 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
          {
            if ( !*v39 || PortNumber )
            {
              *(_BYTE *)(Pool2 + 692) = 1;
            }
            else
            {
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
              v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            }
            v45 = v44;
            if ( !v142 )
            {
              v46 = (struct _NDIS_OPEN_BLOCK *)v39[1];
              if ( v46 )
              {
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v46);
                v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
              }
              v47 = (struct _NDIS_OPEN_BLOCK *)v39[2];
              if ( v47 )
              {
                if ( (v5 & 2) != 0 )
                  ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v47);
                else
                  ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
                v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
              }
              v45 = v44;
            }
          }
        }
        if ( !*(_BYTE *)(Pool2 + 692) )
          goto LABEL_119;
        v48 = *v45;
LABEL_118:
        if ( v48 )
        {
          if ( byte_1401278B0 && (*(_DWORD *)(v33 + 5872) & 2) != 0 )
            PktMonClientNblDrop(v33 + 5816, (_DWORD)v48, *(_DWORD *)(v33 + 5868), v43);
          if ( (v5 & 2) == 0 )
            ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)v33, v48, v5 & 1, 0LL);
        }
LABEL_119:
        if ( v136 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v139);
        }
        else if ( Pool2 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        goto LABEL_79;
      }
    }
    else
    {
      if ( (v5 & 2) == 0 && ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        LODWORD(v15) = KeGetPcr()->Prcb.Number;
        v70 = v169;
        v71 = NetBufferLists->Link.Alignment;
        v72 = PortNumber;
        v140 = v15;
        v169[2] = 0LL;
        v169[0] = NetBufferLists;
        v169[1] = NetBufferLists;
        NetBufferLists->Scratch = 0LL;
        NetBufferLists->ChildRefCount = v5;
        NetBufferLists->Status = PortNumber;
        if ( v71 )
        {
          v72 = v176;
          *(_QWORD *)(v71 + 112) = v176;
        }
        while ( *(_BYTE *)v31 == 5 && *v70 )
        {
          v73 = v31;
          v74 = *(_QWORD *)(v31 + 424) + 96 * v15;
          if ( *(_BYTE *)(v74 + 64) )
          {
            ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
              v31,
              (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int))v32,
              v33,
              v70);
            break;
          }
          *(_BYTE *)(v74 + 64) = 1;
          v75 = *v70;
          *v70 = 0LL;
          if ( v75 )
          {
            do
            {
              v76 = *(_DWORD *)(v75 + 132);
              v77 = *(_DWORD *)(v75 + 140);
              v78 = *(_QWORD *)(v75 + 112);
              v152 = v76;
              v146 = v77;
              if ( *(_QWORD *)v75 )
                v173 = *(_DWORD *)(*(_QWORD *)v75 + 112LL);
              else
                v173 = 1;
              *(_DWORD *)(v75 + 132) = 0;
              if ( byte_1401278B0 )
              {
                if ( *(_BYTE *)v31 == 5 )
                {
                  v118 = *(_QWORD *)(v31 + 872);
                  if ( v118 )
                  {
                    if ( (*(_DWORD *)(v118 + 56) & 1) != 0 )
                    {
                      PktMonClientNblLogNdis(v31 + 848, v75, v72, 1LL);
                      v76 = v152;
                      v77 = v146;
                    }
                  }
                }
              }
              if ( ndisVerifierNdisDispatch && *(_BYTE *)v31 == 5 && (v122 = *(_QWORD *)(v31 + 776)) != 0 )
                (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int), int))ndisVerifierNdisDispatch
                 + 14))(
                  v33,
                  v75,
                  v77,
                  v173,
                  v76,
                  v122,
                  v32,
                  v134);
              else
                ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, int, _DWORD))v32)(
                  v33,
                  v75,
                  v77,
                  v173,
                  v76,
                  v132,
                  *(_DWORD *)v133);
              v75 = v78;
            }
            while ( v78 );
            v73 = v31;
          }
          v15 = v140;
          v70 = (__int64 *)(v74 + 48);
          *(_BYTE *)(v74 + 64) = 0;
          v31 = *(_QWORD *)(v31 + 520);
          v32 = *(void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v73 + 496);
          v33 = *(_QWORD *)(v73 + 504);
        }
        v79 = *v70;
        if ( *v70 )
        {
          *v70 = 0LL;
          do
          {
            v80 = *(_DWORD *)(v79 + 140);
            v81 = *(_QWORD *)(v79 + 112);
            v82 = *(_DWORD *)(v79 + 132);
            v174 = v80;
            if ( *(_QWORD *)v79 )
              v83 = *(_DWORD *)(*(_QWORD *)v79 + 112LL);
            else
              v83 = 1;
            *(_DWORD *)(v79 + 132) = 0;
            if ( byte_1401278B0 )
            {
              if ( *(_BYTE *)v31 == 5 )
              {
                v119 = *(_QWORD *)(v31 + 872);
                if ( v119 )
                {
                  if ( (*(_DWORD *)(v119 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v31 + 848, v79, v72, 1LL);
                    v80 = v174;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v31 == 5 && (v124 = *(_QWORD *)(v31 + 776)) != 0 )
              (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int), int))ndisVerifierNdisDispatch
               + 14))(
                v33,
                v79,
                v80,
                v83,
                v82,
                v124,
                v32,
                v134);
            else
              v32((void *)v33, (struct _NET_BUFFER_LIST *)v79, v80, v83, v82);
            v79 = v81;
          }
          while ( v81 );
        }
        return;
      }
      v145 = Size;
      v51 = KeGetPcr()->Prcb.Number << 12;
      v52 = *(_QWORD *)(v51 + qword_1401270F8);
      LowLimit = v52;
      v53 = *(_QWORD *)(v51 + qword_1401270F0);
      HighLimit = v53;
      if ( v52 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v53 )
      {
        IoGetStackLimits(&LowLimit, &HighLimit);
        v52 = LowLimit;
      }
      if ( (unsigned __int64)&retaddr - v52 < v145 )
      {
        v120 = 24576;
        v165 = PortNumber;
        v168 = 0;
        Parameter[0] = v31;
        Parameter[1] = v33;
        Parameter[2] = v32;
        Parameter[3] = NetBufferLists;
        v166 = v176;
        v167 = v5;
        if ( (unsigned int)Size > 0x6000 )
          v120 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               Parameter,
               v120,
               0,
               0LL) < 0 )
        {
          if ( byte_1401278B0 && (*(_DWORD *)(v31 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v31 + 784, (_DWORD)NetBufferLists, v121, 1, -1073741670, -536866813);
          NdisSetStatusInNblChain(NetBufferLists, -1073741670);
          v54 = 0LL;
          v130 = NetBufferLists;
          for ( j = 0; v130; ++j )
            v130 = (PNET_BUFFER_LIST)v130->Link.Alignment;
          _InterlockedAdd((volatile signed __int32 *)(v31 + 292), j);
          if ( (v5 & 2) == 0 )
          {
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v31, NetBufferLists, 0);
            return;
          }
LABEL_185:
          if ( *(_DWORD *)ndisNblTrackerMode )
          {
            v95 = v5 & 1;
            v96 = *((_QWORD *)v7 + 81);
            v97 = 0LL;
            v98 = ndisNblTrackerEpoch;
            ReceiveFlagsa = v95;
            v147 = *((_QWORD *)v7 + 64);
            v154 = 0LL;
            v143 = 0LL;
            v137 = 0;
            if ( *(int *)ndisNblTrackerMode >= 3 )
            {
              ndisNblTrackerRecordEventInternal(
                (unsigned __int64)NetBufferLists,
                *((_QWORD *)v7 + 64),
                0x8Cu,
                (void *)v96,
                v95);
              v97 = 0LL;
              v54 = 0LL;
            }
            v99 = v96 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v96 & 1) != 0 )
            {
              v156 = *(_QWORD *)((v96 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
              v99 = (2 * v98) ^ (v96 ^ (2 * v98)) & 0xFFFFFFFFFFFFFFFDuLL;
            }
            else
            {
              v156 = v96 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            v100 = NetBufferLists;
            if ( NetBufferLists )
            {
              while ( 1 )
              {
                v101 = (unsigned __int64)v100->NetBufferListInfo[27];
                v102 = v143;
                while ( v100->NetBufferListInfo[27] == (void *)v101 )
                {
                  if ( v101 )
                  {
                    if ( (v101 & 4) != 0 )
                      goto LABEL_273;
                  }
                  else if ( !v100->SourceHandle )
                  {
                    v100->SourceHandle = (void *)ndisSourceHandleFromOwner(v147 & 0xFFFFFFFFFFFFFFFDuLL);
                  }
                  if ( ndisNblTrackerCanNblBeTracked(v100) )
                  {
                    if ( v100->SourceHandle != (void *)v156 || v100->ParentNetBufferList )
                    {
                      v103 = v99;
                      v54 = ++v148;
                    }
                    else
                    {
                      ++v102;
                      v54 = v148 + 1;
                      v103 = 24LL;
                      ++v148;
                    }
                    goto LABEL_198;
                  }
LABEL_273:
                  v54 = v148;
                  v103 = v99 | 4;
LABEL_198:
                  v100->NetBufferListInfo[27] = (void *)v103;
                  v100 = (PNET_BUFFER_LIST)v100->Link.Alignment;
                  if ( !v100 )
                    break;
                }
                v104 = v154 - v54;
                v143 = v102;
                v95 = ReceiveFlagsa;
                if ( (v101 & 1) == 0 || !v104 )
                  goto LABEL_204;
                if ( (_BYTE)ReceiveFlagsa || v137 )
                {
                  v105 = 16 * ((v101 >> 1) & 1) + (v101 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                  if ( !(_BYTE)ReceiveFlagsa )
                    goto LABEL_242;
                  goto LABEL_203;
                }
                v137 = 1;
                v116 = KeGetCurrentIrql();
                v54 = v148;
                if ( v116 == 2 )
                {
                  LOBYTE(v95) = 1;
                  ReceiveFlagsa = v95;
                  v105 = 16 * ((v101 >> 1) & 1) + (v101 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_203:
                  v106 = (_QWORD *)(*(_QWORD *)v105 + (KeGetPcr()->Prcb.Number << 12));
                  *v106 += v104;
                  goto LABEL_204;
                }
                LOBYTE(v95) = 0;
                ReceiveFlagsa = v95;
                v105 = 16 * ((v101 >> 1) & 1) + (v101 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_242:
                _InterlockedAdd64((volatile signed __int64 *)(v105 + 8), v104);
LABEL_204:
                v154 = v54;
                if ( !v100 )
                {
                  v7 = NdisFilterHandle;
                  v97 = v143;
                  break;
                }
              }
            }
            v107 = v54 - v97;
            v149 = v107;
            if ( (v99 & 1) != 0 )
            {
              if ( v107 )
              {
                if ( (_BYTE)v95 || v137 )
                {
                  v109 = 16 * ((v99 >> 1) & 1) + (v99 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                  if ( !(_BYTE)v95 )
                    goto LABEL_212;
                }
                else
                {
                  v108 = KeGetCurrentIrql();
                  v107 = v149;
                  if ( v108 != 2 )
                  {
                    v109 = 16 * ((v99 >> 1) & 1) + (v99 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_212:
                    _InterlockedAdd64((volatile signed __int64 *)(v109 + 8), v107);
                    goto LABEL_224;
                  }
                  v109 = 16 * ((v99 >> 1) & 1) + (v99 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
                }
                v110 = (_QWORD *)(*(_QWORD *)v109 + (KeGetPcr()->Prcb.Number << 12));
                *v110 += v107;
              }
            }
          }
LABEL_224:
          if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1401278B0 )
            ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
          v111 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v7 + 65);
          v112 = v111->Header.Type;
          if ( (_BYTE)v112 != 17 && ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v111 )
          {
            if ( v112 == 5 )
            {
              LOBYTE(v113) = FILTER_TEST_FLAG(v111, 1024);
            }
            else
            {
              if ( v112 != 18 )
                return;
              v113 = *(_DWORD *)&v111->StackExpansionFallback.WorkItemQueued >> 31;
            }
            if ( (_BYTE)v113 )
            {
              v114 = *((_QWORD *)v7 + 65);
              for ( k = NetBufferLists; k; k = (PNET_BUFFER_LIST)k->Link.Alignment )
              {
                if ( *(_QWORD *)&k->Context->ContextData[k->Context->Offset] != v114 )
                  NblContextVerifierBugcheckContextCorruption(k, NetBufferLists, v114);
                NdisFreeNetBufferListContext(k, 8u);
              }
            }
          }
          return;
        }
LABEL_79:
        v54 = 0LL;
        if ( (v5 & 2) == 0 )
          return;
        goto LABEL_185;
      }
      if ( byte_1401278B0 )
      {
        if ( *(_BYTE *)v31 == 5 )
        {
          v117 = *(_QWORD *)(v31 + 872);
          if ( v117 )
          {
            if ( (*(_DWORD *)(v117 + 56) & 1) != 0 )
              PktMonClientNblLogNdis(v31 + 848, NetBufferLists, v53, 1LL);
          }
        }
      }
      if ( ndisVerifierNdisDispatch )
      {
        if ( *(_BYTE *)v31 == 5 )
        {
          v123 = *(_QWORD *)(v31 + 776);
          if ( v123 )
          {
            (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int), int))ndisVerifierNdisDispatch
             + 14))(
              v33,
              NetBufferLists,
              PortNumber,
              v176,
              v5,
              v123,
              v32,
              v134);
            goto LABEL_79;
          }
        }
      }
    }
    ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, int, _DWORD, int))v32)(
      v33,
      NetBufferLists,
      PortNumber,
      v176,
      v5,
      v132,
      *(_DWORD *)v133,
      v134);
    goto LABEL_79;
  }
  v49 = v5 | 1;
  if ( !*(_QWORD *)v16 )
  {
    *(_QWORD *)v16 = NetBufferLists;
    goto LABEL_68;
  }
  v87 = *(_QWORD *)(v16 + 8);
  if ( PortNumber != *(_DWORD *)(v87 + 140) || v49 != *(_DWORD *)(v87 + 132) || (v49 & 0xCB00) != 0 )
  {
    *(_QWORD *)(v87 + 112) = NetBufferLists;
LABEL_68:
    *(_QWORD *)(v16 + 8) = NetBufferLists;
    v50 = NetBufferLists->Link.Alignment;
    NetBufferLists->Scratch = 0LL;
    NetBufferLists->ChildRefCount = v49;
    NetBufferLists->Status = PortNumber;
    if ( v50 )
      *(_QWORD *)(v50 + 112) = v176;
    return;
  }
  v88 = *(PNET_BUFFER_LIST *)v87;
  if ( *(_QWORD *)v87 )
  {
    v89 = LODWORD(v88->Scratch) + v176;
    do
    {
      p_Next = &v88->Next;
      v88 = (PNET_BUFFER_LIST)v88->Link.Alignment;
    }
    while ( v88 );
  }
  else
  {
    v89 = v176 + 1;
    p_Next = *(PNET_BUFFER_LIST **)(v16 + 8);
  }
  *p_Next = NetBufferLists;
  if ( *(_QWORD *)v87 )
    *(_QWORD *)(*(_QWORD *)v87 + 112LL) = v89;
}
