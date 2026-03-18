/*
 * XREFs of ZwSetHighWaitLowEventPair @ 0x1406A9870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetHighWaitLowEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
