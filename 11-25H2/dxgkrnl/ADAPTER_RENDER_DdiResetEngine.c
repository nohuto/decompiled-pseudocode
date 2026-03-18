/*
 * XREFs of ADAPTER_RENDER_DdiResetEngine @ 0x14006C040
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x140069870 (-DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiResetEngine(ADAPTER_RENDER *a1, struct _DXGKARG_RESETENGINE *a2, __int64 a3)
{
  return ADAPTER_RENDER::DdiResetEngine(a1, a2, a3);
}
