/*
 * XREFs of ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14001A7A0
 * Callers:
 *     NdisAllocateNetBufferMdlAndData @ 0x140019860 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBuffer @ 0x14001A290 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x14001A570 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
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
