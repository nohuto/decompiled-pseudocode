/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x140035610
 * Callers:
 *     ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140082E60 (-IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x140010D30 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140032C90 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140033770 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
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
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140047C40 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     McTemplateK0qqqqqqqq_EtwWriteTransfer @ 0x14005F730 (McTemplateK0qqqqqqqq_EtwWriteTransfer.c)
 *     ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14008A580 (-ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x14008E9C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400905A0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140091670 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  ULONG v5; // r14d
  __int64 v6; // rdi
  NDIS_PORT_NUMBER v7; // r13d
  NDIS_HANDLE v8; // rsi
  __int64 v9; // rcx
  PNET_BUFFER_LIST v10; // rdi
  PNET_BUFFER_LIST v11; // r15
  __int64 v12; // rbx
  void (__fastcall *v13)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r12
  __int64 v14; // r15
  struct _NET_BUFFER_LIST *v15; // r12
  char v16; // r13
  unsigned int v17; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 Pool2; // rbx
  __int64 v22; // rdi
  struct _NET_BUFFER_LIST *v23; // rcx
  __int64 v24; // r13
  int v25; // r9d
  struct _NDIS_OPEN_BLOCK *v26; // rdx
  struct _NDIS_OPEN_BLOCK *v27; // rdx
  __int64 v28; // rbx
  ULONG v29; // r15d
  _DWORD *v30; // r12
  __int64 v31; // rdi
  int v32; // r13d
  ULONG v33; // ecx
  unsigned int v34; // r10d
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // edx
  __int64 v38; // rcx
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  char v44; // r13
  __int64 v45; // r12
  unsigned __int64 v46; // rbx
  char v47; // r14
  unsigned __int64 v48; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // r9
  _QWORD *v52; // rcx
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r13
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  struct _NET_BUFFER_LIST *v60; // r13
  unsigned int v61; // edx
  int v62; // edx
  _QWORD *v63; // rcx
  KIRQL CurrentIrql; // al
  int v65; // eax
  struct _NET_BUFFER_LIST *v66; // rax
  struct _NET_BUFFER_LIST *v67; // rbx
  struct _NET_BUFFER_LIST **v68; // r13
  unsigned __int64 v69; // rcx
  struct _NET_BUFFER_LIST *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rax
  struct _NET_BUFFER_LIST *v73; // rdi
  unsigned int v74; // ecx
  unsigned int v75; // edx
  struct _NET_BUFFER_LIST *v76; // r13
  struct _NET_BUFFER_LIST *v77; // rdi
  unsigned int v78; // ecx
  unsigned int v79; // edx
  struct _NET_BUFFER_LIST *v80; // r13
  unsigned __int64 v81; // rax
  int v82; // eax
  unsigned __int32 v83; // ecx
  void *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  _QWORD *Alignment; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned int v91; // ebx
  bool v92; // zf
  __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int v95; // edi
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned __int64 v99; // r10
  unsigned __int64 v100; // rdi
  __int64 v101; // r15
  int v102; // r13d
  __int64 v103; // r12
  __int64 v104; // rcx
  unsigned __int64 v105; // rbx
  char v106; // si
  struct _NET_BUFFER_LIST *v107; // r15
  __int64 v108; // r14
  unsigned __int64 v109; // rdi
  unsigned __int64 v110; // r13
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rdx
  _QWORD *v114; // rcx
  unsigned __int64 v115; // r12
  unsigned __int64 v116; // rdx
  _QWORD *v117; // rcx
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  __int64 v120; // rax
  int v121; // ecx
  int v122; // r8d
  LARGE_INTEGER *v123; // rbx
  LARGE_INTEGER i; // rax
  __int64 v125; // rax
  __int64 v126; // r8
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r8
  unsigned int v130; // ecx
  _SLIST_HEADER *v131; // rax
  char v132[8]; // [rsp+30h] [rbp-D0h]
  char v133; // [rsp+60h] [rbp-A0h]
  char v134; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v135; // [rsp+68h] [rbp-98h]
  unsigned int v136; // [rsp+68h] [rbp-98h]
  unsigned int v137; // [rsp+68h] [rbp-98h]
  int v138; // [rsp+68h] [rbp-98h]
  unsigned int v139; // [rsp+68h] [rbp-98h]
  NDIS_PORT_NUMBER v140; // [rsp+70h] [rbp-90h]
  unsigned int v141; // [rsp+70h] [rbp-90h]
  unsigned int v142; // [rsp+74h] [rbp-8Ch]
  KIRQL v143; // [rsp+78h] [rbp-88h]
  unsigned int v144; // [rsp+80h] [rbp-80h]
  __int64 v145; // [rsp+80h] [rbp-80h]
  unsigned int v146; // [rsp+80h] [rbp-80h]
  unsigned int v147; // [rsp+80h] [rbp-80h]
  unsigned int v148; // [rsp+80h] [rbp-80h]
  __int64 v149; // [rsp+88h] [rbp-78h]
  unsigned int v150; // [rsp+88h] [rbp-78h]
  unsigned int v151; // [rsp+88h] [rbp-78h]
  __int64 v152; // [rsp+88h] [rbp-78h]
  unsigned __int64 v153; // [rsp+88h] [rbp-78h]
  unsigned int v154; // [rsp+88h] [rbp-78h]
  struct _NET_BUFFER_LIST *v155; // [rsp+90h] [rbp-70h]
  unsigned int v156; // [rsp+98h] [rbp-68h]
  __int64 v157; // [rsp+98h] [rbp-68h]
  unsigned __int64 v158; // [rsp+98h] [rbp-68h]
  unsigned int v159; // [rsp+98h] [rbp-68h]
  unsigned __int64 v160; // [rsp+98h] [rbp-68h]
  unsigned int v161; // [rsp+A0h] [rbp-60h] BYREF
  PNET_BUFFER_LIST NetBufferLista; // [rsp+A8h] [rbp-58h] BYREF
  int v163; // [rsp+B0h] [rbp-50h]
  unsigned int Number; // [rsp+B4h] [rbp-4Ch]
  NDIS_HANDLE v165; // [rsp+B8h] [rbp-48h]
  __int64 v166; // [rsp+C0h] [rbp-40h]
  struct _NET_BUFFER_LIST *Scratch; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v168; // [rsp+D0h] [rbp-30h]
  unsigned __int64 LowLimit; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v171; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v172; // [rsp+F8h] [rbp-8h]
  __int64 v173; // [rsp+108h] [rbp+8h]
  __int128 v174; // [rsp+110h] [rbp+10h] BYREF
  __int128 v175; // [rsp+120h] [rbp+20h]
  __int64 v176; // [rsp+130h] [rbp+30h]
  __int128 v177; // [rsp+138h] [rbp+38h] BYREF
  __int128 v178; // [rsp+148h] [rbp+48h]
  __int64 v179; // [rsp+158h] [rbp+58h]
  __int64 v180; // [rsp+160h] [rbp+60h]
  _QWORD Parameter[4]; // [rsp+168h] [rbp+68h] BYREF
  NDIS_PORT_NUMBER v182; // [rsp+188h] [rbp+88h]
  unsigned int v183; // [rsp+18Ch] [rbp+8Ch]
  ULONG v184; // [rsp+190h] [rbp+90h]
  int v185; // [rsp+194h] [rbp+94h]
  _QWORD v186[3]; // [rsp+198h] [rbp+98h] BYREF
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+218h] [rbp+118h] BYREF

  v5 = ReceiveFlags;
  v6 = 0LL;
  v7 = PortNumber;
  v140 = PortNumber;
  v8 = MiniportAdapterHandle;
  v165 = MiniportAdapterHandle;
  NetBufferLista = NetBufferList;
  v161 = NumberOfNetBufferLists;
  v143 = 2;
  v166 = 0LL;
  v163 = 0;
  Number = -1;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v6 = *((_QWORD *)MiniportAdapterHandle + 5);
    v163 = *((_DWORD *)MiniportAdapterHandle + 20);
    v166 = v6;
    if ( !v6 )
    {
      v6 = *((_QWORD *)MiniportAdapterHandle + 5);
      v166 = v6;
    }
  }
  v9 = *((_QWORD *)MiniportAdapterHandle + 314);
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v9 )
  {
    switch ( *(_BYTE *)v9 )
    {
      case 5:
        LOBYTE(v65) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v9, 1024);
        break;
      case 0x11:
        LOBYTE(v65) = (*(_DWORD *)(v9 + 3688) & 0x1000) != 0;
        break;
      case 0x12:
        v65 = *(_DWORD *)(v9 + 224) >> 31;
        break;
      default:
        goto LABEL_4;
    }
    if ( (_BYTE)v65 )
    {
      v66 = ndisAddNblContextTerminator(&NetBufferLista, &v161, *((struct _NDIS_OBJECT_HEADER **)v8 + 314));
      v67 = v66;
      if ( v66 )
      {
        if ( byte_1401278B0 && (*((_DWORD *)v8 + 1468) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)v8 + 5816, (_DWORD)v66, PortNumber, 1, -1073741670, -536866800);
        if ( (ReceiveFlags & 2) == 0 )
          ndisCallPreviousReturnHandler((struct _NDIS_OBJECT_HEADER *)v8, v67, ReceiveFlags);
        if ( !NetBufferLista )
          return;
      }
    }
  }
LABEL_4:
  if ( (*((_DWORD *)v8 + 922) & 0x800) != 0 )
  {
    ndisNblVerifyRxIndication(
      NetBufferLista,
      v7,
      v161,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)v8,
      *((enum _NDIS_MEDIUM *)v8 + 459));
    ndisNblPoisonScratchFields(NetBufferLista);
  }
  if ( (v163 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      v143 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)&PortNumber = ndisPcwOffsetToPerCpuData;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 320) = __rdtsc();
  }
  if ( (*((_DWORD *)v8 + 670) & 1) != 0 )
  {
    v123 = (LARGE_INTEGER *)NetBufferLista;
    for ( i = KeQueryPerformanceCounter(0LL); v123; v123 = (LARGE_INTEGER *)v123->QuadPart )
      v123[44] = i;
  }
  if ( !*((_BYTE *)v8 + 2664) )
  {
    ndisMDummyReceiveNetBufferLists(v8, NetBufferLista, PortNumber, NumberOfNetBufferLists, ReceiveFlags);
    goto LABEL_52;
  }
  v10 = NetBufferLista;
  v142 = v161;
  v11 = NetBufferLista;
  v155 = NetBufferLista;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( (__int64)NetBufferLista->NetBufferListInfo[13] > 0 )
    {
      Alignment = (_QWORD *)NetBufferLista->Link.Alignment;
      if ( NetBufferLista->Link.Alignment )
      {
        do
        {
          v89 = Alignment[31];
          if ( !v89 || v89 < 0 )
          {
            *(_QWORD *)&PortNumber = (unsigned int)ndisGenerateCorrelationIds(1u);
            Alignment[31] = *(_QWORD *)&PortNumber;
          }
          Alignment = (_QWORD *)*Alignment;
        }
        while ( Alignment );
      }
    }
    else
    {
      v83 = _InterlockedExchangeAdd(&dword_140124F28, v161);
      if ( v161 + v83 < v83 )
        v83 = _InterlockedExchangeAdd(&dword_140124F28, v161);
      do
      {
        if ( (__int64)v11->NetBufferListInfo[13] <= 0 )
        {
          v84 = (void *)v83++;
          v11->NetBufferListInfo[13] = v84;
        }
        v11 = (PNET_BUFFER_LIST)v11->Link.Alignment;
      }
      while ( v11 );
      v11 = NetBufferLista;
    }
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v39 = *((_QWORD *)v8 + 510);
    v40 = *((_QWORD *)v8 + 313);
    v41 = ndisNblTrackerEpoch;
    v135 = v39;
    LODWORD(v42) = 0;
    v144 = ndisNblTrackerEpoch;
    v43 = 0LL;
    v157 = 0LL;
    v149 = 0LL;
    v134 = 0;
    v44 = ReceiveFlags & 1;
    v45 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        (unsigned __int64)v11,
        v39,
        ((ReceiveFlags & 2) != 0) + 128,
        (void *)v40,
        ReceiveFlags & 1);
      v41 = v144;
      v39 = v135;
      v43 = 0LL;
    }
    v46 = v40 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v40 & 1) != 0 )
    {
      *(_QWORD *)&PortNumber = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v46 = (2 * v41) ^ (v40 ^ (2 * v41)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      *(_QWORD *)&PortNumber = v40 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v145 = *(_QWORD *)&PortNumber;
    if ( v11 )
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = (unsigned __int64)v11->NetBufferListInfo[27];
        while ( v11->NetBufferListInfo[27] == (void *)v48 )
        {
          if ( v48 )
          {
            if ( (v48 & 4) != 0 )
              goto LABEL_171;
          }
          else if ( !v11->SourceHandle )
          {
            v81 = v39 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v39 & 1) != 0 )
              v81 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v11->SourceHandle = (void *)v81;
          }
          SourceHandle = (unsigned __int8 *)v11->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(v42) = *SourceHandle;
            if ( (unsigned __int8)(v42 - 17) <= 1u || (_BYTE)v42 == 5 )
            {
              if ( SourceHandle != *(unsigned __int8 **)&PortNumber || v11->ParentNetBufferList )
              {
                ++v45;
                v50 = v46;
              }
              else
              {
                ++v43;
                v50 = 24LL;
                v149 = v43;
                ++v45;
              }
              goto LABEL_70;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v132 = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v11,
                *(_QWORD *)v132);
LABEL_199:
              *(_QWORD *)&PortNumber = v145;
              v43 = v149;
              v39 = v135;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v42) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v42,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v11);
            goto LABEL_199;
          }
LABEL_171:
          v50 = v46 | 4;
LABEL_70:
          v11->NetBufferListInfo[27] = (void *)v50;
          v11 = (PNET_BUFFER_LIST)v11->Link.Alignment;
          if ( !v11 )
            break;
        }
        v51 = v157 - v45;
        v158 = v157 - v45;
        if ( (v48 & 1) == 0 || !v51 )
          goto LABEL_76;
        if ( v44 || v47 )
        {
          v42 = 16 * ((v48 >> 1) & 1) + (v48 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v44 )
            goto LABEL_113;
          goto LABEL_75;
        }
        v47 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v51 = v158;
        if ( CurrentIrql == 2 )
        {
          v44 = 1;
          v42 = 16 * ((v48 >> 1) & 1) + (v48 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_75:
          v52 = (_QWORD *)(*(_QWORD *)v42 + (KeGetPcr()->Prcb.Number << 12));
          *v52 += v51;
          goto LABEL_76;
        }
        v44 = 0;
        v42 = 16 * ((v48 >> 1) & 1) + (v48 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_113:
        _InterlockedAdd64((volatile signed __int64 *)(v42 + 8), v51);
LABEL_76:
        *(_QWORD *)&PortNumber = v145;
        v43 = v149;
        v39 = v135;
        v157 = v45;
        if ( !v11 )
        {
          v8 = v165;
          v134 = v47;
          v5 = ReceiveFlags;
          break;
        }
      }
    }
    v53 = v45 - v43;
    if ( (v46 & 1) == 0 || !v53 )
    {
LABEL_109:
      v7 = v140;
      v10 = v155;
      goto LABEL_11;
    }
    if ( v44 || v134 )
    {
      v54 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v44 )
        goto LABEL_84;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v54 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_84:
        _InterlockedAdd64((volatile signed __int64 *)(v54 + 8), v53);
        goto LABEL_109;
      }
      v54 = 16 * ((v46 >> 1) & 1) + (v46 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v63 = (_QWORD *)(*(_QWORD *)v54 + (KeGetPcr()->Prcb.Number << 12));
    *v63 += v53;
    goto LABEL_109;
  }
LABEL_11:
  if ( byte_1401278B0 )
  {
    v90 = *((_QWORD *)v8 + 738);
    if ( v90 )
    {
      if ( (*(_DWORD *)(v90 + 56) & 1) != 0 )
      {
        v91 = *((_DWORD *)v8 + 1478);
        v92 = (v10->NblFlags & 0x8000) == 0;
        v171 = 0LL;
        LODWORD(v173) = 0;
        v172 = 0LL;
        if ( v92 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v93 = *((_QWORD *)v8 + 737);
            LOWORD(v171) = 40;
            *((_QWORD *)&v171 + 1) = v10;
            LODWORD(v172) = 1;
            *(_QWORD *)((char *)&v172 + 4) = v91 | 0x100000000LL;
            v173 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
              xmmword_1401278D0,
              v93,
              &v171,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v12 = *((_QWORD *)v8 + 314);
  v13 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)v8 + 328);
  v14 = *((_QWORD *)v8 + 312);
  v168 = MEMORY[0xFFFFF78000000320];
  if ( *(_BYTE *)v12 == 17 )
  {
    if ( v13 != ndisMTopReceiveNetBufferLists )
    {
      v13((void *)v14, v10, v7, v142, v5);
      goto LABEL_38;
    }
    if ( (v10->NblFlags & 0x8000) != 0 )
    {
      (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))(v14 + 2144))(v14, v10, v7, v142, v5);
      goto LABEL_38;
    }
    if ( !*(_BYTE *)(v14 + 2665) )
    {
      (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))(v14 + 2136))(v14, v10, v7, v142, v5);
      goto LABEL_38;
    }
    v15 = 0LL;
    v16 = 0;
    v156 = 0;
    v133 = 0;
    if ( ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) && ndisPerProcRcvTrackers )
    {
      v17 = KeGetPcr()->Prcb.Number;
      v18 = ndisPerProcRcvTrackers;
      v19 = 2096LL * v17;
      v156 = v17;
      v20 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v19);
      if ( (unsigned int)v20 < 3 )
      {
        v133 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v19) = v20 + 1;
        Pool2 = (__int64)v18 + 696 * v20 + v19 + 8;
        goto LABEL_20;
      }
      v10 = v155;
    }
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
    if ( !Pool2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v62) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v62,
          4,
          11,
          (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
      }
      goto LABEL_35;
    }
LABEL_20:
    v22 = *(_QWORD *)(v14 + 400);
    v23 = v155;
    *(_BYTE *)(Pool2 + 692) = 0;
    if ( (v5 & 2) == 0 )
    {
      do
      {
        v15 = v23;
        v23->Flags = v23->Flags & 0xFFFFFFF0 | 4;
        v23 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
      }
      while ( v23 );
    }
    v24 = *(_QWORD *)(v22 + 328);
    if ( v24 && *(_BYTE *)(*(_QWORD *)(v24 + 24) + 56LL) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(*(struct _NDIS_OPEN_BLOCK **)(v22 + 328), v155, v140, v142, v5);
      *(_QWORD *)(Pool2 + 64) = 0LL;
      *(_DWORD *)(Pool2 + 80) = 0;
    }
    else
    {
      *(_QWORD *)(Pool2 + 32) = v15;
      *(_DWORD *)(Pool2 + 40) = v140;
      *(_QWORD *)(Pool2 + 24) = v155;
      *(_QWORD *)(Pool2 + 8) = v22;
      *(_DWORD *)(Pool2 + 16) = v5;
      *(_QWORD *)Pool2 = v14;
      *(_DWORD *)(Pool2 + 44) = v142;
      ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
      {
        if ( !*(_QWORD *)v22 || v140 )
          *(_BYTE *)(Pool2 + 692) = 1;
        else
          ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        if ( !v24 )
        {
          v26 = *(struct _NDIS_OPEN_BLOCK **)(v22 + 8);
          if ( v26 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v26);
          v27 = *(struct _NDIS_OPEN_BLOCK **)(v22 + 16);
          if ( v27 )
          {
            if ( (v5 & 2) != 0 )
              ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v27);
            else
              ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
          }
        }
      }
    }
    v16 = v133;
    if ( !*(_BYTE *)(Pool2 + 692) )
      goto LABEL_36;
    v10 = *(PNET_BUFFER_LIST *)(Pool2 + 64);
LABEL_35:
    if ( v10 )
    {
      if ( byte_1401278B0 && (*(_DWORD *)(v14 + 5872) & 2) != 0 )
        PktMonClientNblDrop(v14 + 5816, (_DWORD)v10, *(_DWORD *)(v14 + 5868), v25);
      if ( (v5 & 2) == 0 )
        ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)v14, v10, v5 & 1, 0LL);
    }
LABEL_36:
    if ( v16 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v156);
    }
    else if ( Pool2 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    goto LABEL_38;
  }
  v55 = v5 & 2;
  if ( (v5 & 2) == 0 && ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    LODWORD(v55) = KeGetPcr()->Prcb.Number;
    v68 = (struct _NET_BUFFER_LIST **)v186;
    v10->Status = v140;
    v69 = v10->Link.Alignment;
    v146 = v55;
    v186[2] = 0LL;
    v186[0] = v10;
    v186[1] = v10;
    v10->Scratch = 0LL;
    v10->ChildRefCount = v5;
    if ( v69 )
    {
      *(_QWORD *)&PortNumber = v142;
      *(_QWORD *)(v69 + 112) = v142;
    }
    while ( *(_BYTE *)v12 == 5 )
    {
      v70 = *v68;
      if ( !*v68 )
        break;
      v71 = v12;
      v72 = 96 * v55 + *(_QWORD *)(v12 + 424) + 48LL;
      v180 = v72;
      if ( *(_BYTE *)(v72 + 16) )
      {
        *v68 = 0LL;
        do
        {
          ChildRefCount = v70->ChildRefCount;
          NdisReserved2 = v70->NdisReserved2;
          Scratch = (struct _NET_BUFFER_LIST *)v70->Scratch;
          v154 = ChildRefCount;
          v148 = NdisReserved2;
          if ( v70->Link.Alignment )
            v139 = *(_DWORD *)(v70->Link.Alignment + 112);
          else
            v139 = 1;
          v70->ChildRefCount = 0;
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v125 = *(_QWORD *)(v12 + 872);
              if ( v125 )
              {
                if ( (*(_DWORD *)(v125 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(v12 + 848, v70, *(_QWORD *)&PortNumber, 1LL);
                  ChildRefCount = v154;
                  NdisReserved2 = v148;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v129 = *(_QWORD *)(v12 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v14,
              v70,
              NdisReserved2,
              v139,
              ChildRefCount,
              v129,
              v13);
          else
            v13((void *)v14, v70, NdisReserved2, v139, ChildRefCount);
          v70 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v72 + 16) = 1;
      v73 = *v68;
      *v68 = 0LL;
      if ( v73 )
      {
        do
        {
          v74 = v73->ChildRefCount;
          v75 = v73->NdisReserved2;
          v76 = (struct _NET_BUFFER_LIST *)v73->Scratch;
          v159 = v74;
          v141 = v75;
          if ( v73->Link.Alignment )
            v136 = *(_DWORD *)(v73->Link.Alignment + 112);
          else
            v136 = 1;
          v73->ChildRefCount = 0;
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v97 = *(_QWORD *)(v12 + 872);
              if ( v97 )
              {
                if ( (*(_DWORD *)(v97 + 56) & 1) != 0 )
                {
                  v151 = *(_DWORD *)(v12 + 880);
                  v92 = (v73->NblFlags & 0x8000) == 0;
                  v174 = 0LL;
                  LODWORD(v176) = 0;
                  v175 = 0LL;
                  if ( v92 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                    {
                      v98 = *(_QWORD *)(v12 + 864);
                      *(_QWORD *)((char *)&v175 + 4) = v151 | 0x100000000LL;
                      LOWORD(v174) = 40;
                      *((_QWORD *)&v174 + 1) = v73;
                      LODWORD(v175) = 1;
                      v176 = 0LL;
                      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1)
                                                                                  + 40LL))(
                        xmmword_1401278D0,
                        v98,
                        &v174,
                        0LL);
                      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                    }
                    v75 = v141;
                    v74 = v159;
                  }
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v126 = *(_QWORD *)(v12 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v14,
              v73,
              v75,
              v136,
              v74,
              v126,
              v13);
          else
            v13((void *)v14, v73, v75, v136, v74);
          v73 = v76;
        }
        while ( v76 );
        v8 = v165;
        v71 = v12;
        v72 = v180;
      }
      *(_BYTE *)(v72 + 16) = 0;
      v68 = (struct _NET_BUFFER_LIST **)v72;
      v12 = *(_QWORD *)(v12 + 520);
      v13 = *(void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v71 + 496);
      v14 = *(_QWORD *)(v71 + 504);
      v55 = v146;
    }
    v77 = *v68;
    if ( *v68 )
    {
      *v68 = 0LL;
      do
      {
        v78 = v77->ChildRefCount;
        v79 = v77->NdisReserved2;
        v80 = (struct _NET_BUFFER_LIST *)v77->Scratch;
        v150 = v78;
        v147 = v79;
        if ( v77->Link.Alignment )
          v137 = *(_DWORD *)(v77->Link.Alignment + 112);
        else
          v137 = 1;
        v77->ChildRefCount = 0;
        if ( byte_1401278B0 )
        {
          if ( *(_BYTE *)v12 == 5 )
          {
            v120 = *(_QWORD *)(v12 + 872);
            if ( v120 )
            {
              if ( (*(_DWORD *)(v120 + 56) & 1) != 0 )
              {
                PktMonClientNblLogNdis(v12 + 848, v77, *(_QWORD *)&PortNumber, 1LL);
                v78 = v150;
                v79 = v147;
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v128 = *(_QWORD *)(v12 + 776)) != 0 )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 14))(
            v14,
            v77,
            v79,
            v137,
            v78,
            v128,
            v13);
        else
          v13((void *)v14, v77, v79, v137, v78);
        v77 = v80;
      }
      while ( v80 );
    }
  }
  else
  {
    v56 = (unsigned int)Size;
    v57 = KeGetPcr()->Prcb.Number << 12;
    v58 = *(_QWORD *)(v57 + qword_1401270F8);
    LowLimit = v58;
    v59 = *(_QWORD *)(v57 + qword_1401270F0);
    HighLimit = v59;
    if ( v58 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v59 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v58 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v58 < v56 )
    {
      v182 = v140;
      v121 = 24576;
      v185 = 0;
      Parameter[0] = v12;
      Parameter[1] = v14;
      Parameter[2] = v13;
      Parameter[3] = v155;
      v183 = v142;
      v184 = v5;
      if ( (unsigned int)Size > 0x6000 )
        v121 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
             Parameter,
             v121,
             0,
             0LL) < 0 )
      {
        if ( byte_1401278B0 && (*(_DWORD *)(v12 + 840) & 2) != 0 )
          PktMonClientNblDropNdis(v12 + 784, (_DWORD)v155, v122, 1, -1073741670, -536866813);
        NdisSetStatusInNblChain(v155, -1073741670);
        v130 = 0;
        v131 = (_SLIST_HEADER *)v155;
        if ( v155 )
        {
          do
          {
            v131 = (_SLIST_HEADER *)v131->Alignment;
            ++v130;
          }
          while ( v131 );
        }
        _InterlockedAdd((volatile signed __int32 *)(v12 + 292), v130);
        if ( (v5 & 2) == 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v12, v155, 0);
      }
    }
    else
    {
      if ( byte_1401278B0 && *(_BYTE *)v12 == 5 && (v94 = *(_QWORD *)(v12 + 872)) != 0 )
      {
        v60 = v155;
        if ( (*(_DWORD *)(v94 + 56) & 1) != 0 )
        {
          v95 = *(_DWORD *)(v12 + 880);
          v92 = (v155->NblFlags & 0x8000) == 0;
          v177 = 0LL;
          LODWORD(v179) = 0;
          v178 = 0LL;
          if ( v92 )
          {
            if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
            {
              v96 = *(_QWORD *)(v12 + 864);
              LOWORD(v177) = 40;
              *((_QWORD *)&v177 + 1) = v155;
              LODWORD(v178) = 1;
              *(_QWORD *)((char *)&v178 + 4) = v95 | 0x100000000LL;
              v179 = 0LL;
              (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
                xmmword_1401278D0,
                v96,
                &v177,
                0LL);
              ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
            }
          }
        }
      }
      else
      {
        v60 = v155;
      }
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v127 = *(_QWORD *)(v12 + 776)) != 0 )
        (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 14))(
          v14,
          v60,
          v140,
          v142,
          v5,
          v127,
          v13);
      else
        v13((void *)v14, v60, v140, v142, v5);
    }
  }
LABEL_38:
  v28 = (__int64)((MEMORY[0xFFFFF78000000320] - v168) * ndisTimeIncrement) / 10000;
  if ( (v5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    v29 = 512;
    v30 = (_DWORD *)(*((_QWORD *)v8 + 412) + (KeGetPcr()->Prcb.Number << 12));
    v31 = (unsigned int)*v30;
    v32 = ndisPeriodicReceivesNblCounts[v31];
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    {
      LOBYTE(v34) = 0;
    }
    else
    {
      if ( WatchdogInformation.DpcTimeLimit )
        v29 = v32 * (1024 - (WatchdogInformation.DpcTimeCount << 10) / WatchdogInformation.DpcTimeLimit) / v142;
      if ( WatchdogInformation.DpcWatchdogLimit )
      {
        v33 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
        if ( v33 > 0x200 )
          v33 = 1024;
        v34 = v32 * (1024 - v33) / v142;
      }
      else
      {
        LOBYTE(v34) = 0;
      }
    }
    v35 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v35 < 0xB && v29 < 0x200
      || (_DWORD)v31 && v29 > 0x300 && (v35 = (unsigned int)(v31 - 1), (_DWORD)v31 != 12) )
    {
      *v30 = v35;
      if ( (byte_140125105 & 2) != 0 )
      {
        v61 = KeGetPcr()->Prcb.Number;
        McTemplateK0qqqqqqqq_EtwWriteTransfer(
          v35,
          v61,
          (_DWORD)v8 + 4008,
          (*((_QWORD *)v8 + 503) >> 24) & 0xFFFFFF,
          v61,
          v142,
          v28,
          ndisPeriodicReceivesNblCounts[v31],
          ndisPeriodicReceivesNblCounts[v35],
          v29,
          v34);
      }
    }
  }
  v36 = v5 & 2;
  v37 = v36;
  if ( (v5 & 2) == 0 )
    goto LABEL_50;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v99 = *((_QWORD *)v8 + 313);
    v100 = *((_QWORD *)v8 + 510);
    v101 = ndisNblTrackerEpoch;
    LOBYTE(v102) = v5 & 1;
    v103 = 0LL;
    v138 = v5 & 1;
    v104 = 0LL;
    v168 = v99;
    v152 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)v155, v99, 0x8Eu, (void *)v100, v5 & 1);
      v104 = 0LL;
    }
    v105 = v100 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v100 & 1) != 0 )
    {
      v160 = *(_QWORD *)((v100 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v105 = (2 * v101) ^ ((2 * v101) ^ v100) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v160 = v100 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v106 = 0;
    v107 = v155;
    if ( v155 )
    {
      v108 = 0LL;
      while ( 1 )
      {
        v109 = (unsigned __int64)v107->NetBufferListInfo[27];
        v110 = v168;
        while ( v107->NetBufferListInfo[27] == (void *)v109 )
        {
          if ( v109 )
          {
            if ( (v109 & 4) != 0 )
              goto LABEL_307;
          }
          else if ( !v107->SourceHandle )
          {
            v107->SourceHandle = (void *)ndisSourceHandleFromOwner(v110 & 0xFFFFFFFFFFFFFFFDuLL);
          }
          if ( ndisNblTrackerCanNblBeTracked(v107) )
          {
            if ( v107->SourceHandle != (void *)v160 || v107->ParentNetBufferList )
            {
              ++v103;
              v111 = v105;
            }
            else
            {
              ++v108;
              v111 = 24LL;
              ++v103;
            }
            goto LABEL_247;
          }
LABEL_307:
          v111 = v105 | 4;
LABEL_247:
          v107->NetBufferListInfo[27] = (void *)v111;
          v107 = (struct _NET_BUFFER_LIST *)v107->Link.Alignment;
          if ( !v107 )
            break;
        }
        v102 = v138;
        v112 = v152 - v103;
        v153 = v152 - v103;
        if ( (v109 & 1) == 0 || !v112 )
          goto LABEL_253;
        if ( (_BYTE)v138 || v106 )
        {
          v113 = 16 * ((v109 >> 1) & 1) + (v109 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !(_BYTE)v138 )
            goto LABEL_287;
          goto LABEL_252;
        }
        v106 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v102) = 1;
          v138 = 1;
          v113 = 16 * ((v109 >> 1) & 1) + (v109 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_252:
          v114 = (_QWORD *)(*(_QWORD *)v113 + (KeGetPcr()->Prcb.Number << 12));
          *v114 += v153;
          goto LABEL_253;
        }
        v112 = v153;
        LOBYTE(v102) = 0;
        v138 = v102;
        v113 = 16 * ((v109 >> 1) & 1) + (v109 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_287:
        _InterlockedAdd64((volatile signed __int64 *)(v113 + 8), v112);
LABEL_253:
        v152 = v103;
        if ( !v107 )
        {
          v104 = v108;
          break;
        }
      }
    }
    v115 = v103 - v104;
    if ( (v105 & 1) == 0 || !v115 )
      goto LABEL_260;
    if ( (_BYTE)v102 || v106 )
    {
      v116 = 16 * ((v105 >> 1) & 1) + (v105 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v102 )
      {
LABEL_281:
        _InterlockedAdd64((volatile signed __int64 *)(v116 + 8), v115);
        goto LABEL_260;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v116 = 16 * ((v105 >> 1) & 1) + (v105 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_281;
      }
      v116 = 16 * ((v105 >> 1) & 1) + (v105 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v117 = (_QWORD *)(*(_QWORD *)v116 + (KeGetPcr()->Prcb.Number << 12));
    *v117 += v115;
LABEL_260:
    v8 = v165;
    LOBYTE(v5) = ReceiveFlags;
  }
  v36 = v5 & 2;
  v37 = v36;
LABEL_50:
  if ( !Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( !byte_1401278B0 )
      goto LABEL_52;
    v36 = v37;
  }
  if ( v36 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v155);
LABEL_52:
  if ( (v163 & 4) != 0 )
  {
    v85 = Number;
    if ( Number == -1 )
      v85 = KeGetPcr()->Prcb.Number;
    v86 = v166 + ndisPcwPerCpuDataStride * v85 + ndisPcwOffsetToPerCpuData;
    v87 = __rdtsc();
    *(_QWORD *)(v86 + 120) += (((unsigned __int64)HIDWORD(v87) << 32) | (unsigned int)v87) - *(_QWORD *)(v86 + 320);
    *(_QWORD *)(v86 + 320) = 0LL;
    if ( v143 != 2 )
      KeLowerIrql(v143);
  }
  if ( (v5 & 2) != 0 )
  {
    v38 = *((_QWORD *)v8 + 314);
    if ( ndisNblContextVerifierMode )
    {
      if ( ndisNblContextVerifierMode != 3 && v38 )
      {
        switch ( *(_BYTE *)v38 )
        {
          case 5:
            LOBYTE(v82) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v38, 1024);
            break;
          case 0x11:
            LOBYTE(v82) = (*(_DWORD *)(v38 + 3688) & 0x1000) != 0;
            break;
          case 0x12:
            v82 = *(_DWORD *)(v38 + 224) >> 31;
            break;
          default:
            return;
        }
        if ( (_BYTE)v82 )
          ndisRemoveNblContextTerminator(NetBufferLista, *((struct _NDIS_OBJECT_HEADER **)v8 + 314));
      }
    }
  }
}
