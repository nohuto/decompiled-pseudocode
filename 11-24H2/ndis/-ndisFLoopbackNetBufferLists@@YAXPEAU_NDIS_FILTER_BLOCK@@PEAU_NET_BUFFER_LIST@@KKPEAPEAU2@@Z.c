/*
 * XREFs of ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140019670 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AF80 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x140018CE0 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140022210 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140022930 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 */

void __fastcall ndisFLoopbackNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4,
        struct _NET_BUFFER_LIST **a5)
{
  _SLIST_HEADER *v5; // r15
  struct _NET_BUFFER_LIST *v8; // rbx
  struct _NET_BUFFER_LIST *v10; // rbp
  struct _NET_BUFFER_LIST *Alignment; // rsi
  struct _NET_BUFFER *FirstNetBuffer; // rdi
  ULONG v13; // ecx
  unsigned __int8 v14[4]; // [rsp+30h] [rbp-38h] BYREF
  ULONG SendCompleteFlags; // [rsp+34h] [rbp-34h]
  unsigned __int8 v16; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0LL;
  SendCompleteFlags = 0;
  v14[0] = 0;
  v8 = a2;
  v16 = 0;
  v10 = a2;
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
    if ( (v8->Flags & 0x800) != 0 )
    {
      v16 = 0;
LABEL_8:
      v5 = (_SLIST_HEADER *)v8;
      goto LABEL_9;
    }
    FirstNetBuffer = v8->FirstNetBuffer;
    do
    {
      ndisFIsLoopbackNetBuffer(a1, FirstNetBuffer, v8, v14, &v16);
      if ( v14[0] == 1 )
      {
        v14[0] = 0;
        ndisFDoLoopbackNetBufferList(a1, FirstNetBuffer, v8, a3, a4);
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    if ( v16 != 1 )
      goto LABEL_8;
    v16 = 0;
    if ( v10 == v8 )
      v10 = Alignment;
    else
      v5->Alignment = (unsigned __int64)Alignment;
    v13 = SendCompleteFlags | 1;
    v8->Link.Alignment = 0LL;
    v8->Status = 0;
    if ( (a4 & 1) == 0 )
      v13 = SendCompleteFlags;
    SendCompleteFlags = v13;
    NdisFSendNetBufferListsComplete(a1, v8, v13);
LABEL_9:
    v8 = Alignment;
  }
  while ( Alignment );
  *a5 = v10;
}
