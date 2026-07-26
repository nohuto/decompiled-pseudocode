/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0
 * Callers:
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001A6F0 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001A800 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001C100 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001D9D0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003F570 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140040490 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001A240 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140020E10 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140027A70 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1400430D0 (--$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 *     NdisAllocateNetBufferListContext @ 0x1400433B0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x140057790 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     TrackNblContextVerifierFailure @ 0x1400A2970 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _NDIS_MINIPORT_BLOCK *FilterDriver; // rsi
  unsigned int v6; // edi
  struct _NET_BUFFER_LIST *Alignment; // r14
  __int16 PcwDatapathEventMask; // r13
  int PcwDatapathCycleMask; // r12d
  unsigned int Flags; // r8d
  bool v12; // dl
  unsigned int v13; // r15d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  volatile unsigned int v16; // eax
  _SLIST_HEADER *v17; // r15
  unsigned int v18; // r8d
  int v19; // r9d
  volatile unsigned int v20; // eax
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  char *v25; // rcx
  unsigned __int64 v26; // rax
  _PKTMON_COMPONENT_CONTEXT *v27; // rax
  bool v28; // zf
  void *v29; // rdx
  KIRQL v30; // al
  _QWORD *p_TargetInfoAsUlong; // r8
  _QWORD *v32; // rdx
  struct _NET_BUFFER_LIST *v33; // r10
  unsigned int v34; // edx
  unsigned int v35; // eax
  bool IsFilterVerified; // al
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // eax
  char *v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // ecx
  struct _NET_BUFFER_LIST *v44; // rcx
  unsigned int v45; // r10d
  _QWORD *v46; // rcx
  int v47; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+38h] [rbp-C8h]
  KIRQL i; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  _PKTMON_PACKET_TYPE NicSwitchCapabilities; // [rsp+4Ch] [rbp-B4h]
  unsigned int Number; // [rsp+4Ch] [rbp-B4h]
  struct _NET_BUFFER_LIST *v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  __int64 ReturnNetBufferListsContext; // [rsp+60h] [rbp-A0h]
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // [rsp+68h] [rbp-98h]
  wchar_t *Buffer; // [rsp+70h] [rbp-90h]
  wchar_t *v59; // [rsp+78h] [rbp-88h]
  struct _NET_BUFFER_LIST *v60; // [rsp+80h] [rbp-80h] BYREF
  struct _NET_BUFFER_LIST **p_Next; // [rsp+88h] [rbp-78h]
  struct _NDIS_FILTER_BLOCK *ReturnNetBufferListsObject; // [rsp+90h] [rbp-70h]
  __int64 Clock; // [rsp+98h] [rbp-68h]
  _WORD WnodeEventItem[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  GUID v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  int v70; // [rsp+D0h] [rbp-30h]
  unsigned int v71; // [rsp+D4h] [rbp-2Ch]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  unsigned int v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E4h] [rbp-1Ch]
  _QWORD Parameter[5]; // [rsp+F0h] [rbp-10h] BYREF
  int v76; // [rsp+118h] [rbp+18h]
  int v77; // [rsp+11Ch] [rbp+1Ch]
  _QWORD v78[49]; // [rsp+120h] [rbp+20h] BYREF
  KIRQL v79; // [rsp+2F0h] [rbp+1F0h]
  char v80; // [rsp+2F8h] [rbp+1F8h]
  KIRQL v81; // [rsp+2F8h] [rbp+1F8h]

  FilterDriver = (_NDIS_MINIPORT_BLOCK *)a1->FilterDriver;
  v6 = 0;
  Clock = 0LL;
  Alignment = a2;
  Buffer = 0LL;
  PcwDatapathEventMask = 0;
  v51 = -1;
  LOBYTE(PcwDatapathCycleMask) = 0;
  if ( FilterDriver->PcwDatapathEventMask || FilterDriver->PcwDatapathCycleMask )
  {
    PcwDatapathEventMask = FilterDriver->PcwDatapathEventMask;
    PcwDatapathCycleMask = FilterDriver->PcwDatapathCycleMask;
    Buffer = FilterDriver->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = FilterDriver->Reserved4.Buffer;
  }
  Flags = a2->Flags;
  v12 = a2->SourceHandle == a1;
  v79 = 2;
  if ( (Alignment->NblFlags & 0x8000) != 0 && Alignment->NetBufferListInfo[5] == a1 )
  {
    v12 = 1;
LABEL_73:
    if ( (Flags & 0x200) == 0 )
      goto LABEL_29;
    goto LABEL_5;
  }
  if ( v12 )
    goto LABEL_73;
LABEL_5:
  if ( FilterDriver->CheckPacketFilters && !LODWORD(a1->NextSendNetBufferListsHandler)
    || ((__int64)a1->NextSendNetBufferListsHandler & 0x10000) != 0 && !v12 && (Flags & 0x80u) != 0 )
  {
LABEL_29:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        v6 = 1;
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)FilterDriver, Alignment, v6, 0LL);
    }
    return;
  }
  v13 = a5;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 )
  {
    switch ( a1->Header.Type )
    {
      case 5u:
        LOBYTE(v16) = FILTER_TEST_FLAG(a1, 1024);
        break;
      case 0x11u:
        LOBYTE(v16) = (*((_DWORD *)&a1[2].PktMonComp + 14) & 0x1000) != 0;
        break;
      case 0x12u:
        v16 = *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
        break;
      default:
        goto LABEL_9;
    }
    if ( (_BYTE)v16 )
    {
      v60 = 0LL;
      p_Next = &v60;
      memset(&v78[1], 0, 0x178uLL);
      v78[0] = Alignment;
      v17 = (_SLIST_HEADER *)v78;
      do
      {
        if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(Alignment, a1);
          v17->Alignment = Alignment->Link.Alignment;
          Alignment->Link.Alignment = 0LL;
          *p_Next = Alignment;
          p_Next = &Alignment->Next;
          Alignment = (struct _NET_BUFFER_LIST *)v17->Alignment;
        }
        else
        {
          v17 = (_SLIST_HEADER *)Alignment;
          *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = a1;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
      }
      while ( Alignment );
      v45 = 0;
      v13 = a5;
      v46 = (_QWORD *)v78[0];
      a4 = 0;
      if ( v78[0] )
      {
        do
        {
          v46 = (_QWORD *)*v46;
          ++v45;
        }
        while ( v46 );
        a4 = v45;
      }
      v33 = v60;
      Alignment = (struct _NET_BUFFER_LIST *)v78[0];
      v54 = v60;
      p_Next = &v60;
      v60 = 0LL;
      if ( v54 )
      {
        if ( byte_14011D800 && (*((_DWORD *)&FilterDriver->PktMonComp + 14) & 2) != 0 )
        {
          v49 = -536866800;
          v48 = 3;
          v47 = 1;
          PktMonClientNblDrop((_DWORD)FilterDriver + 5816, (_DWORD)v33, FilterDriver->PktMonComp.PacketType, v19);
          v33 = v54;
        }
        if ( (a5 & 2) != 0 )
        {
LABEL_113:
          if ( !v78[0] )
            return;
          goto LABEL_9;
        }
        v81 = 2;
        v34 = a5 & 1;
        v59 = 0LL;
        LOBYTE(v55) = 0;
        Number = -1;
        if ( FilterDriver->PcwDatapathEventMask || FilterDriver->PcwDatapathCycleMask )
        {
          v55 = FilterDriver->PcwDatapathCycleMask;
          v59 = FilterDriver->Reserved4.Buffer;
          if ( !v59 )
            v59 = FilterDriver->Reserved4.Buffer;
        }
        v44 = v33;
        do
        {
          v44->Flags = v44->Flags & 0xFFFFFFF4 | 8;
          v44 = (struct _NET_BUFFER_LIST *)v44->Link.Alignment;
        }
        while ( v44 );
        if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011D800 )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v33);
        if ( FilterDriver->PeriodicReceiveQueue.NblsAllocated )
        {
          v54 = ndisReturnPeriodicReceives(FilterDriver, v33);
          v33 = v54;
          if ( !v54 )
            goto LABEL_113;
          v34 = a5 & 1;
        }
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v33,
            0LL,
            (unsigned __int64)FilterDriver->Next.ReturnNetBufferListsTracker,
            0x87u,
            v34);
        if ( (v55 & 0x20) != 0 )
        {
          if ( (a5 & 1) == 0 )
            v81 = KfRaiseIrql(2u);
          Number = KeGetPcr()->Prcb.Number;
          v18 = ndisPcwOffsetToPerCpuData;
          *(_QWORD *)((char *)v59 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 344) = __rdtsc();
        }
        ReturnNetBufferListsHandler = FilterDriver->Next.ReturnNetBufferListsHandler;
        ReturnNetBufferListsContext = (__int64)FilterDriver->Next.ReturnNetBufferListsContext;
        ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)FilterDriver->Next.ReturnNetBufferListsObject;
        if ( ReturnNetBufferListsObject->Header.Type == 17 )
          goto LABEL_115;
        v35 = a5 & 1;
        if ( (a5 & 1) == 0 )
        {
          if ( KeGetCurrentIrql() != 2 )
          {
            if ( FilterDriver->Header.Type == 5 )
            {
              if ( !ndisIsLwfGuaranteedStackSpaceAvailable() )
              {
                Parameter[1] = ReturnNetBufferListsContext;
                v43 = 24576;
                Parameter[0] = ReturnNetBufferListsObject;
                v76 = 0;
                v77 = 0;
                Parameter[2] = ReturnNetBufferListsHandler;
                Parameter[3] = v54;
                Parameter[4] = 0LL;
                if ( (unsigned int)Size > 0x6000 )
                  v43 = Size;
                if ( KeExpandKernelStackAndCalloutEx(
                       ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
                       Parameter,
                       v43,
                       0,
                       0LL) < 0 )
                {
                  if ( *(_DWORD *)ndisNblTrackerMode )
                    ndisNblTrackerTransferOwnershipInternal(
                      v54,
                      (struct NDIS_NBL_TRACKER_HANDLE__ *)FilterDriver->Reserved30,
                      0xA0uLL,
                      1u,
                      0);
                  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&FilterDriver->FirstPendingPacket);
                  p_TargetInfoAsUlong = &FilterDriver->WakeUpDpcTimer.Dpc.TargetInfoAsUlong;
                  FilterDriver->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
                  v32 = *(_QWORD **)&FilterDriver->WakeUpDpcTimer.Dpc.TargetInfoAsUlong;
                  for ( i = v30; v32; v32 = (_QWORD *)*v32 )
                    p_TargetInfoAsUlong = v32;
                  *p_TargetInfoAsUlong = v54;
                  ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)FilterDriver);
                  FilterDriver->ReturnPacketsQueue = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)&FilterDriver->FirstPendingPacket, i);
                }
                goto LABEL_108;
              }
              IsFilterVerified = ndisIsFilterVerified(ReturnNetBufferListsObject);
              v38 = 0LL;
              v39 = ReturnNetBufferListsContext;
              if ( !IsFilterVerified )
                goto LABEL_107;
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int), int, int, int))ndisVerifierNdisDispatch
               + 17))(
                ReturnNetBufferListsContext,
                v54,
                a5 & 1,
                *(_QWORD *)(v37 + 776),
                ReturnNetBufferListsHandler,
                v47,
                v48,
                v49);
LABEL_108:
              if ( (v55 & 0x20) != 0 )
              {
                v40 = Number;
                if ( Number == -1 )
                  v40 = KeGetPcr()->Prcb.Number;
                v41 = (char *)v59 + ndisPcwPerCpuDataStride * v40 + ndisPcwOffsetToPerCpuData;
                v42 = __rdtsc();
                *((_QWORD *)v41 + 18) += (((unsigned __int64)HIDWORD(v42) << 32) | (unsigned int)v42)
                                       - *((_QWORD *)v41 + 43);
                *((_QWORD *)v41 + 43) = 0LL;
                if ( v81 != 2 )
                  KeLowerIrql(v81);
              }
              goto LABEL_113;
            }
LABEL_115:
            v38 = a5 & 1;
            v39 = ReturnNetBufferListsContext;
LABEL_107:
            ReturnNetBufferListsHandler((void *)v39, v54, v38);
            goto LABEL_108;
          }
          v35 = 0;
        }
        ndisInvokeIterativeDatapath<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
          (_DWORD)v54,
          (_DWORD)ReturnNetBufferListsObject,
          v18,
          v35,
          (__int64)ReturnNetBufferListsObject,
          ReturnNetBufferListsContext,
          (__int64)ReturnNetBufferListsHandler);
        goto LABEL_108;
      }
    }
  }
LABEL_9:
  if ( (_BYTE)dword_14011D060 )
  {
    v80 = 1;
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v80 = 0;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      Alignment,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
      (unsigned __int64)a1->Characteristics.SendNetBufferListsHandler,
      (v13 & 2 | 0x108) >> 1,
      v13 & 1);
  if ( byte_14011D800 )
  {
    v27 = *(_PKTMON_COMPONENT_CONTEXT **)&a1->NicSwitchHwCapabilities.NdisReserved2;
    if ( v27 )
    {
      if ( (*((_DWORD *)v27 + 14) & 1) != 0 )
      {
        NicSwitchCapabilities = a1->NicSwitchHwCapabilities.NicSwitchCapabilities;
        v28 = (Alignment->NblFlags & 0x8000) == 0;
        memset(&WnodeEventItem[1], 0, 6);
        *(_DWORD *)&v67.Data2 = 0;
        if ( v28 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v29 = *(void **)&a1->NicSwitchHwCapabilities.NumMacAddressesPerPort;
            WnodeEventItem[0] = 40;
            HIDWORD(v66) = NicSwitchCapabilities;
            v65 = (__int64)Alignment;
            LODWORD(v66) = 1;
            v67.Data1 = 1;
            *(_QWORD *)v67.Data4 = 0LL;
            (*(void (__fastcall **)(_QWORD, void *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1) + 40LL))(
              xmmword_14011D820,
              v29,
              WnodeEventItem,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  if ( (PcwDatapathEventMask & 0x3014) != 0 || (PcwDatapathCycleMask & 8) != 0 )
  {
    if ( (v13 & 1) == 0 )
      v79 = KfRaiseIrql(2u);
    if ( (PcwDatapathEventMask & 4) != 0 )
    {
      v14 = KeGetPcr()->Prcb.Number;
      v51 = v14;
      ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 16);
    }
    else
    {
      v14 = -1;
    }
    if ( (PcwDatapathEventMask & 0x10) != 0 )
    {
      v15 = a4;
      if ( v14 == -1 )
      {
        v14 = KeGetPcr()->Prcb.Number;
        v51 = v14;
      }
      *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 32) += a4;
    }
    else
    {
      v15 = a4;
    }
    if ( (v13 & 2) != 0 )
    {
      if ( (PcwDatapathEventMask & 0x1000) != 0 )
      {
        if ( v14 == -1 )
        {
          v14 = KeGetPcr()->Prcb.Number;
          v51 = v14;
        }
        ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 232);
      }
      if ( (PcwDatapathEventMask & 0x2000) != 0 )
      {
        if ( v14 == -1 )
        {
          v14 = KeGetPcr()->Prcb.Number;
          v51 = v14;
        }
        *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 240) += v15;
      }
    }
    if ( (PcwDatapathCycleMask & 8) != 0 )
    {
      if ( v14 == -1 )
      {
        v14 = KeGetPcr()->Prcb.Number;
        v51 = v14;
      }
      *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 328) = __rdtsc();
    }
    else if ( v79 != 2 )
    {
      KeLowerIrql(v79);
    }
  }
  ((void (__fastcall *)(_NDIS_OBJECT_HEADER *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))a1->NextReturnNetBufferListsTracker)(
    a1->NextReturnNetBufferListsObject,
    Alignment,
    a3,
    a4,
    v13);
  if ( (PcwDatapathCycleMask & 8) != 0 )
  {
    v24 = v51;
    if ( v51 == -1 )
      v24 = KeGetPcr()->Prcb.Number;
    v25 = (char *)Buffer + ndisPcwPerCpuDataStride * v24 + ndisPcwOffsetToPerCpuData;
    v26 = __rdtsc();
    *((_QWORD *)v25 + 16) += (((unsigned __int64)HIDWORD(v26) << 32) | (unsigned int)v26) - *((_QWORD *)v25 + 41);
    *((_QWORD *)v25 + 41) = 0LL;
    if ( v79 != 2 )
      KeLowerIrql(v79);
  }
  if ( (v13 & 2) == 0 )
    goto LABEL_38;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      Alignment,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->Characteristics.SendNetBufferListsHandler,
      0x20uLL,
      0x88u,
      v13 & 1);
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_38;
  switch ( a1->Header.Type )
  {
    case 5u:
      LOBYTE(v20) = FILTER_TEST_FLAG(a1, 1024);
LABEL_61:
      if ( (_BYTE)v20 )
        ndisRemoveNblContextTerminator(Alignment, &a1->Header);
      break;
    case 0x11u:
      LOBYTE(v20) = (*((_DWORD *)&a1[2].PktMonComp + 14) & 0x1000) != 0;
      goto LABEL_61;
    case 0x12u:
      v20 = *(_DWORD *)&a1->StackExpansionFallback.WorkItemQueued >> 31;
      goto LABEL_61;
  }
LABEL_38:
  if ( (_BYTE)dword_14011D060 )
    WmiGetClock(0LL, 0LL);
  if ( v80 )
  {
    v21 = WORD2(a1->StackExpansionFallback.PendingWork.StatusIndications);
    if ( v21 == 0xDD86 || v21 == 1544 || v21 == 8 )
    {
      v22 = WmiGetClock(0LL, 0LL);
      WnodeEventItem[1] = 0;
      v23 = v22 - Clock;
      LODWORD(v22) = (FilterDriver->NetLuid.Value >> 24) & 0xFFFFFF;
      v72 = v23;
      v70 = v22;
      *(_WORD *)((char *)&WnodeEventItem[2] + 1) = 0;
      HIBYTE(WnodeEventItem[3]) = 0;
      v66 = 0LL;
      v68 = 0;
      v74 = 0;
      v69 = 0x20000;
      v67 = EtwGuidNdisReceive;
      LOBYTE(WnodeEventItem[2]) = 16;
      v71 = a4;
      v73 = KeGetPcr()->Prcb.Number;
      WnodeEventItem[0] = 72;
      v65 = qword_14011D058;
      IoWMIWriteEvent(WnodeEventItem);
    }
  }
}
