/*
 * XREFs of IopDebugPrint @ 0x1405A2134
 * Callers:
 *     PnpCollectOpenHandles @ 0x140721BA4 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140721C40 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal((int)"NTOSPNP:", 32, a1, a2, va, 1);
  return a1;
}
