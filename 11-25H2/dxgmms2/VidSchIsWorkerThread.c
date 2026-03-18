/*
 * XREFs of VidSchIsWorkerThread @ 0x140036A80
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     WaitDmaBufferNotBusy @ 0x1400AF3B0 (WaitDmaBufferNotBusy.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 176);
}
