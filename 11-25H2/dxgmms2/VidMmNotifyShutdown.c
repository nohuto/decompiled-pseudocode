/*
 * XREFs of VidMmNotifyShutdown @ 0x14004C770
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x140095CFC (-NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmNotifyShutdown(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::NotifyShutdown(a1);
}
