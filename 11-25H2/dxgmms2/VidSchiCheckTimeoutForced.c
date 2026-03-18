/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1400362E0
 * Callers:
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400AD870 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 480) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
