/*
 * XREFs of ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D5988
 * Callers:
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400D68C8 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     VidMmSuspendDevices @ 0x1400EA5C0 (VidMmSuspendDevices.c)
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D59A8 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D5C50 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::Suspend(VIDMM_DEVICE *this, char a2)
{
  if ( a2 )
    VIDMM_DEVICE::FullySuspend(this);
  else
    VIDMM_DEVICE::PartiallySuspend(this);
}
