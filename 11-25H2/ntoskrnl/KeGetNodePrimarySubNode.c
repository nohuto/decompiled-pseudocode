/*
 * XREFs of KeGetNodePrimarySubNode @ 0x1402676D4
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryNodeActiveAffinity @ 0x140267660 (KeQueryNodeActiveAffinity.c)
 *     MiGetClosestNodeWithProcessors @ 0x1404BA100 (MiGetClosestNodeWithProcessors.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KeGetNodePrimarySubNode(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  RtlCopyVolatileMemory(&v4, (const void *)(a1 + 16), 0x10uLL);
  v3[0] = 32LL;
  v3[1] = &v4;
  result = RtlNumberOfSetBitsEx(v3);
  if ( result )
    return *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 12) + 32);
  return result;
}
