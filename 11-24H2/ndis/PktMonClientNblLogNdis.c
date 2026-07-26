/*
 * XREFs of PktMonClientNblLogNdis @ 0x1400206D0
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1400207D0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140041950 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ??$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z @ 0x1400509B0 (--$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall PktMonClientNblLogNdis(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  int v8; // ebp
  bool v9; // zf
  __int64 v10; // rdx
  _WORD v11[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+44h] [rbp-24h]
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+4Ch] [rbp-1Ch]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 24);
  if ( byte_14011D800 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 56) & 1) != 0 )
      {
        v8 = *(_DWORD *)(a1 + 32);
        v9 = (*(_DWORD *)(a2 + 128) & 0x8000) == 0;
        memset(&v11[1], 0, 6);
        v16 = 0;
        if ( v9 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v10 = *(_QWORD *)(a1 + 16);
            v11[0] = 40;
            v12 = a2;
            v13 = 1;
            v14 = v8;
            v15 = a4;
            v17 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, _WORD *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1) + 40LL))(
              xmmword_14011D820,
              v10,
              v11,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
}
