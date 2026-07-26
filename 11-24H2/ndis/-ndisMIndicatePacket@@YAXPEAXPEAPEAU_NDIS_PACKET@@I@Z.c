/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B1180
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x14003FA30 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008D890 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A1F08 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisGetFirstBufferFromPacket @ 0x1400D6830 (NdisGetFirstBufferFromPacket.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int Number; // r13d
  unsigned __int64 RcvLinkSpeedIndicateUp; // rcx
  struct _NDIS_PACKET **v6; // rbx
  struct _NDIS_RW_LOCK_EX *v8; // rcx
  struct _NDIS_PACKET *v9; // rbx
  int v10; // ecx
  struct _NDIS_STACK_RESERVED *v11; // rsi
  char *v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // r12
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  _NDIS_OID_REQUEST *PendingOidRequest; // rdx
  unsigned int v23; // r13d
  _QWORD *v24; // rax
  struct _NET_BUFFER_LIST *v25; // rcx
  int v26; // ecx
  bool v27; // zf
  struct _NDIS_PACKET *v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  unsigned int v31; // r13d
  __int64 v32; // rax
  __int64 v33; // rbx
  struct _NDIS_STACK_RESERVED *v34; // [rsp+40h] [rbp-49h] BYREF
  int v35; // [rsp+48h] [rbp-41h]
  unsigned int v36; // [rsp+4Ch] [rbp-3Dh]
  _QWORD *v37; // [rsp+50h] [rbp-39h]
  unsigned int v38; // [rsp+58h] [rbp-31h]
  __int64 v39; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_PACKET **v40; // [rsp+68h] [rbp-21h]
  char v41; // [rsp+70h] [rbp-19h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-11h]
  __int64 v43; // [rsp+80h] [rbp-9h]
  __int64 v44; // [rsp+88h] [rbp-1h]
  char v45; // [rsp+90h] [rbp+7h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v48; // [rsp+100h] [rbp+77h]
  unsigned int v49; // [rsp+108h] [rbp+7Fh] BYREF

  v48 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v6 = a2;
  v40 = a2;
  v37 = (_QWORD *)RcvLinkSpeedIndicateUp;
  v8 = *(struct _NDIS_RW_LOCK_EX **)(RcvLinkSpeedIndicateUp + 288);
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v34 = 0LL;
  v39 = 0LL;
  v49 = 0;
  v35 = 0;
  v38 = Number;
  NdisAcquireRWLockRead(v8, &LockState, 0);
  v36 = 0;
  if ( !a3 )
  {
    v29 = v37;
    goto LABEL_61;
  }
  do
  {
    v9 = *v6;
    ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v9, &v34);
    v11 = v34;
    if ( *((_DWORD *)v34 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[2].NicSwitchHwCapabilities.NdisReserved2,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v9, BugCheckParameter4);
    }
    v12 = (char *)v9 + v9->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v10, (unsigned int)&v45, (unsigned int)&v39, (unsigned int)&v41, (__int64)&v49);
    if ( (v9->Private.Flags & 0x20000) == 0 && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      v13 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
      if ( v13 )
      {
        v11 = v34;
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v13 + v14 + 32);
      }
      v15 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
      if ( v15 )
      {
        v11 = v34;
        v16 = v49;
        v13 = v15 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v13 + 8) += v49;
        *(_QWORD *)v13 += v16;
      }
    }
    v9->Private.Flags &= ~0x20000u;
    *((_DWORD *)v11 + 2) = -1;
    *((_DWORD *)v11 + 3) = 0;
    *(_QWORD *)v11 = a1;
    v9->Private.ValidCounts = 0;
    if ( *((_DWORD *)v12 + 8) == -1073741670 || (HIDWORD(a1->HigherFilter) & 0x800) != 0 )
    {
      v18 = 1LL;
      v17 = 1;
    }
    else
    {
      if ( ((__int64)a1->HigherFilter & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v11 = v34;
      v17 = 0;
      v18 = 1LL;
    }
    v19 = *v37;
    if ( *v37 )
    {
      v20 = Number << 12;
      v44 = v20;
      do
      {
        v21 = *(_QWORD *)(v19 + 424);
        ++v35;
        v43 = v21;
        *(_BYTE *)(v20 + *(_QWORD *)(v19 + 720)) = 1;
        PendingOidRequest = a1[1].PendingOidRequest;
        v23 = *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset);
        v24 = (_QWORD *)*((_QWORD *)&PendingOidRequest->Header.Type + KeGetPcr()->Prcb.Number);
        v42 = v24;
        LODWORD(v24) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)&PendingOidRequest->Header.Type + (_QWORD)v24) = v9;
        if ( v17 || !*(_QWORD *)(v19 + 160) )
        {
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v19 + 128))(*(_QWORD *)(v19 + 32), v9);
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = v23;
        }
        else
        {
          v25 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset);
          if ( v25 && v23 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v25,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)PendingOidRequest,
              *(_QWORD *)(v19 + 584));
          *((_DWORD *)v11 + 3) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(v19 + 160))(
                                    *(_QWORD *)(v19 + 32),
                                    v9,
                                    v18);
        }
        v18 = 1LL;
        if ( *((int *)v11 + 3) > 0 && (*(_DWORD *)(v19 + 224) & 8) == 0 )
          v17 = 1;
        v13 = (unsigned __int64)v42;
        *((_QWORD *)&a1[1].PendingOidRequest->Header.Type + KeGetPcr()->Prcb.Number) = v42;
        v20 = v44;
        v19 = v43;
      }
      while ( v43 );
      v11 = v34;
      Number = v38;
    }
    v26 = *((_DWORD *)v11 + 3);
    if ( v26 )
    {
      v13 = (unsigned int)(v26 + _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, v26 + 1) + 1);
      v27 = (_DWORD)v13 == 0;
      if ( (int)v13 > 0 )
      {
        if ( ((__int64)a1->HigherFilter & 0x40000) == 0 )
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
        v27 = (_DWORD)v13 == 0;
      }
      if ( !v27 )
      {
        if ( ((__int64)a1->HigherFilter & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1[1].RcvLinkSpeedIndicateUp + 1, 1u);
        goto LABEL_51;
      }
    }
    else
    {
      *((_DWORD *)v11 + 2) = 0;
    }
    --*(_DWORD *)&v9[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v12 + 8) == -1073741670 )
      goto LABEL_51;
    if ( ((__int64)a1->HigherFilter & 0x40000) != 0 )
    {
      *(_QWORD *)v34 = 0LL;
      *((_DWORD *)v12 + 8) = 259;
      if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
        goto LABEL_48;
      v28 = v9;
      if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
        goto LABEL_43;
      (*(void (__fastcall **)(void *, struct _NDIS_PACKET *, __int64))&a1[2].PktMonEdgeUpper.CompContext[3].EdgeCount)(
        a1->FilterModuleContext,
        v9,
        1LL);
    }
    else
    {
      if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v34 = 0LL;
        *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
        if ( (v9[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v9[-1].ProtocolReserved[4] != -1 )
        {
          v28 = v9;
LABEL_43:
          ndisReturnPacketToNetBufferList(a1, v28);
          goto LABEL_51;
        }
LABEL_48:
        NDIS_FREE_XFER_DATA_PACKET(v9);
        goto LABEL_51;
      }
      *((_DWORD *)v12 + 8) = 0;
    }
LABEL_51:
    v6 = v40 + 1;
    ++v36;
    ++v40;
  }
  while ( v36 < v48 );
  v29 = v37;
  if ( v35 )
  {
    v30 = *v37;
    if ( *v37 )
    {
      v31 = Number << 12;
      do
      {
        v32 = *(_QWORD *)(v30 + 720);
        v33 = *(_QWORD *)(v30 + 424);
        if ( *(_BYTE *)(v32 + v31) )
        {
          *(_BYTE *)(v32 + v31) = 0;
          (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(v30 + 136))(*(_QWORD *)(v30 + 32), v13, v18);
        }
        v30 = v33;
      }
      while ( v33 );
    }
  }
LABEL_61:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v29[36], &LockState);
}
