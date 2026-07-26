/*
 * XREFs of ndisGenerateCorrelationIds @ 0x140025660
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x140024450 (NdisAllocateNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140026C20 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_14011AF28, a1);
  if ( (unsigned int)result + a1 < (unsigned int)result )
    return (unsigned int)_InterlockedExchangeAdd(&dword_14011AF28, a1);
  return result;
}
