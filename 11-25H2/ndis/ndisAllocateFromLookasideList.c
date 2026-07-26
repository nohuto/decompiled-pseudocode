/*
 * XREFs of ndisAllocateFromLookasideList @ 0x14001E700
 * Callers:
 *     NdisAllocateNetBufferMdlAndData @ 0x140019860 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBuffer @ 0x14001A290 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x14001A570 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x14001D2E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x14001D930 (NdisAllocateNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x14001E020 (ndisAllocateNetBufferListInternal.c)
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
