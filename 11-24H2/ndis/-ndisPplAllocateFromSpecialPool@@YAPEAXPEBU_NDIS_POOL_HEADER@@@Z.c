/*
 * XREFs of ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x140022CC0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1400238F0 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x140023BD0 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x140025690 (NdisAllocateNetBufferMdlAndData.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisPplAllocateFromSpecialPool(const struct _NDIS_POOL_HEADER *a1)
{
  unsigned __int64 ItemLength; // rax
  _QWORD *Pool2; // rax

  ItemLength = a1->ItemLength;
  if ( ItemLength + 32 < ItemLength )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100000042LL, ItemLength + 32, a1->Tag);
  if ( !Pool2 )
    return 0LL;
  *Pool2 = a1;
  return Pool2 + 4;
}
