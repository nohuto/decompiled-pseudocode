/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x140034E10
 * Callers:
 *     VidSchiSubmitQueueCommandDirect @ 0x14004FDAC (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 480) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
