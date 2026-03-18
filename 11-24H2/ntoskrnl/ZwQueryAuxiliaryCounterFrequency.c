/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x1406A8D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAuxiliaryCounterFrequency(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
