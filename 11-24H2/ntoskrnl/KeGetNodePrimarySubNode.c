/*
 * XREFs of KeGetNodePrimarySubNode @ 0x14026FD94
 * Callers:
 *     MiGetClosestNodeWithProcessors @ 0x14026FC80 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KeGetNodePrimarySubNode(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  RtlCopyVolatileMemory(&v3, (const void *)(a1 + 16), 0x10uLL);
  if ( (unsigned int)KeIsEmptyGroupMask(&v3) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 12) + 32);
}
