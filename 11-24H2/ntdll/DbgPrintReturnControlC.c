/*
 * XREFs of DbgPrintReturnControlC @ 0x180134AF0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800E6D30 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(__int64 a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((__int64)&Flags, 0x65u, 0, a1, (__int64)va, 0);
}
