/*
 * XREFs of ZwQueryPerformanceCounter @ 0x1406A6A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryPerformanceCounter(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
