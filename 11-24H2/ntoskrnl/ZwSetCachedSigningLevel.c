/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1406A9710
 * Callers:
 *     sub_1409FC424 @ 0x1409FC424 (sub_1409FC424.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
