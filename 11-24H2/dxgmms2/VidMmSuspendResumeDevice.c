/*
 * XREFs of VidMmSuspendResumeDevice @ 0x140042E40
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1400BE87C (-SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 */

void __fastcall VidMmSuspendResumeDevice(VIDMM_DEVICE *a1, bool a2, bool a3)
{
  VIDMM_DEVICE::SuspendResume(a1, a2, a3);
}
