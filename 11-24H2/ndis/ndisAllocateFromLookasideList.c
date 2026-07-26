/*
 * XREFs of ndisAllocateFromLookasideList @ 0x140025220
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1400238F0 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x140023BD0 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x140024450 (NdisAllocateNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x140025690 (NdisAllocateNetBufferMdlAndData.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall ndisAllocateFromLookasideList(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx
  KIRQL v4; // al
  __int64 v5; // r8

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
  result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(a1 + 192));
  v3 = result;
  if ( !result )
  {
    if ( ExQueryDepthSList(*(PSLIST_HEADER *)(a1 + 200)) < 0xAu
      || (v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 208)),
          v5 = *(_QWORD *)(a1 + 192),
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200),
          *(_QWORD *)(a1 + 200) = v5,
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 208), v4),
          result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(a1 + 192)),
          (v3 = result) == 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
      return v3;
    }
  }
  return result;
}
