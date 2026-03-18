/*
 * XREFs of VidMmNotifyShutdown @ 0x14004BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x140095E2C (-NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmNotifyShutdown(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::NotifyShutdown(a1);
}
