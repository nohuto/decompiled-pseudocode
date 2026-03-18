/*
 * XREFs of IopDebugPrint @ 0x1405A58A4
 * Callers:
 *     PnpCollectOpenHandles @ 0x14072DB24 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x14072DBC0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal((int)"NTOSPNP:", 32, a1, a2, va, 1);
  return a1;
}
