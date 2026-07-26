/*
 * XREFs of ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     PktMonClientNblLogNdis @ 0x1400206D0 (PktMonClientNblLogNdis.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x140056390 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     NdisMPauseComplete @ 0x1400620B0 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(
        char *MiniportAdapterHandle,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  int v3; // ebx
  bool v5; // r14
  unsigned int v6; // r12d
  KIRQL v7; // dl
  unsigned int v8; // ecx
  bool v9; // cc
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r15
  unsigned int v13; // esi
  struct _NET_BUFFER_LIST *v14; // rbx
  __int64 v15; // rax
  int v16; // r14d
  struct _NET_BUFFER_LIST *Alignment; // rsi
  struct _NDIS_PACKET *v18; // rax
  __int64 NdisPacketOobOffset; // rdx
  KIRQL v20; // al
  unsigned int v21; // edx
  bool v22; // zf
  struct _NET_BUFFER_LIST *v23; // rsi
  struct _NET_BUFFER_LIST *v24; // rbx
  int v25; // r14d
  __int64 v26; // rsi
  struct _NDIS_PACKET **v27; // rbx
  struct _NDIS_PACKET *v28; // rdx
  __int64 v29; // rcx
  _QWORD v30[2]; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-9h]
  __int128 v32; // [rsp+5Ch] [rbp-5h]
  unsigned int v33[2]; // [rsp+6Ch] [rbp+Bh]
  int v34; // [rsp+74h] [rbp+13h]
  bool v35; // [rsp+C8h] [rbp+67h]
  int v38; // [rsp+E0h] [rbp+7Fh]

  v32 = 0uLL;
  v3 = 0;
  *(_QWORD *)v33 = 0LL;
  v34 = 0;
  v31 = a3;
  v30[1] = a2;
  v30[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v5 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v30);
    v35 = v5;
    if ( !*(_QWORD *)((char *)&v32 + 4) )
    {
      v12 = MiniportAdapterHandle + 120;
      goto LABEL_29;
    }
    v38 = HIDWORD(v32);
    v6 = HIDWORD(v32) - v3;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v8 = *((_DWORD *)MiniportAdapterHandle + 502) - 5;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    v9 = v8 <= 1;
    v10 = (KSPIN_LOCK *)(MiniportAdapterHandle + 2000);
    if ( v9 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v6;
    KeReleaseSpinLock(v10, v7);
    v12 = MiniportAdapterHandle + 120;
    v13 = v33[1];
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v33[1] & 2) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v6);
      v13 = v33[1];
    }
    v14 = *(struct _NET_BUFFER_LIST **)((char *)&v32 + 4);
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        *(struct _NET_BUFFER_LIST **)((char *)&v32 + 4),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        (v13 & 2 | 0x100) >> 1,
        0);
    if ( byte_14011D800 )
    {
      v15 = *((_QWORD *)MiniportAdapterHandle + 738);
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 56) & 1) != 0 )
          PktMonClientNblLogNdis((__int64)(MiniportAdapterHandle + 5880), (__int64)v14, v11, 1);
      }
    }
    ndisInvokeNextReceiveHandler(
      v14,
      0,
      v33[0],
      v13,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314),
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 312),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))MiniportAdapterHandle
      + 328));
    if ( (v13 & 2) != 0 )
    {
      v16 = *v12 & 0x40000;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          *(struct _NET_BUFFER_LIST **)((char *)&v32 + 4),
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
          *((_QWORD *)MiniportAdapterHandle + 510),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
        v18 = ndisXlateReturnNetBufferListToPacket(v14);
        NdisPacketOobOffset = v18->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v16 )
          {
            if ( (v18[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v18[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v18);
            else
              (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 270))(
                *((_QWORD *)MiniportAdapterHandle + 3),
                v18);
          }
          else
          {
            *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v14 = Alignment;
      }
      while ( Alignment );
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      v21 = *((_DWORD *)MiniportAdapterHandle + 503) - v6;
      *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
      v22 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_DWORD *)MiniportAdapterHandle + 503) = v21;
      if ( v22 && !v21 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v20);
        NdisMPauseComplete(MiniportAdapterHandle);
        goto LABEL_35;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v20);
      v5 = v35;
    }
    v3 = v38;
    *(_QWORD *)((char *)&v32 + 4) = 0LL;
LABEL_29:
    if ( !v5 )
      goto LABEL_35;
  }
  v23 = *(struct _NET_BUFFER_LIST **)((char *)&v32 + 4);
  KeReleaseSpinLock(v10, v7);
  do
  {
    v24 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v23);
    v23 = v24;
  }
  while ( v24 );
  HIDWORD(v32) -= v6;
  v12 = MiniportAdapterHandle + 120;
LABEL_35:
  if ( HIDWORD(v32) < a3 )
  {
    v25 = *v12 & 0x40000;
    v26 = a3 - HIDWORD(v32);
    v27 = &a2[HIDWORD(v32)];
    do
    {
      v28 = *v27++;
      v29 = v28->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v28->Private.Count + v29) != -1073741670 )
      {
        if ( v25 )
        {
          if ( (v28[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v28[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v28);
          else
            (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 270))(*((_QWORD *)MiniportAdapterHandle + 3));
        }
        else
        {
          *(unsigned int *)((char *)&v28->Private.Count + v29) = 0;
        }
      }
      --v26;
    }
    while ( v26 );
  }
}
