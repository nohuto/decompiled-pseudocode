/*
 * XREFs of ADAPTER_RENDER_DdiAcquireSwizzlingRange @ 0x14006BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x14019E894 (-DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiAcquireSwizzlingRange(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiAcquireSwizzlingRange(a1, a2);
}
