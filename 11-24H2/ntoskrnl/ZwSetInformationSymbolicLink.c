/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1406A9990
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationSymbolicLink(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
