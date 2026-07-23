/*
 * XREFs of IopDebugPrint @ 0x1405A27E4
 * Callers:
 *     PnpCollectOpenHandles @ 0x14072BB34 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x14072BBD0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal((int)"NTOSPNP:", 32, a1, a2, va, 1);
  return a1;
}
