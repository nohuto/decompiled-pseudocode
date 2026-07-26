/*
 * XREFs of ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B720
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006BAC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14006C0D0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMPauseComplete @ 0x14006C4B0 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(
        char *MiniportAdapterHandle,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  int v3; // edi
  unsigned __int8 v6; // bp
  unsigned int v7; // r15d
  KIRQL v8; // dl
  unsigned int v9; // ecx
  bool v10; // cc
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r12
  unsigned int v14; // edi
  struct _NET_BUFFER_LIST *v15; // r14
  struct _NET_BUFFER_LIST *Alignment; // rdi
  struct _NDIS_PACKET *v17; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v19; // al
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // ecx
  struct _NET_BUFFER_LIST *v23; // r14
  struct _NET_BUFFER_LIST *v24; // rdi
  __int64 v25; // rax
  int v26; // ebp
  __int64 v27; // rsi
  struct _NDIS_PACKET **v28; // rdi
  struct _NDIS_PACKET *v29; // rdx
  __int64 v30; // rcx
  _QWORD v31[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-58h]
  __int128 v33; // [rsp+54h] [rbp-54h]
  __int64 v34; // [rsp+64h] [rbp-44h]
  int v35; // [rsp+6Ch] [rbp-3Ch]
  int v36; // [rsp+B0h] [rbp+8h]
  int v38; // [rsp+C0h] [rbp+18h]

  v3 = 0;
  v33 = 0uLL;
  v34 = 0LL;
  v35 = 0;
  v32 = a3;
  v31[1] = a2;
  v31[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v31);
    if ( !*(_QWORD *)((char *)&v33 + 4) )
    {
      v13 = MiniportAdapterHandle + 120;
      goto LABEL_16;
    }
    v36 = HIDWORD(v33);
    v7 = HIDWORD(v33) - v3;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v9 = *((_DWORD *)MiniportAdapterHandle + 502) - 5;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    v10 = v9 <= 1;
    v11 = (KSPIN_LOCK *)(MiniportAdapterHandle + 2000);
    if ( v10 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v7;
    KeReleaseSpinLock(v11, v8);
    v13 = MiniportAdapterHandle + 120;
    v14 = HIDWORD(v34);
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v34 & 0x200000000LL) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v7);
      v14 = HIDWORD(v34);
    }
    v15 = *(struct _NET_BUFFER_LIST **)((char *)&v33 + 4);
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        *(struct _NET_BUFFER_LIST **)((char *)&v33 + 4),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        (v14 & 2 | 0x100) >> 1,
        0);
    if ( byte_1401278B0 )
    {
      v25 = *((_QWORD *)MiniportAdapterHandle + 738);
      if ( v25 )
      {
        if ( (*(_DWORD *)(v25 + 56) & 1) != 0 )
          PktMonClientNblLogNdis((__int64)(MiniportAdapterHandle + 5880), (__int64)v15, v12, 1);
      }
    }
    ndisInvokeNextReceiveHandler(
      v15,
      0,
      (unsigned int)v34,
      v14,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314),
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 312),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))MiniportAdapterHandle
      + 328));
    if ( (v14 & 2) != 0 )
    {
      v38 = *v13 & 0x40000;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v15,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
          *((_QWORD *)MiniportAdapterHandle + 510),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
        v17 = ndisXlateReturnNetBufferListToPacket(v15);
        NdisPacketOobOffset = v17->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v17->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v38 )
          {
            if ( (v17[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v17[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v17);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 270))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v17->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v15 = Alignment;
      }
      while ( Alignment );
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
      v20 = *((_DWORD *)MiniportAdapterHandle + 503) - v7;
      v21 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_DWORD *)MiniportAdapterHandle + 503) = v20;
      if ( v21 && !v20 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v19);
        NdisMPauseComplete(MiniportAdapterHandle);
LABEL_17:
        v22 = HIDWORD(v33);
        goto LABEL_18;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v19);
    }
    v3 = v36;
    *(_QWORD *)((char *)&v33 + 4) = 0LL;
LABEL_16:
    if ( v6 != 1 )
      goto LABEL_17;
  }
  v23 = *(struct _NET_BUFFER_LIST **)((char *)&v33 + 4);
  KeReleaseSpinLock(v11, v8);
  do
  {
    v24 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v23);
    v23 = v24;
  }
  while ( v24 );
  v13 = MiniportAdapterHandle + 120;
  v22 = HIDWORD(v33) - v7;
LABEL_18:
  if ( v22 < a3 )
  {
    v26 = *v13 & 0x40000;
    v27 = a3 - v22;
    v28 = &a2[v22];
    do
    {
      v29 = *v28++;
      v30 = v29->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v29->Private.Count + v30) != -1073741670 )
      {
        if ( v26 )
        {
          if ( (v29[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v29[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v29);
          else
            (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 270))(*((_QWORD *)MiniportAdapterHandle + 3));
        }
        else
        {
          *(unsigned int *)((char *)&v29->Private.Count + v30) = 0;
        }
      }
      --v27;
    }
    while ( v27 );
  }
}
