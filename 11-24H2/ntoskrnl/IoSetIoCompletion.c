/*
 * XREFs of IoSetIoCompletion @ 0x1409F4980
 * Callers:
 *     PspSendJobNotification @ 0x140493C70 (PspSendJobNotification.c)
 * Callees:
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx(a1, a2, a3, a4, a5, a6, 0LL);
}
