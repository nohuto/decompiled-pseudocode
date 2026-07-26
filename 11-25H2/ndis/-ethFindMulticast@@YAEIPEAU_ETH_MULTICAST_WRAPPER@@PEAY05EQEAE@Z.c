/*
 * XREFs of ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x140045550
 * Callers:
 *     ndisMIsLoopbackPacket @ 0x140030780 (ndisMIsLoopbackPacket.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140041C30 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400425F0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140044000 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     EthFilterDprIndicateReceive @ 0x1400A07C0 (EthFilterDprIndicateReceive.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ethFindMulticast(
        unsigned int a1,
        struct _ETH_MULTICAST_WRAPPER *a2,
        unsigned __int8 (*a3)[6],
        unsigned __int8 *const a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int v7; // r10d
  unsigned __int8 *v8; // r9
  unsigned int v9; // ecx
  unsigned int v11; // ecx
  unsigned __int16 v12; // cx

  v4 = 0;
  v5 = a1 >> 1;
  if ( a1 )
  {
    v7 = a1 - 1;
    while ( 1 )
    {
      if ( (unsigned int)v5 > v7 || (unsigned int)v5 < v4 )
        return 0;
      if ( a3 )
      {
        v8 = &(*a3)[6 * v5];
        v9 = *(_DWORD *)(v8 + 2);
        if ( v9 <= *(_DWORD *)(a4 + 2) )
        {
          if ( v9 < *(_DWORD *)(a4 + 2) )
            goto LABEL_18;
          if ( *(_WORD *)v8 <= *(_WORD *)a4 )
          {
            if ( *(_WORD *)v8 >= *(_WORD *)a4 )
              return 1;
            goto LABEL_18;
          }
        }
LABEL_11:
        if ( !(_DWORD)v5 )
          return 0;
        v7 = v5 - 1;
        v5 = v4 + (((unsigned int)v5 - v4) >> 1);
      }
      else
      {
        v11 = *(_DWORD *)&a2[v5].MCastAddress[2];
        if ( v11 > *(_DWORD *)(a4 + 2) )
          goto LABEL_11;
        if ( v11 < *(_DWORD *)(a4 + 2) )
          goto LABEL_18;
        v12 = *(_WORD *)a2[v5].MCastAddress;
        if ( v12 > *(_WORD *)a4 )
          goto LABEL_11;
        if ( v12 >= *(_WORD *)a4 )
          return 1;
LABEL_18:
        v4 = v5 + 1;
        v5 = (_DWORD)v5 + 1 + ((v7 - (unsigned int)v5) >> 1);
      }
    }
  }
  return 0;
}
