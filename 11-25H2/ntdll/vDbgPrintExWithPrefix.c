/*
 * XREFs of vDbgPrintExWithPrefix @ 0x180138120
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintExWithPrefix(int a1, int a2, int a3, int a4, __int64 a5)
{
  return vDbgPrintExWithPrefixInternal(a1, a2, a3, a4, a5, 1);
}
