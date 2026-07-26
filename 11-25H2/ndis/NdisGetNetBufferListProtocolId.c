/*
 * XREFs of NdisGetNetBufferListProtocolId @ 0x140030130
 * Callers:
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002F410 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 * Callees:
 *     <none>
 */

UCHAR __stdcall NdisGetNetBufferListProtocolId(PNET_BUFFER_LIST NetBufferList)
{
  UCHAR result; // al

  result = (__int64)NetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !result )
    return *((_BYTE *)NetBufferList->NdisPoolHandle + 40);
  return result;
}
