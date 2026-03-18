/*
 * XREFs of ADAPTER_RENDER_DdiUpdateNativeFenceLogs @ 0x14006BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateNativeFenceLogs@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATENATIVEFENCELOGS@@@Z @ 0x14006A4E4 (-DdiUpdateNativeFenceLogs@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATENATIVEFENCELOGS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUpdateNativeFenceLogs(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_UPDATENATIVEFENCELOGS *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiUpdateNativeFenceLogs(a1, a2, a3);
}
