/*
 * XREFs of NdisReturnPackets @ 0x1400A03D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x140056440 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9354 (-ndisReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall NdisReturnPackets(struct _NDIS_PACKET **a1, unsigned int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // bl
  struct _NDIS_PACKET *v5; // r10
  struct _NDIS_PACKET *v6; // r10
  __int64 v7; // rdx
  struct _NDIS_MINIPORT_BLOCK *v8; // rcx
  struct _NDIS_STACK_RESERVED *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = KfRaiseIrql(2u);
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = *a1;
      v9 = 0LL;
      NDIS_STACK_RESERVED_FROM_PACKET(v5, &v9);
      v7 = *(__int64 *)((char *)&v6[1].Private.Head + v6->Private.NdisPacketOobOffset);
      v8 = *(struct _NDIS_MINIPORT_BLOCK **)v9;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v7 )
          ndisReturnPacketsForTranslation(v8, v6);
        else
          ndisReturnPacketToMiniport(v8, v6);
      }
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
}
