/*
 * XREFs of KeGetNodePrimarySubNode @ 0x1403A86B4
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     MiGetClosestNodeWithProcessors @ 0x1403A85A4 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x1403A8640 (KeQueryNodeActiveAffinity.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140208940 (KeIsEmptyGroupMask.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KeGetNodePrimarySubNode(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  RtlCopyVolatileMemory(&v3, (const void *)(a1 + 16), 0x10uLL);
  if ( (unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v3) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 12) + 32);
}
