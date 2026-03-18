/*
 * XREFs of VidSchIsWorkerThread @ 0x1400355D0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     WaitDmaBufferNotBusy @ 0x1400B7760 (WaitDmaBufferNotBusy.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 176);
}
