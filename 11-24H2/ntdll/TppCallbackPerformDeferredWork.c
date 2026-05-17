/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x18006A460
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18006A498 (TppCallbackSendAndDestroyAlpcMessage.c)
 */

__int64 __fastcall TppCallbackPerformDeferredWork(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  return RtlClearThreadWorkOnBehalfTicket(a1);
}
