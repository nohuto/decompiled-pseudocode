/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x1402AC224
 * Callers:
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcInitializeQuickLWSThreadItem @ 0x1402CA478 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeNumaNodeForVolume @ 0x1402CBA5C (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048D520 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x14057D870 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x14057DAFC (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057E3BC (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
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
