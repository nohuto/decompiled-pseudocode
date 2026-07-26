/*
 * XREFs of ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140026C20
 * Callers:
 *     NdisCopyReceiveNetBufferListInfo @ 0x140026ED0 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1400271A0 (NdisCopySendNetBufferListInfo.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 */

void __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1, unsigned int a2)
{
  unsigned int v3; // edx
  void *v4; // rax
  _QWORD *Alignment; // r9
  __int64 v6; // rax
  unsigned int CorrelationIds; // eax

  if ( (__int64)a1->NetBufferListInfo[13] > 0 )
  {
    Alignment = (_QWORD *)a1->Link.Alignment;
    if ( a1->Link.Alignment )
    {
      do
      {
        v6 = Alignment[31];
        if ( !v6 || v6 < 0 )
        {
          CorrelationIds = ndisGenerateCorrelationIds(1u);
          Alignment[31] = CorrelationIds;
        }
        Alignment = (_QWORD *)*Alignment;
      }
      while ( Alignment );
    }
  }
  else
  {
    v3 = _InterlockedExchangeAdd(&dword_14011AF28, a2);
    if ( v3 + a2 < v3 )
      v3 = _InterlockedExchangeAdd(&dword_14011AF28, a2);
    do
    {
      if ( (__int64)a1->NetBufferListInfo[13] <= 0 )
      {
        v4 = (void *)v3++;
        a1->NetBufferListInfo[13] = v4;
      }
      a1 = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
    }
    while ( a1 );
  }
}
