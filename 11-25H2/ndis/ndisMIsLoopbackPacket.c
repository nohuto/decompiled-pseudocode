/*
 * XREFs of ndisMIsLoopbackPacket @ 0x140030780
 * Callers:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400305C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     NdisPacketSize @ 0x140030BF0 (NdisPacketSize.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x140030C40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x140045550 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, char **a3)
{
  _MDL *Head; // rcx
  char v5; // r12
  char *MappedSystemVa; // rbx
  char *Pool2; // rax
  char *v11; // rsi
  char *v12; // r13
  char *v13; // rbx
  unsigned int j; // esi
  __int64 v15; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v17; // rsi
  unsigned __int16 v18; // r14
  unsigned int v19; // edx
  _MDL *v20; // rdx
  ULONG TotalLength; // ebp
  unsigned int v22; // r8d
  unsigned int i; // r9d
  UINT v24; // eax
  size_t v25; // r14
  ULONG v26; // eax
  __int64 ByteCount; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  bool v30; // si
  int v31; // r14d
  struct _NDIS_RW_LOCK_EX *v32; // rcx
  __int64 v33; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+20h] BYREF

  v35 = 0;
  Head = a2->Private.Head;
  v5 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( MappedSystemVa )
  {
    if ( *(_DWORD *)(a1 + 464) )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (v33 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v33 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v33 + 336) )
      {
        v30 = 1;
        v5 = 1;
      }
      else
      {
        v30 = 1;
      }
    }
    else
    {
      NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), &LockState, 0);
      v29 = *(_QWORD *)(a1 + 400);
      v30 = 0;
      v31 = *(_DWORD *)(v29 + 312);
      if ( (*MappedSystemVa & 1) != 0 )
      {
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v30 = (v31 & 8) != 0;
        }
        else if ( (v31 & 4) != 0
               || (v31 & 2) != 0
               && ethFindMulticast(
                    *(_DWORD *)(v29 + 368),
                    0LL,
                    *(unsigned __int8 (**)[6])(v29 + 352),
                    (unsigned __int8 *const)MappedSystemVa) )
        {
          v30 = 1;
        }
      }
      else if ( *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v29 + 338)
             && *(_WORD *)MappedSystemVa == *(_WORD *)(v29 + 336) )
      {
        v30 = 1;
        v5 = 1;
      }
      v32 = *(struct _NDIS_RW_LOCK_EX **)(v29 + 288);
      if ( (v31 & 0xA0) != 0 )
      {
        v30 = 1;
        NdisReleaseRWLock(v32, &LockState);
      }
      else
      {
        NdisReleaseRWLock(v32, &LockState);
        if ( !v30 )
          goto LABEL_20;
      }
    }
    if ( (a2->Private.Flags & 0x200) != 0 )
    {
      v5 = 1;
LABEL_52:
      a2->Private.NdisPacketFlags |= 4u;
LABEL_21:
      if ( !v30 )
        return (a2->Private.Flags & 0x200) != 0;
      if ( a2->Private.ValidCounts )
      {
        TotalLength = a2->Private.TotalLength;
      }
      else
      {
        v20 = a2->Private.Head;
        TotalLength = 0;
        v22 = 0;
        for ( i = 0; v20; ++i )
        {
          ByteCount = v20->ByteCount;
          TotalLength += ByteCount;
          if ( (_DWORD)ByteCount )
            v28 = ((unsigned __int64)((LODWORD(v20->StartVa) + v20->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
          else
            LODWORD(v28) = 1;
          v20 = v20->Next;
          v22 += v28;
        }
        a2->Private.Count = i;
        a2->Private.TotalLength = TotalLength;
        a2->Private.PhysicalCount = v22;
        a2->Private.ValidCounts = 1;
      }
      v24 = NdisPacketSize(0x20u);
      v25 = v24;
      v26 = v24 + TotalLength;
      if ( v26 >= TotalLength )
      {
        Pool2 = (char *)ExAllocatePool2(66LL, v26, 1886143566);
        v11 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, v25);
          v12 = &v11[v25];
          v13 = &v11[48 * ndisPacketStackSize + 16];
          for ( j = 0; j < ndisPacketStackSize; ++j )
          {
            *((_DWORD *)v13 - 1) = j;
            if ( j >= ndisPacketStackSize )
              v15 = 40LL;
            else
              v15 = (__int64)&v13[48 * (j - (unsigned __int64)ndisPacketStackSize) + 24];
            KeInitializeSpinLock((PKSPIN_LOCK)v15);
          }
          *((_DWORD *)v13 - 1) = -1;
          Mdl = IoAllocateMdl(v12, TotalLength, 0, 0, 0LL);
          v17 = Mdl;
          if ( Mdl )
          {
            MmBuildMdlForNonPagedPool(Mdl);
            v17->Next = 0LL;
            *((_QWORD *)v13 + 1) = v17;
            *((_QWORD *)v13 + 2) = v17;
            *((_QWORD *)v13 + 3) = 1886351180LL;
            v18 = v25 - 48 * ndisPacketStackSize - 152;
            *((_WORD *)v13 + 21) = v18;
            *(_QWORD *)&v13[v18 + 96] = v13;
            ndisMCopyFromPacketToBuffer(a2, v19, TotalLength, (unsigned __int8 *)v12, &v35);
            if ( v35 == TotalLength )
            {
              if ( a3 )
              {
                *a3 = v13;
                v13[41] |= 2u;
                *((_DWORD *)v13 + 9) = a2->Private.Flags & 0x80 | 0x100;
              }
              return v5;
            }
            ExFreePoolWithTag(&v13[-48 * ndisPacketStackSize - 16], 0);
            IoFreeMdl(v17);
          }
          else
          {
            ExFreePoolWithTag(&v13[-48 * ndisPacketStackSize - 16], 0);
          }
        }
      }
      *a3 = 0LL;
      return 0;
    }
LABEL_20:
    if ( !v5 )
      goto LABEL_21;
    goto LABEL_52;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
