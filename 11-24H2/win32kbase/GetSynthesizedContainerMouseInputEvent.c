/*
 * XREFs of GetSynthesizedContainerMouseInputEvent @ 0x1402128D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSynthesizedContainerMouseInputEvent(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 19496);
}
