/*
 * XREFs of ZwSetTimerResolution @ 0x1406A9C50
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A6E8C (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
