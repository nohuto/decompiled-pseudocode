/*
 * XREFs of ndisGenerateCorrelationIds @ 0x1400352E0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x14001D2E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x14001D930 (NdisAllocateNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x14001E020 (ndisAllocateNetBufferListInternal.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400339A0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_140124F28, a1);
  if ( (unsigned int)result + a1 < (unsigned int)result )
    return (unsigned int)_InterlockedExchangeAdd(&dword_140124F28, a1);
  return result;
}
