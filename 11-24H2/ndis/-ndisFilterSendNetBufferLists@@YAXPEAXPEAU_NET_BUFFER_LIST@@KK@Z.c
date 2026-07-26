/*
 * XREFs of ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140019670
 * Callers:
 *     NdisFSendNetBufferLists @ 0x1400192A0 (NdisFSendNetBufferLists.c)
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1400207D0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140046220 (--$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NE.c)
 */

void __fastcall ndisFilterSendNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v10; // rbx
  struct _NET_BUFFER_LIST *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a2;
  v6 = *((_QWORD *)a1 + 4);
  v8 = *((_QWORD *)a1 + 57);
  if ( *(_BYTE *)v8 == 5 )
  {
    v4 = *(unsigned int *)(v8 + 56);
    if ( (v4 & 0x8000) != 0 && !*(_DWORD *)(v8 + 336) )
    {
      if ( *(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
        || (a4 & 2) != 0
        || (v4 = *(unsigned int *)(v6 + 120), (v4 & 0x4000) != 0) )
      {
        ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v8, a2, a3, a4, &v11);
      }
    }
  }
  if ( v11 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = *((_QWORD *)a1 + 53) + 96 * v4;
    if ( ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 16) )
      ndisIterativeDPAddNblsToTracker<0>(v10, v11, a4 | 1, a3);
    else
      ndisInvokeNextSendHandler(
        v11,
        a3,
        a4,
        *((struct _NDIS_OBJECT_HEADER **)a1 + 57),
        *((void **)a1 + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1 + 54));
  }
}
