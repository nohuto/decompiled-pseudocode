/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x140277180
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcInitializeNumaNodeForVolume @ 0x140430C98 (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x140431140 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x140487DA0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x14057AD00 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x14057AF8C (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B84C (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(__int64 a1, size_t a2, ULONG_PTR a3, ULONG_PTR a4)
{
  volatile CCHAR v4; // al
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp-10h]
  int v8; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0;
  v4 = KeNumberProcessorsGroup0[9];
  if ( (v4 & 8) == 0 )
    return ExpAllocatePoolWithTagFromNode(0x42uLL, a2, a3, a4);
  v6 = 1LL;
  v7 = 32;
  return VfHandlePoolAlloc(NonPagedPool, 0x42uLL, a2, a3, LowPoolPriority, (__int64)&v6, 1, retaddr);
}
