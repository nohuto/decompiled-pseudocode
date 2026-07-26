/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B8F60
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400AA0B8 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisGetFirstBufferFromPacket @ 0x1400DDB70 (NdisGetFirstBufferFromPacket.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned __int64 RcvLinkSpeedIndicateUp; // r14
  char v4; // r12
  unsigned int Number; // r13d
  unsigned int v6; // esi
  struct _NDIS_PACKET **v7; // rbx
  struct _NDIS_RW_LOCK_EX *v9; // rcx
  unsigned int v10; // eax
  struct _NDIS_PACKET *v11; // rbx
  int v12; // ecx
  struct _NDIS_STACK_RESERVED *v13; // rsi
  char *v14; // r15
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _NDIS_FILTER_BLOCK **p_HigherFilter; // rcx
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rcx
  NDISWATCHDOG__ *m_ptr; // rdx
  unsigned int v25; // r13d
  __int64 v26; // rax
  struct _NET_BUFFER_LIST *v27; // rcx
  int v28; // edx
  bool v29; // zf
  struct _NDIS_PACKET *v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // [rsp+40h] [rbp-49h]
  struct _NDIS_STACK_RESERVED *v36; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-39h]
  unsigned int v38; // [rsp+54h] [rbp-35h]
  __int64 v39; // [rsp+58h] [rbp-31h] BYREF
  struct _NDIS_PACKET **v40; // [rsp+60h] [rbp-29h]
  char v41; // [rsp+68h] [rbp-21h] BYREF
  __int64 v42; // [rsp+70h] [rbp-19h]
  __int64 v43; // [rsp+78h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-9h]
  unsigned __int64 v45; // [rsp+88h] [rbp-1h]
  char v46; // [rsp+90h] [rbp+7h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v49; // [rsp+100h] [rbp+77h]
  unsigned int v50; // [rsp+108h] [rbp+7Fh] BYREF

  v49 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v4 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v6 = a3;
  v40 = a2;
  v7 = a2;
  v45 = RcvLinkSpeedIndicateUp;
  v36 = 0LL;
  v9 = *(struct _NDIS_RW_LOCK_EX **)(RcvLinkSpeedIndicateUp + 288);
  v39 = 0LL;
  v50 = 0;
  v35 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v38 = Number;
  NdisAcquireRWLockRead(v9, &LockState, 0);
  v10 = 0;
  while ( 1 )
  {
    v37 = v10;
    if ( v10 >= v6 )
      break;
    v11 = *v7;
    ++*(_DWORD *)&v11[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v36);
    v13 = v36;
    if ( *((_DWORD *)v36 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[2].NicSwitchHwCapabilities.MaxNumVPorts,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v11, BugCheckParameter4);
    }
    v14 = (char *)v11 + v11->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v12, (unsigned int)&v46, (unsigned int)&v39, (unsigned int)&v41, (__int64)&v50);
    if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
    {
      v16 = *(_QWORD *)&a1[2].PnPRef.ReferenceCount;
      if ( v16 )
      {
        v13 = v36;
        v17 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v16 + v17 + 32);
      }
      v15 = *(_QWORD *)&a1[2].PnPRef.ReferenceCount;
      if ( v15 )
      {
        v13 = v36;
        v18 = v50;
        v19 = (_QWORD *)(v15 + 112LL * KeGetPcr()->Prcb.Number);
        v19[1] += v50;
        *v19 += v18;
      }
    }
    v11->Private.Flags &= ~0x20000u;
    *((_DWORD *)v13 + 2) = -1;
    *((_DWORD *)v13 + 3) = 0;
    *(_QWORD *)v13 = a1;
    v11->Private.ValidCounts = 0;
    if ( *((_DWORD *)v14 + 8) == -1073741670 || (HIDWORD(a1->HigherFilter) & 0x800) != 0 )
    {
      v21 = 1LL;
      p_HigherFilter = &a1->HigherFilter;
      v4 = 1;
    }
    else
    {
      p_HigherFilter = &a1->HigherFilter;
      if ( ((__int64)a1->HigherFilter & 0x8000) == 0 )
        *((_DWORD *)v14 + 8) = 0;
      v21 = 1LL;
    }
    v22 = *(_QWORD *)RcvLinkSpeedIndicateUp;
    if ( v22 )
    {
      v23 = Number << 12;
      v44 = v23;
      do
      {
        ++v35;
        v43 = *(_QWORD *)(v22 + 424);
        *(_BYTE *)(v23 + *(_QWORD *)(v22 + 720)) = 1;
        m_ptr = a1[1].PendingOidWatchdog.m_ptr;
        v25 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
        v26 = *((_QWORD *)m_ptr + KeGetPcr()->Prcb.Number);
        v42 = v26;
        LODWORD(v26) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)m_ptr + v26) = v11;
        if ( v4 || !*(_QWORD *)(v22 + 160) )
        {
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v22 + 128))(*(_QWORD *)(v22 + 32), v11);
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v25;
        }
        else
        {
          v27 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v27 && v25 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v27,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)m_ptr,
              *(_QWORD *)(v22 + 584));
          *((_DWORD *)v13 + 3) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64, __int64))(v22 + 160))(
                                    *(_QWORD *)(v22 + 32),
                                    v11,
                                    v15,
                                    v21);
        }
        v21 = 1LL;
        if ( *((int *)v13 + 3) > 0 && (*(_DWORD *)(v22 + 224) & 8) == 0 )
          v4 = 1;
        *((_QWORD *)a1[1].PendingOidWatchdog.m_ptr + KeGetPcr()->Prcb.Number) = v42;
        v23 = v44;
        v22 = v43;
      }
      while ( v43 );
      v13 = v36;
      p_HigherFilter = &a1->HigherFilter;
      Number = v38;
    }
    v28 = *((_DWORD *)v13 + 3);
    v4 = 0;
    if ( v28 )
    {
      v15 = (unsigned int)(v28 + _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, v28 + 1) + 1);
      v29 = (_DWORD)v15 == 0;
      if ( (int)v15 > 0 )
      {
        p_HigherFilter = &a1->HigherFilter;
        if ( ((__int64)a1->HigherFilter & 0x40000) == 0 )
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
        v29 = (_DWORD)v15 == 0;
      }
      if ( !v29 )
      {
        if ( (*(_DWORD *)p_HigherFilter & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1[1].AutoNegotiationFlagsIndicateUp, 1u);
        goto LABEL_53;
      }
      v13 = v36;
    }
    else
    {
      *((_DWORD *)v13 + 2) = 0;
    }
    --*(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v14 + 8) == -1073741670 )
      goto LABEL_53;
    if ( ((__int64)a1->HigherFilter & 0x40000) != 0 )
    {
      *(_QWORD *)v13 = 0LL;
      *((_DWORD *)v14 + 8) = 259;
      if ( (v11[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v11[-1].ProtocolReserved[4] == -1 )
        goto LABEL_50;
      v30 = v11;
      if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
        goto LABEL_45;
      (*(void (__fastcall **)(void *, struct _NDIS_PACKET *, __int64, __int64))(a1[2].NblContextVerifierContext.SendNetBufferListsDummyHandlerCallsCounter
                                                                              + 224))(
        a1->FilterModuleContext,
        v11,
        v15,
        1LL);
    }
    else
    {
      if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v13 = 0LL;
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
        if ( (v11[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v11[-1].ProtocolReserved[4] != -1 )
        {
          v30 = v11;
LABEL_45:
          ndisReturnPacketToNetBufferList(a1, v30);
          goto LABEL_53;
        }
LABEL_50:
        NDIS_FREE_XFER_DATA_PACKET(v11);
        goto LABEL_53;
      }
      *((_DWORD *)v14 + 8) = 0;
    }
LABEL_53:
    RcvLinkSpeedIndicateUp = v45;
    v10 = v37 + 1;
    v6 = v49;
    v7 = ++v40;
  }
  if ( v35 )
  {
    v31 = *(_QWORD *)RcvLinkSpeedIndicateUp;
    if ( *(_QWORD *)RcvLinkSpeedIndicateUp )
    {
      v32 = Number << 12;
      do
      {
        v33 = *(_QWORD *)(v31 + 720);
        v34 = *(_QWORD *)(v31 + 424);
        if ( *(_BYTE *)(v33 + v32) )
        {
          *(_BYTE *)(v33 + v32) = 0;
          (*(void (__fastcall **)(_QWORD))(v31 + 136))(*(_QWORD *)(v31 + 32));
        }
        v31 = v34;
      }
      while ( v34 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(RcvLinkSpeedIndicateUp + 288), &LockState);
}
