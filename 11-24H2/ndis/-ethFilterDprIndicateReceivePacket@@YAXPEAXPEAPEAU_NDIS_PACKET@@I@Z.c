/*
 * XREFs of ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140078AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140042CD0 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A1F08 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int Number; // r14d
  int v6; // ebp
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  struct _NDIS_PACKET *v10; // rdi
  unsigned int v11; // eax
  _MDL *Head; // rbx
  char *v13; // rdx
  char *MappedSystemVa; // r12
  char *v15; // rax
  struct _MDL *Next; // rcx
  unsigned int ByteCount; // r11d
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r8d
  _QWORD *v23; // rcx
  _NDIS_OID_REQUEST **p_PendingOidRequest; // rsi
  _NDIS_OID_REQUEST *v25; // rdx
  unsigned __int64 v26; // r15
  unsigned int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // r14
  struct _NET_BUFFER_LIST *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // r15d
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // r14
  char v41; // r8
  __int64 v42; // rax
  _NDIS_OID_REQUEST *PendingOidRequest; // rdx
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rbp
  struct _NET_BUFFER_LIST *v47; // rcx
  __int16 v48; // ax
  __int64 NdisPacketOobOffset; // rax
  int v50; // eax
  int v51; // r15d
  __int64 v52; // r8
  _QWORD *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r8
  _QWORD *v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rbp
  __int64 v61; // r14
  int v62; // r11d
  unsigned int v63; // ecx
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // ecx
  unsigned __int16 v67; // cx
  __int64 v68; // rax
  int v69; // r11d
  _NDIS_OID_REQUEST *v70; // rdx
  unsigned int v71; // ebx
  __int64 v72; // rax
  __int64 v73; // rsi
  struct _NET_BUFFER_LIST *v74; // rcx
  __int16 v75; // ax
  __int64 v76; // rax
  char v77; // al
  int v78; // ecx
  int v79; // edx
  bool v80; // zf
  char *v81; // rcx
  struct _NET_BUFFER_LIST *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rbx
  _QWORD *v87; // rcx
  signed __int32 v88[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v89; // [rsp+30h] [rbp-88h]
  int v90; // [rsp+40h] [rbp-78h]
  unsigned int v91; // [rsp+44h] [rbp-74h]
  unsigned int v92; // [rsp+48h] [rbp-70h]
  unsigned int v93; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+50h] [rbp-68h]
  unsigned __int8 v95[8]; // [rsp+58h] [rbp-60h]
  struct _NDIS_PACKET **v96; // [rsp+60h] [rbp-58h]
  char *v97; // [rsp+68h] [rbp-50h]
  KIRQL v98; // [rsp+C0h] [rbp+8h]
  struct _NDIS_PACKET **BugCheckParameter4; // [rsp+C8h] [rbp+10h]
  unsigned int v101; // [rsp+D8h] [rbp+20h]

  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v6 = 0;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v96 = a2;
  v8 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 288);
  v90 = 0;
  v91 = Number;
  if ( SHIDWORD(a1->HigherFilter) >= 0 )
  {
    v98 = KfRaiseIrql(2u);
    v9 = (_QWORD *)(*(_QWORD *)(v8 + 32) + (KeGetPcr()->Prcb.Number << 12));
    ++*v9;
    _InterlockedOr(v88, 0);
    if ( !*(_QWORD *)(v8 + 16) || *v9 > 1uLL )
    {
LABEL_9:
      a2 = v96;
      goto LABEL_10;
    }
LABEL_7:
    if ( *(struct _KTHREAD **)(v8 + 24) != KeGetCurrentThread() )
    {
      *v9 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 16));
      *v9 = 1LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 16));
    }
    goto LABEL_9;
  }
  v9 = (_QWORD *)(*(_QWORD *)(v8 + 32) + (KeGetPcr()->Prcb.Number << 12));
  v98 = 2;
  ++*v9;
  _InterlockedOr(v88, 0);
  if ( *(_QWORD *)(v8 + 16) && *v9 <= 1uLL )
    goto LABEL_7;
LABEL_10:
  v93 = 0;
  if ( !a3 )
  {
LABEL_190:
    v26 = RcvLinkSpeedIndicateUp;
    goto LABEL_191;
  }
  while ( 1 )
  {
    v10 = *a2;
    if ( *(_DWORD *)&(*a2)[-1].ProtocolReserved[4] != -1 && ((__int64)a1->HigherFilter & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[2].NicSwitchHwCapabilities.NdisReserved2,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, (ULONG_PTR)a1, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
    }
    v11 = ++*(_DWORD *)&v10[-1].ProtocolReserved[4];
    if ( v11 >= ndisPacketStackSize )
      *(_QWORD *)v95 = 16LL;
    else
      *(_QWORD *)v95 = (char *)v10 + 48 * (v11 - (unsigned __int64)ndisPacketStackSize);
    Head = v10->Private.Head;
    v13 = (char *)v10 + v10->Private.NdisPacketOobOffset;
    v97 = v13;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)Head->MappedSystemVa;
    }
    else
    {
      v15 = (char *)MmMapLockedPages(Head, 0);
      v13 = v97;
      MappedSystemVa = v15;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    v92 = ByteCount;
    if ( Next )
    {
      do
      {
        ByteCount += Next->ByteCount;
        Next = Next->Next;
      }
      while ( Next );
      v92 = ByteCount;
    }
    v18 = *(_QWORD *)v95;
    *(_DWORD *)(*(_QWORD *)v95 + 8LL) = -1;
    *(_DWORD *)(v18 + 12) = 0;
    *(_QWORD *)v18 = a1;
    v10->Private.ValidCounts = 0;
    if ( *((_DWORD *)v13 + 8) == -1073741670 || (HIDWORD(a1->HigherFilter) & 0x800) != 0 )
    {
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( ((__int64)a1->HigherFilter & 0x8000) == 0 )
        *((_DWORD *)v13 + 8) = 0;
      LOBYTE(v3) = 0;
    }
    v19 = RcvLinkSpeedIndicateUp;
    v101 = v3;
    v20 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 328);
    if ( !v20 || *(_DWORD *)(v20 + 608) >= 6u )
    {
      if ( ByteCount < 0xE )
      {
        v51 = 32;
      }
      else
      {
        if ( (*MappedSystemVa & 1) == 0 )
        {
          if ( (v10->Private.Flags & 0x20000) == 0 && (v10->Private.NdisPacketFlags & 2) == 0 )
          {
            v33 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            if ( v33 )
            {
              v34 = (_QWORD *)(v33 + 112LL * KeGetPcr()->Prcb.Number);
              v34[1] += ByteCount;
              *v34 += ByteCount;
            }
            v35 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            v19 = RcvLinkSpeedIndicateUp;
            if ( v35 )
            {
              v36 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v35 + v36 + 32);
            }
          }
          v10->Private.Flags &= ~0x20000u;
          v37 = 0;
          if ( (*(_DWORD *)(v19 + 304) & 0xA4) != 0
            && (*(_DWORD *)(v19 + 338) != *(_DWORD *)(MappedSystemVa + 2)
             || *(_WORD *)(v19 + 336) != *(_WORD *)MappedSystemVa) )
          {
            v37 = 1;
          }
          v38 = *(_QWORD *)v19;
          if ( !*(_QWORD *)v19 )
          {
LABEL_94:
            v26 = RcvLinkSpeedIndicateUp;
            goto LABEL_158;
          }
          while ( 1 )
          {
            v39 = *(_DWORD *)(v38 + 432);
            v40 = *(_QWORD *)(v38 + 424);
            if ( (v39 & 0xA0) != 0 )
              break;
            v41 = 0;
            if ( !v37 && (v39 & 1) != 0 )
              goto LABEL_77;
LABEL_93:
            v3 = v101;
            v38 = v40;
            if ( !v40 )
              goto LABEL_94;
          }
          v41 = 1;
LABEL_77:
          if ( (v10->Private.Flags & 0x80u) == 0
            || *(_QWORD *)&v10->MacReserved[v10->Private.NdisPacketOobOffset + 24] != v38 )
          {
            v42 = *(_QWORD *)(v38 + 720);
            v90 = v6 + 1;
            *(_BYTE *)((v91 << 12) + v42) = 1;
            PendingOidRequest = a1[1].PendingOidRequest;
            v44 = *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset);
            v45 = KeGetPcr()->Prcb.Number;
            v46 = *((_QWORD *)&PendingOidRequest->Header.Type + v45);
            *((_QWORD *)&PendingOidRequest->Header.Type + v45) = v10;
            if ( (_BYTE)v3 || !*(_QWORD *)(v38 + 160) || v41 && !*(_QWORD *)(RcvLinkSpeedIndicateUp + 328) )
            {
              NdisPacketOobOffset = v10->Private.NdisPacketOobOffset;
              v89 = ByteCount - 14;
              *(unsigned int *)((char *)&v10->Private.Count + NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v38 + 128))(
                *(_QWORD *)(v38 + 32),
                v10,
                MappedSystemVa,
                14LL,
                MappedSystemVa + 14,
                v10->Private.Head->ByteCount - 14,
                v89);
              v18 = *(_QWORD *)v95;
              *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = v44;
            }
            else
            {
              v47 = *(struct _NET_BUFFER_LIST **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset);
              if ( v47 && v44 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v47,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)PendingOidRequest,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v38 + 584),
                  v18);
              v48 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v38 + 160))(*(_QWORD *)(v38 + 32), v10);
              v18 = *(_QWORD *)v95;
              *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v48;
            }
            if ( *(int *)(v18 + 12) > 0 )
            {
              v50 = (unsigned __int8)v101;
              if ( (*(_DWORD *)(v38 + 224) & 8) == 0 )
                v50 = 1;
              v101 = v50;
            }
            ByteCount = v92;
            *((_QWORD *)&a1[1].PendingOidRequest->Header.Type + KeGetPcr()->Prcb.Number) = v46;
            v6 = v90;
          }
          goto LABEL_93;
        }
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v51 = 8;
          if ( (v10->Private.Flags & 0x20000) == 0 && (v10->Private.NdisPacketFlags & 2) == 0 )
          {
            v52 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            if ( v52 )
            {
              v53 = (_QWORD *)(v52 + 112LL * KeGetPcr()->Prcb.Number);
              v53[2] += ByteCount;
              *v53 += ByteCount;
            }
            v54 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            v19 = RcvLinkSpeedIndicateUp;
            if ( v54 )
            {
              v55 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v54 + v55 + 48);
              v10->Private.Flags &= ~0x20000u;
              goto LABEL_115;
            }
          }
        }
        else
        {
          v51 = 2;
          if ( (v10->Private.Flags & 0x20000) == 0 && (v10->Private.NdisPacketFlags & 2) == 0 )
          {
            v56 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            if ( v56 )
            {
              v57 = (_QWORD *)(v56 + 112LL * KeGetPcr()->Prcb.Number);
              v57[3] += ByteCount;
              *v57 += ByteCount;
            }
            v58 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
            v19 = RcvLinkSpeedIndicateUp;
            if ( v58 )
            {
              v59 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v58 + v59 + 40);
            }
          }
        }
        v10->Private.Flags &= ~0x20000u;
      }
LABEL_115:
      v60 = *(_QWORD *)v19;
      if ( !*(_QWORD *)v19 )
        goto LABEL_94;
      while ( 1 )
      {
        v61 = *(_QWORD *)(v60 + 424);
        if ( (v10->Private.Flags & 0x80u) != 0
          && *(_QWORD *)&v10->MacReserved[v10->Private.NdisPacketOobOffset + 24] == v60 )
        {
          goto LABEL_138;
        }
        v62 = *(_DWORD *)(v60 + 432);
        if ( (v62 & 0xA0) != 0 )
          goto LABEL_141;
        if ( v51 == 8 )
        {
          if ( (v62 & 8) != 0 )
            goto LABEL_141;
        }
        else if ( v51 == 2 )
        {
          if ( (v62 & 4) != 0 )
          {
LABEL_141:
            v68 = *(_QWORD *)(v60 + 720);
            v69 = *(_DWORD *)(v60 + 432) & 0xA0;
            ++v90;
            *(_BYTE *)((v91 << 12) + v68) = 1;
            v70 = a1[1].PendingOidRequest;
            v71 = *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset);
            v72 = KeGetPcr()->Prcb.Number;
            v73 = *((_QWORD *)&v70->Header.Type + v72);
            *((_QWORD *)&v70->Header.Type + v72) = v10;
            if ( (_BYTE)v101 || !*(_QWORD *)(v60 + 160) || v69 && !*(_QWORD *)(v19 + 328) )
            {
              v76 = v10->Private.NdisPacketOobOffset;
              v89 = v92 - 14;
              *(unsigned int *)((char *)&v10->Private.Count + v76) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v60 + 128))(
                *(_QWORD *)(v60 + 32),
                v10,
                MappedSystemVa,
                14LL,
                MappedSystemVa + 14,
                v10->Private.Head->ByteCount - 14,
                v89);
              v18 = *(_QWORD *)v95;
              *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = v71;
            }
            else
            {
              v74 = *(struct _NET_BUFFER_LIST **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset);
              if ( v74 && v71 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v74,
                  (struct NDIS_NBL_TRACKER_HANDLE__ *)v70,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v60 + 584),
                  v18);
              v75 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, unsigned __int64))(v60 + 160))(
                      *(_QWORD *)(v60 + 32),
                      v10,
                      v19);
              v18 = *(_QWORD *)v95;
              *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v75;
            }
            if ( *(int *)(v18 + 12) > 0 )
            {
              v77 = v101;
              if ( (*(_DWORD *)(v60 + 224) & 8) == 0 )
                v77 = 1;
              LOBYTE(v101) = v77;
            }
            *((_QWORD *)&a1[1].PendingOidRequest->Header.Type + KeGetPcr()->Prcb.Number) = v73;
LABEL_137:
            v19 = RcvLinkSpeedIndicateUp;
            goto LABEL_138;
          }
          if ( (v62 & 2) != 0 )
          {
            v63 = *(_DWORD *)(v60 + 456);
            LODWORD(v18) = 0;
            v64 = *(_QWORD *)(v60 + 448);
            v65 = v63 >> 1;
            if ( !v63 || (v3 = v63 - 1, (unsigned int)v65 > v63 - 1) )
            {
LABEL_156:
              v18 = *(_QWORD *)v95;
              goto LABEL_138;
            }
            while ( 2 )
            {
              if ( (unsigned int)v65 < (unsigned int)v18 )
              {
LABEL_136:
                v18 = *(_QWORD *)v95;
                goto LABEL_137;
              }
              v66 = *(_DWORD *)(v64 + 12 * v65 + 6);
              if ( v66 > *(_DWORD *)(MappedSystemVa + 2) )
                goto LABEL_133;
              if ( v66 < *(_DWORD *)(MappedSystemVa + 2) )
                goto LABEL_132;
              v67 = *(_WORD *)(v64 + 12 * v65 + 4);
              if ( v67 > *(_WORD *)MappedSystemVa )
              {
LABEL_133:
                if ( !(_DWORD)v65 )
                {
                  v19 = RcvLinkSpeedIndicateUp;
                  goto LABEL_156;
                }
                v3 = v65 - 1;
              }
              else
              {
                if ( v67 >= *(_WORD *)MappedSystemVa )
                {
                  v19 = RcvLinkSpeedIndicateUp;
                  goto LABEL_141;
                }
LABEL_132:
                LODWORD(v18) = v65 + 1;
              }
              v65 = (unsigned int)v18 + ((v3 - (unsigned int)v18 + 1) >> 1);
              if ( (unsigned int)v65 > v3 )
                goto LABEL_136;
              continue;
            }
          }
        }
LABEL_138:
        v60 = v61;
        if ( !v61 )
        {
          v26 = RcvLinkSpeedIndicateUp;
          goto LABEL_158;
        }
      }
    }
    if ( ByteCount >= 0xE || (*(_DWORD *)(RcvLinkSpeedIndicateUp + 304) & 0xA0) != 0 )
    {
      if ( (v10->Private.Flags & 0x80u) == 0
        || *(_QWORD *)&v10->MacReserved[v10->Private.NdisPacketOobOffset + 24] != v20 )
      {
        v21 = *(_QWORD *)(v20 + 720);
        v90 = v6 + 1;
        *(_BYTE *)((Number << 12) + v21) = 1;
        v22 = *(_DWORD *)(v20 + 432) & 0xA0;
        if ( (v10->Private.Flags & 0x20000) == 0
          && (v10->Private.NdisPacketFlags & 2) == 0
          && LOBYTE(a1->Miniport) < 6u
          && !BYTE1(a1[1].NextCancelSendNetBufferListsContext) )
        {
          v23 = (_QWORD *)(*(_QWORD *)&a1[2].DroppedUncloneableStatusIndications + 112LL * KeGetPcr()->Prcb.Number);
          *v23 += ByteCount;
          if ( !LODWORD(a1->NextSendNetBufferListsCompleteHandler) )
          {
            if ( *MappedSystemVa == -1
              && MappedSystemVa[1] == -1
              && MappedSystemVa[2] == -1
              && MappedSystemVa[3] == -1
              && MappedSystemVa[4] == -1
              && MappedSystemVa[5] == -1 )
            {
              ++v23[6];
              v23[2] += ByteCount;
            }
            else if ( (*MappedSystemVa & 1) != 0 )
            {
              ++v23[5];
              v23[3] += ByteCount;
            }
            else
            {
              ++v23[4];
              v23[1] += ByteCount;
            }
          }
        }
        v10->Private.Flags &= ~0x20000u;
        p_PendingOidRequest = &a1[1].PendingOidRequest;
        v25 = a1[1].PendingOidRequest;
        v26 = RcvLinkSpeedIndicateUp;
        v27 = *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset);
        v28 = KeGetPcr()->Prcb.Number;
        v29 = *((_QWORD *)&v25->Header.Type + v28);
        *((_QWORD *)&v25->Header.Type + v28) = v10;
        if ( !(_BYTE)v3 && *(_QWORD *)(v20 + 160) )
        {
          if ( !v22 )
            goto LABEL_54;
          if ( *(_QWORD *)(v26 + 328) )
          {
            p_PendingOidRequest = &a1[1].PendingOidRequest;
LABEL_54:
            v30 = *(struct _NET_BUFFER_LIST **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset);
            if ( v30 && v27 == -1073741670 )
              ndisNblTrackerTransferOwnershipSingleNbl(
                v30,
                (struct NDIS_NBL_TRACKER_HANDLE__ *)v25,
                *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v20 + 584),
                v18);
            v31 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 160))(*(_QWORD *)(v20 + 32), v10);
            v18 = *(_QWORD *)v95;
            *(_DWORD *)(*(_QWORD *)v95 + 12LL) += v31;
            goto LABEL_59;
          }
        }
        v32 = v10->Private.NdisPacketOobOffset;
        v89 = ByteCount - 14;
        *(unsigned int *)((char *)&v10->Private.Count + v32) = -1073741670;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v20 + 128))(
          *(_QWORD *)(v20 + 32),
          v10,
          MappedSystemVa,
          14LL,
          MappedSystemVa + 14,
          v10->Private.Head->ByteCount - 14,
          v89);
        v18 = *(_QWORD *)v95;
        *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = v27;
LABEL_59:
        *((_QWORD *)&(*p_PendingOidRequest)->Header.Type + KeGetPcr()->Prcb.Number) = v29;
        goto LABEL_158;
      }
      goto LABEL_94;
    }
    v26 = RcvLinkSpeedIndicateUp;
LABEL_158:
    v78 = *(_DWORD *)(v18 + 12);
    if ( v78 )
    {
      v79 = v78 + _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), v78 + 1) + 1;
      v80 = v79 == 0;
      if ( v79 > 0 )
      {
        if ( ((__int64)a1->HigherFilter & 0x40000) == 0 )
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
        v80 = v79 == 0;
      }
      if ( !v80 )
      {
        if ( ((__int64)a1->HigherFilter & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)&a1[1].RcvLinkSpeedIndicateUp + 1);
        goto LABEL_181;
      }
    }
    else
    {
      *(_DWORD *)(v18 + 8) = 0;
    }
    v81 = v97;
    --*(_DWORD *)&v10[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v81 + 8) == -1073741670 )
      goto LABEL_181;
    if ( ((__int64)a1->HigherFilter & 0x40000) != 0 )
    {
      *(_QWORD *)v18 = 0LL;
      *((_DWORD *)v81 + 8) = 259;
      if ( (v10[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v10[-1].ProtocolReserved[4] == -1 )
        goto LABEL_171;
      if ( !*(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
      {
        (*(void (__fastcall **)(void *, struct _NDIS_PACKET *))&a1[2].PktMonEdgeUpper.CompContext[3].EdgeCount)(
          a1->FilterModuleContext,
          v10);
        goto LABEL_181;
      }
    }
    else
    {
      if ( !*(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
      {
        *((_DWORD *)v81 + 8) = 0;
        goto LABEL_181;
      }
      *(_QWORD *)v18 = 0LL;
      *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
      if ( (v10[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v10[-1].ProtocolReserved[4] == -1 )
      {
LABEL_171:
        NDIS_FREE_XFER_DATA_PACKET(v10);
        goto LABEL_181;
      }
    }
    v82 = ndisXlateReturnPacketToNetBufferList(v10);
    if ( v82 )
    {
      v82->Link.Alignment = 0LL;
      ndisReturnNetBufferListsInternal(a1, v82, 0, 0LL);
    }
LABEL_181:
    a2 = v96 + 1;
    ++v93;
    ++v96;
    if ( v93 >= a3 )
      break;
    v6 = v90;
    Number = v91;
  }
  if ( v90 )
  {
    v83 = *(_QWORD *)RcvLinkSpeedIndicateUp;
    if ( *(_QWORD *)RcvLinkSpeedIndicateUp )
    {
      v84 = v91 << 12;
      do
      {
        v85 = *(_QWORD *)(v83 + 720);
        v86 = *(_QWORD *)(v83 + 424);
        if ( *(_BYTE *)(v85 + v84) )
        {
          *(_BYTE *)(v85 + v84) = 0;
          (*(void (__fastcall **)(_QWORD))(v83 + 136))(*(_QWORD *)(v83 + 32));
        }
        v83 = v86;
      }
      while ( v86 );
      goto LABEL_190;
    }
    v26 = RcvLinkSpeedIndicateUp;
  }
LABEL_191:
  v87 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 288) + 32LL) + (KeGetPcr()->Prcb.Number << 12));
  --*v87;
  if ( v98 != 2 )
    KeLowerIrql(v98);
}
