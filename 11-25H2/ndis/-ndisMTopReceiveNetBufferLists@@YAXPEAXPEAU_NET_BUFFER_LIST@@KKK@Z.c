/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001D250 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140032C90 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTopReceiveNetBufferLists(
        char *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // r14
  char *v8; // r12
  unsigned int v9; // r10d
  struct _NET_BUFFER_LIST *v10; // rdi
  unsigned int Number; // ebx
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  char *v15; // rsi
  _QWORD *v16; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v18; // rbx
  int v19; // r9d
  struct _NDIS_OPEN_BLOCK *v20; // rdi
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct _NET_BUFFER_LIST *v26; // rdx
  struct _NDIS_OPEN_BLOCK *v27; // rbx
  unsigned int v28; // edi
  unsigned int v29; // ebp
  unsigned int v30; // r14d
  int v31; // ebx
  unsigned int i; // ebx
  __int64 v33; // rdx
  int v34; // edx
  unsigned int v35; // r15d
  unsigned int v36; // edi
  struct _NDIS_OPEN_BLOCK *v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _NET_BUFFER_LIST *v41; // rdx
  struct _NDIS_OPEN_BLOCK *v42; // r15
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  struct _NET_BUFFER_LIST *v46; // rdx
  unsigned __int64 v47; // rdx
  unsigned int v48; // r13d
  struct _NET_BUFFER_LIST *v49; // rcx
  struct _NET_BUFFER_LIST *v50; // r15
  _QWORD *p_Alignment; // r12
  struct _NET_BUFFER_LIST *v52; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v54; // rbx
  _MDL *CurrentMdl; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // r15
  __int64 v58; // rbp
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r8
  _SLIST_HEADER *v61; // r15
  unsigned __int64 Region; // rdi
  __int64 v63; // rsi
  unsigned __int8 *v64; // rcx
  __int64 v65; // rax
  char v66; // r12
  unsigned __int64 v67; // r13
  _QWORD *v68; // rcx
  unsigned __int64 v69; // rbp
  unsigned __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // r12
  __int64 v73; // r15
  void (__fastcall *v74)(__int64, __int64, __int64); // rdi
  __int64 v75; // rbp
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  __int64 *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // r13
  __int64 v81; // r14
  __int64 v82; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v83; // rax
  __int64 v84; // r8
  __int64 v85; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v86; // rax
  __int64 v87; // r8
  __int64 v88; // r14
  __int64 v89; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v90; // rax
  __int64 v91; // r8
  __int64 v92; // rbx
  int v93; // ecx
  KSPIN_LOCK *v94; // rbx
  KIRQL v95; // al
  struct _NET_BUFFER_LIST **p_Next; // rdx
  KIRQL v97; // di
  struct _NET_BUFFER_LIST *v98; // rcx
  KIRQL CurrentIrql; // al
  __int64 v100; // [rsp+30h] [rbp-D8h]
  char v101; // [rsp+40h] [rbp-C8h]
  KIRQL v102; // [rsp+41h] [rbp-C7h]
  char v103; // [rsp+42h] [rbp-C6h]
  unsigned int v104; // [rsp+44h] [rbp-C4h]
  int v105; // [rsp+4Ch] [rbp-BCh]
  unsigned int v106; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v107; // [rsp+58h] [rbp-B0h]
  __int64 v108; // [rsp+60h] [rbp-A8h]
  __int64 v109; // [rsp+68h] [rbp-A0h]
  __int64 Pool2; // [rsp+70h] [rbp-98h]
  __int64 v111; // [rsp+78h] [rbp-90h]
  _QWORD Parameter[5]; // [rsp+80h] [rbp-88h] BYREF
  int v113; // [rsp+A8h] [rbp-60h]
  int v114; // [rsp+ACh] [rbp-5Ch]
  _QWORD v115[4]; // [rsp+B0h] [rbp-58h] BYREF
  char v117; // [rsp+118h] [rbp+10h]

  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*((void (__fastcall **)(char *, struct _NET_BUFFER_LIST *))a1 + 268))(a1, a2);
    return;
  }
  if ( !a1[2665] )
  {
    (*((void (__fastcall **)(char *))a1 + 267))(a1);
    return;
  }
  v9 = a5;
  v10 = 0LL;
  v106 = 0;
  v103 = 0;
  if ( (a5 & 1) == 0 )
  {
    if ( KeGetCurrentIrql() != 2 )
      goto LABEL_35;
    v9 = a5;
  }
  if ( ndisPerProcRcvTrackers )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = ndisPerProcRcvTrackers;
    v13 = 2096LL * Number;
    v106 = Number;
    v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13);
    if ( (unsigned int)v14 < 3 )
    {
      v103 = 1;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
      v15 = (char *)v12 + 696 * v14 + v13 + 8;
      Pool2 = (__int64)v15;
LABEL_7:
      v16 = (_QWORD *)*((_QWORD *)v8 + 50);
      Alignment = v7;
      v15[692] = 0;
      if ( (v9 & 2) == 0 )
      {
        do
        {
          v10 = Alignment;
          Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      v18 = (struct _NDIS_OPEN_BLOCK *)v16[41];
      if ( v18 && v18->ProtocolHandle->MajorNdisVersion >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v18, v7, a3, a4, v9);
        *((_QWORD *)v15 + 8) = 0LL;
        *((_DWORD *)v15 + 20) = 0;
      }
      else
      {
        *((_QWORD *)v15 + 3) = v7;
        *((_QWORD *)v15 + 1) = v16;
        *((_DWORD *)v15 + 4) = v9;
        *(_QWORD *)v15 = v8;
        *((_QWORD *)v15 + 4) = v10;
        *((_DWORD *)v15 + 10) = a3;
        *((_DWORD *)v15 + 11) = a4;
        ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15);
        if ( *((_QWORD *)v15 + 8) || *((_DWORD *)v15 + 172) )
        {
          if ( !*v16 || a3 )
            v15[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v15);
          if ( !v18 )
          {
            v20 = (struct _NDIS_OPEN_BLOCK *)v16[1];
            if ( v20 )
            {
              v21 = *((_DWORD *)v15 + 172);
              v22 = *((_DWORD *)v15 + 4) | 2;
              do
              {
                FilterNextOpen = v20->FilterNextOpen;
                v24 = 0LL;
                do
                {
                  v25 = (unsigned int)v24;
                  v26 = *(struct _NET_BUFFER_LIST **)&v15[40 * v24 + 64];
                  v24 = (unsigned int)(v24 + 1);
                  if ( v26 )
                    ndisMIndicateNetBufferListsToOpen(
                      v20,
                      v26,
                      *((_DWORD *)v15 + 10),
                      *(_DWORD *)&v15[40 * v25 + 80],
                      v22);
                }
                while ( (unsigned int)v24 <= v21 );
                v20 = FilterNextOpen;
              }
              while ( FilterNextOpen );
            }
            v27 = (struct _NDIS_OPEN_BLOCK *)v16[2];
            if ( v27 )
            {
              if ( (a5 & 2) != 0 )
              {
                v35 = *((_DWORD *)v15 + 172);
                v36 = *((_DWORD *)v15 + 4) | 2;
                do
                {
                  v37 = v27->FilterNextOpen;
                  v38 = 0LL;
                  do
                  {
                    v39 = (unsigned int)v38;
                    v40 = 5 * v38;
                    v38 = (unsigned int)(v38 + 1);
                    v41 = *(struct _NET_BUFFER_LIST **)&v15[8 * v40 + 64];
                    if ( v41 )
                      ndisMIndicateNetBufferListsToOpen(
                        v27,
                        v41,
                        *((_DWORD *)v15 + 10),
                        *(_DWORD *)&v15[40 * v39 + 80],
                        v36);
                  }
                  while ( (unsigned int)v38 <= v35 );
                  v27 = v37;
                }
                while ( v37 );
              }
              else
              {
                v28 = *((_DWORD *)v15 + 172);
                v29 = *((_DWORD *)v15 + 4);
                v30 = *((_DWORD *)v15 + 10);
                v31 = *(_DWORD *)(*(_QWORD *)v15 + 2244LL);
                if ( v31 )
                {
                  v42 = *(struct _NDIS_OPEN_BLOCK **)(*((_QWORD *)v15 + 1) + 16LL);
                  if ( v42 )
                  {
                    do
                    {
                      if ( (v42->OpenFlags & 4) != 0 )
                      {
                        v43 = 0LL;
                        do
                        {
                          v44 = 5 * v43;
                          v45 = (unsigned int)v43;
                          v46 = *(struct _NET_BUFFER_LIST **)&v15[40 * v43 + 64];
                          v43 = (unsigned int)(v43 + 1);
                          if ( v46 && *(struct _NDIS_OPEN_BLOCK **)&v15[8 * v44 + 56] != v42 )
                            ndisMIndicateNetBufferListsToOpen(v42, v46, v30, *(_DWORD *)&v15[40 * v45 + 80], v29 | 2);
                        }
                        while ( (unsigned int)v43 <= v28 );
                        if ( !--v31 )
                          break;
                      }
                      v42 = v42->FilterNextOpen;
                    }
                    while ( v42 );
                    v8 = a1;
                  }
                }
                for ( i = 1; i <= v28; ++i )
                {
                  v33 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&v15[40 * v33 + 56],
                    *(struct _NET_BUFFER_LIST **)&v15[40 * v33 + 64],
                    v30,
                    *(_DWORD *)&v15[40 * v33 + 80],
                    v29);
                }
              }
            }
          }
        }
      }
      if ( !v15[692] )
        goto LABEL_30;
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
      goto LABEL_29;
    }
  }
LABEL_35:
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v15 = (char *)Pool2;
  if ( Pool2 )
  {
    v9 = a5;
    goto LABEL_7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v34,
      4,
      11,
      (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
  }
LABEL_29:
  if ( !v7 )
    goto LABEL_30;
  if ( byte_1401278B0 && (*((_DWORD *)v8 + 1468) & 2) != 0 )
    PktMonClientNblDrop((_DWORD)v8 + 5816, (_DWORD)v7, *((_DWORD *)v8 + 1467), v19);
  if ( (a5 & 2) != 0 )
    goto LABEL_30;
  LODWORD(v47) = a5 & 1;
  v102 = 2;
  v48 = -1;
  v108 = 0LL;
  LOBYTE(v105) = 0;
  if ( *((_DWORD *)v8 + 12) || *((_DWORD *)v8 + 20) )
  {
    v105 = *((_DWORD *)v8 + 20);
    v108 = *((_QWORD *)v8 + 5);
    if ( !v108 )
      v108 = *((_QWORD *)v8 + 5);
  }
  v49 = v7;
  do
  {
    v49->Flags = v49->Flags & 0xFFFFFFF4 | 8;
    v49 = (struct _NET_BUFFER_LIST *)v49->Link.Alignment;
  }
  while ( v49 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled
    || byte_1401278B0 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  }
  if ( *((_DWORD *)v8 + 806) )
  {
    v50 = 0LL;
    p_Alignment = 0LL;
    do
    {
      v52 = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
      v7->Link.Alignment = 0LL;
      if ( v7->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)a1 + 806);
        FirstNetBuffer = v7->FirstNetBuffer;
        v54 = (struct _NPAGED_LOOKASIDE_LIST *)v7->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v54 )
          ExFreeToNPagedLookasideList(v54, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v7);
      }
      else
      {
        if ( v50 )
          *p_Alignment = v7;
        else
          v50 = v7;
        p_Alignment = &v7->Link.Alignment;
      }
      v7 = v52;
    }
    while ( v52 );
    v15 = (char *)Pool2;
    v7 = v50;
    if ( !v50 )
      goto LABEL_30;
    v8 = a1;
    LODWORD(v47) = a5 & 1;
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_116;
  v56 = *((_QWORD *)v8 + 317);
  v57 = ndisNblTrackerEpoch;
  v58 = 0LL;
  v111 = 0LL;
  v109 = 0LL;
  v117 = v47;
  v101 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)v7, 0LL, 0x87u, (void *)v56, v47);
  v59 = v56 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v56 & 1) != 0 )
  {
    v60 = *(_QWORD *)((v56 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v59 = (2 * v57) ^ (v56 ^ (2 * v57)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v60 = v56 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v107 = v60;
  v61 = (_SLIST_HEADER *)v7;
  do
  {
    Region = v61[22].Region;
    v63 = v109;
    while ( v61[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_177;
      }
      else if ( !v61[7].Region )
      {
        v61[7].Region = 0LL;
      }
      v64 = (unsigned __int8 *)v61[7].Region;
      if ( v64 )
      {
        LODWORD(v47) = *v64;
        if ( (unsigned __int8)(v47 - 17) <= 1u || (_BYTE)v47 == 5 )
        {
          if ( v64 != (unsigned __int8 *)v60 || v61[1].Region )
          {
            ++v58;
            v65 = v59;
          }
          else
          {
            ++v63;
            v65 = 24LL;
            ++v58;
          }
          goto LABEL_93;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v100) = *v64;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v61,
            v100);
LABEL_199:
          v60 = v107;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v47,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)v61);
        goto LABEL_199;
      }
LABEL_177:
      v65 = v59 | 4;
LABEL_93:
      v61[22].Region = v65;
      v61 = (_SLIST_HEADER *)v61->Alignment;
      if ( !v61 )
        break;
    }
    v66 = v117;
    v67 = v111 - v58;
    v109 = v63;
    if ( (Region & 1) == 0 || !v67 )
      goto LABEL_99;
    if ( v117 || v101 )
    {
      v47 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v117 )
        goto LABEL_167;
      goto LABEL_98;
    }
    v101 = 1;
    CurrentIrql = KeGetCurrentIrql();
    v60 = v107;
    if ( CurrentIrql == 2 )
    {
      v66 = 1;
      v117 = 1;
      v47 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_98:
      v68 = (_QWORD *)(*(_QWORD *)v47 + (KeGetPcr()->Prcb.Number << 12));
      *v68 += v67;
      goto LABEL_99;
    }
    v66 = 0;
    v117 = 0;
    v47 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_167:
    _InterlockedAdd64((volatile signed __int64 *)(v47 + 8), v67);
LABEL_99:
    v111 = v58;
  }
  while ( v61 );
  v69 = v58 - v63;
  v15 = (char *)Pool2;
  if ( (v59 & 1) != 0 && v69 )
  {
    if ( v66 || v101 )
    {
      v70 = 16 * ((v59 >> 1) & 1) + (v59 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( v66 )
        goto LABEL_114;
LABEL_106:
      _InterlockedAdd64((volatile signed __int64 *)(v70 + 8), v69);
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v70 = 16 * ((v59 >> 1) & 1) + (v59 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_106;
      }
      v70 = 16 * ((v59 >> 1) & 1) + (v59 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_114:
      v71 = (_QWORD *)(*(_QWORD *)v70 + (KeGetPcr()->Prcb.Number << 12));
      *v71 += v69;
    }
  }
  v48 = -1;
LABEL_116:
  if ( (v105 & 0x20) != 0 )
  {
    if ( (a5 & 1) == 0 )
      v102 = KfRaiseIrql(2u);
    v48 = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v48 + v108 + 344) = __rdtsc();
  }
  HIDWORD(v72) = HIDWORD(a1);
  v104 = v48;
  v73 = *((_QWORD *)a1 + 318);
  v74 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)a1 + 330);
  v75 = *((_QWORD *)a1 + 316);
  if ( *(_BYTE *)v73 == 17 )
    goto LABEL_123;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v72) = KeGetPcr()->Prcb.Number;
    v78 = v115;
    v115[2] = 0LL;
    v115[0] = v7;
    v115[1] = v7;
    v7->Scratch = 0LL;
    v7->ChildRefCount = a5 & 1;
    while ( *(_BYTE *)v73 == 5 )
    {
      v79 = *v78;
      if ( !*v78 )
        break;
      v80 = v73;
      v81 = *(_QWORD *)(v73 + 424) + 96 * v72;
      if ( *(_BYTE *)(v81 + 88) )
      {
        *v78 = 0LL;
        do
        {
          v86 = ndisVerifierNdisDispatch;
          v87 = *(unsigned int *)(v79 + 132);
          v88 = *(_QWORD *)(v79 + 112);
          *(_DWORD *)(v79 + 132) = 0;
          if ( v86 && *(_BYTE *)v73 == 5 && *(_QWORD *)(v73 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v86 + 17))(v75, v79, v87);
          else
            v74(v75, v79, v87);
          v79 = v88;
        }
        while ( v88 );
        break;
      }
      *(_BYTE *)(v81 + 88) = 1;
      v82 = *v78;
      *v78 = 0LL;
      if ( v82 )
      {
        do
        {
          v83 = ndisVerifierNdisDispatch;
          v84 = *(unsigned int *)(v82 + 132);
          v85 = *(_QWORD *)(v82 + 112);
          *(_DWORD *)(v82 + 132) = 0;
          if ( v83 && *(_BYTE *)v73 == 5 && *(_QWORD *)(v73 + 776) )
            (*((void (__fastcall **)(__int64, __int64, __int64))v83 + 17))(v75, v82, v84);
          else
            v74(v75, v82, v84);
          v82 = v85;
        }
        while ( v85 );
      }
      *(_BYTE *)(v81 + 88) = 0;
      v78 = (__int64 *)(v81 + 72);
      v73 = *(_QWORD *)(v73 + 552);
      v74 = *(void (__fastcall **)(__int64, __int64, __int64))(v80 + 528);
      v75 = *(_QWORD *)(v80 + 536);
    }
    v89 = *v78;
    if ( *v78 )
    {
      *v78 = 0LL;
      do
      {
        v90 = ndisVerifierNdisDispatch;
        v91 = *(unsigned int *)(v89 + 132);
        v92 = *(_QWORD *)(v89 + 112);
        *(_DWORD *)(v89 + 132) = 0;
        if ( v90 && *(_BYTE *)v73 == 5 && *(_QWORD *)(v73 + 776) )
          (*((void (__fastcall **)(__int64, __int64, __int64))v90 + 17))(v75, v89, v91);
        else
          v74(v75, v89, v91);
        v89 = v92;
      }
      while ( v92 );
    }
    v48 = v104;
  }
  else
  {
    if ( *a1 != 5 )
      goto LABEL_123;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v73 == 5 && *(_QWORD *)(v73 + 776) )
      {
        (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(
          v75,
          v7,
          0LL);
        goto LABEL_124;
      }
LABEL_123:
      v74(v75, (__int64)v7, a5 & 1);
    }
    else
    {
      v93 = 24576;
      v114 = 0;
      Parameter[0] = v73;
      Parameter[1] = v75;
      Parameter[2] = v74;
      Parameter[3] = v7;
      Parameter[4] = 0LL;
      v113 = 0;
      if ( (unsigned int)Size > 0x6000 )
        v93 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v93,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(v7, *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 81), 0xA0uLL, 1u, 0);
        v94 = (KSPIN_LOCK *)(a1 + 144);
        v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 18);
        p_Next = (struct _NET_BUFFER_LIST **)(a1 + 280);
        *((_QWORD *)a1 + 19) = KeGetCurrentThread();
        v97 = v95;
        v98 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 35);
        if ( v98 )
        {
          do
          {
            p_Next = &v98->Next;
            v98 = (struct _NET_BUFFER_LIST *)v98->Link.Alignment;
          }
          while ( v98 );
          v94 = (KSPIN_LOCK *)(a1 + 144);
        }
        *p_Next = v7;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)a1);
        *((_QWORD *)a1 + 19) = 0LL;
        KeReleaseSpinLock(v94, v97);
      }
    }
  }
LABEL_124:
  if ( (v105 & 0x20) != 0 )
  {
    if ( v48 == -1 )
      v48 = KeGetPcr()->Prcb.Number;
    v76 = v108 + ndisPcwPerCpuDataStride * v48 + ndisPcwOffsetToPerCpuData;
    v77 = __rdtsc();
    *(_QWORD *)(v76 + 144) += (((unsigned __int64)HIDWORD(v77) << 32) | (unsigned int)v77) - *(_QWORD *)(v76 + 344);
    *(_QWORD *)(v76 + 344) = 0LL;
    if ( v102 != 2 )
      KeLowerIrql(v102);
  }
LABEL_30:
  if ( v103 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v106);
  }
  else if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
  }
}
