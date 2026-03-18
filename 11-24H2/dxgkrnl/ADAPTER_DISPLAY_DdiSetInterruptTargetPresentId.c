/*
 * XREFs of ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId @ 0x140014F90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@@Z @ 0x140014FA8 (-DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId(
        ADAPTER_DISPLAY *a1,
        struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *a2)
{
  return ADAPTER_DISPLAY::DdiSetInterruptTargetPresentId(a1, a2);
}
