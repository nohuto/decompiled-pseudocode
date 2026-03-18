/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x140095E2C
 * Callers:
 *     VidMmNotifyShutdown @ 0x14004BE80 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400915C0 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(struct DXGADAPTER **this)
{
  VIDMM_GLOBAL::LogTeardownTelemetry(this);
}
