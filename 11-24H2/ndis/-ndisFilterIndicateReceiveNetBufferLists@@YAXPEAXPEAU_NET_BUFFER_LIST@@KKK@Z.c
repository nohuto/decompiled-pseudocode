/*
 * XREFs of ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001A6F0 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001A800 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001CCD0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001D7C0 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     PktMonClientNblDrop @ 0x14001F9D0 (PktMonClientNblDrop.c)
 *     PktMonClientNblLogNdis @ 0x1400206D0 (PktMonClientNblLogNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140071670 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        void *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v13; // r15
  __int64 v14; // r15
  struct _NDIS_FILTER_BLOCK *v15; // r10
  void (__fastcall *v16)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r13
  unsigned int Number; // r13d
  struct _NDIS_RCV_TRACKER_ARRAY *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 Pool2; // r15
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NET_BUFFER_LIST *v24; // rdx
  struct _NDIS_FILTER_BLOCK *v25; // rcx
  __int64 v26; // r9
  struct _NET_BUFFER_LIST **v27; // rax
  struct _NDIS_OPEN_BLOCK *v28; // rdx
  struct _NDIS_OPEN_BLOCK *v29; // rdx
  struct _NET_BUFFER_LIST *v30; // r12
  unsigned int v31; // esi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // r9
  struct _NET_BUFFER_LIST *v38; // rdx
  __int64 v39; // r8
  struct _NDIS_FILTER_BLOCK *v40; // rcx
  int v41; // edx
  struct _NET_BUFFER_LIST **v42; // r14
  unsigned __int64 v43; // rcx
  struct _NDIS_FILTER_BLOCK *i; // rdi
  struct _NET_BUFFER_LIST *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rsi
  struct _NET_BUFFER_LIST *v48; // rdi
  unsigned int v49; // ecx
  unsigned int v50; // edx
  struct _NET_BUFFER_LIST *v51; // rbp
  unsigned int v52; // r14d
  struct _NET_BUFFER_LIST *v53; // rbx
  unsigned int v54; // ecx
  struct _NET_BUFFER_LIST *v55; // rsi
  unsigned int v56; // r14d
  unsigned int v57; // ebp
  __int64 **v58; // rdx
  __int64 *v59; // rax
  unsigned int v60; // r13d
  _QWORD *v61; // rcx
  struct _NDIS_FILTER_BLOCK *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  struct _NET_BUFFER_LIST *Scratch; // rsi
  unsigned int v68; // ebp
  __int64 v69; // rax
  int v70; // ecx
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  struct _NET_BUFFER_LIST *j; // rax
  PVOID Context; // [rsp+20h] [rbp-C8h]
  unsigned int Contexta; // [rsp+20h] [rbp-C8h]
  struct _NDIS_FILTER_BLOCK *v80; // [rsp+40h] [rbp-A8h]
  struct _NDIS_FILTER_BLOCK *v81; // [rsp+48h] [rbp-A0h]
  unsigned int v82; // [rsp+48h] [rbp-A0h]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-90h] BYREF
  _QWORD Parameter[4]; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v86; // [rsp+80h] [rbp-68h]
  unsigned int v87; // [rsp+84h] [rbp-64h]
  unsigned int v88; // [rsp+88h] [rbp-60h]
  int v89; // [rsp+8Ch] [rbp-5Ch]
  _QWORD v90[11]; // [rsp+90h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF
  unsigned int v92; // [rsp+F0h] [rbp+8h]
  unsigned int v93; // [rsp+F0h] [rbp+8h]
  unsigned int v94; // [rsp+F0h] [rbp+8h]
  unsigned int v95; // [rsp+100h] [rbp+18h]
  char v97; // [rsp+110h] [rbp+28h]
  unsigned int v98; // [rsp+110h] [rbp+28h]
  unsigned int v99; // [rsp+110h] [rbp+28h]
  unsigned int v100; // [rsp+110h] [rbp+28h]

  v95 = a3;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = 0;
  v9 = a4;
  v10 = a5 & 2;
  v11 = a5 & 1;
  v13 = *((_QWORD *)a1 + 53) + 96 * v5;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 81),
      *((_QWORD *)a1 + 64),
      ((a5 & 2) != 0) + 130,
      a5 & 1);
  if ( (a5 & 2) != 0 || (a5 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v13 + 64) )
  {
    v14 = *((_QWORD *)a1 + 65);
    v15 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 63);
    v16 = (void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)a1 + 62);
    v80 = v15;
    if ( *(_BYTE *)v14 == 17 )
    {
      if ( v16 == ndisMTopReceiveNetBufferLists )
      {
        if ( (a2->NblFlags & 0x8000) != 0 )
        {
          ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))v15[1].PMProtocolOffloadList.Next)(
            v15,
            a2,
            v95,
            a4,
            a5);
          goto LABEL_35;
        }
        if ( !BYTE1(v15[1].NicSwitchCurrentCapabilities.NumberOfIndirectionTableEntriesPerNonDefaultPFVPort) )
        {
          ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))v15[1].WOLPatternList.Next)(
            v15,
            a2,
            v95,
            a4,
            a5);
          goto LABEL_35;
        }
        v92 = 0;
        v97 = 0;
        if ( !v11 )
        {
          if ( KeGetCurrentIrql() != 2 )
            goto LABEL_52;
          v15 = v80;
        }
        if ( ndisPerProcRcvTrackers )
        {
          Number = KeGetPcr()->Prcb.Number;
          v18 = ndisPerProcRcvTrackers;
          v19 = 2096LL * Number;
          v92 = Number;
          v20 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v19);
          if ( (unsigned int)v20 < 3 )
          {
            v97 = 1;
            *(_DWORD *)((char *)ndisPerProcRcvTrackers + v19) = v20 + 1;
            Pool2 = (__int64)v18 + 696 * v20 + v19 + 8;
            goto LABEL_12;
          }
        }
LABEL_52:
        Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
        if ( !Pool2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v41) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v41,
              4,
              11,
              (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
          }
          v30 = a2;
          goto LABEL_57;
        }
        v15 = v80;
LABEL_12:
        RcvLinkSpeedIndicateUp = (_QWORD *)v15->RcvLinkSpeedIndicateUp;
        Alignment = a2;
        *(_BYTE *)(Pool2 + 692) = 0;
        if ( v10 )
        {
          v24 = 0LL;
        }
        else
        {
          do
          {
            v24 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v25 = (struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[41];
        v81 = v25;
        if ( v25 && *((_BYTE *)v25->FilterModuleContext + 56) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v25, a2, v95, a4, a5);
          v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
          *(_DWORD *)(Pool2 + 80) = 0;
          *(_QWORD *)(Pool2 + 64) = 0LL;
        }
        else
        {
          *(_QWORD *)(Pool2 + 32) = v24;
          *(_DWORD *)(Pool2 + 44) = a4;
          *(_QWORD *)(Pool2 + 24) = a2;
          *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
          *(_DWORD *)(Pool2 + 16) = a5;
          *(_QWORD *)Pool2 = v15;
          *(_DWORD *)(Pool2 + 40) = v95;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, a4, (char *)v95);
          if ( *(_QWORD *)(Pool2 + 64) || (v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
          {
            if ( !*RcvLinkSpeedIndicateUp || v95 )
              *(_BYTE *)(Pool2 + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
            v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            if ( !v81 )
            {
              v28 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
              if ( v28 )
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v28);
              v29 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
              if ( v29 )
              {
                if ( v10 )
                  ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v29);
                else
                  ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
              }
              v27 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            }
          }
        }
        if ( !*(_BYTE *)(Pool2 + 692) )
          goto LABEL_58;
        v30 = *v27;
LABEL_57:
        if ( v30 )
        {
          v62 = v80;
          if ( byte_14011D800 && ((__int64)v80[4].PendingOidRequest & 2) != 0 )
          {
            PktMonClientNblDrop(
              (__int64)&v80[4].HigherFilter,
              (__int64)v30,
              HIDWORD(v80[4].OidRequestList.Blink),
              v26,
              (__int64)Context,
              1,
              204,
              -536866809);
            v62 = v80;
          }
          if ( !v10 )
            ndisReturnNetBufferListsInternal(v62, v30, v11, 0LL);
        }
LABEL_58:
        if ( v97 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v92);
        }
        else if ( Pool2 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        goto LABEL_35;
      }
      v37 = a4;
      v38 = a2;
      v39 = v95;
      v40 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 63);
      Contexta = a5;
    }
    else
    {
      if ( (a5 & 2) == 0 && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        LODWORD(a3) = KeGetPcr()->Prcb.Number;
        v42 = (struct _NET_BUFFER_LIST **)v90;
        v43 = a2->Link.Alignment;
        v82 = a3;
        v90[2] = 0LL;
        v90[0] = a2;
        v90[1] = a2;
        a2->Scratch = 0LL;
        a2->ChildRefCount = a5;
        a2->Status = v95;
        if ( v43 )
          *(_QWORD *)(v43 + 112) = a4;
        for ( i = v80; *(_BYTE *)v14 == 5; v80 = i )
        {
          v45 = *v42;
          if ( !*v42 )
            break;
          v46 = v14;
          v47 = *(_QWORD *)(v14 + 424) + 96LL * (unsigned int)a3;
          if ( *(_BYTE *)(v47 + 64) )
          {
            *v42 = 0LL;
            do
            {
              ChildRefCount = v45->ChildRefCount;
              NdisReserved2 = v45->NdisReserved2;
              Scratch = (struct _NET_BUFFER_LIST *)v45->Scratch;
              v100 = ChildRefCount;
              v94 = NdisReserved2;
              if ( v45->Link.Alignment )
                v68 = *(_DWORD *)(v45->Link.Alignment + 112);
              else
                v68 = 1;
              v45->ChildRefCount = 0;
              if ( byte_14011D800 )
              {
                if ( *(_BYTE *)v14 == 5 )
                {
                  v72 = *(_QWORD *)(v14 + 872);
                  if ( v72 )
                  {
                    if ( (*(_DWORD *)(v72 + 56) & 1) != 0 )
                    {
                      PktMonClientNblLogNdis(v14 + 848, v45, a3, 1LL);
                      ChildRefCount = v100;
                      NdisReserved2 = v94;
                    }
                  }
                }
              }
              if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v76 = *(_QWORD *)(v14 + 776)) != 0 )
                (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
                 + 14))(
                  i,
                  v45,
                  NdisReserved2,
                  v68,
                  ChildRefCount,
                  v76,
                  v16);
              else
                v16(i, v45, NdisReserved2, v68, ChildRefCount);
              v45 = Scratch;
            }
            while ( Scratch );
            break;
          }
          *(_BYTE *)(v47 + 64) = 1;
          v48 = *v42;
          *v42 = 0LL;
          if ( v48 )
          {
            do
            {
              v49 = v48->ChildRefCount;
              v50 = v48->NdisReserved2;
              v51 = (struct _NET_BUFFER_LIST *)v48->Scratch;
              v98 = v49;
              v93 = v50;
              if ( v48->Link.Alignment )
                v52 = *(_DWORD *)(v48->Link.Alignment + 112);
              else
                v52 = 1;
              v48->ChildRefCount = 0;
              if ( byte_14011D800 )
              {
                if ( *(_BYTE *)v14 == 5 )
                {
                  v64 = *(_QWORD *)(v14 + 872);
                  if ( v64 )
                  {
                    if ( (*(_DWORD *)(v64 + 56) & 1) != 0 )
                    {
                      PktMonClientNblLogNdis(v14 + 848, v48, a3, 1LL);
                      v49 = v98;
                      v50 = v93;
                    }
                  }
                }
              }
              if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v73 = *(_QWORD *)(v14 + 776)) != 0 )
                (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
                 + 14))(
                  v80,
                  v48,
                  v50,
                  v52,
                  v49,
                  v73,
                  v16);
              else
                v16(v80, v48, v50, v52, v49);
              v48 = v51;
            }
            while ( v51 );
            a3 = v82;
            v46 = v14;
          }
          *(_BYTE *)(v47 + 64) = 0;
          v42 = (struct _NET_BUFFER_LIST **)(v47 + 48);
          i = *(struct _NDIS_FILTER_BLOCK **)(v46 + 504);
          v14 = *(_QWORD *)(v14 + 520);
          v16 = *(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v46 + 496);
        }
        v53 = *v42;
        if ( *v42 )
        {
          *v42 = 0LL;
          do
          {
            v54 = v53->NdisReserved2;
            v55 = (struct _NET_BUFFER_LIST *)v53->Scratch;
            v56 = v53->ChildRefCount;
            v99 = v54;
            if ( v53->Link.Alignment )
              v57 = *(_DWORD *)(v53->Link.Alignment + 112);
            else
              v57 = 1;
            v53->ChildRefCount = 0;
            if ( byte_14011D800 )
            {
              if ( *(_BYTE *)v14 == 5 )
              {
                v69 = *(_QWORD *)(v14 + 872);
                if ( v69 )
                {
                  if ( (*(_DWORD *)(v69 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v14 + 848, v53, a3, 1LL);
                    v54 = v99;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v14 == 5 && (v75 = *(_QWORD *)(v14 + 776)) != 0 )
              (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
               + 14))(
                i,
                v53,
                v54,
                v57,
                v56,
                v75,
                v16);
            else
              v16(i, v53, v54, v57, v56);
            v53 = v55;
          }
          while ( v55 );
        }
        return;
      }
      v33 = (unsigned int)Size;
      v34 = KeGetPcr()->Prcb.Number << 12;
      v35 = *(_QWORD *)(v34 + qword_14011D048);
      LowLimit = v35;
      v36 = *(_QWORD *)(v34 + qword_14011D040);
      HighLimit = v36;
      if ( v35 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v36 )
      {
        IoGetStackLimits(&LowLimit, &HighLimit);
        v35 = LowLimit;
      }
      if ( (unsigned __int64)&retaddr - v35 < v33 )
      {
        v70 = 24576;
        v86 = v95;
        v89 = 0;
        Parameter[0] = v14;
        Parameter[1] = v80;
        Parameter[2] = v16;
        Parameter[3] = a2;
        v87 = a4;
        v88 = a5;
        if ( (unsigned int)Size > 0x6000 )
          v70 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               Parameter,
               v70,
               0,
               0LL) < 0 )
        {
          if ( byte_14011D800 && (*(_DWORD *)(v14 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v14 + 784, (_DWORD)a2, v71, 1, -1073741670, -536866813);
          NdisSetStatusInNblChain(a2, -1073741670);
          for ( j = a2; j; ++v6 )
            j = (struct _NET_BUFFER_LIST *)j->Link.Alignment;
          _InterlockedAdd((volatile signed __int32 *)(v14 + 292), v6);
          if ( (a5 & 2) == 0 )
          {
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v14, a2, 0);
            return;
          }
LABEL_99:
          if ( *(_DWORD *)ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(
              a2,
              *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 64),
              *((_QWORD *)a1 + 81),
              0x8Cu,
              a5 & 1);
          return;
        }
LABEL_35:
        if ( (a5 & 2) == 0 )
          return;
        goto LABEL_99;
      }
      if ( byte_14011D800 )
      {
        if ( *(_BYTE *)v14 == 5 )
        {
          v63 = *(_QWORD *)(v14 + 872);
          if ( v63 )
          {
            if ( (*(_DWORD *)(v63 + 56) & 1) != 0 )
              PktMonClientNblLogNdis(v14 + 848, a2, v36, 1LL);
          }
        }
      }
      if ( ndisVerifierNdisDispatch )
      {
        if ( *(_BYTE *)v14 == 5 )
        {
          v74 = *(_QWORD *)(v14 + 776);
          if ( v74 )
          {
            (*((void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v80,
              a2,
              v95,
              a4,
              a5,
              v74,
              v16);
            goto LABEL_35;
          }
        }
      }
      v37 = a4;
      v38 = a2;
      v39 = v95;
      v40 = v80;
      Contexta = a5;
    }
    v16(v40, v38, v39, v37, Contexta);
    goto LABEL_35;
  }
  v31 = a5 | 1;
  if ( !*(_QWORD *)(v13 + 48) )
  {
    *(_QWORD *)(v13 + 48) = a2;
    goto LABEL_32;
  }
  v58 = *(__int64 ***)(v13 + 56);
  if ( v95 != *((_DWORD *)v58 + 35) || v31 != *((_DWORD *)v58 + 33) || (a5 & 0xCB00) != 0 )
  {
    v58[14] = (__int64 *)a2;
LABEL_32:
    *(_QWORD *)(v13 + 56) = a2;
    v32 = a2->Link.Alignment;
    a2->Scratch = 0LL;
    a2->ChildRefCount = v31;
    a2->Status = v95;
    if ( v32 )
      *(_QWORD *)(v32 + 112) = v9;
    return;
  }
  v59 = *v58;
  if ( *v58 )
  {
    v60 = *((_DWORD *)v59 + 28) + v9;
    do
    {
      v61 = v59;
      v59 = (__int64 *)*v59;
    }
    while ( v59 );
  }
  else
  {
    v60 = v9 + 1;
    v61 = *(_QWORD **)(v13 + 56);
  }
  *v61 = a2;
  if ( *v58 )
    (*v58)[14] = v60;
}
