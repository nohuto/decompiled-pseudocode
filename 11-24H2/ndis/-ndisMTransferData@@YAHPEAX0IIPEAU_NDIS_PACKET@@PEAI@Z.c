/*
 * XREFs of ?ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z @ 0x1400D8AC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisCopyFromPacketToPacketSafe @ 0x1400D65B0 (NdisCopyFromPacketToPacketSafe.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMTransferData(
        _QWORD *a1,
        struct _NDIS_PACKET *a2,
        int a3,
        UINT a4,
        struct _NDIS_PACKET *Destination,
        unsigned int *BytesCopied)
{
  __int64 v6; // r11
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r9d
  int v14; // r8d
  _MDL *i; // rdi
  PVOID MappedSystemVa; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r10d

  v6 = a1[2];
  v11 = *(unsigned int *)(v6 + 120);
  LODWORD(v11) = KeGetPcr()->Prcb.Number;
  v12 = *(_QWORD *)(v6 + 1600);
  if ( a2 == *(struct _NDIS_PACKET **)(v12 + 8 * v11)
    && (LODWORD(v11) = KeGetPcr()->Prcb.Number, *(_QWORD *)(v12 + 8 * v11)) )
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
    v14 = *(_DWORD *)Destination[-1].ProtocolReserved;
    *(_DWORD *)Destination[-1].ProtocolReserved = v14 + 1;
    if ( v14 + 1 < 3 * ndisPacketStackSize )
    {
      if ( (*(_BYTE *)(v6 + 928) & 2) == 0 )
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
      }
      v17 = *(_DWORD *)Destination[-1].ProtocolReserved;
      if ( v17 < 3 * ndisPacketStackSize )
        *((_QWORD *)&Destination->Private.PhysicalCount + 6 * (v17 / 3 - (unsigned __int64)ndisPacketStackSize)
                                                        + v17 % 3) = a1;
      v13 = ((__int64 (__fastcall *)(struct _NDIS_PACKET *, unsigned int *, _QWORD, struct _NDIS_PACKET *, int, UINT))a1[35])(
              Destination,
              BytesCopied,
              a1[7],
              a2,
              a3,
              a4);
      if ( v13 != 259 )
      {
        v18 = *(_DWORD *)Destination[-1].ProtocolReserved;
        if ( v18 < 3 * ndisPacketStackSize )
          *((_QWORD *)&Destination->Private.PhysicalCount
          + 6 * (v18 / 3 - (unsigned __int64)ndisPacketStackSize)
          + v18 % 3) = 0LL;
        --*(_DWORD *)Destination[-1].ProtocolReserved;
      }
    }
    else
    {
      *(_DWORD *)Destination[-1].ProtocolReserved = v14;
      return (unsigned int)-1073741670;
    }
  }
  return v13;
}
