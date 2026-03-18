/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x1402D9F00
 * Callers:
 *     CcInitializeQuickLWSThreadItem @ 0x1403A7F28 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403A8E0C (CcInitializeNumaNodeForVolume.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048DAE0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePartition @ 0x140579A18 (CcInitializePartition.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x14057A550 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x14057A7DC (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B09C (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(__int64 a1, size_t a2, ULONG_PTR a3, ULONG_PTR a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0;
  if ( (ExpPoolFlags & 8) == 0 )
    return ExpAllocatePoolWithTagFromNode(0x42uLL, a2, a3, a4);
  v5 = 1LL;
  v6 = 32;
  return VfHandlePoolAlloc(NonPagedPool, 0x42uLL, a2, a3, LowPoolPriority, (__int64)&v5, 1, retaddr);
}
