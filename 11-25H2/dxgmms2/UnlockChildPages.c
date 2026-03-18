/*
 * XREFs of UnlockChildPages @ 0x14004C148
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnlockChildPages(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))DxgCoreInterface[96])(a1, 0LL);
}
