/*
 * XREFs of NdisGetPoolFromNetBufferList @ 0x14006FFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_HANDLE __stdcall NdisGetPoolFromNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  return NetBufferList->NdisPoolHandle;
}
