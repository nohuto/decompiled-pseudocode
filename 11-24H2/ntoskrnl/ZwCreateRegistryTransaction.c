/*
 * XREFs of ZwCreateRegistryTransaction @ 0x1406A8C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
