/*
 * XREFs of ADAPTER_RENDER_DdiSetVideoProtectedRegion @ 0x14006C120
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1403F90D4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetVideoProtectedRegion(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  return ADAPTER_RENDER::DdiSetVideoProtectedRegion(a1, a2);
}
