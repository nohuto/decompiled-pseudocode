/*
 * XREFs of ADAPTER_RENDER_DdiSubmitCommand @ 0x140020B70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x140020B88 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommand(ADAPTER_RENDER *a1, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiSubmitCommand(a1, a2);
}
