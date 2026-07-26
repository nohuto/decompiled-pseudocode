/*
 * XREFs of ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5594
 * Callers:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDeferredReturnPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // rsi
  struct _NDIS_PACKET *ReturnPacketsQueue; // rcx
  struct _NDIS_PACKET *v4; // rcx
  struct _NDIS_PACKET *v5; // rdi
  int v6; // eax
  int v7; // edx
  struct _NDIS_STACK_RESERVED *v8; // [rsp+30h] [rbp+8h] BYREF

  MiniportReturnPacketHandler = a1->MiniportReturnPacketHandler;
  ReturnPacketsQueue = a1->ReturnPacketsQueue;
  v8 = 0LL;
  if ( ReturnPacketsQueue )
  {
    do
    {
      NDIS_STACK_RESERVED_FROM_PACKET(ReturnPacketsQueue, &v8);
      v5 = *(struct _NDIS_PACKET **)v8;
      *(_QWORD *)v8 = 0LL;
      v6 = v4[-1].Reserved[1];
      v7 = *(_DWORD *)&v4[-1].ProtocolReserved[4] - 1;
      *(_DWORD *)&v4[-1].ProtocolReserved[4] = v7;
      if ( (v6 & 1) != 0 && v7 == -1 )
        NDIS_FREE_XFER_DATA_PACKET(v4);
      else
        MiniportReturnPacketHandler(a1->MiniportAdapterContext, v4);
      if ( (a1->Flags & 0x8000) != 0 )
        _InterlockedDecrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
      ReturnPacketsQueue = v5;
    }
    while ( v5 );
  }
  a1->ReturnPacketsQueue = 0LL;
}
