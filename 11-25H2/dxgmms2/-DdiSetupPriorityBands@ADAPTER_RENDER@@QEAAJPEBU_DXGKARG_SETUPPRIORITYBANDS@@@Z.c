/*
 * XREFs of ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x14004BF84
 * Callers:
 *     VidSchiInitializeNode @ 0x1400A6314 (VidSchiInitializeNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetupPriorityBands(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETUPPRIORITYBANDS *))DxgCoreInterface[25])(
           this,
           a2);
}
