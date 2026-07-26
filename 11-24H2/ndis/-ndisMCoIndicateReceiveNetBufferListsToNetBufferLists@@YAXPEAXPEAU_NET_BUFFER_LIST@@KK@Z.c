/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D39F0
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3420 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140017B20 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x14003FA30 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14004E1F0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140072EC0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140075230 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v7; // r13
  __int64 v8; // r12
  struct _NET_BUFFER_LIST *v9; // r14
  unsigned int v10; // r15d
  struct _NET_BUFFER_LIST *v11; // r9
  struct _NET_BUFFER_LIST *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct _LOCK_STATE_EX LockState; // [rsp+80h] [rbp+40h] BYREF
  struct _NET_BUFFER_LIST *v17; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+50h] BYREF

  v18 = a3;
  v17 = a2;
  v4 = a1[9];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v7 = *(_QWORD *)(v4 + 120);
  v8 = *(_QWORD *)(v7 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v8 + 288), &LockState, 0);
  v9 = v17;
  v10 = v18;
  v11 = v17;
  v15 = v18;
  *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(*(_QWORD *)(v4 + 16) + 720LL)) = 1;
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)v8,
    v11,
    v15,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v8 + 8),
    v9,
    v10,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v8 + 16),
    v9,
    v10,
    a4,
    1);
  if ( !ndisIsNblContextVeriferEnabled(*(const struct _NDIS_FILTER_BLOCK **)(v4 + 16)) )
  {
LABEL_12:
    if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
    {
      if ( (a4 & 2) == 0 )
        ndisReturnNetBufferListsInternal(*(struct _NDIS_FILTER_BLOCK **)(v4 + 120), v9, a4 & 1, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _NET_BUFFER_LIST *, _QWORD, unsigned int))(v4 + 72))(
        *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
        *(_QWORD *)(v4 + 24),
        v9,
        v10,
        a4);
    }
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v8 + 288), &LockState);
    return;
  }
  v12 = ndisAddNblContextTerminator(&v17, &v18, *(struct _NDIS_OBJECT_HEADER **)(v4 + 16));
  if ( !v12 )
  {
    v9 = v17;
LABEL_11:
    v10 = v18;
    goto LABEL_12;
  }
  if ( byte_14011D800 )
  {
    v14 = *(_QWORD *)(v4 + 120);
    if ( (*(_DWORD *)(v14 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(v14 + 5816, (__int64)v12, v13, 1LL, -1073741670, -536866800);
  }
  if ( (a4 & 2) == 0 )
    ndisCallPreviousReturnHandler((struct _NDIS_OBJECT_HEADER *)v7, v12, a4);
  v9 = v17;
  if ( v17 )
    goto LABEL_11;
}
