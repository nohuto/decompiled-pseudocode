/*
 * XREFs of DbgPrintReturnControlC @ 0x1801368C0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EBA20 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(int a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&unk_180178AE6, 101, 0, a1, (__int64)va, 0);
}
