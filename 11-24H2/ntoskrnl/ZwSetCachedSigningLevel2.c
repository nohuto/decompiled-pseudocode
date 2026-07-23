/*
 * XREFs of ZwSetCachedSigningLevel2 @ 0x1406AA6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel2(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
