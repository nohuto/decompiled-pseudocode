/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x14001DE10
 * Callers:
 *     ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140067480 (-IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
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
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140021AD0 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140026980 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140027A70 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     McTemplateK0qqqqqqqq_EtwWriteTransfer @ 0x140039700 (McTemplateK0qqqqqqqq_EtwWriteTransfer.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14006E080 (-ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140071670 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140072EC0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140075230 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  __int64 v5; // r15
  int v6; // r12d
  NDIS_PORT_NUMBER v7; // r14d
  __int64 v9; // rcx
  char v10; // si
  PNET_BUFFER_LIST v11; // rbx
  __int64 v12; // rbx
  void (__fastcall *v13)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r15
  __int64 v14; // r13
  struct _NET_BUFFER_LIST *v15; // r14
  unsigned int v16; // r15d
  struct _NDIS_RCV_TRACKER_ARRAY *v17; // r9
  char *v18; // r8
  __int64 v19; // rdx
  __int64 Pool2; // rbx
  _QWORD *v21; // r15
  struct _NET_BUFFER_LIST *v22; // rcx
  __int64 v23; // rdx
  struct _NDIS_FILTER_BLOCK *v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // r14d
  int v27; // r9d
  struct _NDIS_OPEN_BLOCK *v28; // rdx
  struct _NDIS_OPEN_BLOCK *v29; // rdx
  __int64 v30; // rbx
  unsigned int v31; // r15d
  _DWORD *v32; // r13
  __int64 v33; // r14
  unsigned int v34; // ecx
  unsigned int v35; // r10d
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  PNET_BUFFER_LIST v42; // r14
  unsigned int v43; // edx
  int v44; // edx
  int v45; // eax
  struct _NET_BUFFER_LIST *v46; // rax
  struct _NET_BUFFER_LIST *v47; // rbx
  unsigned int v48; // r9d
  unsigned __int64 *v49; // rdx
  PNET_BUFFER_LIST v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // r14
  unsigned int v55; // ecx
  unsigned int v56; // edx
  __int64 v57; // rax
  unsigned __int64 v58; // r14
  unsigned int v59; // ecx
  unsigned int v60; // edx
  __int64 v61; // rax
  int v62; // eax
  unsigned __int32 v63; // ecx
  void *v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  KIRQL v68; // al
  _QWORD *Alignment; // r9
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // r14d
  bool v73; // zf
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // ecx
  unsigned int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  int v84; // r8d
  struct _NET_BUFFER_LIST *v85; // r14
  LARGE_INTEGER *v86; // rbx
  LARGE_INTEGER i; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r8
  unsigned int j; // eax
  unsigned int v94; // [rsp+60h] [rbp-A0h]
  unsigned int v95; // [rsp+60h] [rbp-A0h]
  unsigned int v96; // [rsp+60h] [rbp-A0h]
  unsigned int v97; // [rsp+68h] [rbp-98h] BYREF
  char v98; // [rsp+70h] [rbp-90h]
  KIRQL v99; // [rsp+71h] [rbp-8Fh]
  unsigned int v100; // [rsp+74h] [rbp-8Ch]
  PNET_BUFFER_LIST NetBufferLista; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_FILTER_BLOCK *v102; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v103; // [rsp+88h] [rbp-78h]
  unsigned int v104; // [rsp+90h] [rbp-70h]
  unsigned int Number; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 HighLimit; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-58h]
  __int128 v109; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+D0h] [rbp-30h]
  __int128 v112; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v113; // [rsp+E8h] [rbp-18h]
  __int64 v114; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v115; // [rsp+100h] [rbp+0h]
  __int64 v116; // [rsp+108h] [rbp+8h]
  __int64 v117; // [rsp+110h] [rbp+10h]
  _QWORD Parameter[4]; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v119; // [rsp+138h] [rbp+38h]
  unsigned int v120; // [rsp+13Ch] [rbp+3Ch]
  ULONG v121; // [rsp+140h] [rbp+40h]
  int v122; // [rsp+144h] [rbp+44h]
  _QWORD v123[3]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE WatchdogInformation[32]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v125; // [rsp+180h] [rbp+80h]
  _UNKNOWN *retaddr; // [rsp+1D8h] [rbp+D8h] BYREF

  v5 = 0LL;
  v100 = PortNumber;
  LOBYTE(v6) = 0;
  NetBufferLista = NetBufferList;
  v7 = PortNumber;
  v97 = NumberOfNetBufferLists;
  v99 = 2;
  v108 = 0LL;
  Number = -1;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v5 = *((_QWORD *)MiniportAdapterHandle + 5);
    v6 = *((_DWORD *)MiniportAdapterHandle + 20);
    v108 = v5;
    if ( !v5 )
    {
      v5 = *((_QWORD *)MiniportAdapterHandle + 5);
      v108 = v5;
    }
  }
  v9 = *((_QWORD *)MiniportAdapterHandle + 314);
  v10 = ReceiveFlags;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v9 )
  {
    switch ( *(_BYTE *)v9 )
    {
      case 5:
        LOBYTE(v45) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v9, 1024);
        break;
      case 0x11:
        LOBYTE(v45) = (*(_DWORD *)(v9 + 3688) & 0x1000) != 0;
        break;
      case 0x12:
        v45 = *(_DWORD *)(v9 + 224) >> 31;
        break;
      default:
        goto LABEL_4;
    }
    if ( (_BYTE)v45 )
    {
      v46 = ndisAddNblContextTerminator(
              &NetBufferLista,
              &v97,
              *((struct _NDIS_OBJECT_HEADER **)MiniportAdapterHandle + 314));
      v47 = v46;
      if ( v46 )
      {
        if ( byte_14011D800 && (*((_DWORD *)MiniportAdapterHandle + 1468) & 2) != 0 )
          PktMonClientNblDropNdis(
            (_DWORD)MiniportAdapterHandle + 5816,
            (_DWORD)v46,
            PortNumber,
            1,
            -1073741670,
            -536866800);
        if ( (ReceiveFlags & 2) == 0 )
          ndisCallPreviousReturnHandler((struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle, v47, ReceiveFlags);
        if ( !NetBufferLista )
          return;
      }
    }
  }
LABEL_4:
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyRxIndication(
      NetBufferLista,
      v7,
      v97,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle,
      *((enum _NDIS_MEDIUM *)MiniportAdapterHandle + 459));
    ndisNblPoisonScratchFields(NetBufferLista);
  }
  if ( (v6 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      v99 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)&PortNumber = ndisPcwOffsetToPerCpuData;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 320) = __rdtsc();
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 670) & 1) != 0 )
  {
    v86 = (LARGE_INTEGER *)NetBufferLista;
    for ( i = KeQueryPerformanceCounter(0LL); v86; v86 = (LARGE_INTEGER *)v86->QuadPart )
      v86[44] = i;
  }
  if ( !*((_BYTE *)MiniportAdapterHandle + 2664) )
  {
    ndisMDummyReceiveNetBufferLists(
      MiniportAdapterHandle,
      NetBufferLista,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags);
    goto LABEL_53;
  }
  v11 = NetBufferLista;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( (__int64)NetBufferLista->NetBufferListInfo[13] > 0 )
    {
      Alignment = (_QWORD *)NetBufferLista->Link.Alignment;
      if ( NetBufferLista->Link.Alignment )
      {
        do
        {
          v70 = Alignment[31];
          if ( !v70 || v70 < 0 )
          {
            *(_QWORD *)&PortNumber = (unsigned int)ndisGenerateCorrelationIds(1LL);
            Alignment[31] = *(_QWORD *)&PortNumber;
          }
          Alignment = (_QWORD *)*Alignment;
        }
        while ( Alignment );
      }
    }
    else
    {
      v63 = _InterlockedExchangeAdd(&dword_14011AF28, v97);
      if ( v97 + v63 < v63 )
        v63 = _InterlockedExchangeAdd(&dword_14011AF28, v97);
      do
      {
        if ( (__int64)v11->NetBufferListInfo[13] <= 0 )
        {
          v64 = (void *)v63++;
          v11->NetBufferListInfo[13] = v64;
        }
        v11 = (PNET_BUFFER_LIST)v11->Link.Alignment;
      }
      while ( v11 );
      v11 = NetBufferLista;
    }
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v11,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
      *((_QWORD *)MiniportAdapterHandle + 313),
      ((ReceiveFlags & 2) != 0) + 128,
      ReceiveFlags & 1);
  if ( byte_14011D800 )
  {
    v71 = *((_QWORD *)MiniportAdapterHandle + 738);
    if ( v71 )
    {
      if ( (*(_DWORD *)(v71 + 56) & 1) != 0 )
      {
        v72 = *((_DWORD *)MiniportAdapterHandle + 1478);
        v73 = (v11->NblFlags & 0x8000) == 0;
        v109 = 0LL;
        LODWORD(v111) = 0;
        v110 = 0LL;
        if ( v73 && ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v74 = *((_QWORD *)MiniportAdapterHandle + 737);
          LOWORD(v109) = 40;
          *((_QWORD *)&v109 + 1) = v11;
          LODWORD(v110) = 1;
          *(_QWORD *)((char *)&v110 + 4) = v72 | 0x100000000LL;
          v111 = 0LL;
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1) + 40LL))(
            xmmword_14011D820,
            v74,
            &v109,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
        v7 = v100;
      }
    }
  }
  v12 = *((_QWORD *)MiniportAdapterHandle + 314);
  v13 = (void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)MiniportAdapterHandle + 328);
  v14 = *((_QWORD *)MiniportAdapterHandle + 312);
  v117 = MEMORY[0xFFFFF78000000320];
  if ( *(_BYTE *)v12 != 17 )
  {
    if ( (ReceiveFlags & 2) == 0 && ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
    {
      v48 = KeGetPcr()->Prcb.Number;
      v49 = v123;
      v50 = NetBufferLista;
      LODWORD(v102) = v48;
      v123[2] = 0LL;
      v103 = v123;
      v51 = NetBufferLista->Link.Alignment;
      v123[0] = NetBufferLista;
      v123[1] = NetBufferLista;
      NetBufferLista->Scratch = 0LL;
      v50->ChildRefCount = ReceiveFlags;
      v50->Status = v7;
      if ( v51 )
        *(_QWORD *)(v51 + 112) = v97;
      while ( *(_BYTE *)v12 == 5 )
      {
        v52 = *v49;
        if ( !*v49 )
          break;
        *(_QWORD *)&PortNumber = v12;
        v53 = 96LL * v48 + *(_QWORD *)(v12 + 424) + 48LL;
        v116 = v53;
        if ( *(_BYTE *)(v53 + 16) )
        {
          *v49 = 0LL;
          do
          {
            v79 = *(_DWORD *)(v52 + 132);
            v80 = *(_DWORD *)(v52 + 140);
            LowLimit = *(_QWORD *)(v52 + 112);
            v81 = *(_QWORD *)v52;
            LODWORD(v102) = v79;
            v104 = v80;
            if ( v81 )
              v96 = *(_DWORD *)(v81 + 112);
            else
              v96 = 1;
            *(_DWORD *)(v52 + 132) = 0;
            if ( byte_14011D800 )
            {
              if ( *(_BYTE *)v12 == 5 )
              {
                v88 = *(_QWORD *)(v12 + 872);
                if ( v88 )
                {
                  if ( (*(_DWORD *)(v88 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v12 + 848, v52, *(_QWORD *)&PortNumber, 1LL);
                    v79 = (unsigned int)v102;
                    v80 = v104;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v92 = *(_QWORD *)(v12 + 776)) != 0 )
              (*((void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v14,
                v52,
                v80,
                v96,
                v79,
                v92,
                v13);
            else
              v13((struct _NDIS_FILTER_BLOCK *)v14, (struct _NET_BUFFER_LIST *)v52, v80, v96, v79);
            v52 = LowLimit;
          }
          while ( LowLimit );
          v49 = v103;
          break;
        }
        *(_BYTE *)(v53 + 16) = 1;
        v54 = *v49;
        *v49 = 0LL;
        if ( v54 )
        {
          do
          {
            v55 = *(_DWORD *)(v54 + 132);
            v56 = *(_DWORD *)(v54 + 140);
            v115 = *(_QWORD *)(v54 + 112);
            v57 = *(_QWORD *)v54;
            LODWORD(v103) = v55;
            v100 = v56;
            if ( v57 )
              v94 = *(_DWORD *)(v57 + 112);
            else
              v94 = 1;
            *(_DWORD *)(v54 + 132) = 0;
            if ( byte_14011D800 )
            {
              if ( *(_BYTE *)v12 == 5 )
              {
                v77 = *(_QWORD *)(v12 + 872);
                if ( v77 )
                {
                  if ( (*(_DWORD *)(v77 + 56) & 1) != 0 )
                  {
                    v104 = *(_DWORD *)(v12 + 880);
                    v73 = (*(_DWORD *)(v54 + 128) & 0x8000) == 0;
                    memset(WatchdogInformation, 0, sizeof(WatchdogInformation));
                    LODWORD(v125) = 0;
                    if ( v73 )
                    {
                      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                      {
                        v78 = *(_QWORD *)(v12 + 864);
                        *(_QWORD *)&WatchdogInformation[20] = v104 | 0x100000000LL;
                        strcpy(WatchdogInformation, "(");
                        *(_QWORD *)&WatchdogInformation[8] = v54;
                        *(_DWORD *)&WatchdogInformation[16] = 1;
                        v125 = 0LL;
                        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1)
                                                                                 + 40LL))(
                          xmmword_14011D820,
                          v78,
                          WatchdogInformation,
                          0LL);
                        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                      }
                      v56 = v100;
                      v55 = (unsigned int)v103;
                    }
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v89 = *(_QWORD *)(v12 + 776)) != 0 )
              (*((void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                v14,
                v54,
                v56,
                v94,
                v55,
                v89,
                v13);
            else
              v13((struct _NDIS_FILTER_BLOCK *)v14, (struct _NET_BUFFER_LIST *)v54, v56, v94, v55);
            v54 = v115;
          }
          while ( v115 );
          v10 = ReceiveFlags;
          *(_QWORD *)&PortNumber = v12;
          v53 = v116;
          v48 = (unsigned int)v102;
        }
        *(_BYTE *)(v53 + 16) = 0;
        v49 = (unsigned __int64 *)v53;
        v12 = *(_QWORD *)(v12 + 520);
        v13 = *(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(*(_QWORD *)&PortNumber + 496LL);
        v14 = *(_QWORD *)(*(_QWORD *)&PortNumber + 504LL);
        v103 = (unsigned __int64 *)v53;
      }
      v58 = *v49;
      if ( *v49 )
      {
        *v49 = 0LL;
        do
        {
          v59 = *(_DWORD *)(v58 + 132);
          v60 = *(_DWORD *)(v58 + 140);
          LowLimit = *(_QWORD *)(v58 + 112);
          v61 = *(_QWORD *)v58;
          LODWORD(v102) = v59;
          v104 = v60;
          if ( v61 )
            v95 = *(_DWORD *)(v61 + 112);
          else
            v95 = 1;
          *(_DWORD *)(v58 + 132) = 0;
          if ( byte_14011D800 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v82 = *(_QWORD *)(v12 + 872);
              if ( v82 )
              {
                if ( (*(_DWORD *)(v82 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(v12 + 848, v58, *(_QWORD *)&PortNumber, 1LL);
                  v59 = (unsigned int)v102;
                  v60 = v104;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v91 = *(_QWORD *)(v12 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v14,
              v58,
              v60,
              v95,
              v59,
              v91,
              v13);
          else
            v13((struct _NDIS_FILTER_BLOCK *)v14, (struct _NET_BUFFER_LIST *)v58, v60, v95, v59);
          v58 = LowLimit;
        }
        while ( LowLimit );
      }
    }
    else
    {
      LODWORD(v102) = Size;
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
      if ( (unsigned __int64)&retaddr - v40 < (unsigned int)v102 )
      {
        v83 = 24576;
        Parameter[3] = NetBufferLista;
        v120 = v97;
        v122 = 0;
        Parameter[0] = v12;
        Parameter[1] = v14;
        Parameter[2] = v13;
        v119 = v100;
        v121 = ReceiveFlags;
        if ( (unsigned int)Size > 0x6000 )
          v83 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               Parameter,
               v83,
               0,
               0LL) < 0 )
        {
          v85 = NetBufferLista;
          if ( byte_14011D800 && (*(_DWORD *)(v12 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v12 + 784, (_DWORD)NetBufferLista, v84, 1, -1073741670, -536866813);
          NdisSetStatusInNblChain(v85, -1073741670);
          for ( j = 0; v85; ++j )
            v85 = (struct _NET_BUFFER_LIST *)v85->Link.Alignment;
          _InterlockedAdd((volatile signed __int32 *)(v12 + 292), j);
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v12, NetBufferLista, 0);
        }
      }
      else
      {
        v42 = NetBufferLista;
        if ( byte_14011D800 )
        {
          if ( *(_BYTE *)v12 == 5 )
          {
            v75 = *(_QWORD *)(v12 + 872);
            if ( v75 )
            {
              if ( (*(_DWORD *)(v75 + 56) & 1) != 0 )
              {
                LODWORD(v102) = *(_DWORD *)(v12 + 880);
                v73 = (NetBufferLista->NblFlags & 0x8000) == 0;
                v112 = 0LL;
                LODWORD(v114) = 0;
                v113 = 0LL;
                if ( v73 )
                {
                  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                  {
                    v76 = *(_QWORD *)(v12 + 864);
                    LOWORD(v112) = 40;
                    *(_QWORD *)((char *)&v113 + 4) = (unsigned int)v102 | 0x100000000LL;
                    *((_QWORD *)&v112 + 1) = v42;
                    LODWORD(v113) = 1;
                    v114 = 0LL;
                    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1)
                                                                                + 40LL))(
                      xmmword_14011D820,
                      v76,
                      &v112,
                      0LL);
                    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                  }
                }
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v90 = *(_QWORD *)(v12 + 776)) != 0 )
          (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 14))(
            v14,
            v42,
            v100,
            v97,
            ReceiveFlags,
            v90,
            v13);
        else
          v13((struct _NDIS_FILTER_BLOCK *)v14, v42, v100, v97, ReceiveFlags);
      }
    }
    goto LABEL_39;
  }
  if ( v13 == ndisMTopReceiveNetBufferLists )
  {
    v15 = NetBufferLista;
    if ( (NetBufferLista->NblFlags & 0x8000) != 0 )
    {
      (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))(v14 + 2144))(
        v14,
        NetBufferLista,
        v100,
        v97,
        ReceiveFlags);
    }
    else
    {
      if ( *(_BYTE *)(v14 + 2665) )
      {
        v102 = 0LL;
        LODWORD(v103) = 0;
        v98 = 0;
        if ( ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2)
          && ndisPerProcRcvTrackers
          && (v16 = KeGetPcr()->Prcb.Number,
              v17 = ndisPerProcRcvTrackers,
              v15 = NetBufferLista,
              v18 = (char *)(2096LL * v16),
              LODWORD(v103) = v16,
              v19 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + (_QWORD)v18),
              (unsigned int)v19 < 3) )
        {
          v98 = 1;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v18) = v19 + 1;
          Pool2 = (__int64)&v18[696 * v19 + 8 + (_QWORD)v17];
        }
        else
        {
          Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
          if ( !Pool2 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v44) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v44,
                4,
                11,
                (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
            }
            goto LABEL_36;
          }
        }
        v21 = *(_QWORD **)(v14 + 400);
        *(_BYTE *)(Pool2 + 692) = 0;
        v22 = v15;
        if ( (ReceiveFlags & 2) != 0 )
        {
          v23 = (__int64)v102;
        }
        else
        {
          do
          {
            v23 = (__int64)v22;
            v22->Flags = v22->Flags & 0xFFFFFFF0 | 4;
            v22 = (struct _NET_BUFFER_LIST *)v22->Link.Alignment;
          }
          while ( v22 );
        }
        v24 = (struct _NDIS_FILTER_BLOCK *)v21[41];
        v102 = v24;
        if ( v24 && *((_BYTE *)v24->FilterModuleContext + 56) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v24, v15, v100, v97, ReceiveFlags);
          *(_QWORD *)(Pool2 + 64) = 0LL;
          *(_DWORD *)(Pool2 + 80) = 0;
        }
        else
        {
          v25 = v97;
          *(_QWORD *)(Pool2 + 24) = v15;
          v26 = v100;
          *(_DWORD *)(Pool2 + 40) = v100;
          *(_QWORD *)(Pool2 + 8) = v21;
          *(_DWORD *)(Pool2 + 16) = ReceiveFlags;
          *(_QWORD *)Pool2 = v14;
          *(_QWORD *)(Pool2 + 32) = v23;
          *(_DWORD *)(Pool2 + 44) = v25;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v23, v18);
          if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
          {
            if ( !*v21 || v26 )
              *(_BYTE *)(Pool2 + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
            if ( !v102 )
            {
              v28 = (struct _NDIS_OPEN_BLOCK *)v21[1];
              if ( v28 )
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v28);
              v29 = (struct _NDIS_OPEN_BLOCK *)v21[2];
              if ( v29 )
              {
                if ( (ReceiveFlags & 2) != 0 )
                  ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v29);
                else
                  ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
              }
            }
          }
        }
        if ( !*(_BYTE *)(Pool2 + 692) )
          goto LABEL_37;
        v15 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
LABEL_36:
        if ( v15 )
        {
          if ( byte_14011D800 && (*(_DWORD *)(v14 + 5872) & 2) != 0 )
            PktMonClientNblDrop(v14 + 5816, (_DWORD)v15, *(_DWORD *)(v14 + 5868), v27);
          if ( (ReceiveFlags & 2) == 0 )
            ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)v14, v15, ReceiveFlags & 1, 0LL);
        }
LABEL_37:
        if ( v98 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * (unsigned int)v103);
        }
        else if ( Pool2 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        goto LABEL_39;
      }
      (*(void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))(v14 + 2136))(
        v14,
        NetBufferLista,
        v100,
        v97,
        ReceiveFlags);
    }
  }
  else
  {
    v13((struct _NDIS_FILTER_BLOCK *)v14, NetBufferLista, v7, v97, ReceiveFlags);
  }
LABEL_39:
  v30 = (MEMORY[0xFFFFF78000000320] - v117) * ndisTimeIncrement / 10000;
  if ( (v10 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    memset(WatchdogInformation, 0, 20);
    v31 = 512;
    v32 = (_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 412) + (KeGetPcr()->Prcb.Number << 12));
    v33 = (unsigned int)*v32;
    LODWORD(v103) = ndisPeriodicReceivesNblCounts[v33];
    if ( KeQueryDpcWatchdogInformation((PKDPC_WATCHDOG_INFORMATION)WatchdogInformation) < 0 )
    {
      LOBYTE(v35) = 0;
    }
    else
    {
      if ( *(_DWORD *)WatchdogInformation )
        v31 = (int)v103 * (1024 - (*(_DWORD *)&WatchdogInformation[4] << 10) / *(_DWORD *)WatchdogInformation) / v97;
      if ( *(_DWORD *)&WatchdogInformation[8] )
      {
        v34 = (*(_DWORD *)&WatchdogInformation[12] << 10) / *(_DWORD *)&WatchdogInformation[8];
        if ( v34 > 0x200 )
          v34 = 1024;
        v35 = (unsigned int)v103 * (1024 - v34) / v97;
      }
      else
      {
        LOBYTE(v35) = 0;
      }
    }
    v36 = (unsigned int)(v33 + 1);
    if ( (unsigned int)v36 < 0xB && v31 < 0x200
      || (_DWORD)v33 && v31 > 0x300 && (v36 = (unsigned int)(v33 - 1), (_DWORD)v33 != 12) )
    {
      *v32 = v36;
      if ( (byte_14011B105 & 2) != 0 )
      {
        v43 = KeGetPcr()->Prcb.Number;
        McTemplateK0qqqqqqqq_EtwWriteTransfer(
          v36,
          v43,
          (_DWORD)MiniportAdapterHandle + 4008,
          (*((_QWORD *)MiniportAdapterHandle + 503) >> 24) & 0xFFFFFF,
          v43,
          v97,
          v30,
          ndisPeriodicReceivesNblCounts[v33],
          ndisPeriodicReceivesNblCounts[v36],
          v31,
          v35);
      }
    }
  }
  v37 = v10 & 2;
  if ( (v10 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
  {
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferLista,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
      *((_QWORD *)MiniportAdapterHandle + 510),
      0x8Eu,
      v10 & 1);
    v37 = v10 & 2;
  }
  if ( !Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( !byte_14011D800 )
      goto LABEL_53;
    v37 = v10 & 2;
  }
  if ( v37 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLista);
LABEL_53:
  if ( (v6 & 4) != 0 )
  {
    v65 = Number;
    if ( Number == -1 )
      v65 = KeGetPcr()->Prcb.Number;
    v66 = v108 + ndisPcwPerCpuDataStride * v65 + ndisPcwOffsetToPerCpuData;
    v67 = __rdtsc();
    *(_QWORD *)(v66 + 120) += (((unsigned __int64)HIDWORD(v67) << 32) | (unsigned int)v67) - *(_QWORD *)(v66 + 320);
    v68 = v99;
    *(_QWORD *)(v66 + 320) = 0LL;
    if ( v68 != 2 )
      KeLowerIrql(v68);
  }
  if ( (v10 & 2) != 0 )
  {
    v38 = *((_QWORD *)MiniportAdapterHandle + 314);
    if ( ndisNblContextVerifierMode )
    {
      if ( ndisNblContextVerifierMode != 3 && v38 )
      {
        switch ( *(_BYTE *)v38 )
        {
          case 5:
            LOBYTE(v62) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v38, 1024);
            break;
          case 0x11:
            LOBYTE(v62) = (*(_DWORD *)(v38 + 3688) & 0x1000) != 0;
            break;
          case 0x12:
            v62 = *(_DWORD *)(v38 + 224) >> 31;
            break;
          default:
            return;
        }
        if ( (_BYTE)v62 )
          ndisRemoveNblContextTerminator(NetBufferLista, *((struct _NDIS_OBJECT_HEADER **)MiniportAdapterHandle + 314));
      }
    }
  }
}
