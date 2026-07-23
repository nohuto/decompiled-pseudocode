/*
 * XREFs of ZwSetEventEx @ 0x1406AA7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetEventEx(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
