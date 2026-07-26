/*
 * XREFs of ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400425F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140035310 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x140045550 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400AA0B8 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1400B8D70 (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  unsigned int Number; // eax
  unsigned __int64 EthDB; // r15
  unsigned int v5; // ebx
  int PnPFlags; // r8d
  struct _NDIS_PACKET **v8; // rdi
  int v9; // r12d
  _NDIS_FILTER_BLOCK **p_Flags; // rdx
  unsigned int i; // r14d
  __int64 v12; // r8
  struct _NDIS_PACKET *v13; // rbx
  int v14; // ecx
  __int64 v15; // rdi
  _MDL *Head; // rsi
  char *v17; // r13
  char *MappedSystemVa; // r11
  struct _MDL *Next; // rcx
  __int64 ByteCount; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  BOOL v27; // r13d
  unsigned __int8 *v28; // r14
  int v29; // eax
  __int64 v30; // r12
  NDISWATCHDOG__ *IndicatedPacket; // rdx
  unsigned int v32; // r10d
  unsigned __int8 *v33; // rax
  int v34; // ecx
  struct _NET_BUFFER_LIST *v35; // rax
  __int64 v36; // rsi
  int v37; // r13d
  unsigned __int8 *v38; // r14
  int v39; // eax
  int v40; // r12d
  unsigned __int8 Multicast; // al
  NDISWATCHDOG__ *v42; // rdx
  unsigned int v43; // r8d
  unsigned __int8 *v44; // rax
  _QWORD *v45; // rdx
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  _NDIS_MINIPORT_STATS *v47; // rdx
  int v48; // eax
  _QWORD *v49; // rdx
  char v50; // al
  int v51; // edx
  bool v52; // zf
  int v53; // r10d
  _NDIS_PACKET ***p_IndicatedPacket; // r12
  NDISWATCHDOG__ *v55; // rdx
  __int64 v56; // r8
  _NDIS_PACKET *v57; // rax
  struct _NET_BUFFER_LIST *v58; // rcx
  _NDIS_MINIPORT_STATS *v59; // rdx
  __int64 v60; // rax
  struct _NET_BUFFER_LIST *v61; // rcx
  _NDIS_MINIPORT_STATS *v62; // rdx
  __int64 v63; // rax
  _NDIS_MINIPORT_STATS *v64; // rdx
  __int64 v65; // rax
  struct _NET_BUFFER_LIST *v66; // rcx
  BOOL v67; // [rsp+40h] [rbp-88h]
  unsigned int v68; // [rsp+40h] [rbp-88h]
  int v69; // [rsp+40h] [rbp-88h]
  unsigned int v70; // [rsp+40h] [rbp-88h]
  unsigned __int8 v71[4]; // [rsp+44h] [rbp-84h]
  int v72; // [rsp+48h] [rbp-80h]
  unsigned int v73; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v74; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v75; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v76; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v77; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v78; // [rsp+58h] [rbp-70h]
  char *v79; // [rsp+60h] [rbp-68h]
  _NDIS_PACKET *v80; // [rsp+60h] [rbp-68h]
  struct _NDIS_PACKET **v81; // [rsp+68h] [rbp-60h]
  __int64 v82; // [rsp+70h] [rbp-58h]
  struct _LOCK_STATE_EX LockState; // [rsp+D0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h]
  unsigned int v85; // [rsp+E0h] [rbp+18h]
  int v86; // [rsp+E8h] [rbp+20h]

  v85 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  EthDB = (unsigned __int64)a1->EthDB;
  v5 = a3;
  PnPFlags = a1->PnPFlags;
  v8 = a2;
  v81 = a2;
  *(_WORD *)&LockState.LockState = 0;
  LockState.OldIrql = 2;
  v9 = 0;
  v72 = 0;
  v75 = Number;
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(EthDB + 288), &LockState, PnPFlags < 0);
  p_Flags = (_NDIS_FILTER_BLOCK **)&a1->Flags;
  v73 = 0;
  for ( i = 0; ; v73 = i )
  {
    v12 = 1LL;
    if ( i >= v5 )
      break;
    v13 = *v8;
    v14 = *(_DWORD *)&(*v8)[-1].ProtocolReserved[4];
    if ( v14 != -1 && (*(_DWORD *)p_Flags & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, (ULONG_PTR)a1, (ULONG_PTR)v13, BugCheckParameter4);
    }
    *(_DWORD *)&v13[-1].ProtocolReserved[4] = v14 + 1;
    if ( v14 + 1 >= ndisPacketStackSize )
      v15 = 16LL;
    else
      v15 = (__int64)v13 + 48 * ((unsigned int)(v14 + 1) - (unsigned __int64)ndisPacketStackSize);
    Head = v13->Private.Head;
    v17 = (char *)v13 + v13->Private.NdisPacketOobOffset;
    v79 = v17;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)Head->MappedSystemVa;
      v76 = (unsigned __int8 *)MappedSystemVa;
    }
    else
    {
      MappedSystemVa = (char *)MmMapLockedPages(Head, 0);
      v76 = (unsigned __int8 *)MappedSystemVa;
      v12 = 1LL;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    *(_DWORD *)v71 = Head->ByteCount;
    if ( Head->Next )
    {
      do
      {
        ByteCount = (unsigned int)(Next->ByteCount + ByteCount);
        Next = Next->Next;
      }
      while ( Next );
      *(_DWORD *)v71 = ByteCount;
    }
    *(_DWORD *)(v15 + 8) = -1;
    *(_DWORD *)(v15 + 12) = 0;
    *(_QWORD *)v15 = a1;
    v13->Private.ValidCounts = 0;
    if ( *((_DWORD *)v17 + 8) == -1073741670 || (a1->PnPFlags & 0x800) != 0 )
    {
      LOBYTE(v86) = 1;
    }
    else
    {
      if ( (a1->Flags & 0x8000) == 0 )
        *((_DWORD *)v17 + 8) = 0;
      LOBYTE(v86) = 0;
    }
    v21 = *(_QWORD *)(EthDB + 328);
    if ( !v21 || *(_DWORD *)(v21 + 608) >= 6u )
    {
      if ( (unsigned int)ByteCount < 0xE )
      {
        v69 = 32;
      }
      else
      {
        if ( (*MappedSystemVa & 1) == 0 )
        {
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            BottomIfStats = a1->BottomIfStats;
            if ( BottomIfStats )
            {
              v47 = &BottomIfStats[KeGetPcr()->Prcb.Number];
              v47->ifHCInUcastOctets += (unsigned int)ByteCount;
              v47->ifHCInOctets += (unsigned int)ByteCount;
            }
            v59 = a1->BottomIfStats;
            v12 = 1LL;
            if ( v59 )
            {
              v60 = KeGetPcr()->Prcb.Number;
              ++v59[v60].ifHCInUcastPkts;
            }
          }
          v13->Private.Flags &= ~0x20000u;
          v67 = 0;
          if ( (*(_DWORD *)(EthDB + 304) & 0xA4) != 0 )
            v67 = *(_DWORD *)(EthDB + 338) != *(_DWORD *)(MappedSystemVa + 2)
               || *(_WORD *)(EthDB + 336) != *(_WORD *)MappedSystemVa;
          v26 = *(_QWORD *)EthDB;
          if ( !*(_QWORD *)EthDB )
            goto LABEL_46;
          v27 = v67;
          v28 = v76;
          while ( 2 )
          {
            v29 = *(_DWORD *)(v26 + 432);
            v30 = *(_QWORD *)(v26 + 424);
            if ( (v29 & 0xA0) != 0 )
            {
              LOBYTE(v12) = 1;
LABEL_38:
              if ( (v13->Private.Flags & 0x80u) == 0
                || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v26 )
              {
                ++v72;
                v52 = (_BYTE)v86 == 0;
                *(_BYTE *)((v75 << 12) + *(_QWORD *)(v26 + 720)) = 1;
                IndicatedPacket = (NDISWATCHDOG__ *)a1->IndicatedPacket;
                v32 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
                v68 = v32;
                v33 = (unsigned __int8 *)*((_QWORD *)IndicatedPacket + KeGetPcr()->Prcb.Number);
                v77 = v33;
                LODWORD(v33) = KeGetPcr()->Prcb.Number;
                *((_QWORD *)IndicatedPacket + (_QWORD)v33) = v13;
                if ( v52 && *(_QWORD *)(v26 + 160) && (!(_BYTE)v12 || *(_QWORD *)(EthDB + 328)) )
                {
                  v61 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
                  if ( v61 && v32 == -1073741670 )
                    ndisNblTrackerTransferOwnershipSingleNbl(
                      v61,
                      (struct NDIS_NBL_TRACKER_HANDLE__ *)IndicatedPacket,
                      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v26 + 584),
                      ByteCount);
                  *(_DWORD *)(v15 + 12) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v26 + 160))(
                                             *(_QWORD *)(v26 + 32),
                                             v13);
                }
                else
                {
                  *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
                  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, unsigned __int8 *, __int64, unsigned __int8 *, ULONG, _DWORD))(v26 + 128))(
                    *(_QWORD *)(v26 + 32),
                    v13,
                    v28,
                    14LL,
                    v28 + 14,
                    v13->Private.Head->ByteCount - 14,
                    ByteCount - 14);
                  *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v68;
                }
                if ( *(int *)(v15 + 12) > 0 )
                {
                  v48 = (unsigned __int8)v86;
                  if ( (*(_DWORD *)(v26 + 224) & 8) == 0 )
                    v48 = 1;
                  v86 = v48;
                }
                LODWORD(ByteCount) = *(_DWORD *)v71;
                a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = (_NDIS_PACKET *)v77;
              }
            }
            else
            {
              LOBYTE(v12) = 0;
              if ( !v27 && (v29 & 1) != 0 )
                goto LABEL_38;
            }
            v26 = v30;
            if ( !v30 )
              goto LABEL_45;
            continue;
          }
        }
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v69 = 8;
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            v12 = (__int64)a1->BottomIfStats;
            if ( v12 )
            {
              v45 = (_QWORD *)(v12 + 112LL * KeGetPcr()->Prcb.Number);
              v45[2] += (unsigned int)ByteCount;
              *v45 += (unsigned int)ByteCount;
            }
            v62 = a1->BottomIfStats;
            if ( v62 )
            {
              v63 = KeGetPcr()->Prcb.Number;
              ++v62[v63].ifHCInBroadcastPkts;
            }
          }
        }
        else
        {
          v69 = 2;
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            v12 = (__int64)a1->BottomIfStats;
            if ( v12 )
            {
              v49 = (_QWORD *)(v12 + 112LL * KeGetPcr()->Prcb.Number);
              v49[3] += (unsigned int)ByteCount;
              *v49 += (unsigned int)ByteCount;
            }
            v64 = a1->BottomIfStats;
            if ( v64 )
            {
              v65 = KeGetPcr()->Prcb.Number;
              ++v64[v65].ifHCInMulticastPkts;
            }
          }
        }
        v13->Private.Flags &= ~0x20000u;
      }
      v36 = *(_QWORD *)EthDB;
      if ( !*(_QWORD *)EthDB )
        goto LABEL_46;
      v37 = v69;
      v38 = v76;
      while ( 2 )
      {
        v82 = *(_QWORD *)(v36 + 424);
        if ( (v13->Private.Flags & 0x80u) == 0
          || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v36 )
        {
          v39 = *(_DWORD *)(v36 + 432);
          v40 = v39 & 0xA0;
          if ( (v39 & 0xA0) != 0 )
            goto LABEL_82;
          if ( v37 == 8 )
          {
            if ( (v39 & 8) != 0 )
              goto LABEL_82;
          }
          else if ( v37 == 2 )
          {
            if ( (v39 & 4) != 0
              || (v39 & 2) != 0
              && (Multicast = ethFindMulticast(
                                *(_DWORD *)(v36 + 456),
                                *(struct _ETH_MULTICAST_WRAPPER **)(v36 + 448),
                                0LL,
                                v38),
                  LODWORD(ByteCount) = *(_DWORD *)v71,
                  Multicast) )
            {
LABEL_82:
              ++v72;
              v52 = (_BYTE)v86 == 0;
              *(_BYTE *)((v75 << 12) + *(_QWORD *)(v36 + 720)) = 1;
              v42 = (NDISWATCHDOG__ *)a1->IndicatedPacket;
              v43 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
              v70 = v43;
              v44 = (unsigned __int8 *)*((_QWORD *)v42 + KeGetPcr()->Prcb.Number);
              v78 = v44;
              LODWORD(v44) = KeGetPcr()->Prcb.Number;
              *((_QWORD *)v42 + (_QWORD)v44) = v13;
              if ( v52 && *(_QWORD *)(v36 + 160) && (!v40 || *(_QWORD *)(EthDB + 328)) )
              {
                v66 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
                if ( v66 && v43 == -1073741670 )
                  ndisNblTrackerTransferOwnershipSingleNbl(
                    v66,
                    (struct NDIS_NBL_TRACKER_HANDLE__ *)v42,
                    *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v36 + 584),
                    ByteCount);
                *(_DWORD *)(v15 + 12) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v36 + 160))(
                                           *(_QWORD *)(v36 + 32),
                                           v13);
              }
              else
              {
                *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
                (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, unsigned __int8 *, __int64, unsigned __int8 *, ULONG, _DWORD))(v36 + 128))(
                  *(_QWORD *)(v36 + 32),
                  v13,
                  v38,
                  14LL,
                  v38 + 14,
                  v13->Private.Head->ByteCount - 14,
                  ByteCount - 14);
                *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v70;
              }
              if ( *(int *)(v15 + 12) > 0 )
              {
                v50 = v86;
                if ( (*(_DWORD *)(v36 + 224) & 8) == 0 )
                  v50 = 1;
                LOBYTE(v86) = v50;
              }
              LODWORD(ByteCount) = *(_DWORD *)v71;
              a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = (_NDIS_PACKET *)v78;
            }
          }
        }
        v36 = v82;
        if ( !v82 )
        {
LABEL_45:
          v17 = v79;
          i = v73;
          goto LABEL_46;
        }
        continue;
      }
    }
    if ( ((unsigned int)ByteCount >= 0xE || (*(_DWORD *)(EthDB + 304) & 0xA0) != 0)
      && ((v13->Private.Flags & 0x80u) == 0 || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v21) )
    {
      v72 = v9 + 1;
      *(_BYTE *)((v75 << 12) + *(_QWORD *)(v21 + 720)) = 1;
      v53 = *(_DWORD *)(v21 + 432) & 0xA0;
      if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
      {
        ethFilterReceivePacketStats(a1, (unsigned __int8 *)MappedSystemVa, ByteCount);
        ByteCount = *(unsigned int *)v71;
      }
      v13->Private.Flags &= ~0x20000u;
      p_IndicatedPacket = &a1->IndicatedPacket;
      v52 = (_BYTE)v86 == 0;
      v55 = (NDISWATCHDOG__ *)a1->IndicatedPacket;
      v56 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
      v74 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
      v57 = (_NDIS_PACKET *)*((_QWORD *)v55 + KeGetPcr()->Prcb.Number);
      v80 = v57;
      LODWORD(v57) = KeGetPcr()->Prcb.Number;
      *((_QWORD *)v55 + (_QWORD)v57) = v13;
      if ( v52 && *(_QWORD *)(v21 + 160) )
      {
        if ( !v53 )
          goto LABEL_139;
        if ( *(_QWORD *)(EthDB + 328) )
        {
          p_IndicatedPacket = &a1->IndicatedPacket;
LABEL_139:
          v58 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
          if ( v58 && (_DWORD)v56 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v58,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)v55,
              *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 584),
              ByteCount);
          *(_DWORD *)(v15 + 12) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64, __int64))(v21 + 160))(
                                     *(_QWORD *)(v21 + 32),
                                     v13,
                                     v56,
                                     ByteCount);
          goto LABEL_144;
        }
      }
      *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
      (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, _DWORD))(v21 + 128))(
        *(_QWORD *)(v21 + 32),
        v13,
        MappedSystemVa,
        14LL,
        MappedSystemVa + 14,
        v13->Private.Head->ByteCount - 14,
        ByteCount - 14);
      *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v74;
LABEL_144:
      (*p_IndicatedPacket)[KeGetPcr()->Prcb.Number] = v80;
    }
LABEL_46:
    v34 = *(_DWORD *)(v15 + 12);
    if ( !v34 )
    {
      *(_DWORD *)(v15 + 8) = 0;
LABEL_48:
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v17 + 8) == -1073741670 )
      {
LABEL_49:
        p_Flags = (_NDIS_FILTER_BLOCK **)&a1->Flags;
        goto LABEL_50;
      }
      if ( (a1->Flags & 0x40000) != 0 )
      {
        *(_QWORD *)v15 = 0LL;
        *((_DWORD *)v17 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
        {
          if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
            ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)a1, v13);
          else
            ((void (__fastcall *)(void *, struct _NDIS_PACKET *, __int64))a1->DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler)(
              a1->MiniportAdapterContext,
              v13,
              v12);
          goto LABEL_49;
        }
      }
      else
      {
        if ( !*(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
        {
          *((_DWORD *)v17 + 8) = 0;
          goto LABEL_49;
        }
        *(_QWORD *)v15 = 0LL;
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
        {
          v35 = ndisXlateReturnPacketToNetBufferList(v13);
          if ( v35 )
          {
            v35->Link.Alignment = 0LL;
            ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)a1, v35, 0, 0LL);
          }
          goto LABEL_49;
        }
      }
      NDIS_FREE_XFER_DATA_PACKET(v13);
      goto LABEL_49;
    }
    v51 = v34 + _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), v34 + 1) + 1;
    v52 = v51 == 0;
    if ( v51 > 0 )
    {
      if ( (a1->Flags & 0x40000) == 0 )
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
      v52 = v51 == 0;
    }
    if ( v52 )
      goto LABEL_48;
    p_Flags = (_NDIS_FILTER_BLOCK **)&a1->Flags;
    if ( (a1->Flags & 0x8000) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
LABEL_50:
    ++i;
    v5 = v85;
    v8 = v81 + 1;
    v9 = v72;
    ++v81;
  }
  if ( v9 )
  {
    v22 = *(_QWORD *)EthDB;
    if ( *(_QWORD *)EthDB )
    {
      v23 = v75 << 12;
      do
      {
        v24 = *(_QWORD *)(v22 + 720);
        v25 = *(_QWORD *)(v22 + 424);
        if ( *(_BYTE *)(v24 + v23) )
        {
          *(_BYTE *)(v24 + v23) = 0;
          (*(void (__fastcall **)(_QWORD, _NDIS_FILTER_BLOCK **, __int64))(v22 + 136))(
            *(_QWORD *)(v22 + 32),
            p_Flags,
            v12);
        }
        v22 = v25;
      }
      while ( v25 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(EthDB + 288), &LockState);
}
