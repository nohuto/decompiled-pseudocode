/*
 * XREFs of ZwSetBootOptions @ 0x1406A96F0
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x140647B70 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x1408156BC (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
