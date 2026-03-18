/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x140095CFC
 * Callers:
 *     VidMmNotifyShutdown @ 0x14004C770 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400916B4 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(struct DXGADAPTER **this)
{
  VIDMM_GLOBAL::LogTeardownTelemetry(this);
}
