/*
 * XREFs of ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
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

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  _QWORD *v6; // r15
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  unsigned int v9; // esi
  __int64 v10; // r10
  __int64 v11; // rax
  struct _NET_BUFFER_LIST *v12; // r12
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  char v17; // bp
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  _SLIST_HEADER *Alignment; // r14
  unsigned __int64 Region; // rdi
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rdi
  void (__fastcall *v31)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rsi
  __int64 v32; // r14
  char v33; // r15
  struct _NET_BUFFER_LIST *v34; // rbp
  unsigned int Number; // r13d
  struct _NDIS_RCV_TRACKER_ARRAY *v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 Pool2; // rdi
  __int64 v40; // rsi
  struct _NET_BUFFER_LIST *v41; // rcx
  __int64 v42; // r15
  __int64 v43; // r9
  struct _NET_BUFFER_LIST **v44; // rax
  struct _NDIS_OPEN_BLOCK *v45; // rdx
  struct _NDIS_OPEN_BLOCK *v46; // rdx
  struct _NET_BUFFER_LIST *v47; // rsi
  int v48; // r13d
  unsigned __int64 v49; // rcx
  __int64 v50; // r9
  unsigned __int64 v51; // rbp
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  void (__fastcall *v55)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int); // rax
  unsigned __int64 v56; // rax
  struct _NET_BUFFER_LIST **v57; // r15
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  struct _NET_BUFFER_LIST *v60; // rbx
  __int64 v61; // r13
  __int64 v62; // rbp
  struct _NET_BUFFER_LIST *v63; // rbx
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  struct _NET_BUFFER_LIST *Scratch; // r15
  unsigned int v67; // r12d
  struct _NET_BUFFER_LIST *v68; // rbx
  struct _NET_BUFFER_LIST *v69; // rbp
  unsigned int v70; // r12d
  unsigned int v71; // r13d
  unsigned int v72; // r15d
  __int64 v73; // rdx
  struct _NET_BUFFER_LIST *v74; // rax
  unsigned int v75; // r8d
  struct _NET_BUFFER_LIST **p_Next; // rcx
  unsigned __int64 v77; // rdx
  unsigned int v78; // r13d
  unsigned __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rbp
  char v82; // r15
  __int64 v83; // r14
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v88; // rax
  unsigned __int64 v89; // rsi
  unsigned int v90; // eax
  unsigned __int64 v91; // r9
  KIRQL v92; // al
  unsigned __int64 v93; // rdx
  unsigned int v94; // eax
  KIRQL CurrentIrql; // al
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v98; // ecx
  struct _NET_BUFFER_LIST *v99; // rbp
  unsigned int v100; // r13d
  unsigned int v101; // r12d
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  int v104; // ecx
  int v105; // r8d
  __int64 v106; // rax
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rdx
  _SLIST_HEADER *v111; // rax
  unsigned int v112; // ecx
  PVOID Context; // [rsp+20h] [rbp-F8h]
  char v114[8]; // [rsp+30h] [rbp-E8h]
  char v115; // [rsp+40h] [rbp-D8h]
  char v116; // [rsp+40h] [rbp-D8h]
  unsigned int v117[2]; // [rsp+48h] [rbp-D0h]
  unsigned int v118; // [rsp+48h] [rbp-D0h]
  __int64 v119; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v120; // [rsp+50h] [rbp-C8h]
  __int64 v121; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v122; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v123; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v124; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v125; // [rsp+68h] [rbp-B0h]
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD Parameter[4]; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v129; // [rsp+A0h] [rbp-78h]
  unsigned int v130; // [rsp+A4h] [rbp-74h]
  unsigned int v131; // [rsp+A8h] [rbp-70h]
  int v132; // [rsp+ACh] [rbp-6Ch]
  _QWORD v133[13]; // [rsp+B0h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h] BYREF
  unsigned int v136; // [rsp+120h] [rbp+8h]
  char v137; // [rsp+120h] [rbp+8h]
  unsigned int v141; // [rsp+140h] [rbp+28h]
  unsigned int v142; // [rsp+140h] [rbp+28h]
  unsigned int v143; // [rsp+140h] [rbp+28h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = a1;
  v7 = a4;
  v8 = a5;
  v9 = a3;
  v10 = 3 * v5;
  v119 = 0LL;
  v11 = *(unsigned int *)ndisNblTrackerMode;
  v12 = a2;
  v13 = 32 * v10 + a1[53] + 48LL;
  v121 = v13;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_29;
  v14 = a1[81];
  v15 = a1[64];
  v16 = ndisNblTrackerEpoch;
  v17 = a5 & 1;
  v123 = v14;
  *(_QWORD *)v117 = 0LL;
  v18 = 0LL;
  v115 = 0;
  v19 = 0LL;
  v20 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)v12, v14, (a5 & 2 | 0x104) >> 1, (void *)v15, a5 & 1);
    v20 = 0LL;
  }
  v21 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v15 & 1) != 0 )
  {
    v11 = 2 * v16;
    v22 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 = (2 * v16) ^ (v15 ^ (2 * v16)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v22 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v125 = v22;
  Alignment = (_SLIST_HEADER *)v12;
  if ( v12 )
  {
    while ( 1 )
    {
      Region = Alignment[22].Region;
      while ( Alignment[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_104;
        }
        else if ( !Alignment[7].Region )
        {
          v56 = v123 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v123 & 1) != 0 )
            v56 = *(_QWORD *)((v123 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          Alignment[7].Region = v56;
        }
        v25 = (unsigned __int8 *)Alignment[7].Region;
        if ( v25 )
        {
          LODWORD(v14) = *v25;
          if ( (unsigned __int8)(v14 - 17) <= 1u || (_BYTE)v14 == 5 )
          {
            if ( v25 != (unsigned __int8 *)v22 || Alignment[1].Region )
            {
              ++v18;
              v11 = v21;
            }
            else
            {
              ++v20;
              v11 = 24LL;
              *(_QWORD *)v117 = v20;
              ++v18;
            }
            goto LABEL_15;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)Alignment);
LABEL_251:
            v22 = v125;
            v20 = *(_QWORD *)v117;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            27,
            11,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)Alignment);
          goto LABEL_251;
        }
LABEL_104:
        v11 = v21 | 4;
LABEL_15:
        Alignment[22].Region = v11;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        if ( !Alignment )
          break;
      }
      v26 = v19 - v18;
      if ( (Region & 1) == 0 || !v26 )
        goto LABEL_21;
      if ( v17 || v115 )
      {
        v11 = 16 * ((Region >> 1) & 1);
        v14 = v11 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v17 )
          goto LABEL_67;
        goto LABEL_20;
      }
      v115 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v17 = 1;
        v14 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_20:
        v11 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)v14 + (unsigned int)v11) += v26;
        goto LABEL_21;
      }
      v17 = 0;
      v11 = 16 * ((Region >> 1) & 1);
      v14 = v11 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_67:
      _InterlockedAdd64((volatile signed __int64 *)(v14 + 8), v26);
LABEL_21:
      v22 = v125;
      v19 = v18;
      v20 = *(_QWORD *)v117;
      if ( !Alignment )
      {
        v12 = a2;
        v8 = a5;
        break;
      }
    }
  }
  v27 = v18 - v20;
  if ( (v21 & 1) != 0 && v27 )
  {
    if ( v17 || v115 )
    {
      v11 = 16 * ((v21 >> 1) & 1);
      v28 = v11 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v17 )
      {
LABEL_57:
        _InterlockedAdd64((volatile signed __int64 *)(v28 + 8), v27);
        goto LABEL_28;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v11 = 16 * ((v21 >> 1) & 1);
        v28 = v11 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_57;
      }
      v28 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v11 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*(_QWORD *)v28 + (unsigned int)v11) += v27;
  }
LABEL_28:
  v9 = a3;
  v7 = a4;
  v13 = v121;
  v6 = a1;
LABEL_29:
  v29 = v8 & 2;
  if ( (v8 & 2) == 0 && ((v8 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v13 + 16) )
  {
    v48 = v8 | 1;
    if ( *(_QWORD *)v13 )
    {
      v73 = *(_QWORD *)(v13 + 8);
      if ( v9 == *(_DWORD *)(v73 + 140) && v48 == *(_DWORD *)(v73 + 132) && (v48 & 0xCB00) == 0 )
      {
        v74 = *(struct _NET_BUFFER_LIST **)v73;
        if ( *(_QWORD *)v73 )
        {
          v75 = v7 + LODWORD(v74->Scratch);
          do
          {
            p_Next = &v74->Next;
            v74 = (struct _NET_BUFFER_LIST *)v74->Link.Alignment;
          }
          while ( v74 );
        }
        else
        {
          v75 = v7 + 1;
          p_Next = *(struct _NET_BUFFER_LIST ***)(v13 + 8);
        }
        *p_Next = v12;
        if ( *(_QWORD *)v73 )
          *(_QWORD *)(*(_QWORD *)v73 + 112LL) = v75;
        return;
      }
      *(_QWORD *)(v73 + 112) = v12;
    }
    else
    {
      *(_QWORD *)v13 = v12;
    }
    *(_QWORD *)(v13 + 8) = v12;
    v49 = v12->Link.Alignment;
    v12->Scratch = 0LL;
    v12->ChildRefCount = v48;
    v12->Status = v9;
    if ( v49 )
      *(_QWORD *)(v49 + 112) = v7;
    return;
  }
  v30 = v6[65];
  v31 = (void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))v6[62];
  v32 = v6[63];
  if ( *(_BYTE *)v30 == 17 )
  {
    if ( v31 == ndisMTopReceiveNetBufferLists )
    {
      if ( (v12->NblFlags & 0x8000) != 0 )
      {
        v55 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))(v32 + 2144);
      }
      else
      {
        if ( *(_BYTE *)(v32 + 2665) )
        {
          v33 = 0;
          v34 = 0LL;
          v116 = 0;
          Number = 0;
          if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
            && ndisPerProcRcvTrackers
            && (Number = KeGetPcr()->Prcb.Number,
                v36 = ndisPerProcRcvTrackers,
                v37 = 2096LL * Number,
                v38 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v37),
                (unsigned int)v38 < 3) )
          {
            v116 = 1;
            *(_DWORD *)((char *)ndisPerProcRcvTrackers + v37) = v38 + 1;
            Pool2 = (__int64)v36 + 696 * v38 + v37 + 8;
          }
          else
          {
            Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
            if ( !Pool2 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = 2;
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v38,
                  4,
                  11,
                  (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
              }
              v47 = v12;
              goto LABEL_71;
            }
          }
          v40 = *(_QWORD *)(v32 + 400);
          v41 = v12;
          *(_BYTE *)(Pool2 + 692) = 0;
          if ( !v29 )
          {
            do
            {
              v34 = v41;
              v41->Flags = v41->Flags & 0xFFFFFFF0 | 4;
              v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
            }
            while ( v41 );
          }
          v42 = *(_QWORD *)(v40 + 328);
          if ( v42 && *(_BYTE *)(*(_QWORD *)(v42 + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(*(const struct _NDIS_FILTER_BLOCK **)(v40 + 328), v12, a3, a4, a5);
            v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
            *(_QWORD *)(Pool2 + 64) = 0LL;
            *(_DWORD *)(Pool2 + 80) = 0;
          }
          else
          {
            *(_DWORD *)(Pool2 + 44) = a4;
            *(_QWORD *)(Pool2 + 24) = v12;
            *(_QWORD *)(Pool2 + 8) = v40;
            *(_DWORD *)(Pool2 + 16) = a5;
            *(_QWORD *)Pool2 = v32;
            *(_QWORD *)(Pool2 + 32) = v34;
            *(_DWORD *)(Pool2 + 40) = a3;
            ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, v38, (struct _NDIS_FILTER_BLOCK **)a3);
            if ( *(_QWORD *)(Pool2 + 64) || (v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
            {
              if ( !*(_QWORD *)v40 || a3 )
                *(_BYTE *)(Pool2 + 692) = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
              v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
              if ( !v42 )
              {
                v45 = *(struct _NDIS_OPEN_BLOCK **)(v40 + 8);
                if ( v45 )
                  ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v45);
                v46 = *(struct _NDIS_OPEN_BLOCK **)(v40 + 16);
                if ( v46 )
                {
                  if ( v29 )
                    ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v46);
                  else
                    ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
                }
                v44 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
              }
            }
          }
          v33 = v116;
          if ( !*(_BYTE *)(Pool2 + 692) )
            goto LABEL_72;
          v47 = *v44;
LABEL_71:
          if ( v47 )
          {
            if ( byte_1401278B0 && (*(_DWORD *)(v32 + 5872) & 2) != 0 )
              PktMonClientNblDrop(
                v32 + 5816,
                (__int64)v47,
                *(_DWORD *)(v32 + 5868),
                v43,
                (__int64)Context,
                1,
                204,
                -536866809);
            if ( !v29 )
              ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)v32, v47, a5 & 1, 0LL);
          }
LABEL_72:
          if ( v33 )
          {
            --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
          }
          else if ( Pool2 )
          {
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          LOBYTE(v8) = a5;
          v6 = a1;
          goto LABEL_75;
        }
        v55 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))(v32 + 2136);
      }
    }
    else
    {
      v55 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))v6[62];
    }
    v55(v32, v12, a3, v7, v8);
    goto LABEL_75;
  }
  if ( (v8 & 2) == 0 && ((v8 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    LODWORD(v11) = KeGetPcr()->Prcb.Number;
    v57 = (struct _NET_BUFFER_LIST **)v133;
    v58 = v12->Link.Alignment;
    v59 = a3;
    v141 = v11;
    v133[2] = 0LL;
    v133[0] = v12;
    v133[1] = v12;
    v12->Scratch = 0LL;
    v12->ChildRefCount = v8;
    v12->Status = a3;
    if ( !v58 )
      goto LABEL_107;
    *(_QWORD *)(v58 + 112) = v7;
    while ( 1 )
    {
      v11 = v141;
LABEL_107:
      if ( *(_BYTE *)v30 != 5 )
        goto LABEL_120;
      v60 = *v57;
      if ( !*v57 )
        goto LABEL_120;
      v61 = v30;
      v62 = *(_QWORD *)(v30 + 424) + 96 * v11;
      if ( *(_BYTE *)(v62 + 64) )
        break;
      *(_BYTE *)(v62 + 64) = 1;
      v63 = *v57;
      *v57 = 0LL;
      if ( v63 )
      {
        do
        {
          ChildRefCount = v63->ChildRefCount;
          NdisReserved2 = v63->NdisReserved2;
          Scratch = (struct _NET_BUFFER_LIST *)v63->Scratch;
          v136 = ChildRefCount;
          v118 = NdisReserved2;
          if ( v63->Link.Alignment )
            v67 = *(_DWORD *)(v63->Link.Alignment + 112);
          else
            v67 = 1;
          v63->ChildRefCount = 0;
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v30 == 5 )
            {
              v97 = *(_QWORD *)(v30 + 872);
              if ( v97 )
              {
                if ( (*(_DWORD *)(v97 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(v30 + 848, v63, v59, 1LL);
                  ChildRefCount = v136;
                  NdisReserved2 = v118;
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v30 == 5 && (v107 = *(_QWORD *)(v30 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 14))(
              v32,
              v63,
              NdisReserved2,
              v67,
              ChildRefCount,
              v107,
              v31);
          else
            v31((char *)v32, v63, NdisReserved2, v67, ChildRefCount);
          v63 = Scratch;
        }
        while ( Scratch );
        v61 = v30;
      }
      *(_BYTE *)(v62 + 64) = 0;
      v57 = (struct _NET_BUFFER_LIST **)(v62 + 48);
      v30 = *(_QWORD *)(v30 + 520);
      v31 = *(void (__fastcall **)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v61 + 496);
      v32 = *(_QWORD *)(v61 + 504);
    }
    *v57 = 0LL;
    do
    {
      v98 = v60->NdisReserved2;
      v99 = (struct _NET_BUFFER_LIST *)v60->Scratch;
      v100 = v60->ChildRefCount;
      v143 = v98;
      if ( v60->Link.Alignment )
        v101 = *(_DWORD *)(v60->Link.Alignment + 112);
      else
        v101 = 1;
      v60->ChildRefCount = 0;
      if ( byte_1401278B0 )
      {
        if ( *(_BYTE *)v30 == 5 )
        {
          v106 = *(_QWORD *)(v30 + 872);
          if ( v106 )
          {
            if ( (*(_DWORD *)(v106 + 56) & 1) != 0 )
            {
              PktMonClientNblLogNdis(v30 + 848, v60, v59, 1LL);
              v98 = v143;
            }
          }
        }
      }
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v30 == 5 && (v110 = *(_QWORD *)(v30 + 776)) != 0 )
        (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 14))(
          v32,
          v60,
          v98,
          v101,
          v100,
          v110,
          v31);
      else
        v31((char *)v32, v60, v98, v101, v100);
      v60 = v99;
    }
    while ( v99 );
LABEL_120:
    v68 = *v57;
    if ( *v57 )
    {
      *v57 = 0LL;
      do
      {
        v69 = (struct _NET_BUFFER_LIST *)v68->Scratch;
        v70 = v68->ChildRefCount;
        v71 = v68->NdisReserved2;
        if ( v68->Link.Alignment )
          v72 = *(_DWORD *)(v68->Link.Alignment + 112);
        else
          v72 = 1;
        v68->ChildRefCount = 0;
        if ( byte_1401278B0 )
        {
          if ( *(_BYTE *)v30 == 5 )
          {
            v103 = *(_QWORD *)(v30 + 872);
            if ( v103 )
            {
              if ( (*(_DWORD *)(v103 + 56) & 1) != 0 )
                PktMonClientNblLogNdis(v30 + 848, v68, v59, 1LL);
            }
          }
        }
        if ( ndisVerifierNdisDispatch && *(_BYTE *)v30 == 5 && (v109 = *(_QWORD *)(v30 + 776)) != 0 )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 14))(
            v32,
            v68,
            v71,
            v72,
            v70,
            v109,
            v31);
        else
          v31((char *)v32, v68, v71, v72, v70);
        v68 = v69;
      }
      while ( v69 );
    }
    return;
  }
  v51 = (unsigned int)Size;
  v52 = KeGetPcr()->Prcb.Number << 12;
  v53 = *(_QWORD *)(v52 + qword_1401270F8);
  LowLimit = v53;
  v54 = *(_QWORD *)(v52 + qword_1401270F0);
  HighLimit = v54;
  if ( v53 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v54 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v53 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v53 >= v51 )
  {
    if ( byte_1401278B0 )
    {
      if ( *(_BYTE *)v30 == 5 )
      {
        v96 = *(_QWORD *)(v30 + 872);
        if ( v96 )
        {
          if ( (*(_DWORD *)(v96 + 56) & 1) != 0 )
            PktMonClientNblLogNdis(v30 + 848, v12, v54, 1LL);
        }
      }
    }
    if ( ndisVerifierNdisDispatch && *(_BYTE *)v30 == 5 && (v108 = *(_QWORD *)(v30 + 776)) != 0 )
      (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int)))ndisVerifierNdisDispatch
       + 14))(
        v32,
        v12,
        a3,
        a4,
        v8,
        v108,
        v31);
    else
      v31((char *)v32, v12, a3, a4, v8);
    goto LABEL_75;
  }
  v130 = a4;
  v104 = 24576;
  v129 = a3;
  v132 = 0;
  Parameter[0] = v30;
  Parameter[1] = v32;
  Parameter[2] = v31;
  Parameter[3] = v12;
  v131 = v8;
  if ( (unsigned int)Size > 0x6000 )
    v104 = Size;
  if ( KeExpandKernelStackAndCalloutEx(
         ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
         Parameter,
         v104,
         0,
         0LL) >= 0 )
  {
LABEL_75:
    v50 = 0LL;
    if ( (v8 & 2) == 0 )
      return;
    goto LABEL_146;
  }
  if ( byte_1401278B0 && (*(_DWORD *)(v30 + 840) & 2) != 0 )
    PktMonClientNblDropNdis(v30 + 784, (_DWORD)v12, v105, 1, -1073741670, -536866813);
  NdisSetStatusInNblChain(v12, -1073741670);
  v50 = 0LL;
  v111 = (_SLIST_HEADER *)v12;
  v112 = 0;
  if ( v12 )
  {
    do
    {
      v111 = (_SLIST_HEADER *)v111->Alignment;
      ++v112;
    }
    while ( v111 );
  }
  _InterlockedAdd((volatile signed __int32 *)(v30 + 292), v112);
  if ( (v8 & 2) == 0 )
  {
    ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v30, v12, 0);
    return;
  }
LABEL_146:
  if ( !*(_DWORD *)ndisNblTrackerMode )
    return;
  v77 = v6[64];
  v78 = v8 & 1;
  v79 = v6[81];
  v80 = 0LL;
  v81 = ndisNblTrackerEpoch;
  v82 = 0;
  v142 = v78;
  v83 = 0LL;
  v124 = v77;
  v137 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)v12, v77, 0x8Cu, (void *)v79, v78);
    v50 = 0LL;
  }
  v84 = v79 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v79 & 1) != 0 )
  {
    v85 = *(_QWORD *)((v79 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v84 = (2 * v81) ^ (v79 ^ (2 * v81)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v85 = v79 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v122 = v85;
  if ( !v12 )
    goto LABEL_167;
  do
  {
    v86 = (unsigned __int64)v12->NetBufferListInfo[27];
    while ( v12->NetBufferListInfo[27] == (void *)v86 )
    {
      if ( v86 )
      {
        if ( (v86 & 4) != 0 )
          goto LABEL_220;
      }
      else if ( !v12->SourceHandle )
      {
        v102 = v124 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v124 & 1) != 0 )
          v102 = *(_QWORD *)((v124 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v12->SourceHandle = (void *)v102;
      }
      SourceHandle = (unsigned __int8 *)v12->SourceHandle;
      if ( SourceHandle )
      {
        LODWORD(v77) = *SourceHandle;
        if ( (unsigned __int8)(v77 - 17) <= 1u || (_BYTE)v77 == 5 )
        {
          if ( SourceHandle != (unsigned __int8 *)v85 || v12->ParentNetBufferList )
          {
            ++v50;
            v88 = v84;
            v119 = v50;
          }
          else
          {
            ++v83;
            v88 = 24LL;
            v119 = ++v50;
          }
          goto LABEL_160;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v114 = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v12,
            *(_QWORD *)v114);
LABEL_256:
          v85 = v122;
          v50 = v119;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v77) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v77,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)v12);
        goto LABEL_256;
      }
LABEL_220:
      v88 = v84 | 4;
LABEL_160:
      v12->NetBufferListInfo[27] = (void *)v88;
      v12 = (struct _NET_BUFFER_LIST *)v12->Link.Alignment;
      if ( !v12 )
        break;
    }
    v78 = v142;
    v89 = v80 - v50;
    v82 = v137;
    if ( (v86 & 1) == 0 || !v89 )
      goto LABEL_166;
    if ( (_BYTE)v142 || v137 )
    {
      v77 = 16 * ((v86 >> 1) & 1) + (v86 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v142 )
        goto LABEL_184;
      goto LABEL_165;
    }
    v82 = 1;
    v137 = 1;
    CurrentIrql = KeGetCurrentIrql();
    v50 = v119;
    if ( CurrentIrql == 2 )
    {
      LOBYTE(v78) = 1;
      v142 = 1;
      v77 = 16 * ((v86 >> 1) & 1) + (v86 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_165:
      v90 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v77 + v90) += v89;
      goto LABEL_166;
    }
    LOBYTE(v78) = 0;
    v142 = v78;
    v77 = 16 * ((v86 >> 1) & 1) + (v86 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_184:
    _InterlockedAdd64((volatile signed __int64 *)(v77 + 8), v89);
LABEL_166:
    v85 = v122;
    v80 = v50;
  }
  while ( v12 );
LABEL_167:
  v91 = v50 - v83;
  v120 = v91;
  if ( (v84 & 1) != 0 && v91 )
  {
    if ( (_BYTE)v78 || v82 )
    {
      v93 = 16 * ((v84 >> 1) & 1) + (v84 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v78 )
        goto LABEL_180;
LABEL_173:
      _InterlockedAdd64((volatile signed __int64 *)(v93 + 8), v91);
    }
    else
    {
      v92 = KeGetCurrentIrql();
      v91 = v120;
      if ( v92 != 2 )
      {
        v93 = 16 * ((v84 >> 1) & 1) + (v84 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_173;
      }
      v93 = 16 * ((v84 >> 1) & 1) + (v84 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_180:
      v94 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v93 + v94) += v91;
    }
  }
}
