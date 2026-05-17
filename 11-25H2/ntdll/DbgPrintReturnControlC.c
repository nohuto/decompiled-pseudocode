/*
 * XREFs of DbgPrintReturnControlC @ 0x180138030
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(int a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&unk_18017BF30, 101, 0, a1, (__int64)va, 0);
}
