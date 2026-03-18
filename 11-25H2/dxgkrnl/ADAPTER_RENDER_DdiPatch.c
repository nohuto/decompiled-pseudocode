/*
 * XREFs of ADAPTER_RENDER_DdiPatch @ 0x1400526F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1403A6100 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPatch(ADAPTER_RENDER *a1, const struct _DXGKARG_PATCH *a2)
{
  return ADAPTER_RENDER::DdiPatch(a1, a2);
}
