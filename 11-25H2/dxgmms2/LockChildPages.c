/*
 * XREFs of LockChildPages @ 0x14004C094
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2360 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LockChildPages(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))DxgCoreInterface[95])(a1, 0LL);
}
