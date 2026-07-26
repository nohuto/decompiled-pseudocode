/*
 * XREFs of ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400339A0
 * Callers:
 *     NdisCopySendNetBufferListInfo @ 0x1400331E0 (NdisCopySendNetBufferListInfo.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1400334A0 (NdisCopyReceiveNetBufferListInfo.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006BAC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1400352E0 (ndisGenerateCorrelationIds.c)
 */

void __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  void *v4; // rax
  _QWORD *Alignment; // r9
  __int64 v6; // rax
  unsigned int CorrelationIds; // eax

  v2 = a2;
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
          CorrelationIds = ndisGenerateCorrelationIds(1LL, a2);
          Alignment[31] = CorrelationIds;
        }
        Alignment = (_QWORD *)*Alignment;
      }
      while ( Alignment );
    }
  }
  else
  {
    v3 = _InterlockedExchangeAdd(&dword_140124F28, a2);
    if ( v3 + v2 < v3 )
      v3 = _InterlockedExchangeAdd(&dword_140124F28, v2);
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
