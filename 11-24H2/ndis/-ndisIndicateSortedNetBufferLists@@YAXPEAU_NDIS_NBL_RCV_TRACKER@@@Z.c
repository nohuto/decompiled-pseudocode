/*
 * XREFs of ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001A6F0
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001D9D0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003F570 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140040490 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 */

void __fastcall ndisIndicateSortedNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  unsigned int v4; // esi
  int v5; // edi
  unsigned int j; // edi
  __int64 v7; // rdx
  struct _NDIS_OPEN_BLOCK *i; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _NET_BUFFER_LIST *v12; // rdx

  v2 = *((_DWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 10);
  v4 = *((_DWORD *)a1 + 172);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 2244LL);
  if ( v5 )
  {
    for ( i = *(struct _NDIS_OPEN_BLOCK **)(*((_QWORD *)a1 + 1) + 16LL); i; i = i->FilterNextOpen )
    {
      if ( (i->OpenFlags & 4) != 0 )
      {
        v9 = 0LL;
        do
        {
          v10 = 5 * v9;
          v11 = (unsigned int)v9;
          v12 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 5 * v9 + 8);
          v9 = (unsigned int)(v9 + 1);
          if ( v12 && *((struct _NDIS_OPEN_BLOCK **)a1 + v10 + 7) != i )
            ndisMIndicateNetBufferListsToOpen(i, v12, v3, *((_DWORD *)a1 + 10 * v11 + 20), v2 | 2);
        }
        while ( (unsigned int)v9 <= v4 );
        if ( !--v5 )
          break;
      }
    }
  }
  for ( j = 1; j <= v4; ++j )
  {
    v7 = j;
    ndisMIndicateNetBufferListsToOpen(
      *((struct _NDIS_OPEN_BLOCK **)a1 + 5 * v7 + 7),
      *((struct _NET_BUFFER_LIST **)a1 + 5 * v7 + 8),
      v3,
      *((_DWORD *)a1 + 10 * v7 + 20),
      v2);
  }
}
