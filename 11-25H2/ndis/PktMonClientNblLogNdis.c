/*
 * XREFs of PktMonClientNblLogNdis @ 0x14003BE50
 * Callers:
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003BF50 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003C590 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x14003CA30 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ??$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z @ 0x14003CC40 (--$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B3B0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B720 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
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
  if ( byte_1401278B0 )
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
            (*(void (__fastcall **)(_QWORD, __int64, _WORD *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
              xmmword_1401278D0,
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
