/*
 * XREFs of ndisMIsLoopbackPacket @ 0x14008A600
 * Callers:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     NdisPacketSize @ 0x140042FD0 (NdisPacketSize.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1400573F0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x14005BC30 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, char **a3)
{
  _MDL *Head; // rcx
  char v5; // r15
  char *MappedSystemVa; // rbx
  __int64 v10; // rcx
  bool v11; // di
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  char v15; // al
  int v16; // ebp
  struct _NDIS_RW_LOCK_EX *v17; // rcx
  _MDL *v18; // rdx
  ULONG TotalLength; // esi
  unsigned int v20; // r8d
  unsigned int i; // r9d
  __int64 ByteCount; // rax
  unsigned __int64 v23; // rax
  UINT v24; // eax
  __int64 v25; // r12
  char *Pool2; // rax
  char *v27; // rdi
  char *v28; // rbp
  char *v29; // rbx
  unsigned int j; // edi
  __int64 v31; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v33; // rdi
  unsigned __int16 v34; // r12
  __int64 v35; // rdx
  signed __int32 v36[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+20h] BYREF

  Head = a2->Private.Head;
  v5 = 0;
  v38 = 0;
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
        && (v10 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v10 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v10 + 336) )
      {
        v11 = 1;
        v5 = 1;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 288LL);
      LockState.OldIrql = KfRaiseIrql(2u);
      v13 = (_QWORD *)(*(_QWORD *)(v12 + 32) + (KeGetPcr()->Prcb.Number << 12));
      ++*v13;
      _InterlockedOr(v36, 0);
      if ( *(_QWORD *)(v12 + 16) && *v13 <= 1uLL && *(struct _KTHREAD **)(v12 + 24) != KeGetCurrentThread() )
      {
        *v13 = 0LL;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 16));
        *v13 = 1LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v12 + 16));
      }
      v14 = *(_QWORD *)(a1 + 400);
      v11 = 0;
      v15 = *MappedSystemVa;
      LockState.LockState = 3;
      v16 = *(_DWORD *)(v14 + 312);
      if ( (v15 & 1) != 0 )
      {
        if ( v15 == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v11 = (v16 & 8) != 0;
        }
        else if ( (v16 & 4) != 0
               || (v16 & 2) != 0
               && ethFindMulticast(
                    *(_DWORD *)(v14 + 368),
                    0LL,
                    *(unsigned __int8 (**)[6])(v14 + 352),
                    (unsigned __int8 *const)MappedSystemVa) )
        {
          v11 = 1;
        }
      }
      else if ( *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v14 + 338)
             && *(_WORD *)MappedSystemVa == *(_WORD *)(v14 + 336) )
      {
        v11 = 1;
        v5 = 1;
      }
      v17 = *(struct _NDIS_RW_LOCK_EX **)(v14 + 288);
      if ( (v16 & 0xA0) != 0 )
      {
        v11 = 1;
        NdisReleaseRWLock(v17, &LockState);
      }
      else
      {
        NdisReleaseRWLock(v17, &LockState);
        if ( !v11 )
          goto LABEL_39;
      }
    }
    if ( (a2->Private.Flags & 0x200) != 0 )
    {
      v5 = 1;
LABEL_40:
      a2->Private.NdisPacketFlags |= 4u;
LABEL_41:
      if ( v11 )
      {
        if ( a2->Private.ValidCounts )
        {
          TotalLength = a2->Private.TotalLength;
        }
        else
        {
          v18 = a2->Private.Head;
          TotalLength = 0;
          v20 = 0;
          for ( i = 0; v18; ++i )
          {
            ByteCount = v18->ByteCount;
            TotalLength += ByteCount;
            if ( (_DWORD)ByteCount )
              v23 = ((unsigned __int64)((LODWORD(v18->StartVa) + v18->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
            else
              LODWORD(v23) = 1;
            v18 = v18->Next;
            v20 += v23;
          }
          a2->Private.Count = i;
          a2->Private.TotalLength = TotalLength;
          a2->Private.PhysicalCount = v20;
          a2->Private.ValidCounts = 1;
        }
        v24 = NdisPacketSize(0x20u);
        v25 = v24;
        if ( v24 + TotalLength >= TotalLength )
        {
          Pool2 = (char *)ExAllocatePool2(66LL, v24 + TotalLength, 1886143566LL);
          v27 = Pool2;
          if ( Pool2 )
          {
            memset(Pool2, 0, (unsigned int)v25);
            v28 = &v27[v25];
            v29 = &v27[48 * ndisPacketStackSize + 16];
            for ( j = 0; j < ndisPacketStackSize; ++j )
            {
              *((_DWORD *)v29 - 1) = j;
              if ( j >= ndisPacketStackSize )
                v31 = 40LL;
              else
                v31 = (__int64)&v29[48 * (j - (unsigned __int64)ndisPacketStackSize) + 24];
              KeInitializeSpinLock((PKSPIN_LOCK)v31);
            }
            *((_DWORD *)v29 - 1) = -1;
            Mdl = IoAllocateMdl(v28, TotalLength, 0, 0, 0LL);
            v33 = Mdl;
            if ( Mdl )
            {
              MmBuildMdlForNonPagedPool(Mdl);
              v33->Next = 0LL;
              *((_QWORD *)v29 + 1) = v33;
              *((_QWORD *)v29 + 2) = v33;
              *((_QWORD *)v29 + 3) = 1886351180LL;
              v34 = v25 - 48 * ndisPacketStackSize - 152;
              *((_WORD *)v29 + 21) = v34;
              *(_QWORD *)&v29[v34 + 96] = v29;
              ndisMCopyFromPacketToBuffer(a2, v35, TotalLength, (unsigned __int8 *)v28, &v38);
              if ( v38 != TotalLength )
              {
                ExFreePoolWithTag(&v29[-48 * ndisPacketStackSize - 16], 0);
                IoFreeMdl(v33);
                *a3 = 0LL;
                return 0;
              }
              if ( a3 )
              {
                *a3 = v29;
                v29[41] |= 2u;
                *((_DWORD *)v29 + 9) = a2->Private.Flags & 0x80 | 0x100;
                return v5;
              }
              return v5;
            }
            ExFreePoolWithTag(&v29[-48 * ndisPacketStackSize - 16], 0);
          }
        }
        *a3 = 0LL;
        return 0;
      }
      return (a2->Private.Flags & 0x200) != 0;
    }
LABEL_39:
    if ( !v5 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
