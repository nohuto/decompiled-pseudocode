/*
 * XREFs of NdisReturnPackets @ 0x1400A88F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14006C180 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall NdisReturnPackets(struct _NDIS_PACKET **a1, unsigned int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // bl
  struct _NDIS_PACKET *v5; // r10
  struct _NDIS_PACKET *v6; // r10
  struct _NDIS_MINIPORT_BLOCK *v7; // r11
  __int64 v8; // rdx
  struct _NDIS_PACKET *v9; // r10
  __int64 v10; // r11
  struct _NDIS_STACK_RESERVED *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v4 = KfRaiseIrql(2u);
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = *a1;
      v11 = 0LL;
      NDIS_STACK_RESERVED_FROM_PACKET(v5, &v11);
      v7 = *(struct _NDIS_MINIPORT_BLOCK **)v11;
      v8 = *(__int64 *)((char *)&v6[1].Private.Head + v6->Private.NdisPacketOobOffset);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v8 )
        {
          v12 = 0LL;
          NDIS_STACK_RESERVED_FROM_PACKET(v6, &v12);
          *(_QWORD *)v12 = 0LL;
          --*(_DWORD *)&v9[-1].ProtocolReserved[4];
          if ( (*(_DWORD *)(v10 + 120) & 0x8000) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v10 + 1828));
          ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)v10, v9);
        }
        else
        {
          ndisReturnPacketToMiniport(v7, v6);
        }
      }
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
}
