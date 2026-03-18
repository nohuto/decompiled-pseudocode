/*
 * XREFs of ADAPTER_RENDER_DdiFormatHistoryBuffer @ 0x14006BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1400688F8 (-DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiFormatHistoryBuffer(
        ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3)
{
  return ADAPTER_RENDER::DdiFormatHistoryBuffer(a1, a2, a3);
}
