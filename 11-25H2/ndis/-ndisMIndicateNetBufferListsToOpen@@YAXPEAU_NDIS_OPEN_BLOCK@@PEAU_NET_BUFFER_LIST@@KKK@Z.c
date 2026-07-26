/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400468C0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140046C70 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     NdisAllocateNetBufferListContext @ 0x14005F890 (NdisAllocateNetBufferListContext.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400905A0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     TrackNblContextVerifierFailure @ 0x1400AAB20 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        const struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _NDIS_MINIPORT_BLOCK *FilterDriver; // r13
  unsigned int v6; // esi
  struct _NDIS_FILTER_BLOCK *v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // r15
  unsigned int Flags; // r8d
  bool v10; // dl
  unsigned int v11; // edi
  __int64 v12; // r12
  void (__fastcall *v13)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rdi
  unsigned int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  _SLIST_HEADER *v19; // r12
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  _QWORD *v24; // rcx
  unsigned __int64 v25; // r9
  KIRQL v26; // al
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rcx
  KIRQL v29; // r11
  unsigned int Number; // r9d
  KIRQL v31; // al
  unsigned int v32; // r12d
  volatile unsigned int v33; // eax
  _SLIST_HEADER *v34; // rbx
  int v35; // r9d
  unsigned __int64 SendNetBufferListsHandler; // rdx
  unsigned int v37; // edi
  __int64 v38; // r8
  _SLIST_HEADER *v39; // rdi
  char v40; // r13
  unsigned __int64 Region; // rbx
  unsigned __int8 *v42; // rcx
  __int64 v43; // rax
  int v44; // esi
  unsigned __int64 v45; // r12
  _QWORD *v46; // rcx
  int v47; // eax
  __int16 v48; // ax
  __int64 v49; // rax
  __int64 v50; // rcx
  KIRQL CurrentIrql; // al
  unsigned int v52; // eax
  char *v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  unsigned int NicSwitchCapabilities; // ebx
  bool v58; // zf
  __int64 v59; // rdx
  struct _NET_BUFFER_LIST *v60; // rbx
  unsigned int v61; // r12d
  _QWORD *v62; // rax
  int v63; // [rsp+28h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D0h]
  __int64 v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+38h] [rbp-C8h]
  KIRQL v67; // [rsp+40h] [rbp-C0h]
  char v68; // [rsp+41h] [rbp-BFh]
  __int64 v69; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+50h] [rbp-B0h]
  char v73; // [rsp+54h] [rbp-ACh]
  wchar_t *Buffer; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+60h] [rbp-A0h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  int PcwDatapathEventMask; // [rsp+68h] [rbp-98h]
  int PcwDatapathCycleMask; // [rsp+6Ch] [rbp-94h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  unsigned __int64 v81; // [rsp+70h] [rbp-90h]
  __int64 v82; // [rsp+78h] [rbp-88h]
  struct _NET_BUFFER_LIST *v83; // [rsp+80h] [rbp-80h] BYREF
  struct _NET_BUFFER_LIST **p_Next; // [rsp+88h] [rbp-78h]
  _NDIS_MINIPORT_BLOCK *v85; // [rsp+90h] [rbp-70h]
  __int64 Clock; // [rsp+98h] [rbp-68h]
  __int16 v87; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A2h] [rbp-5Eh]
  __int16 v89; // [rsp+A6h] [rbp-5Ah]
  struct _NET_BUFFER_LIST *v90; // [rsp+A8h] [rbp-58h]
  int v91; // [rsp+B0h] [rbp-50h]
  unsigned int v92; // [rsp+B4h] [rbp-4Ch]
  int v93; // [rsp+B8h] [rbp-48h]
  int v94; // [rsp+BCh] [rbp-44h]
  __int64 v95; // [rsp+C0h] [rbp-40h]
  _WORD WnodeEventItem[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v97; // [rsp+D4h] [rbp-2Ch]
  __int16 v98; // [rsp+D5h] [rbp-2Bh]
  char v99; // [rsp+D7h] [rbp-29h]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  __int64 v101; // [rsp+E0h] [rbp-20h]
  GUID v102; // [rsp+E8h] [rbp-18h]
  int v103; // [rsp+F8h] [rbp-8h]
  int v104; // [rsp+FCh] [rbp-4h]
  int v105; // [rsp+100h] [rbp+0h]
  unsigned int v106; // [rsp+104h] [rbp+4h]
  __int64 v107; // [rsp+108h] [rbp+8h]
  unsigned int v108; // [rsp+110h] [rbp+10h]
  int v109; // [rsp+114h] [rbp+14h]
  _QWORD v110[49]; // [rsp+120h] [rbp+20h] BYREF
  char v112; // [rsp+2F8h] [rbp+1F8h]
  int v113; // [rsp+2F8h] [rbp+1F8h]

  FilterDriver = (_NDIS_MINIPORT_BLOCK *)a1->FilterDriver;
  v6 = 0;
  v7 = (struct _NDIS_FILTER_BLOCK *)a1;
  v85 = FilterDriver;
  Alignment = a2;
  Clock = 0LL;
  Buffer = 0LL;
  LOWORD(PcwDatapathEventMask) = 0;
  LOBYTE(PcwDatapathCycleMask) = 0;
  v72 = -1;
  if ( FilterDriver->PcwDatapathEventMask || FilterDriver->PcwDatapathCycleMask )
  {
    PcwDatapathEventMask = FilterDriver->PcwDatapathEventMask;
    PcwDatapathCycleMask = FilterDriver->PcwDatapathCycleMask;
    Buffer = FilterDriver->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = FilterDriver->Reserved4.Buffer;
  }
  Flags = a2->Flags;
  v10 = a2->SourceHandle == a1;
  v67 = 2;
  if ( (Alignment->NblFlags & 0x8000) != 0 && Alignment->NetBufferListInfo[5] == a1 )
  {
    v10 = 1;
LABEL_147:
    if ( (Flags & 0x200) == 0 )
      goto LABEL_63;
    goto LABEL_5;
  }
  if ( v10 )
    goto LABEL_147;
LABEL_5:
  if ( FilterDriver->CheckPacketFilters && !LODWORD(a1->NextSendNetBufferListsHandler)
    || ((__int64)a1->NextSendNetBufferListsHandler & 0x10000) != 0 && !v10 && (Flags & 0x80u) != 0 )
  {
LABEL_63:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        v6 = 1;
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)FilterDriver, Alignment, v6, 0LL);
    }
    return;
  }
  v11 = a5;
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_9;
  switch ( a1->Header.Type )
  {
    case 5u:
      LOBYTE(v33) = FILTER_TEST_FLAG(a1, 1024);
      break;
    case 0x11u:
      LOBYTE(v33) = ((__int64)a1[2].PktMonEdgeLower.ListLink.Blink & 0x1000) != 0;
      break;
    case 0x12u:
      v33 = *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
      break;
    default:
      goto LABEL_9;
  }
  if ( !(_BYTE)v33 )
    goto LABEL_9;
  v83 = 0LL;
  p_Next = &v83;
  memset(&v110[1], 0, 0x178uLL);
  v110[0] = Alignment;
  v34 = (_SLIST_HEADER *)v110;
  do
  {
    if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
    {
      TrackNblContextVerifierFailure(Alignment, v7);
      v34->Alignment = Alignment->Link.Alignment;
      Alignment->Link.Alignment = 0LL;
      *p_Next = Alignment;
      p_Next = &Alignment->Next;
      Alignment = (struct _NET_BUFFER_LIST *)v34->Alignment;
    }
    else
    {
      v34 = (_SLIST_HEADER *)Alignment;
      *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v7;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
  }
  while ( Alignment );
  Alignment = (struct _NET_BUFFER_LIST *)v110[0];
  v61 = 0;
  a4 = 0;
  v62 = (_QWORD *)v110[0];
  if ( v110[0] )
  {
    do
    {
      v62 = (_QWORD *)*v62;
      ++v61;
    }
    while ( v62 );
    a4 = v61;
  }
  v60 = v83;
  v83 = 0LL;
  p_Next = &v83;
  if ( !v60 )
    goto LABEL_9;
  if ( byte_1401278B0 && (*((_DWORD *)&FilterDriver->PktMonComp + 14) & 2) != 0 )
  {
    v66 = -536866800;
    LODWORD(v64) = 3;
    v63 = 1;
    PktMonClientNblDrop((_DWORD)FilterDriver + 5816, (_DWORD)v60, FilterDriver->PktMonComp.PacketType, v35);
  }
  if ( (a5 & 2) == 0 )
    ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)FilterDriver, v60, a5 & 1, 0LL);
  if ( Alignment )
  {
LABEL_9:
    if ( (_BYTE)dword_140127110 )
    {
      v68 = 1;
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v68 = 0;
    }
    if ( !*(_DWORD *)ndisNblTrackerMode )
    {
LABEL_43:
      if ( byte_1401278B0 )
      {
        v56 = *(_QWORD *)&v7->NicSwitchHwCapabilities.NdisReserved2;
        if ( v56 )
        {
          if ( (*(_DWORD *)(v56 + 56) & 1) != 0 )
          {
            NicSwitchCapabilities = v7->NicSwitchHwCapabilities.NicSwitchCapabilities;
            v58 = (Alignment->NblFlags & 0x8000) == 0;
            v88 = 0;
            v89 = 0;
            v94 = 0;
            if ( v58 )
            {
              if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
              {
                v59 = *(_QWORD *)&v7->NicSwitchHwCapabilities.NumMacAddressesPerPort;
                v87 = 40;
                v90 = Alignment;
                v91 = 1;
                v92 = NicSwitchCapabilities;
                v93 = 1;
                v95 = 0LL;
                (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
                  xmmword_1401278D0,
                  v59,
                  &v87,
                  0LL);
                ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
              }
            }
          }
        }
      }
      if ( (PcwDatapathEventMask & 0x3014) != 0 || (PcwDatapathCycleMask & 8) != 0 )
      {
        if ( (v11 & 1) != 0 )
        {
          v29 = 2;
        }
        else
        {
          v29 = KfRaiseIrql(2u);
          v67 = v29;
        }
        if ( (PcwDatapathEventMask & 4) != 0 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v72 = Number;
          ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 16);
        }
        else
        {
          Number = -1;
        }
        if ( (PcwDatapathEventMask & 0x10) != 0 )
        {
          if ( Number == -1 )
          {
            Number = KeGetPcr()->Prcb.Number;
            v72 = Number;
          }
          *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 32) += a4;
        }
        if ( (v11 & 2) != 0 )
        {
          if ( (PcwDatapathEventMask & 0x1000) != 0 )
          {
            if ( Number == -1 )
            {
              Number = KeGetPcr()->Prcb.Number;
              v72 = Number;
            }
            ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 232);
          }
          if ( (PcwDatapathEventMask & 0x2000) != 0 )
          {
            if ( Number == -1 )
            {
              Number = KeGetPcr()->Prcb.Number;
              v72 = Number;
            }
            *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 240) += a4;
          }
        }
        if ( (PcwDatapathCycleMask & 8) != 0 )
        {
          if ( Number == -1 )
          {
            Number = KeGetPcr()->Prcb.Number;
            v72 = Number;
          }
          *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 328) = __rdtsc();
        }
        else if ( v29 != 2 )
        {
          KeLowerIrql(v29);
        }
      }
      v32 = a4;
      ((void (__fastcall *)(_NDIS_OBJECT_HEADER *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, int, _DWORD, int))v7->NextReturnNetBufferListsTracker)(
        v7->NextReturnNetBufferListsObject,
        Alignment,
        a3,
        a4,
        v11,
        v63,
        v64,
        v66);
      if ( (PcwDatapathCycleMask & 8) != 0 )
      {
        v52 = v72;
        if ( v72 == -1 )
          v52 = KeGetPcr()->Prcb.Number;
        v53 = (char *)Buffer + ndisPcwPerCpuDataStride * v52 + ndisPcwOffsetToPerCpuData;
        v54 = __rdtsc();
        *((_QWORD *)v53 + 16) += (((unsigned __int64)HIDWORD(v54) << 32) | (unsigned int)v54) - *((_QWORD *)v53 + 41);
        *((_QWORD *)v53 + 41) = 0LL;
        if ( v67 != 2 )
          KeLowerIrql(v67);
      }
      if ( (v11 & 2) == 0 )
        goto LABEL_72;
      if ( *(_DWORD *)ndisNblTrackerMode )
      {
        SendNetBufferListsHandler = (unsigned __int64)v7->Characteristics.SendNetBufferListsHandler;
        v37 = v11 & 1;
        v113 = v37;
        v38 = 0LL;
        v75 = SendNetBufferListsHandler;
        v71 = 0LL;
        v77 = 0LL;
        if ( *(int *)ndisNblTrackerMode >= 3 )
        {
          ndisNblTrackerRecordEventInternal(
            (unsigned __int64)Alignment,
            SendNetBufferListsHandler,
            0x88u,
            (void *)0x20,
            v37);
          v38 = 0LL;
        }
        v39 = (_SLIST_HEADER *)Alignment;
        if ( Alignment )
        {
          v40 = 0;
          while ( 1 )
          {
            Region = v39[22].Region;
            while ( v39[22].Region == Region )
            {
              if ( Region )
              {
                if ( (Region & 4) != 0 )
                  goto LABEL_162;
              }
              else if ( !v39[7].Region )
              {
                v55 = v75 & 0xFFFFFFFFFFFFFFFDuLL;
                if ( (v75 & 1) != 0 )
                  v55 = *(_QWORD *)((v75 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
                v39[7].Region = v55;
              }
              v42 = (unsigned __int8 *)v39[7].Region;
              if ( v42 )
              {
                LODWORD(SendNetBufferListsHandler) = *v42;
                if ( (unsigned __int8)(SendNetBufferListsHandler - 17) <= 1u || (_BYTE)SendNetBufferListsHandler == 5 )
                {
                  if ( v42 != (unsigned __int8 *)32 || v39[1].Region )
                  {
                    ++v38;
                    v43 = 32LL;
                    v71 = v38;
                  }
                  else
                  {
                    ++v38;
                    v43 = 24LL;
                    v71 = v38;
                  }
                  goto LABEL_101;
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v65) = *v42;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    0x1Bu,
                    0xCu,
                    (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                    (char)v39,
                    v65);
LABEL_194:
                  v38 = v71;
                }
              }
              else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(SendNetBufferListsHandler) = 3;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  SendNetBufferListsHandler,
                  27,
                  11,
                  (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                  (char)v39);
                goto LABEL_194;
              }
LABEL_162:
              v43 = 36LL;
LABEL_101:
              v39[22].Region = v43;
              v39 = (_SLIST_HEADER *)v39->Alignment;
              if ( !v39 )
                break;
            }
            v44 = v113;
            v45 = v77 - v38;
            if ( (Region & 1) == 0 || !v45 )
              goto LABEL_107;
            if ( (_BYTE)v113 || v40 )
            {
              SendNetBufferListsHandler = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              if ( !(_BYTE)v113 )
                goto LABEL_129;
              goto LABEL_106;
            }
            v40 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v38 = v71;
            if ( CurrentIrql == 2 )
            {
              v113 = 1;
              SendNetBufferListsHandler = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_106:
              v46 = (_QWORD *)(*(_QWORD *)SendNetBufferListsHandler + (KeGetPcr()->Prcb.Number << 12));
              *v46 += v45;
              goto LABEL_107;
            }
            LOBYTE(v44) = 0;
            v113 = v44;
            SendNetBufferListsHandler = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_129:
            _InterlockedAdd64((volatile signed __int64 *)(SendNetBufferListsHandler + 8), v45);
LABEL_107:
            v77 = v38;
            if ( !v39 )
            {
              v7 = (struct _NDIS_FILTER_BLOCK *)a1;
              FilterDriver = v85;
              break;
            }
          }
        }
        v32 = a4;
      }
      if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
        goto LABEL_72;
      switch ( v7->Header.Type )
      {
        case 5u:
          LOBYTE(v47) = FILTER_TEST_FLAG(v7, 1024);
          break;
        case 0x11u:
          LOBYTE(v47) = ((__int64)v7[2].PktMonEdgeLower.ListLink.Blink & 0x1000) != 0;
          break;
        case 0x12u:
          v47 = *(_DWORD *)&v7->StackExpansionFallback.WorkItemQueued >> 31;
          break;
        default:
LABEL_72:
          if ( (_BYTE)dword_140127110 )
            WmiGetClock(0LL, 0LL);
          if ( v68 )
          {
            v48 = WORD2(v7->StackExpansionFallback.PendingWork.StatusIndications);
            if ( v48 == -8826 || v48 == 1544 || v48 == 8 )
            {
              v49 = WmiGetClock(0LL, 0LL);
              WnodeEventItem[1] = 0;
              v50 = v49 - Clock;
              LODWORD(v49) = (FilterDriver->NetLuid.Value >> 24) & 0xFFFFFF;
              v107 = v50;
              v105 = v49;
              v98 = 0;
              v99 = 0;
              v101 = 0LL;
              v103 = 0;
              v109 = 0;
              v104 = 0x20000;
              v102 = EtwGuidNdisReceive;
              v97 = 16;
              v106 = v32;
              v108 = KeGetPcr()->Prcb.Number;
              WnodeEventItem[0] = 72;
              v100 = qword_140127108;
              IoWMIWriteEvent(WnodeEventItem);
            }
          }
          return;
      }
      if ( (_BYTE)v47 )
        ndisRemoveNblContextTerminator(Alignment, &v7->Header);
      goto LABEL_72;
    }
    v12 = ndisNblTrackerEpoch;
    v69 = 0LL;
    v80 = 0LL;
    v13 = v7->Characteristics.SendNetBufferListsHandler;
    v14 = a5 & 1;
    v73 = a5 & 1;
    v15 = 0LL;
    v82 = 0LL;
    v16 = 0LL;
    v112 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)Alignment, 0x20uLL, (a5 & 2 | 0x108) >> 1, v13, v14);
      LOBYTE(v14) = a5 & 1;
      v15 = 0LL;
      v16 = 0LL;
    }
    v17 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v18 = *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v17 = (2 * v12) ^ ((unsigned __int64)v13 ^ (2 * v12)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v18 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v76 = v18;
    v19 = (_SLIST_HEADER *)Alignment;
    if ( Alignment )
    {
      while ( 1 )
      {
        v20 = v19[22].Region;
        while ( v19[22].Region == v20 )
        {
          if ( v20 )
          {
            if ( (v20 & 4) != 0 )
              goto LABEL_131;
          }
          else if ( !v19[7].Region )
          {
            v19[7].Region = 32LL;
          }
          v21 = (unsigned __int8 *)v19[7].Region;
          if ( v21 )
          {
            LODWORD(a2) = *v21;
            if ( (unsigned __int8)((_BYTE)a2 - 17) <= 1u || (_BYTE)a2 == 5 )
            {
              if ( v21 != (unsigned __int8 *)v18 || v19[1].Region )
              {
                ++v15;
                v22 = v17;
                v69 = v15;
              }
              else
              {
                ++v16;
                v22 = 24LL;
                ++v15;
                v82 = v16;
                v69 = v15;
              }
              goto LABEL_25;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v64) = *v21;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v19,
                v64);
LABEL_193:
              v15 = v69;
              v18 = v76;
              v16 = v82;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)a2,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v19);
            goto LABEL_193;
          }
LABEL_131:
          v22 = v17 | 4;
LABEL_25:
          v19[22].Region = v22;
          v19 = (_SLIST_HEADER *)v19->Alignment;
          if ( !v19 )
            break;
        }
        v23 = v80 - v15;
        LOBYTE(v14) = v73;
        v81 = v80 - v15;
        if ( (v20 & 1) == 0 || !v23 )
          goto LABEL_31;
        if ( v73 || v112 )
        {
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v73 )
            goto LABEL_60;
          goto LABEL_30;
        }
        v112 = 1;
        v31 = KeGetCurrentIrql();
        v15 = v69;
        v23 = v81;
        if ( v31 == 2 )
        {
          LOBYTE(v14) = 1;
          v73 = 1;
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_30:
          v24 = (_QWORD *)(a2->Link.Alignment + (KeGetPcr()->Prcb.Number << 12));
          *v24 += v23;
          goto LABEL_31;
        }
        LOBYTE(v14) = 0;
        v73 = 0;
        a2 = (struct _NET_BUFFER_LIST *)(16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_60:
        _InterlockedAdd64((volatile signed __int64 *)&a2->FirstNetBuffer, v23);
LABEL_31:
        v18 = v76;
        v16 = v82;
        v80 = v15;
        if ( !v19 )
        {
          v7 = (struct _NDIS_FILTER_BLOCK *)a1;
          FilterDriver = v85;
          break;
        }
      }
    }
    v25 = v15 - v16;
    v70 = v25;
    if ( (v17 & 1) == 0 || !v25 )
    {
LABEL_42:
      v11 = a5;
      goto LABEL_43;
    }
    if ( (_BYTE)v14 || v112 )
    {
      v27 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v14 )
        goto LABEL_39;
    }
    else
    {
      v26 = KeGetCurrentIrql();
      v25 = v70;
      if ( v26 != 2 )
      {
        v27 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_39:
        _InterlockedAdd64((volatile signed __int64 *)(v27 + 8), v25);
        goto LABEL_42;
      }
      v27 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v28 = (_QWORD *)(*(_QWORD *)v27 + (KeGetPcr()->Prcb.Number << 12));
    *v28 += v25;
    goto LABEL_42;
  }
}
