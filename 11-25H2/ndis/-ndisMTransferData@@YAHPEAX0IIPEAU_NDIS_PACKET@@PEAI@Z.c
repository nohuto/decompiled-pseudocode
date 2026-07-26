/*
 * XREFs of ?ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z @ 0x1400DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisCopyFromPacketToPacketSafe @ 0x1400DD8F0 (NdisCopyFromPacketToPacketSafe.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMTransferData(
        _QWORD *a1,
        struct _NDIS_PACKET *a2,
        int a3,
        UINT a4,
        struct _NDIS_PACKET *Destination,
        unsigned int *BytesCopied)
{
  int v6; // rsp^4
  __int64 v7; // r11
  __int64 v9; // rax
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned __int8 *ProtocolReserved; // rsi
  int v16; // r8d
  unsigned __int8 *v17; // rbx
  _MDL *i; // rbx
  PVOID MappedSystemVa; // rax

  HIDWORD(v9) = v6;
  v7 = a1[2];
  LODWORD(v9) = KeGetPcr()->Prcb.Number;
  v13 = *(_QWORD *)(v7 + 1600);
  if ( a2 == *(struct _NDIS_PACKET **)(v13 + 8 * v9)
    && (LODWORD(v9) = KeGetPcr()->Prcb.Number, *(_QWORD *)(v13 + 8 * v9)) )
  {
    NdisCopyFromPacketToPacketSafe(
      Destination,
      0,
      a4,
      a2,
      a3 + *(_DWORD *)((char *)&a2->Private.Tail + a2->Private.NdisPacketOobOffset),
      BytesCopied,
      NormalPagePriority);
    return a4 != *BytesCopied ? 0xC0000001 : 0;
  }
  else
  {
    ProtocolReserved = Destination[-1].ProtocolReserved;
    v16 = *(_DWORD *)Destination[-1].ProtocolReserved;
    *(_DWORD *)Destination[-1].ProtocolReserved = v16 + 1;
    if ( v16 + 1 < 3 * ndisPacketStackSize )
    {
      v17 = Destination[-1].ProtocolReserved;
      if ( (*(_BYTE *)(v7 + 928) & 2) == 0 )
      {
        for ( i = Destination->Private.Head; i; i = i->Next )
        {
          if ( (i->MdlFlags & 5) != 0 )
            MappedSystemVa = i->MappedSystemVa;
          else
            MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
          if ( !MappedSystemVa )
            return (unsigned int)-1073741670;
        }
        v17 = Destination[-1].ProtocolReserved;
      }
      if ( *(_DWORD *)ProtocolReserved < 3 * ndisPacketStackSize )
        *((_QWORD *)&Destination->Private.PhysicalCount
        + 6 * (*(_DWORD *)ProtocolReserved / 3u - (unsigned __int64)ndisPacketStackSize)
        + *(_DWORD *)ProtocolReserved % 3u) = a1;
      v14 = ((__int64 (__fastcall *)(struct _NDIS_PACKET *, unsigned int *, _QWORD, struct _NDIS_PACKET *, int, UINT))a1[35])(
              Destination,
              BytesCopied,
              a1[7],
              a2,
              a3,
              a4);
      if ( v14 != 259 )
      {
        if ( *(_DWORD *)v17 < 3 * ndisPacketStackSize )
          *((_QWORD *)&Destination->Private.PhysicalCount
          + 6 * (*(_DWORD *)v17 / 3u - (unsigned __int64)ndisPacketStackSize)
          + *(_DWORD *)v17 % 3u) = 0LL;
        --*(_DWORD *)v17;
      }
    }
    else
    {
      *(_DWORD *)ProtocolReserved = v16;
      return (unsigned int)-1073741670;
    }
  }
  return v14;
}
