/*
 * XREFs of ADAPTER_RENDER_DdiSubmitCommandVirtual @ 0x140037C30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x14030C040 (-DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandVirtual(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2)
{
  return ADAPTER_RENDER::DdiSubmitCommandVirtual(a1, a2);
}
