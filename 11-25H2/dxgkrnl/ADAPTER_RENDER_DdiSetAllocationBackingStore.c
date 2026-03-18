/*
 * XREFs of ADAPTER_RENDER_DdiSetAllocationBackingStore @ 0x14006C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1401A57C8 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetAllocationBackingStore(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  return ADAPTER_RENDER::DdiSetAllocationBackingStore(a1, a2);
}
