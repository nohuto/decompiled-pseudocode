/*
 * XREFs of ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14004BD90
 * Callers:
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004BCA0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D2B60 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x14001F4D0 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisGetNetBufferListProtocolId @ 0x14004C220 (NdisGetNetBufferListProtocolId.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x14004C240 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 */

__int64 __fastcall ndisXlateSendNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1, char a2)
{
  __int64 v2; // r8
  struct _NET_BUFFER_LIST *v3; // r10
  struct _NET_BUFFER *v4; // r11
  char v5; // al
  unsigned int v6; // edx
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rsi
  struct _NDIS_MINIPORT_BLOCK *v10; // rcx
  __int64 v11; // r12
  int v12; // r13d
  struct _NET_BUFFER *j; // r14
  char v14; // r15
  _QWORD *v15; // r15
  struct _MDL *i; // rdi
  PVOID MappedSystemVa; // rax
  struct _NET_BUFFER *Alignment; // rax
  int v20; // ecx
  struct _NDIS_PACKET **v21; // rbp
  struct _NDIS_PACKET *v22; // rbp
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned __int8 NdisPacketFlags; // al
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  signed __int32 v32; // eax
  signed __int32 v33; // eax
  __int64 v34; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v35; // [rsp+38h] [rbp-60h]
  struct _NET_BUFFER_LIST *v36; // [rsp+40h] [rbp-58h]
  _QWORD *v37; // [rsp+48h] [rbp-50h]
  char v38; // [rsp+A0h] [rbp+8h]
  unsigned int v40; // [rsp+B0h] [rbp+18h]
  struct _NET_BUFFER *v41; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v4 = (struct _NET_BUFFER *)*((_QWORD *)a1 + 3);
  v5 = a2;
  v6 = *((_DWORD *)a1 + 2);
  v8 = 1;
  v9 = *((_QWORD *)a1 + 2);
  v10 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 5);
  v11 = 0LL;
  v12 = 0;
  j = 0LL;
  v14 = 0;
  v34 = v2;
  v40 = v6;
  v41 = v4;
  v38 = 0;
  v35 = v10;
  v36 = 0LL;
  v37 = 0LL;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v5 && (v10->SendFlags & 2) == 0 )
      {
        v15 = *(_QWORD **)(v9 + 8);
        v12 = 0;
        if ( v15 )
        {
          do
          {
            for ( i = (struct _MDL *)v15[4]; i; i = i->Next )
            {
              if ( (i->MdlFlags & 5) != 0 )
                MappedSystemVa = i->MappedSystemVa;
              else
                MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
              if ( !MappedSystemVa )
              {
                v12 = -1073741670;
                break;
              }
            }
            v15 = (_QWORD *)*v15;
          }
          while ( v15 );
          if ( v12 )
          {
            v31 = *(_QWORD *)v9;
            *(_QWORD *)v9 = 0LL;
            *(_DWORD *)(v9 + 140) = v12;
            if ( v36 )
              *v37 = v9;
            else
              v36 = (struct _NET_BUFFER_LIST *)v9;
            v37 = (_QWORD *)v9;
            v9 = v31;
            goto LABEL_52;
          }
          v6 = v40;
          v2 = v34;
          v4 = v41;
        }
        v14 = v38;
      }
      if ( (*(_DWORD *)(v9 + 136) & 0x10) != 0 && (*(_DWORD *)(v9 + 128) & 1) != 0 )
      {
        if ( (unsigned int)v11 >= v6 )
          goto LABEL_13;
        v30 = *(_QWORD *)(v9 + 48);
        *(_QWORD *)(v2 + 8 * v11) = v30;
        v11 = (unsigned int)(v11 + 1);
        *(_DWORD *)(v30 + 36) |= 0x4000u;
        *(_QWORD *)(*(unsigned __int16 *)(v30 + 42) + v30 + 112) = v9;
        *(_DWORD *)(v9 + 140) = 0;
        v9 = *(_QWORD *)v9;
        if ( v9 )
        {
          v4 = *(struct _NET_BUFFER **)(v9 + 8);
          v41 = v4;
        }
        if ( *(int *)ndisNblTrackerMode >= 3 )
        {
          ndisNblTrackerRecordEventInternal(v9, 0LL, 0x17u, (void *)v30, 0);
LABEL_52:
          v4 = v41;
          v2 = v34;
          v6 = v40;
        }
        if ( !v9 )
          goto LABEL_13;
        v14 = v38;
        v5 = a2;
        v10 = v35;
      }
      else
      {
        Alignment = *(struct _NET_BUFFER **)(v9 + 8);
        if ( v4 == Alignment )
        {
          *(_DWORD *)(v9 + 96) = 0;
          if ( Alignment )
          {
            v20 = 0;
            do
            {
              *(_DWORD *)(v9 + 96) = ++v20;
              Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
            }
            while ( Alignment );
          }
        }
        for ( j = v4; j; j = (struct _NET_BUFFER *)j->Link.Alignment )
        {
          if ( (unsigned int)v11 >= v6 )
            goto LABEL_13;
          v21 = (struct _NDIS_PACKET **)(v2 + 8 * v11);
          v12 = ndisNetBufferToPacket(j, 1, v21);
          if ( v12 )
            goto LABEL_13;
          v22 = *v21;
          ndisCopyNBLInfoToPacket(v9, v22, 0LL);
          v23 = v22->Private.Flags & 0xFFFFFFF0;
          v22->Private.Flags = v23;
          v22->Private.Flags = v23 | NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v9);
          if ( *(int *)ndisNblTrackerMode >= 3 )
            ndisNblTrackerRecordEventInternal(v9, 0LL, 0x13u, v22, 0);
          v24 = (unsigned int)++*(_DWORD *)&v22[-1].ProtocolReserved[4];
          if ( (unsigned int)v24 >= ndisPacketStackSize )
            v25 = 16LL;
          else
            v25 = (__int64)v22 + 48 * (v24 - ndisPacketStackSize);
          v2 = v34;
          *(_QWORD *)v25 = *(_QWORD *)(v9 + 120);
          v6 = v40;
          v14 |= (*((_DWORD *)a1 + 9) & 2) != 0;
          v38 = v14;
          v26 = v22->Private.Flags | 0x80;
          if ( v14 )
            v26 = v22->Private.Flags & 0xFFFFFF7F;
          v22->Private.Flags = v26;
          NdisPacketFlags = v22->Private.NdisPacketFlags;
          v28 = NdisPacketFlags | 0x20;
          v29 = NdisPacketFlags & 0xDF;
          if ( (*(_DWORD *)(v9 + 136) & 0x800) == 0 )
            v28 = v29;
          v11 = (unsigned int)(v11 + 1);
          v22->Private.NdisPacketFlags = v28;
          *(_MDL **)((char *)&v22[1].Private.Head + v22->Private.NdisPacketOobOffset) = (_MDL *)j;
          j->MiniportReserved[0] = (void *)v9;
        }
        if ( v12 || (*(_DWORD *)(v9 + 140) = 0, (v9 = *(_QWORD *)v9) == 0) )
        {
LABEL_13:
          v3 = v36;
          v8 = 1;
          v4 = v41;
          v10 = v35;
          break;
        }
        v4 = *(struct _NET_BUFFER **)(v9 + 8);
        v5 = a2;
        v10 = v35;
        v41 = v4;
      }
    }
  }
  *((_DWORD *)a1 + 8) = v11;
  *((_QWORD *)a1 + 2) = v9;
  if ( v9 )
  {
    if ( !j )
      j = v4;
  }
  else
  {
    j = 0LL;
  }
  *((_QWORD *)a1 + 3) = j;
  if ( v12 || !v9 )
  {
    v8 = 0;
    if ( v9 )
    {
      if ( j && j != *(struct _NET_BUFFER **)(v9 + 8) )
      {
        do
        {
          v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 96), 0xFFFFFFFF);
          j = (struct _NET_BUFFER *)j->Link.Alignment;
          v33 = v32 - 1;
        }
        while ( j );
        if ( !v33 )
          *((_QWORD *)a1 + 3) = *(_QWORD *)(v9 + 8);
      }
      NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v9, -1073741670);
      v10 = v35;
    }
  }
  if ( v3 )
    ndisMSendNetBufferListsCompleteInternal((struct _NDIS_FILTER_BLOCK *)v10, v3, *((_DWORD *)a1 + 9) & 1, 0);
  return v8;
}
