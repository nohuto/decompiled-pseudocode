/*
 * XREFs of NdisAllocatePacket @ 0x14001F5F0
 * Callers:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14001F140 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x14001F4D0 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 *     ndisLWM5IndicateReceive @ 0x140063060 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  _SLIST_HEADER *v3; // rbx
  char *v4; // r15
  PNDIS_PACKET *v6; // rdi
  PSLIST_ENTRY v7; // rbp
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  char *v10; // rbx
  char *v11; // r14
  KIRQL v12; // r13
  char *v13; // rax
  unsigned __int64 v14; // rax
  KSPIN_LOCK *v15; // r12
  KIRQL v16; // al
  _QWORD *Alignment; // rdx
  KIRQL v18; // r13
  void **Region; // rcx
  char **v20; // rax
  char *v21; // rsi
  int v22; // eax
  LONGLONG v23; // rax
  unsigned __int64 v24; // rax
  _SLIST_HEADER *Pool2; // rax
  _SLIST_HEADER *v26; // r15
  int v27; // r14d
  _SLIST_HEADER *v28; // r15
  _SLIST_HEADER *v29; // rbp
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 p_Region; // rcx
  char *v33; // rsi
  unsigned __int64 v34; // rax
  _SLIST_HEADER *v35; // [rsp+20h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+98h] [rbp+20h]

  v3 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v4 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = 0LL;
  if ( v3 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v7 = ExpInterlockedPopEntrySList(v3 + 2);
    if ( v7 )
    {
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v3 + 2) )
        goto LABEL_20;
      v15 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v3->Alignment;
      v18 = v16;
      if ( *(_SLIST_HEADER **)(v3->Alignment + 8) == v3 )
      {
        Region = (void **)v3->Region;
        if ( *Region == v3 )
        {
          *Region = Alignment;
          Alignment[1] = Region;
          if ( ExQueryDepthSList(v3 + 2) )
          {
            v24 = *(_QWORD *)v4;
            if ( *(char **)(*(_QWORD *)v4 + 8LL) == v4 )
            {
              v3->Alignment = v24;
              v3->Region = (unsigned __int64)v4;
              *(_QWORD *)(v24 + 8) = v3;
              v22 = 0;
              *(_QWORD *)v4 = v3;
              goto LABEL_15;
            }
          }
          else
          {
            v20 = (char **)*((_QWORD *)PoolHandle + 8);
            v21 = (char *)PoolHandle + 56;
            if ( *v20 == v21 )
            {
              v3->Region = (unsigned __int64)v20;
              v3->Alignment = (unsigned __int64)v21;
              *v20 = (char *)v3;
              v22 = 1;
              *((_QWORD *)v21 + 1) = v3;
LABEL_15:
              LODWORD(v3[3].Alignment) = v22;
              KeReleaseSpinLock(v15, v18);
LABEL_20:
              *v6 = (PNDIS_PACKET)v7;
              *Status = 0;
              *(_DWORD *)&(*v6)[-1].ProtocolReserved[4] = -1;
              *(_DWORD *)(*v6)[-1].ProtocolReserved = -1;
              *(_QWORD *)&(*v6)->ProtocolReserved[(*v6)->Private.NdisPacketOobOffset] = *v6;
              (*v6)->Private.Head = 0LL;
              (*v6)->Private.ValidCounts = 0;
              (*v6)->Private.NdisPacketFlags = 0x80;
              return;
            }
          }
        }
      }
LABEL_6:
      __fastfail(3u);
    }
  }
  v8 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v10 = (char *)*((_QWORD *)PoolHandle + 9);
  v11 = (char *)PoolHandle + 72;
  v12 = v9;
  if ( v10 == (char *)PoolHandle + 72 )
  {
    if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
    {
      Pool2 = (_SLIST_HEADER *)ExAllocatePool2(64LL, *((unsigned int *)PoolHandle + 5), *(unsigned int *)PoolHandle);
      v35 = Pool2;
      v26 = Pool2;
      if ( Pool2 )
      {
        ++*((_DWORD *)PoolHandle + 3);
        ListHead = Pool2 + 2;
        Pool2->Region = (unsigned __int64)Pool2;
        Pool2->Alignment = (unsigned __int64)Pool2;
        InitializeSListHead(Pool2 + 2);
        v27 = *((unsigned __int16 *)PoolHandle + 3);
        if ( *((_WORD *)PoolHandle + 3) )
        {
          v28 = v26 + 4;
          do
          {
            v29 = &v28[3 * ndisPacketStackSize + 1];
            *((_BYTE *)&v29[2].HeaderX64 + 9) = 0;
            v28 = (_SLIST_HEADER *)((char *)v28 + *((unsigned __int16 *)PoolHandle + 2));
            ExpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)v29);
            v29[1].Region = (unsigned __int64)PoolHandle;
            v30 = 0;
            *((_DWORD *)&v29[2].HeaderX64 + 1) = *((_DWORD *)PoolHandle + 4);
            v31 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
            *((_WORD *)&v29[2].HeaderX64 + 5) = v31;
            for ( *(unsigned __int64 *)((char *)&v29[6].Alignment + v31) = (unsigned __int64)v29;
                  v30 < ndisPacketStackSize;
                  ++v30 )
            {
              *((_DWORD *)&v29[-1].HeaderX64 + 3) = v30;
              if ( v30 >= ndisPacketStackSize )
                p_Region = 40LL;
              else
                p_Region = (__int64)&v29[3 * (v30 - (unsigned __int64)ndisPacketStackSize) + 1].Region;
              KeInitializeSpinLock((PKSPIN_LOCK)p_Region);
            }
            --v27;
          }
          while ( v27 );
          v6 = Packet;
          v8 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
          v26 = v35;
        }
        v33 = (char *)PoolHandle + 40;
        v7 = ExpInterlockedPopEntrySList(v26 + 2);
        v34 = *(_QWORD *)v33;
        if ( *(char **)(*(_QWORD *)v33 + 8LL) != v33 )
          goto LABEL_6;
        v26->Alignment = v34;
        v26->Region = (unsigned __int64)v33;
        *(_QWORD *)(v34 + 8) = v26;
        *(_QWORD *)v33 = v26;
        LODWORD(v26[3].Alignment) = 0;
      }
    }
    KeReleaseSpinLock(v8, v12);
  }
  else
  {
    if ( *((char **)v10 + 1) != v11 )
      goto LABEL_6;
    v13 = *(char **)v10;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_6;
    *(_QWORD *)v11 = v13;
    *((_QWORD *)v13 + 1) = v11;
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v10 + 2);
    v14 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_6;
    *(_QWORD *)v10 = v14;
    *((_QWORD *)v10 + 1) = v4;
    *(_QWORD *)(v14 + 8) = v10;
    *(_QWORD *)v4 = v10;
    *((_DWORD *)v10 + 12) = 0;
    if ( *(char **)v11 == v11 )
      v23 = 0LL;
    else
      v23 = *(_QWORD *)(*(_QWORD *)v11 + 16LL) + PoolAgingTicks.QuadPart;
    *((_QWORD *)PoolHandle + 13) = v23;
    KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 4, v12);
  }
  if ( v7 )
    goto LABEL_20;
  *v6 = 0LL;
  *Status = -1073741670;
}
