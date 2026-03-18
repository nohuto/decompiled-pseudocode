/*
 * XREFs of UnlockChildPages @ 0x14004B858
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnlockChildPages(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))DxgCoreInterface[96])(a1, 0LL);
}
