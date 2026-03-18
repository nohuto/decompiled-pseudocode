/*
 * XREFs of ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E03E8
 * Callers:
 *     VidMmSuspendDevices @ 0x1400DF9D0 (VidMmSuspendDevices.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400E0B34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E0408 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::Suspend(VIDMM_DEVICE *this, char a2)
{
  if ( a2 )
    VIDMM_DEVICE::FullySuspend(this);
  else
    VIDMM_DEVICE::PartiallySuspend(this);
}
