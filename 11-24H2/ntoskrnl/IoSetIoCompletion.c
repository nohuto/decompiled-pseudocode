/*
 * XREFs of IoSetIoCompletion @ 0x1409E8CE0
 * Callers:
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 * Callees:
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx(a1, a2, a3, a4, a5, a6, 0LL);
}
