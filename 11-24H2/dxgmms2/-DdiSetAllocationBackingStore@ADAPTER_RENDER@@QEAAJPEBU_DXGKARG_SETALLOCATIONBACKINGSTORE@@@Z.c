/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x14004B628
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C5100 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *))DxgCoreInterface[65])(
           this,
           a2);
}
